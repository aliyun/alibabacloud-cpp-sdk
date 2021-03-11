// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/r_kvstore_20150101.hpp>
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

using namespace Alibabacloud_R-kvstore20150101;

Alibabacloud_R-kvstore20150101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "r-kvstore.aliyuncs.com"},
    {"cn-beijing", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai", "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen", "r-kvstore.aliyuncs.com"},
    {"cn-heyuan", "r-kvstore.aliyuncs.com"},
    {"ap-southeast-1", "r-kvstore.aliyuncs.com"},
    {"us-west-1", "r-kvstore.aliyuncs.com"},
    {"us-east-1", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-finance", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-finance-1", "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "r-kvstore.aliyuncs.com"},
    {"cn-north-2-gov-1", "r-kvstore.aliyuncs.com"},
    {"ap-northeast-2-pop", "r-kvstore.aliyuncs.com"},
    {"cn-beijing-finance-1", "r-kvstore.aliyuncs.com"},
    {"cn-beijing-finance-pop", "r-kvstore.aliyuncs.com"},
    {"cn-beijing-gov-1", "r-kvstore.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "r-kvstore.aliyuncs.com"},
    {"cn-edge-1", "r-kvstore.aliyuncs.com"},
    {"cn-fujian", "r-kvstore.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "r-kvstore.aliyuncs.com"},
    {"cn-hangzhou-test-306", "r-kvstore.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "r-kvstore.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "r-kvstore.aliyuncs.com"},
    {"cn-qingdao-nebula", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-inner", "r-kvstore.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-inner", "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "r-kvstore.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "r-kvstore.aliyuncs.com"},
    {"cn-wuhan", "r-kvstore.aliyuncs.com"},
    {"cn-wulanchabu", "r-kvstore.aliyuncs.com"},
    {"cn-yushanfang", "r-kvstore.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "r-kvstore.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "r-kvstore.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "r-kvstore.aliyuncs.com"},
    {"eu-west-1-oxs", "r-kvstore.aliyuncs.com"},
    {"rus-west-1-pop", "r-kvstore.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("r-kvstore"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_R-kvstore20150101::Client::getEndpoint(shared_ptr<string> productId,
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

AddShardingNodeResponse Alibabacloud_R-kvstore20150101::Client::addShardingNodeWithOptions(shared_ptr<AddShardingNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddShardingNodeResponse(doRPCRequest(make_shared<string>("AddShardingNode"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddShardingNodeResponse Alibabacloud_R-kvstore20150101::Client::addShardingNode(shared_ptr<AddShardingNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShardingNodeWithOptions(request, runtime);
}

AllocateDirectConnectionResponse Alibabacloud_R-kvstore20150101::Client::allocateDirectConnectionWithOptions(shared_ptr<AllocateDirectConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateDirectConnectionResponse(doRPCRequest(make_shared<string>("AllocateDirectConnection"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateDirectConnectionResponse Alibabacloud_R-kvstore20150101::Client::allocateDirectConnection(shared_ptr<AllocateDirectConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateDirectConnectionWithOptions(request, runtime);
}

AllocateInstancePublicConnectionResponse Alibabacloud_R-kvstore20150101::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("AllocateInstancePublicConnection"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateInstancePublicConnectionResponse Alibabacloud_R-kvstore20150101::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_R-kvstore20150101::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccountResponse(doRPCRequest(make_shared<string>("CreateAccount"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccountResponse Alibabacloud_R-kvstore20150101::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupResponse Alibabacloud_R-kvstore20150101::Client::createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBackupResponse(doRPCRequest(make_shared<string>("CreateBackup"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBackupResponse Alibabacloud_R-kvstore20150101::Client::createBackup(shared_ptr<CreateBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupWithOptions(request, runtime);
}

CreateCacheAnalysisTaskResponse Alibabacloud_R-kvstore20150101::Client::createCacheAnalysisTaskWithOptions(shared_ptr<CreateCacheAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCacheAnalysisTaskResponse(doRPCRequest(make_shared<string>("CreateCacheAnalysisTask"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCacheAnalysisTaskResponse Alibabacloud_R-kvstore20150101::Client::createCacheAnalysisTask(shared_ptr<CreateCacheAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCacheAnalysisTaskWithOptions(request, runtime);
}

CreateGlobalDistributeCacheResponse Alibabacloud_R-kvstore20150101::Client::createGlobalDistributeCacheWithOptions(shared_ptr<CreateGlobalDistributeCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGlobalDistributeCacheResponse(doRPCRequest(make_shared<string>("CreateGlobalDistributeCache"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGlobalDistributeCacheResponse Alibabacloud_R-kvstore20150101::Client::createGlobalDistributeCache(shared_ptr<CreateGlobalDistributeCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGlobalDistributeCacheWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_R-kvstore20150101::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_R-kvstore20150101::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateTairInstanceResponse Alibabacloud_R-kvstore20150101::Client::createTairInstanceWithOptions(shared_ptr<CreateTairInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTairInstanceResponse(doRPCRequest(make_shared<string>("CreateTairInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTairInstanceResponse Alibabacloud_R-kvstore20150101::Client::createTairInstance(shared_ptr<CreateTairInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTairInstanceWithOptions(request, runtime);
}

CreateUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::createUserClusterHostWithOptions(shared_ptr<CreateUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserClusterHostResponse(doRPCRequest(make_shared<string>("CreateUserClusterHost"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::createUserClusterHost(shared_ptr<CreateUserClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserClusterHostWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_R-kvstore20150101::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccountResponse(doRPCRequest(make_shared<string>("DeleteAccount"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccountResponse Alibabacloud_R-kvstore20150101::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_R-kvstore20150101::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_R-kvstore20150101::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteShardingNodeResponse Alibabacloud_R-kvstore20150101::Client::deleteShardingNodeWithOptions(shared_ptr<DeleteShardingNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteShardingNodeResponse(doRPCRequest(make_shared<string>("DeleteShardingNode"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteShardingNodeResponse Alibabacloud_R-kvstore20150101::Client::deleteShardingNode(shared_ptr<DeleteShardingNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteShardingNodeWithOptions(request, runtime);
}

DeleteUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::deleteUserClusterHostWithOptions(shared_ptr<DeleteUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserClusterHostResponse(doRPCRequest(make_shared<string>("DeleteUserClusterHost"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::deleteUserClusterHost(shared_ptr<DeleteUserClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserClusterHostWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_R-kvstore20150101::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountsResponse(doRPCRequest(make_shared<string>("DescribeAccounts"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountsResponse Alibabacloud_R-kvstore20150101::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeActiveOperationTaskResponse Alibabacloud_R-kvstore20150101::Client::describeActiveOperationTaskWithOptions(shared_ptr<DescribeActiveOperationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeActiveOperationTaskResponse(doRPCRequest(make_shared<string>("DescribeActiveOperationTask"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeActiveOperationTaskResponse Alibabacloud_R-kvstore20150101::Client::describeActiveOperationTask(shared_ptr<DescribeActiveOperationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationTaskWithOptions(request, runtime);
}

DescribeAuditRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeAuditRecordsWithOptions(shared_ptr<DescribeAuditRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAuditRecordsResponse(doRPCRequest(make_shared<string>("DescribeAuditRecords"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAuditRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeAuditRecords(shared_ptr<DescribeAuditRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditRecordsWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_R-kvstore20150101::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_R-kvstore20150101::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_R-kvstore20150101::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupsResponse(doRPCRequest(make_shared<string>("DescribeBackups"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupsResponse Alibabacloud_R-kvstore20150101::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeBackupTasksResponse Alibabacloud_R-kvstore20150101::Client::describeBackupTasksWithOptions(shared_ptr<DescribeBackupTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupTasksResponse(doRPCRequest(make_shared<string>("DescribeBackupTasks"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupTasksResponse Alibabacloud_R-kvstore20150101::Client::describeBackupTasks(shared_ptr<DescribeBackupTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTasksWithOptions(request, runtime);
}

DescribeCacheAnalysisReportResponse Alibabacloud_R-kvstore20150101::Client::describeCacheAnalysisReportWithOptions(shared_ptr<DescribeCacheAnalysisReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCacheAnalysisReportResponse(doRPCRequest(make_shared<string>("DescribeCacheAnalysisReport"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCacheAnalysisReportResponse Alibabacloud_R-kvstore20150101::Client::describeCacheAnalysisReport(shared_ptr<DescribeCacheAnalysisReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCacheAnalysisReportWithOptions(request, runtime);
}

DescribeCacheAnalysisReportListResponse Alibabacloud_R-kvstore20150101::Client::describeCacheAnalysisReportListWithOptions(shared_ptr<DescribeCacheAnalysisReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCacheAnalysisReportListResponse(doRPCRequest(make_shared<string>("DescribeCacheAnalysisReportList"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCacheAnalysisReportListResponse Alibabacloud_R-kvstore20150101::Client::describeCacheAnalysisReportList(shared_ptr<DescribeCacheAnalysisReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCacheAnalysisReportListWithOptions(request, runtime);
}

DescribeClusterMemberInfoResponse Alibabacloud_R-kvstore20150101::Client::describeClusterMemberInfoWithOptions(shared_ptr<DescribeClusterMemberInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterMemberInfoResponse(doRPCRequest(make_shared<string>("DescribeClusterMemberInfo"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterMemberInfoResponse Alibabacloud_R-kvstore20150101::Client::describeClusterMemberInfo(shared_ptr<DescribeClusterMemberInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterMemberInfoWithOptions(request, runtime);
}

DescribeDBInstanceNetInfoResponse Alibabacloud_R-kvstore20150101::Client::describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceNetInfoResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceNetInfo"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceNetInfoResponse Alibabacloud_R-kvstore20150101::Client::describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

DescribeDedicatedClusterInstanceListResponse Alibabacloud_R-kvstore20150101::Client::describeDedicatedClusterInstanceListWithOptions(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedClusterInstanceListResponse(doRPCRequest(make_shared<string>("DescribeDedicatedClusterInstanceList"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedClusterInstanceListResponse Alibabacloud_R-kvstore20150101::Client::describeDedicatedClusterInstanceList(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedClusterInstanceListWithOptions(request, runtime);
}

DescribeEngineVersionResponse Alibabacloud_R-kvstore20150101::Client::describeEngineVersionWithOptions(shared_ptr<DescribeEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEngineVersionResponse(doRPCRequest(make_shared<string>("DescribeEngineVersion"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEngineVersionResponse Alibabacloud_R-kvstore20150101::Client::describeEngineVersion(shared_ptr<DescribeEngineVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEngineVersionWithOptions(request, runtime);
}

DescribeGlobalDistributeCacheResponse Alibabacloud_R-kvstore20150101::Client::describeGlobalDistributeCacheWithOptions(shared_ptr<DescribeGlobalDistributeCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGlobalDistributeCacheResponse(doRPCRequest(make_shared<string>("DescribeGlobalDistributeCache"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGlobalDistributeCacheResponse Alibabacloud_R-kvstore20150101::Client::describeGlobalDistributeCache(shared_ptr<DescribeGlobalDistributeCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGlobalDistributeCacheWithOptions(request, runtime);
}

DescribeHistoryMonitorValuesResponse Alibabacloud_R-kvstore20150101::Client::describeHistoryMonitorValuesWithOptions(shared_ptr<DescribeHistoryMonitorValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHistoryMonitorValuesResponse(doRPCRequest(make_shared<string>("DescribeHistoryMonitorValues"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHistoryMonitorValuesResponse Alibabacloud_R-kvstore20150101::Client::describeHistoryMonitorValues(shared_ptr<DescribeHistoryMonitorValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryMonitorValuesWithOptions(request, runtime);
}

DescribeInstanceAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttributeWithOptions(request, runtime);
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceAutoRenewalAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAutoRenewalAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAutoRenewalAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceAutoRenewalAttribute(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

DescribeInstanceConfigResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceConfigWithOptions(shared_ptr<DescribeInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceConfigResponse(doRPCRequest(make_shared<string>("DescribeInstanceConfig"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceConfigResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceConfig(shared_ptr<DescribeInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceConfigWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_R-kvstore20150101::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesResponse(doRPCRequest(make_shared<string>("DescribeInstances"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesResponse Alibabacloud_R-kvstore20150101::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeInstanceSSLResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceSSLWithOptions(shared_ptr<DescribeInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceSSLResponse(doRPCRequest(make_shared<string>("DescribeInstanceSSL"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceSSLResponse Alibabacloud_R-kvstore20150101::Client::describeInstanceSSL(shared_ptr<DescribeInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSSLWithOptions(request, runtime);
}

DescribeIntranetAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeIntranetAttributeWithOptions(shared_ptr<DescribeIntranetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIntranetAttributeResponse(doRPCRequest(make_shared<string>("DescribeIntranetAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIntranetAttributeResponse Alibabacloud_R-kvstore20150101::Client::describeIntranetAttribute(shared_ptr<DescribeIntranetAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIntranetAttributeWithOptions(request, runtime);
}

DescribeLogicInstanceTopologyResponse Alibabacloud_R-kvstore20150101::Client::describeLogicInstanceTopologyWithOptions(shared_ptr<DescribeLogicInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogicInstanceTopologyResponse(doRPCRequest(make_shared<string>("DescribeLogicInstanceTopology"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogicInstanceTopologyResponse Alibabacloud_R-kvstore20150101::Client::describeLogicInstanceTopology(shared_ptr<DescribeLogicInstanceTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogicInstanceTopologyWithOptions(request, runtime);
}

DescribeMonitorItemsResponse Alibabacloud_R-kvstore20150101::Client::describeMonitorItemsWithOptions(shared_ptr<DescribeMonitorItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMonitorItemsResponse(doRPCRequest(make_shared<string>("DescribeMonitorItems"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMonitorItemsResponse Alibabacloud_R-kvstore20150101::Client::describeMonitorItems(shared_ptr<DescribeMonitorItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMonitorItemsWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_R-kvstore20150101::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParametersResponse(doRPCRequest(make_shared<string>("DescribeParameters"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParametersResponse Alibabacloud_R-kvstore20150101::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribeParameterTemplatesResponse Alibabacloud_R-kvstore20150101::Client::describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParameterTemplatesResponse(doRPCRequest(make_shared<string>("DescribeParameterTemplates"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParameterTemplatesResponse Alibabacloud_R-kvstore20150101::Client::describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterTemplatesWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_R-kvstore20150101::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePriceResponse(doRPCRequest(make_shared<string>("DescribePrice"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePriceResponse Alibabacloud_R-kvstore20150101::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_R-kvstore20150101::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_R-kvstore20150101::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRoleZoneInfoResponse Alibabacloud_R-kvstore20150101::Client::describeRoleZoneInfoWithOptions(shared_ptr<DescribeRoleZoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoleZoneInfoResponse(doRPCRequest(make_shared<string>("DescribeRoleZoneInfo"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoleZoneInfoResponse Alibabacloud_R-kvstore20150101::Client::describeRoleZoneInfo(shared_ptr<DescribeRoleZoneInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoleZoneInfoWithOptions(request, runtime);
}

DescribeRunningLogRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeRunningLogRecordsWithOptions(shared_ptr<DescribeRunningLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRunningLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeRunningLogRecords"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRunningLogRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeRunningLogRecords(shared_ptr<DescribeRunningLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRunningLogRecordsWithOptions(request, runtime);
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_R-kvstore20150101::Client::describeSecurityGroupConfigurationWithOptions(shared_ptr<DescribeSecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityGroupConfigurationResponse(doRPCRequest(make_shared<string>("DescribeSecurityGroupConfiguration"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_R-kvstore20150101::Client::describeSecurityGroupConfiguration(shared_ptr<DescribeSecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

DescribeSecurityIpsResponse Alibabacloud_R-kvstore20150101::Client::describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityIpsResponse(doRPCRequest(make_shared<string>("DescribeSecurityIps"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityIpsResponse Alibabacloud_R-kvstore20150101::Client::describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityIpsWithOptions(request, runtime);
}

DescribeSlowLogRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSlowLogRecords"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogRecordsResponse Alibabacloud_R-kvstore20150101::Client::describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_R-kvstore20150101::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTasksResponse(doRPCRequest(make_shared<string>("DescribeTasks"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTasksResponse Alibabacloud_R-kvstore20150101::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DescribeUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::describeUserClusterHostWithOptions(shared_ptr<DescribeUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserClusterHostResponse(doRPCRequest(make_shared<string>("DescribeUserClusterHost"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::describeUserClusterHost(shared_ptr<DescribeUserClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserClusterHostWithOptions(request, runtime);
}

DescribeUserClusterHostInstanceResponse Alibabacloud_R-kvstore20150101::Client::describeUserClusterHostInstanceWithOptions(shared_ptr<DescribeUserClusterHostInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserClusterHostInstanceResponse(doRPCRequest(make_shared<string>("DescribeUserClusterHostInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserClusterHostInstanceResponse Alibabacloud_R-kvstore20150101::Client::describeUserClusterHostInstance(shared_ptr<DescribeUserClusterHostInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserClusterHostInstanceWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_R-kvstore20150101::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_R-kvstore20150101::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

EnableAdditionalBandwidthResponse Alibabacloud_R-kvstore20150101::Client::enableAdditionalBandwidthWithOptions(shared_ptr<EnableAdditionalBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableAdditionalBandwidthResponse(doRPCRequest(make_shared<string>("EnableAdditionalBandwidth"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableAdditionalBandwidthResponse Alibabacloud_R-kvstore20150101::Client::enableAdditionalBandwidth(shared_ptr<EnableAdditionalBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAdditionalBandwidthWithOptions(request, runtime);
}

FlushExpireKeysResponse Alibabacloud_R-kvstore20150101::Client::flushExpireKeysWithOptions(shared_ptr<FlushExpireKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FlushExpireKeysResponse(doRPCRequest(make_shared<string>("FlushExpireKeys"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FlushExpireKeysResponse Alibabacloud_R-kvstore20150101::Client::flushExpireKeys(shared_ptr<FlushExpireKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return flushExpireKeysWithOptions(request, runtime);
}

FlushInstanceResponse Alibabacloud_R-kvstore20150101::Client::flushInstanceWithOptions(shared_ptr<FlushInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FlushInstanceResponse(doRPCRequest(make_shared<string>("FlushInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FlushInstanceResponse Alibabacloud_R-kvstore20150101::Client::flushInstance(shared_ptr<FlushInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return flushInstanceWithOptions(request, runtime);
}

GrantAccountPrivilegeResponse Alibabacloud_R-kvstore20150101::Client::grantAccountPrivilegeWithOptions(shared_ptr<GrantAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantAccountPrivilegeResponse(doRPCRequest(make_shared<string>("GrantAccountPrivilege"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantAccountPrivilegeResponse Alibabacloud_R-kvstore20150101::Client::grantAccountPrivilege(shared_ptr<GrantAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

InitializeKvstorePermissionResponse Alibabacloud_R-kvstore20150101::Client::initializeKvstorePermissionWithOptions(shared_ptr<InitializeKvstorePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitializeKvstorePermissionResponse(doRPCRequest(make_shared<string>("InitializeKvstorePermission"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitializeKvstorePermissionResponse Alibabacloud_R-kvstore20150101::Client::initializeKvstorePermission(shared_ptr<InitializeKvstorePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeKvstorePermissionWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_R-kvstore20150101::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_R-kvstore20150101::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

MigrateToOtherZoneResponse Alibabacloud_R-kvstore20150101::Client::migrateToOtherZoneWithOptions(shared_ptr<MigrateToOtherZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MigrateToOtherZoneResponse(doRPCRequest(make_shared<string>("MigrateToOtherZone"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MigrateToOtherZoneResponse Alibabacloud_R-kvstore20150101::Client::migrateToOtherZone(shared_ptr<MigrateToOtherZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateToOtherZoneWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_R-kvstore20150101::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_R-kvstore20150101::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAccountPasswordResponse Alibabacloud_R-kvstore20150101::Client::modifyAccountPasswordWithOptions(shared_ptr<ModifyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountPasswordResponse(doRPCRequest(make_shared<string>("ModifyAccountPassword"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountPasswordResponse Alibabacloud_R-kvstore20150101::Client::modifyAccountPassword(shared_ptr<ModifyAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPasswordWithOptions(request, runtime);
}

ModifyActiveOperationTaskResponse Alibabacloud_R-kvstore20150101::Client::modifyActiveOperationTaskWithOptions(shared_ptr<ModifyActiveOperationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyActiveOperationTaskResponse(doRPCRequest(make_shared<string>("ModifyActiveOperationTask"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyActiveOperationTaskResponse Alibabacloud_R-kvstore20150101::Client::modifyActiveOperationTask(shared_ptr<ModifyActiveOperationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActiveOperationTaskWithOptions(request, runtime);
}

ModifyAuditLogConfigResponse Alibabacloud_R-kvstore20150101::Client::modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAuditLogConfigResponse(doRPCRequest(make_shared<string>("ModifyAuditLogConfig"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAuditLogConfigResponse Alibabacloud_R-kvstore20150101::Client::modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_R-kvstore20150101::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicy"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_R-kvstore20150101::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_R-kvstore20150101::Client::modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConnectionStringResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConnectionString"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_R-kvstore20150101::Client::modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceAutoRenewalAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAutoRenewalAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAutoRenewalAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceAutoRenewalAttribute(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

ModifyInstanceConfigResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceConfigWithOptions(shared_ptr<ModifyInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceConfigResponse(doRPCRequest(make_shared<string>("ModifyInstanceConfig"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceConfigResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceConfig(shared_ptr<ModifyInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceConfigWithOptions(request, runtime);
}

ModifyInstanceMaintainTimeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMaintainTimeWithOptions(shared_ptr<ModifyInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceMaintainTimeResponse(doRPCRequest(make_shared<string>("ModifyInstanceMaintainTime"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMaintainTimeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMaintainTime(shared_ptr<ModifyInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMaintainTimeWithOptions(request, runtime);
}

ModifyInstanceMajorVersionResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMajorVersionWithOptions(shared_ptr<ModifyInstanceMajorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceMajorVersionResponse(doRPCRequest(make_shared<string>("ModifyInstanceMajorVersion"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMajorVersionResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMajorVersion(shared_ptr<ModifyInstanceMajorVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMajorVersionWithOptions(request, runtime);
}

ModifyInstanceMinorVersionResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMinorVersionWithOptions(shared_ptr<ModifyInstanceMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceMinorVersionResponse(doRPCRequest(make_shared<string>("ModifyInstanceMinorVersion"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMinorVersionResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceMinorVersion(shared_ptr<ModifyInstanceMinorVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMinorVersionWithOptions(request, runtime);
}

ModifyInstanceNetExpireTimeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceNetExpireTimeWithOptions(shared_ptr<ModifyInstanceNetExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceNetExpireTimeResponse(doRPCRequest(make_shared<string>("ModifyInstanceNetExpireTime"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceNetExpireTimeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceNetExpireTime(shared_ptr<ModifyInstanceNetExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNetExpireTimeWithOptions(request, runtime);
}

ModifyInstanceSpecResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyInstanceSpec"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceSpecResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSpecWithOptions(request, runtime);
}

ModifyInstanceSSLResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceSSLWithOptions(shared_ptr<ModifyInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceSSLResponse(doRPCRequest(make_shared<string>("ModifyInstanceSSL"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceSSLResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceSSL(shared_ptr<ModifyInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSSLWithOptions(request, runtime);
}

ModifyInstanceVpcAuthModeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceVpcAuthModeWithOptions(shared_ptr<ModifyInstanceVpcAuthModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceVpcAuthModeResponse(doRPCRequest(make_shared<string>("ModifyInstanceVpcAuthMode"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceVpcAuthModeResponse Alibabacloud_R-kvstore20150101::Client::modifyInstanceVpcAuthMode(shared_ptr<ModifyInstanceVpcAuthModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceVpcAuthModeWithOptions(request, runtime);
}

ModifyIntranetAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyIntranetAttributeWithOptions(shared_ptr<ModifyIntranetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyIntranetAttributeResponse(doRPCRequest(make_shared<string>("ModifyIntranetAttribute"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyIntranetAttributeResponse Alibabacloud_R-kvstore20150101::Client::modifyIntranetAttribute(shared_ptr<ModifyIntranetAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIntranetAttributeWithOptions(request, runtime);
}

ModifyNodeSpecResponse Alibabacloud_R-kvstore20150101::Client::modifyNodeSpecWithOptions(shared_ptr<ModifyNodeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNodeSpecResponse(doRPCRequest(make_shared<string>("ModifyNodeSpec"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNodeSpecResponse Alibabacloud_R-kvstore20150101::Client::modifyNodeSpec(shared_ptr<ModifyNodeSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNodeSpecWithOptions(request, runtime);
}

ModifyResourceGroupResponse Alibabacloud_R-kvstore20150101::Client::modifyResourceGroupWithOptions(shared_ptr<ModifyResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyResourceGroupResponse(doRPCRequest(make_shared<string>("ModifyResourceGroup"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyResourceGroupResponse Alibabacloud_R-kvstore20150101::Client::modifyResourceGroup(shared_ptr<ModifyResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyResourceGroupWithOptions(request, runtime);
}

ModifySecurityGroupConfigurationResponse Alibabacloud_R-kvstore20150101::Client::modifySecurityGroupConfigurationWithOptions(shared_ptr<ModifySecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupConfigurationResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupConfiguration"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupConfigurationResponse Alibabacloud_R-kvstore20150101::Client::modifySecurityGroupConfiguration(shared_ptr<ModifySecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_R-kvstore20150101::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityIpsResponse(doRPCRequest(make_shared<string>("ModifySecurityIps"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_R-kvstore20150101::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ModifyUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::modifyUserClusterHostWithOptions(shared_ptr<ModifyUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserClusterHostResponse(doRPCRequest(make_shared<string>("ModifyUserClusterHost"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::modifyUserClusterHost(shared_ptr<ModifyUserClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserClusterHostWithOptions(request, runtime);
}

ReleaseDirectConnectionResponse Alibabacloud_R-kvstore20150101::Client::releaseDirectConnectionWithOptions(shared_ptr<ReleaseDirectConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseDirectConnectionResponse(doRPCRequest(make_shared<string>("ReleaseDirectConnection"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseDirectConnectionResponse Alibabacloud_R-kvstore20150101::Client::releaseDirectConnection(shared_ptr<ReleaseDirectConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseDirectConnectionWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_R-kvstore20150101::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("ReleaseInstancePublicConnection"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstancePublicConnectionResponse Alibabacloud_R-kvstore20150101::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_R-kvstore20150101::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewInstanceResponse(doRPCRequest(make_shared<string>("RenewInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_R-kvstore20150101::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ReplaceUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::replaceUserClusterHostWithOptions(shared_ptr<ReplaceUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceUserClusterHostResponse(doRPCRequest(make_shared<string>("ReplaceUserClusterHost"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceUserClusterHostResponse Alibabacloud_R-kvstore20150101::Client::replaceUserClusterHost(shared_ptr<ReplaceUserClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceUserClusterHostWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_R-kvstore20150101::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAccountPasswordResponse(doRPCRequest(make_shared<string>("ResetAccountPassword"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_R-kvstore20150101::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

RestartInstanceResponse Alibabacloud_R-kvstore20150101::Client::restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartInstanceResponse(doRPCRequest(make_shared<string>("RestartInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartInstanceResponse Alibabacloud_R-kvstore20150101::Client::restartInstance(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartInstanceWithOptions(request, runtime);
}

RestoreInstanceResponse Alibabacloud_R-kvstore20150101::Client::restoreInstanceWithOptions(shared_ptr<RestoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestoreInstanceResponse(doRPCRequest(make_shared<string>("RestoreInstance"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestoreInstanceResponse Alibabacloud_R-kvstore20150101::Client::restoreInstance(shared_ptr<RestoreInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreInstanceWithOptions(request, runtime);
}

SwitchInstanceHAResponse Alibabacloud_R-kvstore20150101::Client::switchInstanceHAWithOptions(shared_ptr<SwitchInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchInstanceHAResponse(doRPCRequest(make_shared<string>("SwitchInstanceHA"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchInstanceHAResponse Alibabacloud_R-kvstore20150101::Client::switchInstanceHA(shared_ptr<SwitchInstanceHARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchInstanceHAWithOptions(request, runtime);
}

SwitchNetworkResponse Alibabacloud_R-kvstore20150101::Client::switchNetworkWithOptions(shared_ptr<SwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchNetworkResponse(doRPCRequest(make_shared<string>("SwitchNetwork"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchNetworkResponse Alibabacloud_R-kvstore20150101::Client::switchNetwork(shared_ptr<SwitchNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchNetworkWithOptions(request, runtime);
}

SyncDtsStatusResponse Alibabacloud_R-kvstore20150101::Client::syncDtsStatusWithOptions(shared_ptr<SyncDtsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncDtsStatusResponse(doRPCRequest(make_shared<string>("SyncDtsStatus"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncDtsStatusResponse Alibabacloud_R-kvstore20150101::Client::syncDtsStatus(shared_ptr<SyncDtsStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncDtsStatusWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_R-kvstore20150101::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_R-kvstore20150101::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TransformToPrePaidResponse Alibabacloud_R-kvstore20150101::Client::transformToPrePaidWithOptions(shared_ptr<TransformToPrePaidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransformToPrePaidResponse(doRPCRequest(make_shared<string>("TransformToPrePaid"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransformToPrePaidResponse Alibabacloud_R-kvstore20150101::Client::transformToPrePaid(shared_ptr<TransformToPrePaidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transformToPrePaidWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_R-kvstore20150101::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2015-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_R-kvstore20150101::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

