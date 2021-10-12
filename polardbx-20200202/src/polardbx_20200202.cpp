// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/polardbx_20200202.hpp>
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

using namespace Alibabacloud_Polardbx20200202;

Alibabacloud_Polardbx20200202::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "polardbx.aliyuncs.com"},
    {"ap-northeast-2-pop", "polardbx.aliyuncs.com"},
    {"ap-south-1", "polardbx.aliyuncs.com"},
    {"ap-southeast-2", "polardbx.aliyuncs.com"},
    {"ap-southeast-3", "polardbx.aliyuncs.com"},
    {"ap-southeast-5", "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-1", "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-pop", "polardbx.aliyuncs.com"},
    {"cn-beijing-gov-1", "polardbx.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "polardbx.aliyuncs.com"},
    {"cn-edge-1", "polardbx.aliyuncs.com"},
    {"cn-fujian", "polardbx.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-finance", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-test-306", "polardbx.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "polardbx.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "polardbx.aliyuncs.com"},
    {"cn-north-2-gov-1", "polardbx.aliyuncs.com"},
    {"cn-qingdao-nebula", "polardbx.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "polardbx.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "polardbx.aliyuncs.com"},
    {"cn-shanghai-finance-1", "polardbx.aliyuncs.com"},
    {"cn-shanghai-inner", "polardbx.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-inner", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "polardbx.aliyuncs.com"},
    {"cn-wuhan", "polardbx.aliyuncs.com"},
    {"cn-wulanchabu", "polardbx.aliyuncs.com"},
    {"cn-yushanfang", "polardbx.aliyuncs.com"},
    {"cn-zhangbei", "polardbx.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "polardbx.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "polardbx.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "polardbx.aliyuncs.com"},
    {"eu-central-1", "polardbx.aliyuncs.com"},
    {"eu-west-1", "polardbx.aliyuncs.com"},
    {"eu-west-1-oxs", "polardbx.aliyuncs.com"},
    {"me-east-1", "polardbx.aliyuncs.com"},
    {"rus-west-1-pop", "polardbx.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("polardbx"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Polardbx20200202::Client::getEndpoint(shared_ptr<string> productId,
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

AllocateInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("AllocateInstancePublicConnection"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

CancelPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::cancelPolarxOrderWithOptions(shared_ptr<CancelPolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelPolarxOrderResponse(doRPCRequest(make_shared<string>("CancelPolarxOrder"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::cancelPolarxOrder(shared_ptr<CancelPolarxOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPolarxOrderWithOptions(request, runtime);
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Polardbx20200202::Client::checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckCloudResourceAuthorizedResponse(doRPCRequest(make_shared<string>("CheckCloudResourceAuthorized"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Polardbx20200202::Client::checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Polardbx20200202::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccountResponse(doRPCRequest(make_shared<string>("CreateAccount"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccountResponse Alibabacloud_Polardbx20200202::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupResponse Alibabacloud_Polardbx20200202::Client::createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBackupResponse(doRPCRequest(make_shared<string>("CreateBackup"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBackupResponse Alibabacloud_Polardbx20200202::Client::createBackup(shared_ptr<CreateBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupWithOptions(request, runtime);
}

CreateDBResponse Alibabacloud_Polardbx20200202::Client::createDBWithOptions(shared_ptr<CreateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBResponse(doRPCRequest(make_shared<string>("CreateDB"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBResponse Alibabacloud_Polardbx20200202::Client::createDB(shared_ptr<CreateDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBWithOptions(request, runtime);
}

CreateDBInstanceResponse Alibabacloud_Polardbx20200202::Client::createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBInstanceResponse(doRPCRequest(make_shared<string>("CreateDBInstance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBInstanceResponse Alibabacloud_Polardbx20200202::Client::createDBInstance(shared_ptr<CreateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBInstanceWithOptions(request, runtime);
}

CreatePolarxInstanceResponse Alibabacloud_Polardbx20200202::Client::createPolarxInstanceWithOptions(shared_ptr<CreatePolarxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolarxInstanceResponse(doRPCRequest(make_shared<string>("CreatePolarxInstance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolarxInstanceResponse Alibabacloud_Polardbx20200202::Client::createPolarxInstance(shared_ptr<CreatePolarxInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolarxInstanceWithOptions(request, runtime);
}

CreatePolarxOrderResponse Alibabacloud_Polardbx20200202::Client::createPolarxOrderWithOptions(shared_ptr<CreatePolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolarxOrderResponse(doRPCRequest(make_shared<string>("CreatePolarxOrder"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolarxOrderResponse Alibabacloud_Polardbx20200202::Client::createPolarxOrder(shared_ptr<CreatePolarxOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolarxOrderWithOptions(request, runtime);
}

CreateSuperAccountResponse Alibabacloud_Polardbx20200202::Client::createSuperAccountWithOptions(shared_ptr<CreateSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSuperAccountResponse(doRPCRequest(make_shared<string>("CreateSuperAccount"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSuperAccountResponse Alibabacloud_Polardbx20200202::Client::createSuperAccount(shared_ptr<CreateSuperAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSuperAccountWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Polardbx20200202::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccountResponse(doRPCRequest(make_shared<string>("DeleteAccount"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccountResponse Alibabacloud_Polardbx20200202::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteDBResponse Alibabacloud_Polardbx20200202::Client::deleteDBWithOptions(shared_ptr<DeleteDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBResponse(doRPCRequest(make_shared<string>("DeleteDB"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBResponse Alibabacloud_Polardbx20200202::Client::deleteDB(shared_ptr<DeleteDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBWithOptions(request, runtime);
}

DeleteDBInstanceResponse Alibabacloud_Polardbx20200202::Client::deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBInstanceResponse(doRPCRequest(make_shared<string>("DeleteDBInstance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBInstanceResponse Alibabacloud_Polardbx20200202::Client::deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBInstanceWithOptions(request, runtime);
}

DescribeAccountListResponse Alibabacloud_Polardbx20200202::Client::describeAccountListWithOptions(shared_ptr<DescribeAccountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountListResponse(doRPCRequest(make_shared<string>("DescribeAccountList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountListResponse Alibabacloud_Polardbx20200202::Client::describeAccountList(shared_ptr<DescribeAccountListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountListWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupSetListResponse Alibabacloud_Polardbx20200202::Client::describeBackupSetListWithOptions(shared_ptr<DescribeBackupSetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeBackupSetListResponse(doRPCRequest(make_shared<string>("DescribeBackupSetList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupSetListResponse Alibabacloud_Polardbx20200202::Client::describeBackupSetList(shared_ptr<DescribeBackupSetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetListWithOptions(request, runtime);
}

DescribeBinaryLogListResponse Alibabacloud_Polardbx20200202::Client::describeBinaryLogListWithOptions(shared_ptr<DescribeBinaryLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBinaryLogListResponse(doRPCRequest(make_shared<string>("DescribeBinaryLogList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBinaryLogListResponse Alibabacloud_Polardbx20200202::Client::describeBinaryLogList(shared_ptr<DescribeBinaryLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBinaryLogListWithOptions(request, runtime);
}

DescribeDBInstanceAttributeResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceAttribute"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceAttributeResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

DescribeDBInstancesResponse Alibabacloud_Polardbx20200202::Client::describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesResponse(doRPCRequest(make_shared<string>("DescribeDBInstances"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesResponse Alibabacloud_Polardbx20200202::Client::describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesWithOptions(request, runtime);
}

DescribeDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceSSLResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceSSL"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

DescribeDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceTDEResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceTDE"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

DescribeDbListResponse Alibabacloud_Polardbx20200202::Client::describeDbListWithOptions(shared_ptr<DescribeDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDbListResponse(doRPCRequest(make_shared<string>("DescribeDbList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDbListResponse Alibabacloud_Polardbx20200202::Client::describeDbList(shared_ptr<DescribeDbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbListWithOptions(request, runtime);
}

DescribeDistributeTableListResponse Alibabacloud_Polardbx20200202::Client::describeDistributeTableListWithOptions(shared_ptr<DescribeDistributeTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDistributeTableListResponse(doRPCRequest(make_shared<string>("DescribeDistributeTableList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDistributeTableListResponse Alibabacloud_Polardbx20200202::Client::describeDistributeTableList(shared_ptr<DescribeDistributeTableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDistributeTableListWithOptions(request, runtime);
}

DescribeInstanceDbPerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstanceDbPerformanceWithOptions(shared_ptr<DescribeInstanceDbPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceDbPerformanceResponse(doRPCRequest(make_shared<string>("DescribeInstanceDbPerformance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceDbPerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstanceDbPerformance(shared_ptr<DescribeInstanceDbPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceDbPerformanceWithOptions(request, runtime);
}

DescribeInstancePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstancePerformanceWithOptions(shared_ptr<DescribeInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancePerformanceResponse(doRPCRequest(make_shared<string>("DescribeInstancePerformance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstancePerformance(shared_ptr<DescribeInstancePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancePerformanceWithOptions(request, runtime);
}

DescribeInstanceStoragePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstanceStoragePerformanceWithOptions(shared_ptr<DescribeInstanceStoragePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceStoragePerformanceResponse(doRPCRequest(make_shared<string>("DescribeInstanceStoragePerformance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceStoragePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeInstanceStoragePerformance(shared_ptr<DescribeInstanceStoragePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceStoragePerformanceWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_Polardbx20200202::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParametersResponse(doRPCRequest(make_shared<string>("DescribeParameters"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParametersResponse Alibabacloud_Polardbx20200202::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribePolarxDbInstancesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDbInstancesWithOptions(shared_ptr<DescribePolarxDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePolarxDbInstancesResponse(doRPCRequest(make_shared<string>("DescribePolarxDbInstances"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePolarxDbInstancesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDbInstances(shared_ptr<DescribePolarxDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolarxDbInstancesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Polardbx20200202::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Polardbx20200202::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeScaleOutMigrateTaskListResponse Alibabacloud_Polardbx20200202::Client::describeScaleOutMigrateTaskListWithOptions(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScaleOutMigrateTaskListResponse(doRPCRequest(make_shared<string>("DescribeScaleOutMigrateTaskList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScaleOutMigrateTaskListResponse Alibabacloud_Polardbx20200202::Client::describeScaleOutMigrateTaskList(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScaleOutMigrateTaskListWithOptions(request, runtime);
}

DescribeSecurityIpsResponse Alibabacloud_Polardbx20200202::Client::describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityIpsResponse(doRPCRequest(make_shared<string>("DescribeSecurityIps"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityIpsResponse Alibabacloud_Polardbx20200202::Client::describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityIpsWithOptions(request, runtime);
}

DescribeSqlAuditInfoResponse Alibabacloud_Polardbx20200202::Client::describeSqlAuditInfoWithOptions(shared_ptr<DescribeSqlAuditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSqlAuditInfoResponse(doRPCRequest(make_shared<string>("DescribeSqlAuditInfo"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSqlAuditInfoResponse Alibabacloud_Polardbx20200202::Client::describeSqlAuditInfo(shared_ptr<DescribeSqlAuditInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlAuditInfoWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Polardbx20200202::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTasksResponse(doRPCRequest(make_shared<string>("DescribeTasks"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTasksResponse Alibabacloud_Polardbx20200202::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Polardbx20200202::Client::describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserEncryptionKeyListResponse(doRPCRequest(make_shared<string>("DescribeUserEncryptionKeyList"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Polardbx20200202::Client::describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

GetPolarxCommodityResponse Alibabacloud_Polardbx20200202::Client::getPolarxCommodityWithOptions(shared_ptr<GetPolarxCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPolarxCommodityResponse(doRPCRequest(make_shared<string>("GetPolarxCommodity"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPolarxCommodityResponse Alibabacloud_Polardbx20200202::Client::getPolarxCommodity(shared_ptr<GetPolarxCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolarxCommodityWithOptions(request, runtime);
}

GetPolarXPriceResponse Alibabacloud_Polardbx20200202::Client::getPolarXPriceWithOptions(shared_ptr<GetPolarXPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPolarXPriceResponse(doRPCRequest(make_shared<string>("GetPolarXPrice"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPolarXPriceResponse Alibabacloud_Polardbx20200202::Client::getPolarXPrice(shared_ptr<GetPolarXPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolarXPriceWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyDatabaseDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDatabaseDescriptionWithOptions(shared_ptr<ModifyDatabaseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDatabaseDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDatabaseDescription"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDatabaseDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDatabaseDescription(shared_ptr<ModifyDatabaseDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDatabaseDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceClassResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceClassWithOptions(shared_ptr<ModifyDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceClassResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceClass"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceClassResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceClass(shared_ptr<ModifyDBInstanceClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

ModifyDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceConfigWithOptions(shared_ptr<ModifyDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConfigResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConfig"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceConfig(shared_ptr<ModifyDBInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceDescription"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

ModifyParameterResponse Alibabacloud_Polardbx20200202::Client::modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyParameterResponse(doRPCRequest(make_shared<string>("ModifyParameter"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyParameterResponse Alibabacloud_Polardbx20200202::Client::modifyParameter(shared_ptr<ModifyParameterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_Polardbx20200202::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityIpsResponse(doRPCRequest(make_shared<string>("ModifySecurityIps"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_Polardbx20200202::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("ReleaseInstancePublicConnection"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

RestartDBInstanceResponse Alibabacloud_Polardbx20200202::Client::restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDBInstanceResponse(doRPCRequest(make_shared<string>("RestartDBInstance"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDBInstanceResponse Alibabacloud_Polardbx20200202::Client::restartDBInstance(shared_ptr<RestartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDBInstanceWithOptions(request, runtime);
}

RetryPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::retryPolarxOrderWithOptions(shared_ptr<RetryPolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RetryPolarxOrderResponse(doRPCRequest(make_shared<string>("RetryPolarxOrder"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RetryPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::retryPolarxOrder(shared_ptr<RetryPolarxOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryPolarxOrderWithOptions(request, runtime);
}

UpdateBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::updateBackupPolicyWithOptions(shared_ptr<UpdateBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateBackupPolicyResponse(doRPCRequest(make_shared<string>("UpdateBackupPolicy"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::updateBackupPolicy(shared_ptr<UpdateBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBackupPolicyWithOptions(request, runtime);
}

UpdateDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceSSLWithOptions(shared_ptr<UpdateDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDBInstanceSSLResponse(doRPCRequest(make_shared<string>("UpdateDBInstanceSSL"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceSSL(shared_ptr<UpdateDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDBInstanceSSLWithOptions(request, runtime);
}

UpdateDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceTDEWithOptions(shared_ptr<UpdateDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDBInstanceTDEResponse(doRPCRequest(make_shared<string>("UpdateDBInstanceTDE"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceTDE(shared_ptr<UpdateDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDBInstanceTDEWithOptions(request, runtime);
}

UpdatePolarDBXInstanceNodeResponse Alibabacloud_Polardbx20200202::Client::updatePolarDBXInstanceNodeWithOptions(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePolarDBXInstanceNodeResponse(doRPCRequest(make_shared<string>("UpdatePolarDBXInstanceNode"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePolarDBXInstanceNodeResponse Alibabacloud_Polardbx20200202::Client::updatePolarDBXInstanceNode(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePolarDBXInstanceNodeWithOptions(request, runtime);
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Polardbx20200202::Client::upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBInstanceKernelVersionResponse(doRPCRequest(make_shared<string>("UpgradeDBInstanceKernelVersion"), make_shared<string>("2020-02-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Polardbx20200202::Client::upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}

