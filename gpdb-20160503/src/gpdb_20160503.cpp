// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/gpdb_20160503.hpp>
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

using namespace Alibabacloud_Gpdb20160503;

Alibabacloud_Gpdb20160503::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "gpdb.aliyuncs.com"},
    {"cn-hangzhou", "gpdb.aliyuncs.com"},
    {"cn-shanghai", "gpdb.aliyuncs.com"},
    {"cn-shenzhen", "gpdb.aliyuncs.com"},
    {"cn-hongkong", "gpdb.aliyuncs.com"},
    {"ap-southeast-1", "gpdb.aliyuncs.com"},
    {"us-west-1", "gpdb.aliyuncs.com"},
    {"us-east-1", "gpdb.aliyuncs.com"},
    {"cn-hangzhou-finance", "gpdb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "gpdb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "gpdb.aliyuncs.com"},
    {"cn-qingdao", "gpdb.aliyuncs.com"},
    {"cn-north-2-gov-1", "gpdb.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("gpdb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Gpdb20160503::Client::getEndpoint(shared_ptr<string> productId,
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

AddBuDBInstanceRelationResponse Alibabacloud_Gpdb20160503::Client::addBuDBInstanceRelationWithOptions(shared_ptr<AddBuDBInstanceRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBuDBInstanceRelationResponse(doRPCRequest(make_shared<string>("AddBuDBInstanceRelation"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBuDBInstanceRelationResponse Alibabacloud_Gpdb20160503::Client::addBuDBInstanceRelation(shared_ptr<AddBuDBInstanceRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBuDBInstanceRelationWithOptions(request, runtime);
}

AllocateInstancePublicConnectionResponse Alibabacloud_Gpdb20160503::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("AllocateInstancePublicConnection"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateInstancePublicConnectionResponse Alibabacloud_Gpdb20160503::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

CheckServiceLinkedRoleResponse Alibabacloud_Gpdb20160503::Client::checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CheckServiceLinkedRole"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckServiceLinkedRoleResponse Alibabacloud_Gpdb20160503::Client::checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Gpdb20160503::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccountResponse(doRPCRequest(make_shared<string>("CreateAccount"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccountResponse Alibabacloud_Gpdb20160503::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateDBInstanceResponse Alibabacloud_Gpdb20160503::Client::createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBInstanceResponse(doRPCRequest(make_shared<string>("CreateDBInstance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBInstanceResponse Alibabacloud_Gpdb20160503::Client::createDBInstance(shared_ptr<CreateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBInstanceWithOptions(request, runtime);
}

CreateECSDBInstanceResponse Alibabacloud_Gpdb20160503::Client::createECSDBInstanceWithOptions(shared_ptr<CreateECSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateECSDBInstanceResponse(doRPCRequest(make_shared<string>("CreateECSDBInstance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateECSDBInstanceResponse Alibabacloud_Gpdb20160503::Client::createECSDBInstance(shared_ptr<CreateECSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createECSDBInstanceWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_Gpdb20160503::Client::createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateServiceLinkedRole"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_Gpdb20160503::Client::createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

DeleteDatabaseResponse Alibabacloud_Gpdb20160503::Client::deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDatabaseResponse(doRPCRequest(make_shared<string>("DeleteDatabase"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDatabaseResponse Alibabacloud_Gpdb20160503::Client::deleteDatabase(shared_ptr<DeleteDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatabaseWithOptions(request, runtime);
}

DeleteDBInstanceResponse Alibabacloud_Gpdb20160503::Client::deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBInstanceResponse(doRPCRequest(make_shared<string>("DeleteDBInstance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBInstanceResponse Alibabacloud_Gpdb20160503::Client::deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBInstanceWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_Gpdb20160503::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountsResponse(doRPCRequest(make_shared<string>("DescribeAccounts"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountsResponse Alibabacloud_Gpdb20160503::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeAvailableResourcesResponse Alibabacloud_Gpdb20160503::Client::describeAvailableResourcesWithOptions(shared_ptr<DescribeAvailableResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableResourcesResponse(doRPCRequest(make_shared<string>("DescribeAvailableResources"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableResourcesResponse Alibabacloud_Gpdb20160503::Client::describeAvailableResources(shared_ptr<DescribeAvailableResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourcesWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Gpdb20160503::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Gpdb20160503::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeDataBackupsResponse Alibabacloud_Gpdb20160503::Client::describeDataBackupsWithOptions(shared_ptr<DescribeDataBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataBackupsResponse(doRPCRequest(make_shared<string>("DescribeDataBackups"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataBackupsResponse Alibabacloud_Gpdb20160503::Client::describeDataBackups(shared_ptr<DescribeDataBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataBackupsWithOptions(request, runtime);
}

DescribeDBClusterPerformanceResponse Alibabacloud_Gpdb20160503::Client::describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterPerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBClusterPerformance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterPerformanceResponse Alibabacloud_Gpdb20160503::Client::describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

DescribeDBInstanceAttributeResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceAttribute"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceAttributeResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceIPArrayListWithOptions(shared_ptr<DescribeDBInstanceIPArrayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceIPArrayListResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceIPArrayList"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceIPArrayList(shared_ptr<DescribeDBInstanceIPArrayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceIPArrayListWithOptions(request, runtime);
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceNetInfoResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceNetInfo"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

DescribeDBInstanceOnECSAttributeResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceOnECSAttributeWithOptions(shared_ptr<DescribeDBInstanceOnECSAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceOnECSAttributeResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceOnECSAttribute"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceOnECSAttributeResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceOnECSAttribute(shared_ptr<DescribeDBInstanceOnECSAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceOnECSAttributeWithOptions(request, runtime);
}

DescribeDBInstancePerformanceResponse Alibabacloud_Gpdb20160503::Client::describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancePerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBInstancePerformance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancePerformanceResponse Alibabacloud_Gpdb20160503::Client::describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

DescribeDBInstancesResponse Alibabacloud_Gpdb20160503::Client::describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeDBInstancesShrinkRequest> request = make_shared<DescribeDBInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceDeployTypes)) {
    request->instanceDeployTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceDeployTypes, make_shared<string>("InstanceDeployTypes"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->DBInstanceStatuses)) {
    request->DBInstanceStatusesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->DBInstanceStatuses, make_shared<string>("DBInstanceStatuses"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->DBInstanceCategories)) {
    request->DBInstanceCategoriesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->DBInstanceCategories, make_shared<string>("DBInstanceCategories"), make_shared<string>("simple")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesResponse(doRPCRequest(make_shared<string>("DescribeDBInstances"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesResponse Alibabacloud_Gpdb20160503::Client::describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesWithOptions(request, runtime);
}

DescribeDBInstanceSQLPatternsResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceSQLPatternsWithOptions(shared_ptr<DescribeDBInstanceSQLPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceSQLPatternsResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceSQLPatterns"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceSQLPatternsResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceSQLPatterns(shared_ptr<DescribeDBInstanceSQLPatternsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSQLPatternsWithOptions(request, runtime);
}

DescribeDBInstanceSSLResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceSSLResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceSSL"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceSSLResponse Alibabacloud_Gpdb20160503::Client::describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

DescribeLogBackupsResponse Alibabacloud_Gpdb20160503::Client::describeLogBackupsWithOptions(shared_ptr<DescribeLogBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogBackupsResponse(doRPCRequest(make_shared<string>("DescribeLogBackups"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogBackupsResponse Alibabacloud_Gpdb20160503::Client::describeLogBackups(shared_ptr<DescribeLogBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogBackupsWithOptions(request, runtime);
}

DescribeModifyParameterLogResponse Alibabacloud_Gpdb20160503::Client::describeModifyParameterLogWithOptions(shared_ptr<DescribeModifyParameterLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeModifyParameterLogResponse(doRPCRequest(make_shared<string>("DescribeModifyParameterLog"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeModifyParameterLogResponse Alibabacloud_Gpdb20160503::Client::describeModifyParameterLog(shared_ptr<DescribeModifyParameterLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModifyParameterLogWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_Gpdb20160503::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParametersResponse(doRPCRequest(make_shared<string>("DescribeParameters"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParametersResponse Alibabacloud_Gpdb20160503::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribeRdsVpcsResponse Alibabacloud_Gpdb20160503::Client::describeRdsVpcsWithOptions(shared_ptr<DescribeRdsVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsVpcsResponse(doRPCRequest(make_shared<string>("DescribeRdsVpcs"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsVpcsResponse Alibabacloud_Gpdb20160503::Client::describeRdsVpcs(shared_ptr<DescribeRdsVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsVpcsWithOptions(request, runtime);
}

DescribeRdsVSwitchsResponse Alibabacloud_Gpdb20160503::Client::describeRdsVSwitchsWithOptions(shared_ptr<DescribeRdsVSwitchsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsVSwitchsResponse(doRPCRequest(make_shared<string>("DescribeRdsVSwitchs"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsVSwitchsResponse Alibabacloud_Gpdb20160503::Client::describeRdsVSwitchs(shared_ptr<DescribeRdsVSwitchsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Gpdb20160503::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Gpdb20160503::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeResourceUsageResponse Alibabacloud_Gpdb20160503::Client::describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeResourceUsageResponse(doRPCRequest(make_shared<string>("DescribeResourceUsage"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeResourceUsageResponse Alibabacloud_Gpdb20160503::Client::describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageWithOptions(request, runtime);
}

DescribeSlowLogRecordsResponse Alibabacloud_Gpdb20160503::Client::describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSlowLogRecords"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogRecordsResponse Alibabacloud_Gpdb20160503::Client::describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

DescribeSlowSQLLogsResponse Alibabacloud_Gpdb20160503::Client::describeSlowSQLLogsWithOptions(shared_ptr<DescribeSlowSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowSQLLogsResponse(doRPCRequest(make_shared<string>("DescribeSlowSQLLogs"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowSQLLogsResponse Alibabacloud_Gpdb20160503::Client::describeSlowSQLLogs(shared_ptr<DescribeSlowSQLLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowSQLLogsWithOptions(request, runtime);
}

DescribeSpecificationResponse Alibabacloud_Gpdb20160503::Client::describeSpecificationWithOptions(shared_ptr<DescribeSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSpecificationResponse(doRPCRequest(make_shared<string>("DescribeSpecification"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSpecificationResponse Alibabacloud_Gpdb20160503::Client::describeSpecification(shared_ptr<DescribeSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSpecificationWithOptions(request, runtime);
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Gpdb20160503::Client::describeSQLCollectorPolicyWithOptions(shared_ptr<DescribeSQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLCollectorPolicyResponse(doRPCRequest(make_shared<string>("DescribeSQLCollectorPolicy"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Gpdb20160503::Client::describeSQLCollectorPolicy(shared_ptr<DescribeSQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLCollectorPolicyWithOptions(request, runtime);
}

DescribeSQLLogByQueryIdResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogByQueryIdWithOptions(shared_ptr<DescribeSQLLogByQueryIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogByQueryIdResponse(doRPCRequest(make_shared<string>("DescribeSQLLogByQueryId"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogByQueryIdResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogByQueryId(shared_ptr<DescribeSQLLogByQueryIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogByQueryIdWithOptions(request, runtime);
}

DescribeSQLLogCountResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogCountWithOptions(shared_ptr<DescribeSQLLogCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogCountResponse(doRPCRequest(make_shared<string>("DescribeSQLLogCount"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogCountResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogCount(shared_ptr<DescribeSQLLogCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogCountWithOptions(request, runtime);
}

DescribeSQLLogFilesResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogFilesWithOptions(shared_ptr<DescribeSQLLogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogFilesResponse(doRPCRequest(make_shared<string>("DescribeSQLLogFiles"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogFilesResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogFiles(shared_ptr<DescribeSQLLogFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogFilesWithOptions(request, runtime);
}

DescribeSQLLogRecordsResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogRecordsWithOptions(shared_ptr<DescribeSQLLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSQLLogRecords"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogRecordsResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogRecords(shared_ptr<DescribeSQLLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogRecordsWithOptions(request, runtime);
}

DescribeSQLLogsResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogsWithOptions(shared_ptr<DescribeSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogsResponse(doRPCRequest(make_shared<string>("DescribeSQLLogs"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogsResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogs(shared_ptr<DescribeSQLLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogsWithOptions(request, runtime);
}

DescribeSQLLogsOnSliceResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogsOnSliceWithOptions(shared_ptr<DescribeSQLLogsOnSliceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogsOnSliceResponse(doRPCRequest(make_shared<string>("DescribeSQLLogsOnSlice"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogsOnSliceResponse Alibabacloud_Gpdb20160503::Client::describeSQLLogsOnSlice(shared_ptr<DescribeSQLLogsOnSliceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogsOnSliceWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Gpdb20160503::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTagsResponse(doRPCRequest(make_shared<string>("DescribeTags"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTagsResponse Alibabacloud_Gpdb20160503::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Gpdb20160503::Client::describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserEncryptionKeyListResponse(doRPCRequest(make_shared<string>("DescribeUserEncryptionKeyList"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Gpdb20160503::Client::describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Gpdb20160503::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Gpdb20160503::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Gpdb20160503::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Gpdb20160503::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Gpdb20160503::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicy"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Gpdb20160503::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceConnectionModeWithOptions(shared_ptr<ModifyDBInstanceConnectionModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConnectionModeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConnectionMode"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceConnectionMode(shared_ptr<ModifyDBInstanceConnectionModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionModeWithOptions(request, runtime);
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConnectionStringResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConnectionString"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceDescription"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceMaintainTimeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceMaintainTime"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceNetworkTypeWithOptions(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceNetworkTypeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceNetworkType"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceNetworkType(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

ModifyDBInstanceSSLResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceSSLResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceSSL"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceSSLResponse Alibabacloud_Gpdb20160503::Client::modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

ModifyParametersResponse Alibabacloud_Gpdb20160503::Client::modifyParametersWithOptions(shared_ptr<ModifyParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyParametersResponse(doRPCRequest(make_shared<string>("ModifyParameters"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyParametersResponse Alibabacloud_Gpdb20160503::Client::modifyParameters(shared_ptr<ModifyParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParametersWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_Gpdb20160503::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityIpsResponse(doRPCRequest(make_shared<string>("ModifySecurityIps"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_Gpdb20160503::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ModifySQLCollectorPolicyResponse Alibabacloud_Gpdb20160503::Client::modifySQLCollectorPolicyWithOptions(shared_ptr<ModifySQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySQLCollectorPolicyResponse(doRPCRequest(make_shared<string>("ModifySQLCollectorPolicy"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySQLCollectorPolicyResponse Alibabacloud_Gpdb20160503::Client::modifySQLCollectorPolicy(shared_ptr<ModifySQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySQLCollectorPolicyWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Gpdb20160503::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("ReleaseInstancePublicConnection"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Gpdb20160503::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_Gpdb20160503::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAccountPasswordResponse(doRPCRequest(make_shared<string>("ResetAccountPassword"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_Gpdb20160503::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

RestartDBInstanceResponse Alibabacloud_Gpdb20160503::Client::restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDBInstanceResponse(doRPCRequest(make_shared<string>("RestartDBInstance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDBInstanceResponse Alibabacloud_Gpdb20160503::Client::restartDBInstance(shared_ptr<RestartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDBInstanceWithOptions(request, runtime);
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Gpdb20160503::Client::switchDBInstanceNetTypeWithOptions(shared_ptr<SwitchDBInstanceNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchDBInstanceNetTypeResponse(doRPCRequest(make_shared<string>("SwitchDBInstanceNetType"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Gpdb20160503::Client::switchDBInstanceNetType(shared_ptr<SwitchDBInstanceNetTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceNetTypeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Gpdb20160503::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Gpdb20160503::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Gpdb20160503::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Gpdb20160503::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeDBInstanceResponse Alibabacloud_Gpdb20160503::Client::upgradeDBInstanceWithOptions(shared_ptr<UpgradeDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBInstanceResponse(doRPCRequest(make_shared<string>("UpgradeDBInstance"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBInstanceResponse Alibabacloud_Gpdb20160503::Client::upgradeDBInstance(shared_ptr<UpgradeDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceWithOptions(request, runtime);
}

UpgradeDBVersionResponse Alibabacloud_Gpdb20160503::Client::upgradeDBVersionWithOptions(shared_ptr<UpgradeDBVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBVersionResponse(doRPCRequest(make_shared<string>("UpgradeDBVersion"), make_shared<string>("2016-05-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBVersionResponse Alibabacloud_Gpdb20160503::Client::upgradeDBVersion(shared_ptr<UpgradeDBVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBVersionWithOptions(request, runtime);
}

