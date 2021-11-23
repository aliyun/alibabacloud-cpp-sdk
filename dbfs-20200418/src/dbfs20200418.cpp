// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbfs20200418.hpp>
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

using namespace Alibabacloud_DBFS20200418;

Alibabacloud_DBFS20200418::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "dbfs.aliyuncs.com"},
    {"cn-beijing-finance-1", "dbfs.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dbfs.aliyuncs.com"},
    {"cn-beijing-gov-1", "dbfs.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dbfs.aliyuncs.com"},
    {"cn-edge-1", "dbfs.aliyuncs.com"},
    {"cn-fujian", "dbfs.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-finance", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dbfs.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dbfs.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "dbfs.aliyuncs.com"},
    {"cn-north-2-gov-1", "dbfs.aliyuncs.com"},
    {"cn-qingdao-nebula", "dbfs.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dbfs.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dbfs.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dbfs.aliyuncs.com"},
    {"cn-shanghai-inner", "dbfs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-inner", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dbfs.aliyuncs.com"},
    {"cn-wuhan", "dbfs.aliyuncs.com"},
    {"cn-wulanchabu", "dbfs.aliyuncs.com"},
    {"cn-yushanfang", "dbfs.aliyuncs.com"},
    {"cn-zhangbei", "dbfs.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dbfs.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dbfs.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dbfs.aliyuncs.com"},
    {"eu-west-1-oxs", "dbfs.aliyuncs.com"},
    {"rus-west-1-pop", "dbfs.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dbfs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DBFS20200418::Client::getEndpoint(shared_ptr<string> productId,
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

AddTagsBatchResponse Alibabacloud_DBFS20200418::Client::addTagsBatchWithOptions(shared_ptr<AddTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTagsBatchResponse(doRPCRequest(make_shared<string>("AddTagsBatch"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTagsBatchResponse Alibabacloud_DBFS20200418::Client::addTagsBatch(shared_ptr<AddTagsBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsBatchWithOptions(request, runtime);
}

AttachDbfsResponse Alibabacloud_DBFS20200418::Client::attachDbfsWithOptions(shared_ptr<AttachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachDbfsResponse(doRPCRequest(make_shared<string>("AttachDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachDbfsResponse Alibabacloud_DBFS20200418::Client::attachDbfs(shared_ptr<AttachDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDbfsWithOptions(request, runtime);
}

CreateConstantsResponse Alibabacloud_DBFS20200418::Client::createConstantsWithOptions(shared_ptr<CreateConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConstantsResponse(doRPCRequest(make_shared<string>("CreateConstants"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConstantsResponse Alibabacloud_DBFS20200418::Client::createConstants(shared_ptr<CreateConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConstantsWithOptions(request, runtime);
}

CreateDbfsResponse Alibabacloud_DBFS20200418::Client::createDbfsWithOptions(shared_ptr<CreateDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDbfsResponse(doRPCRequest(make_shared<string>("CreateDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDbfsResponse Alibabacloud_DBFS20200418::Client::createDbfs(shared_ptr<CreateDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDbfsWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateServiceLinkedRole"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_DBFS20200418::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_DBFS20200418::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteConstantsResponse Alibabacloud_DBFS20200418::Client::deleteConstantsWithOptions(shared_ptr<DeleteConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConstantsResponse(doRPCRequest(make_shared<string>("DeleteConstants"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConstantsResponse Alibabacloud_DBFS20200418::Client::deleteConstants(shared_ptr<DeleteConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConstantsWithOptions(request, runtime);
}

DeleteDbfsResponse Alibabacloud_DBFS20200418::Client::deleteDbfsWithOptions(shared_ptr<DeleteDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDbfsResponse(doRPCRequest(make_shared<string>("DeleteDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDbfsResponse Alibabacloud_DBFS20200418::Client::deleteDbfs(shared_ptr<DeleteDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDbfsWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_DBFS20200418::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_DBFS20200418::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteTagsBatchResponse Alibabacloud_DBFS20200418::Client::deleteTagsBatchWithOptions(shared_ptr<DeleteTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTagsBatchResponse(doRPCRequest(make_shared<string>("DeleteTagsBatch"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTagsBatchResponse Alibabacloud_DBFS20200418::Client::deleteTagsBatch(shared_ptr<DeleteTagsBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagsBatchWithOptions(request, runtime);
}

DescribeDbfsSpecificationsResponse Alibabacloud_DBFS20200418::Client::describeDbfsSpecificationsWithOptions(shared_ptr<DescribeDbfsSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDbfsSpecificationsResponse(doRPCRequest(make_shared<string>("DescribeDbfsSpecifications"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDbfsSpecificationsResponse Alibabacloud_DBFS20200418::Client::describeDbfsSpecifications(shared_ptr<DescribeDbfsSpecificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbfsSpecificationsWithOptions(request, runtime);
}

DescribeInstanceTypesResponse Alibabacloud_DBFS20200418::Client::describeInstanceTypesWithOptions(shared_ptr<DescribeInstanceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceTypesResponse(doRPCRequest(make_shared<string>("DescribeInstanceTypes"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceTypesResponse Alibabacloud_DBFS20200418::Client::describeInstanceTypes(shared_ptr<DescribeInstanceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypesWithOptions(request, runtime);
}

DetachDbfsResponse Alibabacloud_DBFS20200418::Client::detachDbfsWithOptions(shared_ptr<DetachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachDbfsResponse(doRPCRequest(make_shared<string>("DetachDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachDbfsResponse Alibabacloud_DBFS20200418::Client::detachDbfs(shared_ptr<DetachDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDbfsWithOptions(request, runtime);
}

GetDbfsResponse Alibabacloud_DBFS20200418::Client::getDbfsWithOptions(shared_ptr<GetDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDbfsResponse(doRPCRequest(make_shared<string>("GetDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDbfsResponse Alibabacloud_DBFS20200418::Client::getDbfs(shared_ptr<GetDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDbfsWithOptions(request, runtime);
}

GetServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::getServiceLinkedRoleWithOptions(shared_ptr<GetServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("GetServiceLinkedRole"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::getServiceLinkedRole(shared_ptr<GetServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceLinkedRoleWithOptions(request, runtime);
}

ListConstantsResponse Alibabacloud_DBFS20200418::Client::listConstantsWithOptions(shared_ptr<ListConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConstantsResponse(doRPCRequest(make_shared<string>("ListConstants"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConstantsResponse Alibabacloud_DBFS20200418::Client::listConstants(shared_ptr<ListConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConstantsWithOptions(request, runtime);
}

ListDbfsResponse Alibabacloud_DBFS20200418::Client::listDbfsWithOptions(shared_ptr<ListDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDbfsResponse(doRPCRequest(make_shared<string>("ListDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDbfsResponse Alibabacloud_DBFS20200418::Client::listDbfs(shared_ptr<ListDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDbfsWithOptions(request, runtime);
}

ListSnapshotResponse Alibabacloud_DBFS20200418::Client::listSnapshotWithOptions(shared_ptr<ListSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSnapshotResponse(doRPCRequest(make_shared<string>("ListSnapshot"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSnapshotResponse Alibabacloud_DBFS20200418::Client::listSnapshot(shared_ptr<ListSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_DBFS20200418::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_DBFS20200418::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_DBFS20200418::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagValuesResponse(doRPCRequest(make_shared<string>("ListTagValues"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagValuesResponse Alibabacloud_DBFS20200418::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListTaskResponse Alibabacloud_DBFS20200418::Client::listTaskWithOptions(shared_ptr<ListTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTaskResponse(doRPCRequest(make_shared<string>("ListTask"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTaskResponse Alibabacloud_DBFS20200418::Client::listTask(shared_ptr<ListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskWithOptions(request, runtime);
}

OpreateConstantsResponse Alibabacloud_DBFS20200418::Client::opreateConstantsWithOptions(shared_ptr<OpreateConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpreateConstantsResponse(doRPCRequest(make_shared<string>("OpreateConstants"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpreateConstantsResponse Alibabacloud_DBFS20200418::Client::opreateConstants(shared_ptr<OpreateConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return opreateConstantsWithOptions(request, runtime);
}

RenameDbfsResponse Alibabacloud_DBFS20200418::Client::renameDbfsWithOptions(shared_ptr<RenameDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenameDbfsResponse(doRPCRequest(make_shared<string>("RenameDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenameDbfsResponse Alibabacloud_DBFS20200418::Client::renameDbfs(shared_ptr<RenameDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameDbfsWithOptions(request, runtime);
}

ResetDbfsResponse Alibabacloud_DBFS20200418::Client::resetDbfsWithOptions(shared_ptr<ResetDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetDbfsResponse(doRPCRequest(make_shared<string>("ResetDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetDbfsResponse Alibabacloud_DBFS20200418::Client::resetDbfs(shared_ptr<ResetDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDbfsWithOptions(request, runtime);
}

ResizeDbfsResponse Alibabacloud_DBFS20200418::Client::resizeDbfsWithOptions(shared_ptr<ResizeDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResizeDbfsResponse(doRPCRequest(make_shared<string>("ResizeDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResizeDbfsResponse Alibabacloud_DBFS20200418::Client::resizeDbfs(shared_ptr<ResizeDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeDbfsWithOptions(request, runtime);
}

TagDbfsResponse Alibabacloud_DBFS20200418::Client::tagDbfsWithOptions(shared_ptr<TagDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagDbfsResponse(doRPCRequest(make_shared<string>("TagDbfs"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagDbfsResponse Alibabacloud_DBFS20200418::Client::tagDbfs(shared_ptr<TagDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagDbfsWithOptions(request, runtime);
}

UpdateConstantsResponse Alibabacloud_DBFS20200418::Client::updateConstantsWithOptions(shared_ptr<UpdateConstantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConstantsResponse(doRPCRequest(make_shared<string>("UpdateConstants"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConstantsResponse Alibabacloud_DBFS20200418::Client::updateConstants(shared_ptr<UpdateConstantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConstantsWithOptions(request, runtime);
}

UpdateTaskResponse Alibabacloud_DBFS20200418::Client::updateTaskWithOptions(shared_ptr<UpdateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTaskResponse(doRPCRequest(make_shared<string>("UpdateTask"), make_shared<string>("2020-04-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTaskResponse Alibabacloud_DBFS20200418::Client::updateTask(shared_ptr<UpdateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskWithOptions(request, runtime);
}

