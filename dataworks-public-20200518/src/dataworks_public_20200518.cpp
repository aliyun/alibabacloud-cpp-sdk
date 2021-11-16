// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataworks_public_20200518.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <alibabacloud/rpc.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dataworks-public20200518;

Alibabacloud_Dataworks-public20200518::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "dataworks.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "dataworks.ap-south-1.aliyuncs.com"},
    {"ap-southeast-1", "dataworks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "dataworks.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "dataworks.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "dataworks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing", "dataworks.cn-beijing.aliyuncs.com"},
    {"cn-chengdu", "dataworks.cn-chengdu.aliyuncs.com"},
    {"cn-hangzhou", "dataworks.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "dataworks.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote", "dataworks.aliyuncs.com"},
    {"cn-qingdao", "dataworks.aliyuncs.com"},
    {"cn-shanghai", "dataworks.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "dataworks.cn-shenzhen.aliyuncs.com"},
    {"cn-zhangjiakou", "dataworks.aliyuncs.com"},
    {"eu-central-1", "dataworks.eu-central-1.aliyuncs.com"},
    {"eu-west-1", "dataworks.eu-west-1.aliyuncs.com"},
    {"me-east-1", "dataworks.me-east-1.aliyuncs.com"},
    {"us-east-1", "dataworks.us-east-1.aliyuncs.com"},
    {"us-west-1", "dataworks.us-west-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "dataworks.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dataworks.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dataworks.aliyuncs.com"},
    {"cn-north-2-gov-1", "dataworks.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dataworks-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dataworks-public20200518::Client::getEndpoint(shared_ptr<string> productId,
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

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApiWithOptions(shared_ptr<AbolishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AbolishDataServiceApiResponse(doRPCRequest(make_shared<string>("AbolishDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApi(shared_ptr<AbolishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishDataServiceApiWithOptions(request, runtime);
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRoleWithOptions(shared_ptr<AddProjectMemberToRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddProjectMemberToRoleResponse(doRPCRequest(make_shared<string>("AddProjectMemberToRole"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRole(shared_ptr<AddProjectMemberToRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addProjectMemberToRoleWithOptions(request, runtime);
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategoryWithOptions(shared_ptr<AddToMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddToMetaCategoryResponse(doRPCRequest(make_shared<string>("AddToMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategory(shared_ptr<AddToMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addToMetaCategoryWithOptions(request, runtime);
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrderWithOptions(shared_ptr<ApprovePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApprovePermissionApplyOrderResponse(doRPCRequest(make_shared<string>("ApprovePermissionApplyOrder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrder(shared_ptr<ApprovePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approvePermissionApplyOrderWithOptions(request, runtime);
}

CheckEngineMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaPartitionWithOptions(shared_ptr<CheckEngineMetaPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckEngineMetaPartitionResponse(doRPCRequest(make_shared<string>("CheckEngineMetaPartition"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckEngineMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaPartition(shared_ptr<CheckEngineMetaPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkEngineMetaPartitionWithOptions(request, runtime);
}

CheckEngineMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaTableWithOptions(shared_ptr<CheckEngineMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckEngineMetaTableResponse(doRPCRequest(make_shared<string>("CheckEngineMetaTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckEngineMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaTable(shared_ptr<CheckEngineMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkEngineMetaTableWithOptions(request, runtime);
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeploymentWithOptions(shared_ptr<CheckFileDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckFileDeploymentResponse(doRPCRequest(make_shared<string>("CheckFileDeployment"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeployment(shared_ptr<CheckFileDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFileDeploymentWithOptions(request, runtime);
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartitionWithOptions(shared_ptr<CheckMetaPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckMetaPartitionResponse(doRPCRequest(make_shared<string>("CheckMetaPartition"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartition(shared_ptr<CheckMetaPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaPartitionWithOptions(request, runtime);
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableWithOptions(shared_ptr<CheckMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckMetaTableResponse(doRPCRequest(make_shared<string>("CheckMetaTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTable(shared_ptr<CheckMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaTableWithOptions(request, runtime);
}

CheckMetaTableTaskResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableTaskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return CheckMetaTableTaskResponse(doRPCRequest(make_shared<string>("CheckMetaTableTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckMetaTableTaskResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableTask() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaTableTaskWithOptions(runtime);
}

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusinessWithOptions(shared_ptr<CreateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBusinessResponse(doRPCRequest(make_shared<string>("CreateBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusiness(shared_ptr<CreateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBusinessWithOptions(request, runtime);
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnectionWithOptions(shared_ptr<CreateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConnectionResponse(doRPCRequest(make_shared<string>("CreateConnection"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnection(shared_ptr<CreateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnectionWithOptions(request, runtime);
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTaskWithOptions(shared_ptr<CreateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDISyncTaskResponse(doRPCRequest(make_shared<string>("CreateDISyncTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTask(shared_ptr<CreateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDISyncTaskWithOptions(request, runtime);
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplementWithOptions(shared_ptr<CreateDagComplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDagComplementResponse(doRPCRequest(make_shared<string>("CreateDagComplement"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplement(shared_ptr<CreateDagComplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagComplementWithOptions(request, runtime);
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTestWithOptions(shared_ptr<CreateDagTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDagTestResponse(doRPCRequest(make_shared<string>("CreateDagTest"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTest(shared_ptr<CreateDagTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagTestWithOptions(request, runtime);
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiWithOptions(shared_ptr<CreateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataServiceApiResponse(doRPCRequest(make_shared<string>("CreateDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApi(shared_ptr<CreateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiWithOptions(request, runtime);
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthorityWithOptions(shared_ptr<CreateDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataServiceApiAuthorityResponse(doRPCRequest(make_shared<string>("CreateDataServiceApiAuthority"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthority(shared_ptr<CreateDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiAuthorityWithOptions(request, runtime);
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolderWithOptions(shared_ptr<CreateDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataServiceFolderResponse(doRPCRequest(make_shared<string>("CreateDataServiceFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolder(shared_ptr<CreateDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceFolderWithOptions(request, runtime);
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroupWithOptions(shared_ptr<CreateDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataServiceGroupResponse(doRPCRequest(make_shared<string>("CreateDataServiceGroup"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroup(shared_ptr<CreateDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceGroupWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataSourceResponse(doRPCRequest(make_shared<string>("CreateDataSource"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFileWithOptions(shared_ptr<CreateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFileResponse(doRPCRequest(make_shared<string>("CreateFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFile(shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileWithOptions(request, runtime);
}

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFolderResponse(doRPCRequest(make_shared<string>("CreateFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolder(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolderWithOptions(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationWithOptions(shared_ptr<CreateImportMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImportMigrationResponse(doRPCRequest(make_shared<string>("CreateImportMigration"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigration(shared_ptr<CreateImportMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImportMigrationWithOptions(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationAdvance(shared_ptr<CreateImportMigrationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("dataworks-public"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CreateImportMigrationRequest> createImportMigrationReq = make_shared<CreateImportMigrationRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createImportMigrationReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->packageFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
      {"content", !request->packageFileObject ? boost::any() : boost::any(*request->packageFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->accessKeyId ? boost::any() : boost::any(*authResponse->accessKeyId)},
      {"policy", !authResponse->encodedPolicy ? boost::any() : boost::any(*authResponse->encodedPolicy)},
      {"signature", !authResponse->signature ? boost::any() : boost::any(*authResponse->signature)},
      {"key", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->bucket ? boost::any() : boost::any(*authResponse->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    createImportMigrationReq->packageFile = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  }
  shared_ptr<CreateImportMigrationResponse> createImportMigrationResp = make_shared<CreateImportMigrationResponse>(createImportMigrationWithOptions(createImportMigrationReq, runtime));
  return *createImportMigrationResp;
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDagWithOptions(shared_ptr<CreateManualDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateManualDagResponse(doRPCRequest(make_shared<string>("CreateManualDag"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDag(shared_ptr<CreateManualDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createManualDagWithOptions(request, runtime);
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategoryWithOptions(shared_ptr<CreateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMetaCategoryResponse(doRPCRequest(make_shared<string>("CreateMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategory(shared_ptr<CreateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaCategoryWithOptions(request, runtime);
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrderWithOptions(shared_ptr<CreatePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePermissionApplyOrderResponse(doRPCRequest(make_shared<string>("CreatePermissionApplyOrder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrder(shared_ptr<CreatePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPermissionApplyOrderWithOptions(request, runtime);
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMemberWithOptions(shared_ptr<CreateProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProjectMemberResponse(doRPCRequest(make_shared<string>("CreateProjectMember"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMember(shared_ptr<CreateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectMemberWithOptions(request, runtime);
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntityWithOptions(shared_ptr<CreateQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityEntityResponse(doRPCRequest(make_shared<string>("CreateQualityEntity"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntity(shared_ptr<CreateQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityEntityWithOptions(request, runtime);
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollowerWithOptions(shared_ptr<CreateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityFollowerResponse(doRPCRequest(make_shared<string>("CreateQualityFollower"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollower(shared_ptr<CreateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityFollowerWithOptions(request, runtime);
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNodeWithOptions(shared_ptr<CreateQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityRelativeNodeResponse(doRPCRequest(make_shared<string>("CreateQualityRelativeNode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNode(shared_ptr<CreateQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRelativeNodeWithOptions(request, runtime);
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRuleWithOptions(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityRuleResponse(doRPCRequest(make_shared<string>("CreateQualityRule"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRule(shared_ptr<CreateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRuleWithOptions(request, runtime);
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemindWithOptions(shared_ptr<CreateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRemindResponse(doRPCRequest(make_shared<string>("CreateRemind"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemind(shared_ptr<CreateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRemindWithOptions(request, runtime);
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTableWithOptions(shared_ptr<CreateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTableResponse(doRPCRequest(make_shared<string>("CreateTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTable(shared_ptr<CreateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableWithOptions(request, runtime);
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevelWithOptions(shared_ptr<CreateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTableLevelResponse(doRPCRequest(make_shared<string>("CreateTableLevel"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevel(shared_ptr<CreateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableLevelWithOptions(request, runtime);
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableThemeWithOptions(shared_ptr<CreateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTableThemeResponse(doRPCRequest(make_shared<string>("CreateTableTheme"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableTheme(shared_ptr<CreateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableThemeWithOptions(request, runtime);
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFileWithOptions(shared_ptr<CreateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUdfFileResponse(doRPCRequest(make_shared<string>("CreateUdfFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFile(shared_ptr<CreateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUdfFileWithOptions(request, runtime);
}

CreateViewResponse Alibabacloud_Dataworks-public20200518::Client::createViewWithOptions(shared_ptr<CreateViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateViewResponse(doRPCRequest(make_shared<string>("CreateView"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateViewResponse Alibabacloud_Dataworks-public20200518::Client::createView(shared_ptr<CreateViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createViewWithOptions(request, runtime);
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusinessWithOptions(shared_ptr<DeleteBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBusinessResponse(doRPCRequest(make_shared<string>("DeleteBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusiness(shared_ptr<DeleteBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessWithOptions(request, runtime);
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnectionWithOptions(shared_ptr<DeleteConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConnectionResponse(doRPCRequest(make_shared<string>("DeleteConnection"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnection(shared_ptr<DeleteConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnectionWithOptions(request, runtime);
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTaskWithOptions(shared_ptr<DeleteDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDISyncTaskResponse(doRPCRequest(make_shared<string>("DeleteDISyncTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTask(shared_ptr<DeleteDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDISyncTaskWithOptions(request, runtime);
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiWithOptions(shared_ptr<DeleteDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDataServiceApiResponse(doRPCRequest(make_shared<string>("DeleteDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApi(shared_ptr<DeleteDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApiWithOptions(request, runtime);
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthorityWithOptions(shared_ptr<DeleteDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDataServiceApiAuthorityResponse(doRPCRequest(make_shared<string>("DeleteDataServiceApiAuthority"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthority(shared_ptr<DeleteDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApiAuthorityWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDataSourceResponse(doRPCRequest(make_shared<string>("DeleteDataSource"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFileResponse(doRPCRequest(make_shared<string>("DeleteFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFile(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileWithOptions(request, runtime);
}

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFolderResponse(doRPCRequest(make_shared<string>("DeleteFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolderWithOptions(request, runtime);
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategoryWithOptions(shared_ptr<DeleteFromMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFromMetaCategoryResponse(doRPCRequest(make_shared<string>("DeleteFromMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategory(shared_ptr<DeleteFromMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFromMetaCategoryWithOptions(request, runtime);
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategoryWithOptions(shared_ptr<DeleteMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteMetaCategoryResponse(doRPCRequest(make_shared<string>("DeleteMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategory(shared_ptr<DeleteMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCategoryWithOptions(request, runtime);
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMemberWithOptions(shared_ptr<DeleteProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProjectMemberResponse(doRPCRequest(make_shared<string>("DeleteProjectMember"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMember(shared_ptr<DeleteProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectMemberWithOptions(request, runtime);
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntityWithOptions(shared_ptr<DeleteQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityEntityResponse(doRPCRequest(make_shared<string>("DeleteQualityEntity"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntity(shared_ptr<DeleteQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityEntityWithOptions(request, runtime);
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollowerWithOptions(shared_ptr<DeleteQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityFollowerResponse(doRPCRequest(make_shared<string>("DeleteQualityFollower"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollower(shared_ptr<DeleteQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityFollowerWithOptions(request, runtime);
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNodeWithOptions(shared_ptr<DeleteQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityRelativeNodeResponse(doRPCRequest(make_shared<string>("DeleteQualityRelativeNode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNode(shared_ptr<DeleteQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRelativeNodeWithOptions(request, runtime);
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRuleWithOptions(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityRuleResponse(doRPCRequest(make_shared<string>("DeleteQualityRule"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRuleWithOptions(request, runtime);
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemindWithOptions(shared_ptr<DeleteRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRemindResponse(doRPCRequest(make_shared<string>("DeleteRemind"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemind(shared_ptr<DeleteRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRemindWithOptions(request, runtime);
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableWithOptions(shared_ptr<DeleteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTableResponse(doRPCRequest(make_shared<string>("DeleteTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTable(shared_ptr<DeleteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableWithOptions(request, runtime);
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevelWithOptions(shared_ptr<DeleteTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTableLevelResponse(doRPCRequest(make_shared<string>("DeleteTableLevel"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevel(shared_ptr<DeleteTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableLevelWithOptions(request, runtime);
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableThemeWithOptions(shared_ptr<DeleteTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTableThemeResponse(doRPCRequest(make_shared<string>("DeleteTableTheme"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableTheme(shared_ptr<DeleteTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableThemeWithOptions(request, runtime);
}

DeleteViewResponse Alibabacloud_Dataworks-public20200518::Client::deleteViewWithOptions(shared_ptr<DeleteViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteViewResponse(doRPCRequest(make_shared<string>("DeleteView"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteViewResponse Alibabacloud_Dataworks-public20200518::Client::deleteView(shared_ptr<DeleteViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteViewWithOptions(request, runtime);
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTaskWithOptions(shared_ptr<DeployDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeployDISyncTaskResponse(doRPCRequest(make_shared<string>("DeployDISyncTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTask(shared_ptr<DeployDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployDISyncTaskWithOptions(request, runtime);
}

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFileWithOptions(shared_ptr<DeployFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeployFileResponse(doRPCRequest(make_shared<string>("DeployFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFile(shared_ptr<DeployFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFileWithOptions(request, runtime);
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeDataWithOptions(shared_ptr<DesensitizeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DesensitizeDataResponse(doRPCRequest(make_shared<string>("DesensitizeData"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeData(shared_ptr<DesensitizeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return desensitizeDataWithOptions(request, runtime);
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusinessWithOptions(shared_ptr<EstablishRelationTableToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EstablishRelationTableToBusinessResponse(doRPCRequest(make_shared<string>("EstablishRelationTableToBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusiness(shared_ptr<EstablishRelationTableToBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return establishRelationTableToBusinessWithOptions(request, runtime);
}

ExportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::exportConnectionsWithOptions(shared_ptr<ExportConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ExportConnectionsResponse(doRPCRequest(make_shared<string>("ExportConnections"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::exportConnections(shared_ptr<ExportConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportConnectionsWithOptions(request, runtime);
}

ExportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::exportDISyncTasksWithOptions(shared_ptr<ExportDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportDISyncTasksResponse(doRPCRequest(make_shared<string>("ExportDISyncTasks"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::exportDISyncTasks(shared_ptr<ExportDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDISyncTasksWithOptions(request, runtime);
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSourcesWithOptions(shared_ptr<ExportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ExportDataSourcesResponse(doRPCRequest(make_shared<string>("ExportDataSources"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSources(shared_ptr<ExportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDataSourcesWithOptions(request, runtime);
}

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreatingWithOptions(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateDISyncTaskConfigForCreatingResponse(doRPCRequest(make_shared<string>("GenerateDISyncTaskConfigForCreating"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreating(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForCreatingWithOptions(request, runtime);
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdatingWithOptions(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateDISyncTaskConfigForUpdatingResponse(doRPCRequest(make_shared<string>("GenerateDISyncTaskConfigForUpdating"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdating(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForUpdatingWithOptions(request, runtime);
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfigWithOptions(shared_ptr<GetBaselineConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBaselineConfigResponse(doRPCRequest(make_shared<string>("GetBaselineConfig"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfig(shared_ptr<GetBaselineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineConfigWithOptions(request, runtime);
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPathWithOptions(shared_ptr<GetBaselineKeyPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBaselineKeyPathResponse(doRPCRequest(make_shared<string>("GetBaselineKeyPath"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPath(shared_ptr<GetBaselineKeyPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineKeyPathWithOptions(request, runtime);
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatusWithOptions(shared_ptr<GetBaselineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBaselineStatusResponse(doRPCRequest(make_shared<string>("GetBaselineStatus"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatus(shared_ptr<GetBaselineStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineStatusWithOptions(request, runtime);
}

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusinessWithOptions(shared_ptr<GetBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBusinessResponse(doRPCRequest(make_shared<string>("GetBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusiness(shared_ptr<GetBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessWithOptions(request, runtime);
}

GetConnectionMetaResponse Alibabacloud_Dataworks-public20200518::Client::getConnectionMetaWithOptions(shared_ptr<GetConnectionMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConnectionMetaResponse(doRPCRequest(make_shared<string>("GetConnectionMeta"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConnectionMetaResponse Alibabacloud_Dataworks-public20200518::Client::getConnectionMeta(shared_ptr<GetConnectionMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionMetaWithOptions(request, runtime);
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatusWithOptions(shared_ptr<GetDDLJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDDLJobStatusResponse(doRPCRequest(make_shared<string>("GetDDLJobStatus"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatus(shared_ptr<GetDDLJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDDLJobStatusWithOptions(request, runtime);
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfoWithOptions(shared_ptr<GetDISyncInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDISyncInstanceInfoResponse(doRPCRequest(make_shared<string>("GetDISyncInstanceInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfo(shared_ptr<GetDISyncInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncInstanceInfoWithOptions(request, runtime);
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTaskWithOptions(shared_ptr<GetDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDISyncTaskResponse(doRPCRequest(make_shared<string>("GetDISyncTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTask(shared_ptr<GetDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncTaskWithOptions(request, runtime);
}

GetDISyncTaskMetricInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTaskMetricInfoWithOptions(shared_ptr<GetDISyncTaskMetricInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDISyncTaskMetricInfoResponse(doRPCRequest(make_shared<string>("GetDISyncTaskMetricInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDISyncTaskMetricInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTaskMetricInfo(shared_ptr<GetDISyncTaskMetricInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncTaskMetricInfoWithOptions(request, runtime);
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDagWithOptions(shared_ptr<GetDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDagResponse(doRPCRequest(make_shared<string>("GetDag"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDag(shared_ptr<GetDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDagWithOptions(request, runtime);
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApiWithOptions(shared_ptr<GetDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataServiceApiResponse(doRPCRequest(make_shared<string>("GetDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApi(shared_ptr<GetDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiWithOptions(request, runtime);
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplicationWithOptions(shared_ptr<GetDataServiceApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataServiceApplicationResponse(doRPCRequest(make_shared<string>("GetDataServiceApplication"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplication(shared_ptr<GetDataServiceApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApplicationWithOptions(request, runtime);
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolderWithOptions(shared_ptr<GetDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataServiceFolderResponse(doRPCRequest(make_shared<string>("GetDataServiceFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolder(shared_ptr<GetDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceFolderWithOptions(request, runtime);
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroupWithOptions(shared_ptr<GetDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataServiceGroupResponse(doRPCRequest(make_shared<string>("GetDataServiceGroup"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroup(shared_ptr<GetDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceGroupWithOptions(request, runtime);
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApiWithOptions(shared_ptr<GetDataServicePublishedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataServicePublishedApiResponse(doRPCRequest(make_shared<string>("GetDataServicePublishedApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApi(shared_ptr<GetDataServicePublishedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServicePublishedApiWithOptions(request, runtime);
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMetaWithOptions(shared_ptr<GetDataSourceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataSourceMetaResponse(doRPCRequest(make_shared<string>("GetDataSourceMeta"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMeta(shared_ptr<GetDataSourceMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceMetaWithOptions(request, runtime);
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeploymentWithOptions(shared_ptr<GetDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeploymentResponse(doRPCRequest(make_shared<string>("GetDeployment"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeployment(shared_ptr<GetDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeploymentWithOptions(request, runtime);
}

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFileWithOptions(shared_ptr<GetFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFileResponse(doRPCRequest(make_shared<string>("GetFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFile(shared_ptr<GetFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileWithOptions(request, runtime);
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatisticWithOptions(shared_ptr<GetFileTypeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFileTypeStatisticResponse(doRPCRequest(make_shared<string>("GetFileTypeStatistic"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatistic(shared_ptr<GetFileTypeStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileTypeStatisticWithOptions(request, runtime);
}

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersionWithOptions(shared_ptr<GetFileVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFileVersionResponse(doRPCRequest(make_shared<string>("GetFileVersion"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersion(shared_ptr<GetFileVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileVersionWithOptions(request, runtime);
}

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFolderResponse(doRPCRequest(make_shared<string>("GetFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolder(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolderWithOptions(request, runtime);
}

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20200518::Client::getIDEEventDetailWithOptions(shared_ptr<GetIDEEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIDEEventDetailResponse(doRPCRequest(make_shared<string>("GetIDEEventDetail"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20200518::Client::getIDEEventDetail(shared_ptr<GetIDEEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIDEEventDetailWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceResponse(doRPCRequest(make_shared<string>("GetInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRankWithOptions(shared_ptr<GetInstanceConsumeTimeRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceConsumeTimeRankResponse(doRPCRequest(make_shared<string>("GetInstanceConsumeTimeRank"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRank(shared_ptr<GetInstanceConsumeTimeRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceConsumeTimeRankWithOptions(request, runtime);
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrendWithOptions(shared_ptr<GetInstanceCountTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceCountTrendResponse(doRPCRequest(make_shared<string>("GetInstanceCountTrend"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrend(shared_ptr<GetInstanceCountTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceCountTrendWithOptions(request, runtime);
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRankWithOptions(shared_ptr<GetInstanceErrorRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceErrorRankResponse(doRPCRequest(make_shared<string>("GetInstanceErrorRank"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRank(shared_ptr<GetInstanceErrorRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceErrorRankWithOptions(request, runtime);
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLogWithOptions(shared_ptr<GetInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceLogResponse(doRPCRequest(make_shared<string>("GetInstanceLog"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLog(shared_ptr<GetInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceLogWithOptions(request, runtime);
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCountWithOptions(shared_ptr<GetInstanceStatusCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceStatusCountResponse(doRPCRequest(make_shared<string>("GetInstanceStatusCount"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCount(shared_ptr<GetInstanceStatusCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusCountWithOptions(request, runtime);
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatisticWithOptions(shared_ptr<GetInstanceStatusStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceStatusStatisticResponse(doRPCRequest(make_shared<string>("GetInstanceStatusStatistic"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatistic(shared_ptr<GetInstanceStatusStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusStatisticWithOptions(request, runtime);
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstancesWithOptions(shared_ptr<GetManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetManualDagInstancesResponse(doRPCRequest(make_shared<string>("GetManualDagInstances"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstances(shared_ptr<GetManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManualDagInstancesWithOptions(request, runtime);
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategoryWithOptions(shared_ptr<GetMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaCategoryResponse(doRPCRequest(make_shared<string>("GetMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategory(shared_ptr<GetMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaCategoryWithOptions(request, runtime);
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineageWithOptions(shared_ptr<GetMetaColumnLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaColumnLineageResponse(doRPCRequest(make_shared<string>("GetMetaColumnLineage"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineage(shared_ptr<GetMetaColumnLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaColumnLineageWithOptions(request, runtime);
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfoWithOptions(shared_ptr<GetMetaDBInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaDBInfoResponse(doRPCRequest(make_shared<string>("GetMetaDBInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfo(shared_ptr<GetMetaDBInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBInfoWithOptions(request, runtime);
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableListWithOptions(shared_ptr<GetMetaDBTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaDBTableListResponse(doRPCRequest(make_shared<string>("GetMetaDBTableList"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableList(shared_ptr<GetMetaDBTableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBTableListWithOptions(request, runtime);
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfoWithOptions(shared_ptr<GetMetaTableBasicInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaTableBasicInfoResponse(doRPCRequest(make_shared<string>("GetMetaTableBasicInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfo(shared_ptr<GetMetaTableBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableBasicInfoWithOptions(request, runtime);
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLogWithOptions(shared_ptr<GetMetaTableChangeLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableChangeLogResponse(doRPCRequest(make_shared<string>("GetMetaTableChangeLog"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLog(shared_ptr<GetMetaTableChangeLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableChangeLogWithOptions(request, runtime);
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumnWithOptions(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaTableColumnResponse(doRPCRequest(make_shared<string>("GetMetaTableColumn"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableColumnWithOptions(request, runtime);
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfoWithOptions(shared_ptr<GetMetaTableFullInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaTableFullInfoResponse(doRPCRequest(make_shared<string>("GetMetaTableFullInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfo(shared_ptr<GetMetaTableFullInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableFullInfoWithOptions(request, runtime);
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWikiWithOptions(shared_ptr<GetMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableIntroWikiResponse(doRPCRequest(make_shared<string>("GetMetaTableIntroWiki"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWiki(shared_ptr<GetMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableIntroWikiWithOptions(request, runtime);
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineageWithOptions(shared_ptr<GetMetaTableLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableLineageResponse(doRPCRequest(make_shared<string>("GetMetaTableLineage"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineage(shared_ptr<GetMetaTableLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableLineageWithOptions(request, runtime);
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategoryWithOptions(shared_ptr<GetMetaTableListByCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaTableListByCategoryResponse(doRPCRequest(make_shared<string>("GetMetaTableListByCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategory(shared_ptr<GetMetaTableListByCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableListByCategoryWithOptions(request, runtime);
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutputWithOptions(shared_ptr<GetMetaTableOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableOutputResponse(doRPCRequest(make_shared<string>("GetMetaTableOutput"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutput(shared_ptr<GetMetaTableOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableOutputWithOptions(request, runtime);
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartitionWithOptions(shared_ptr<GetMetaTablePartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTablePartitionResponse(doRPCRequest(make_shared<string>("GetMetaTablePartition"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartition(shared_ptr<GetMetaTablePartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTablePartitionWithOptions(request, runtime);
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevelWithOptions(shared_ptr<GetMetaTableThemeLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMetaTableThemeLevelResponse(doRPCRequest(make_shared<string>("GetMetaTableThemeLevel"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevel(shared_ptr<GetMetaTableThemeLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableThemeLevelWithOptions(request, runtime);
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcessWithOptions(shared_ptr<GetMigrationProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMigrationProcessResponse(doRPCRequest(make_shared<string>("GetMigrationProcess"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcess(shared_ptr<GetMigrationProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMigrationProcessWithOptions(request, runtime);
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeWithOptions(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeResponse(doRPCRequest(make_shared<string>("GetNode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNode(shared_ptr<GetNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeWithOptions(request, runtime);
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildrenWithOptions(shared_ptr<GetNodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeChildrenResponse(doRPCRequest(make_shared<string>("GetNodeChildren"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildren(shared_ptr<GetNodeChildrenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeChildrenWithOptions(request, runtime);
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCodeWithOptions(shared_ptr<GetNodeCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeCodeResponse(doRPCRequest(make_shared<string>("GetNodeCode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCode(shared_ptr<GetNodeCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeCodeWithOptions(request, runtime);
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaselineWithOptions(shared_ptr<GetNodeOnBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeOnBaselineResponse(doRPCRequest(make_shared<string>("GetNodeOnBaseline"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaseline(shared_ptr<GetNodeOnBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeOnBaselineWithOptions(request, runtime);
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParentsWithOptions(shared_ptr<GetNodeParentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeParentsResponse(doRPCRequest(make_shared<string>("GetNodeParents"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParents(shared_ptr<GetNodeParentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeParentsWithOptions(request, runtime);
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfoWithOptions(shared_ptr<GetNodeTypeListInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodeTypeListInfoResponse(doRPCRequest(make_shared<string>("GetNodeTypeListInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfo(shared_ptr<GetNodeTypeListInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeTypeListInfoWithOptions(request, runtime);
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskDataWithOptions(shared_ptr<GetOpRiskDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetOpRiskDataResponse(doRPCRequest(make_shared<string>("GetOpRiskData"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskData(shared_ptr<GetOpRiskDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpRiskDataWithOptions(request, runtime);
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveDataWithOptions(shared_ptr<GetOpSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetOpSensitiveDataResponse(doRPCRequest(make_shared<string>("GetOpSensitiveData"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveData(shared_ptr<GetOpSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpSensitiveDataWithOptions(request, runtime);
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetailWithOptions(shared_ptr<GetPermissionApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPermissionApplyOrderDetailResponse(doRPCRequest(make_shared<string>("GetPermissionApplyOrderDetail"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetail(shared_ptr<GetPermissionApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermissionApplyOrderDetailWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetProjectResponse(doRPCRequest(make_shared<string>("GetProject"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetailWithOptions(shared_ptr<GetProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetProjectDetailResponse(doRPCRequest(make_shared<string>("GetProjectDetail"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetail(shared_ptr<GetProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectDetailWithOptions(request, runtime);
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntityWithOptions(shared_ptr<GetQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityEntityResponse(doRPCRequest(make_shared<string>("GetQualityEntity"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntity(shared_ptr<GetQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityEntityWithOptions(request, runtime);
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollowerWithOptions(shared_ptr<GetQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityFollowerResponse(doRPCRequest(make_shared<string>("GetQualityFollower"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollower(shared_ptr<GetQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityFollowerWithOptions(request, runtime);
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRuleWithOptions(shared_ptr<GetQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityRuleResponse(doRPCRequest(make_shared<string>("GetQualityRule"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRule(shared_ptr<GetQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleWithOptions(request, runtime);
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemindWithOptions(shared_ptr<GetRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRemindResponse(doRPCRequest(make_shared<string>("GetRemind"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemind(shared_ptr<GetRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRemindWithOptions(request, runtime);
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveDataWithOptions(shared_ptr<GetSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSensitiveDataResponse(doRPCRequest(make_shared<string>("GetSensitiveData"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveData(shared_ptr<GetSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSensitiveDataWithOptions(request, runtime);
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrendWithOptions(shared_ptr<GetSuccessInstanceTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSuccessInstanceTrendResponse(doRPCRequest(make_shared<string>("GetSuccessInstanceTrend"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrend(shared_ptr<GetSuccessInstanceTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuccessInstanceTrendWithOptions(request, runtime);
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopicWithOptions(shared_ptr<GetTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTopicResponse(doRPCRequest(make_shared<string>("GetTopic"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopic(shared_ptr<GetTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicWithOptions(request, runtime);
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluenceWithOptions(shared_ptr<GetTopicInfluenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTopicInfluenceResponse(doRPCRequest(make_shared<string>("GetTopicInfluence"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluence(shared_ptr<GetTopicInfluenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicInfluenceWithOptions(request, runtime);
}

ImportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::importConnectionsWithOptions(shared_ptr<ImportConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportConnectionsResponse(doRPCRequest(make_shared<string>("ImportConnections"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::importConnections(shared_ptr<ImportConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importConnectionsWithOptions(request, runtime);
}

ImportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::importDISyncTasksWithOptions(shared_ptr<ImportDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportDISyncTasksResponse(doRPCRequest(make_shared<string>("ImportDISyncTasks"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::importDISyncTasks(shared_ptr<ImportDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDISyncTasksWithOptions(request, runtime);
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSourcesWithOptions(shared_ptr<ImportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportDataSourcesResponse(doRPCRequest(make_shared<string>("ImportDataSources"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSources(shared_ptr<ImportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDataSourcesWithOptions(request, runtime);
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessagesWithOptions(shared_ptr<ListAlertMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAlertMessagesResponse(doRPCRequest(make_shared<string>("ListAlertMessages"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessages(shared_ptr<ListAlertMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertMessagesWithOptions(request, runtime);
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigsWithOptions(shared_ptr<ListBaselineConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBaselineConfigsResponse(doRPCRequest(make_shared<string>("ListBaselineConfigs"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigs(shared_ptr<ListBaselineConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineConfigsWithOptions(request, runtime);
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatusesWithOptions(shared_ptr<ListBaselineStatusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBaselineStatusesResponse(doRPCRequest(make_shared<string>("ListBaselineStatuses"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatuses(shared_ptr<ListBaselineStatusesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineStatusesWithOptions(request, runtime);
}

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusinessWithOptions(shared_ptr<ListBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBusinessResponse(doRPCRequest(make_shared<string>("ListBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusiness(shared_ptr<ListBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusinessWithOptions(request, runtime);
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEnginesWithOptions(shared_ptr<ListCalcEnginesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCalcEnginesResponse(doRPCRequest(make_shared<string>("ListCalcEngines"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEngines(shared_ptr<ListCalcEnginesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCalcEnginesWithOptions(request, runtime);
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListConnectionsResponse(doRPCRequest(make_shared<string>("ListConnections"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnections(shared_ptr<ListConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionsWithOptions(request, runtime);
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfigWithOptions(shared_ptr<ListDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDIProjectConfigResponse(doRPCRequest(make_shared<string>("ListDIProjectConfig"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfig(shared_ptr<ListDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIProjectConfigWithOptions(request, runtime);
}

ListDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listDISyncTasksWithOptions(shared_ptr<ListDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDISyncTasksResponse(doRPCRequest(make_shared<string>("ListDISyncTasks"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listDISyncTasks(shared_ptr<ListDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDISyncTasksWithOptions(request, runtime);
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthoritiesWithOptions(shared_ptr<ListDataServiceApiAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceApiAuthoritiesResponse(doRPCRequest(make_shared<string>("ListDataServiceApiAuthorities"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthorities(shared_ptr<ListDataServiceApiAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiAuthoritiesWithOptions(request, runtime);
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApisWithOptions(shared_ptr<ListDataServiceApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceApisResponse(doRPCRequest(make_shared<string>("ListDataServiceApis"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApis(shared_ptr<ListDataServiceApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApisWithOptions(request, runtime);
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplicationsWithOptions(shared_ptr<ListDataServiceApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceApplicationsResponse(doRPCRequest(make_shared<string>("ListDataServiceApplications"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplications(shared_ptr<ListDataServiceApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApplicationsWithOptions(request, runtime);
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApisWithOptions(shared_ptr<ListDataServiceAuthorizedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceAuthorizedApisResponse(doRPCRequest(make_shared<string>("ListDataServiceAuthorizedApis"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApis(shared_ptr<ListDataServiceAuthorizedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceAuthorizedApisWithOptions(request, runtime);
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFoldersWithOptions(shared_ptr<ListDataServiceFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceFoldersResponse(doRPCRequest(make_shared<string>("ListDataServiceFolders"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFolders(shared_ptr<ListDataServiceFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceFoldersWithOptions(request, runtime);
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroupsWithOptions(shared_ptr<ListDataServiceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServiceGroupsResponse(doRPCRequest(make_shared<string>("ListDataServiceGroups"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroups(shared_ptr<ListDataServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceGroupsWithOptions(request, runtime);
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApisWithOptions(shared_ptr<ListDataServicePublishedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataServicePublishedApisResponse(doRPCRequest(make_shared<string>("ListDataServicePublishedApis"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApis(shared_ptr<ListDataServicePublishedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDataSourcesResponse(doRPCRequest(make_shared<string>("ListDataSources"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourcesWithOptions(request, runtime);
}

ListDeploymentsResponse Alibabacloud_Dataworks-public20200518::Client::listDeploymentsWithOptions(shared_ptr<ListDeploymentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeploymentsResponse(doRPCRequest(make_shared<string>("ListDeployments"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeploymentsResponse Alibabacloud_Dataworks-public20200518::Client::listDeployments(shared_ptr<ListDeploymentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeploymentsWithOptions(request, runtime);
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileTypeWithOptions(shared_ptr<ListFileTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFileTypeResponse(doRPCRequest(make_shared<string>("ListFileType"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileType(shared_ptr<ListFileTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileTypeWithOptions(request, runtime);
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersionsWithOptions(shared_ptr<ListFileVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFileVersionsResponse(doRPCRequest(make_shared<string>("ListFileVersions"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersions(shared_ptr<ListFileVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileVersionsWithOptions(request, runtime);
}

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFilesWithOptions(shared_ptr<ListFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFilesResponse(doRPCRequest(make_shared<string>("ListFiles"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFiles(shared_ptr<ListFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFilesWithOptions(request, runtime);
}

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFoldersWithOptions(shared_ptr<ListFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFoldersResponse(doRPCRequest(make_shared<string>("ListFolders"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFolders(shared_ptr<ListFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFoldersWithOptions(request, runtime);
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmountWithOptions(shared_ptr<ListInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstanceAmountResponse(doRPCRequest(make_shared<string>("ListInstanceAmount"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmount(shared_ptr<ListInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceAmountWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesResponse(doRPCRequest(make_shared<string>("ListInstances"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstancesWithOptions(shared_ptr<ListManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListManualDagInstancesResponse(doRPCRequest(make_shared<string>("ListManualDagInstances"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstances(shared_ptr<ListManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listManualDagInstancesWithOptions(request, runtime);
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDBWithOptions(shared_ptr<ListMetaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListMetaDBResponse(doRPCRequest(make_shared<string>("ListMetaDB"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDB(shared_ptr<ListMetaDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaDBWithOptions(request, runtime);
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIOWithOptions(shared_ptr<ListNodeIORequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNodeIOResponse(doRPCRequest(make_shared<string>("ListNodeIO"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIO(shared_ptr<ListNodeIORequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeIOWithOptions(request, runtime);
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutputWithOptions(shared_ptr<ListNodeInputOrOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNodeInputOrOutputResponse(doRPCRequest(make_shared<string>("ListNodeInputOrOutput"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutput(shared_ptr<ListNodeInputOrOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInputOrOutputWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNodesResponse(doRPCRequest(make_shared<string>("ListNodes"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaselineWithOptions(shared_ptr<ListNodesByBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNodesByBaselineResponse(doRPCRequest(make_shared<string>("ListNodesByBaseline"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaseline(shared_ptr<ListNodesByBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByBaselineWithOptions(request, runtime);
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutputWithOptions(shared_ptr<ListNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNodesByOutputResponse(doRPCRequest(make_shared<string>("ListNodesByOutput"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutput(shared_ptr<ListNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByOutputWithOptions(request, runtime);
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrdersWithOptions(shared_ptr<ListPermissionApplyOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPermissionApplyOrdersResponse(doRPCRequest(make_shared<string>("ListPermissionApplyOrders"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrders(shared_ptr<ListPermissionApplyOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPermissionApplyOrdersWithOptions(request, runtime);
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCountWithOptions(shared_ptr<ListProgramTypeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProgramTypeCountResponse(doRPCRequest(make_shared<string>("ListProgramTypeCount"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCount(shared_ptr<ListProgramTypeCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProgramTypeCountWithOptions(request, runtime);
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIdsWithOptions(shared_ptr<ListProjectIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectIdsResponse(doRPCRequest(make_shared<string>("ListProjectIds"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIds(shared_ptr<ListProjectIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectIdsWithOptions(request, runtime);
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembersWithOptions(shared_ptr<ListProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectMembersResponse(doRPCRequest(make_shared<string>("ListProjectMembers"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembers(shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectMembersWithOptions(request, runtime);
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRolesWithOptions(shared_ptr<ListProjectRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectRolesResponse(doRPCRequest(make_shared<string>("ListProjectRoles"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRoles(shared_ptr<ListProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectRolesWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectsResponse(doRPCRequest(make_shared<string>("ListProjects"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntityWithOptions(shared_ptr<ListQualityResultsByEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListQualityResultsByEntityResponse(doRPCRequest(make_shared<string>("ListQualityResultsByEntity"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntity(shared_ptr<ListQualityResultsByEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByEntityWithOptions(request, runtime);
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRuleWithOptions(shared_ptr<ListQualityResultsByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListQualityResultsByRuleResponse(doRPCRequest(make_shared<string>("ListQualityResultsByRule"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRule(shared_ptr<ListQualityResultsByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByRuleWithOptions(request, runtime);
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRulesWithOptions(shared_ptr<ListQualityRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListQualityRulesResponse(doRPCRequest(make_shared<string>("ListQualityRules"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRules(shared_ptr<ListQualityRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityRulesWithOptions(request, runtime);
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasksWithOptions(shared_ptr<ListRefDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRefDISyncTasksResponse(doRPCRequest(make_shared<string>("ListRefDISyncTasks"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasks(shared_ptr<ListRefDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRefDISyncTasksWithOptions(request, runtime);
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listRemindsWithOptions(shared_ptr<ListRemindsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRemindsResponse(doRPCRequest(make_shared<string>("ListReminds"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listReminds(shared_ptr<ListRemindsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemindsWithOptions(request, runtime);
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListResourceGroupsResponse(doRPCRequest(make_shared<string>("ListResourceGroups"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceGroupsWithOptions(request, runtime);
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmountWithOptions(shared_ptr<ListSuccessInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSuccessInstanceAmountResponse(doRPCRequest(make_shared<string>("ListSuccessInstanceAmount"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmount(shared_ptr<ListSuccessInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSuccessInstanceAmountWithOptions(request, runtime);
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevelWithOptions(shared_ptr<ListTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListTableLevelResponse(doRPCRequest(make_shared<string>("ListTableLevel"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevel(shared_ptr<ListTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableLevelWithOptions(request, runtime);
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableThemeWithOptions(shared_ptr<ListTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListTableThemeResponse(doRPCRequest(make_shared<string>("ListTableTheme"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableTheme(shared_ptr<ListTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableThemeWithOptions(request, runtime);
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopicsWithOptions(shared_ptr<ListTopicsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTopicsResponse(doRPCRequest(make_shared<string>("ListTopics"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopics(shared_ptr<ListTopicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicsWithOptions(request, runtime);
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApiWithOptions(shared_ptr<PublishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishDataServiceApiResponse(doRPCRequest(make_shared<string>("PublishDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApi(shared_ptr<PublishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDataServiceApiWithOptions(request, runtime);
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResultWithOptions(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDISyncTaskConfigProcessResultResponse(doRPCRequest(make_shared<string>("QueryDISyncTaskConfigProcessResult"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResult(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDISyncTaskConfigProcessResultWithOptions(request, runtime);
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngineWithOptions(shared_ptr<QueryPublicModelEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPublicModelEngineResponse(doRPCRequest(make_shared<string>("QueryPublicModelEngine"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngine(shared_ptr<QueryPublicModelEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPublicModelEngineWithOptions(request, runtime);
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRoleWithOptions(shared_ptr<RemoveProjectMemberFromRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveProjectMemberFromRoleResponse(doRPCRequest(make_shared<string>("RemoveProjectMemberFromRole"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRole(shared_ptr<RemoveProjectMemberFromRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeProjectMemberFromRoleWithOptions(request, runtime);
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartInstanceResponse(doRPCRequest(make_shared<string>("RestartInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstance(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartInstanceWithOptions(request, runtime);
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstanceWithOptions(shared_ptr<ResumeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeInstanceResponse(doRPCRequest(make_shared<string>("ResumeInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstance(shared_ptr<ResumeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeInstanceWithOptions(request, runtime);
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermissionWithOptions(shared_ptr<RevokeColumnPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeColumnPermissionResponse(doRPCRequest(make_shared<string>("RevokeColumnPermission"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermission(shared_ptr<RevokeColumnPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeColumnPermissionWithOptions(request, runtime);
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermissionWithOptions(shared_ptr<RevokeTablePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeTablePermissionResponse(doRPCRequest(make_shared<string>("RevokeTablePermission"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermission(shared_ptr<RevokeTablePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeTablePermissionWithOptions(request, runtime);
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodesWithOptions(shared_ptr<RunCycleDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunCycleDagNodesResponse(doRPCRequest(make_shared<string>("RunCycleDagNodes"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodes(shared_ptr<RunCycleDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCycleDagNodesWithOptions(request, runtime);
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodesWithOptions(shared_ptr<RunManualDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunManualDagNodesResponse(doRPCRequest(make_shared<string>("RunManualDagNodes"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodes(shared_ptr<RunManualDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runManualDagNodesWithOptions(request, runtime);
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTestWithOptions(shared_ptr<RunSmokeTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunSmokeTestResponse(doRPCRequest(make_shared<string>("RunSmokeTest"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTest(shared_ptr<RunSmokeTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runSmokeTestWithOptions(request, runtime);
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNodeWithOptions(shared_ptr<RunTriggerNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunTriggerNodeResponse(doRPCRequest(make_shared<string>("RunTriggerNode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNode(shared_ptr<RunTriggerNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTriggerNodeWithOptions(request, runtime);
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveDataWithOptions(shared_ptr<ScanSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ScanSensitiveDataResponse(doRPCRequest(make_shared<string>("ScanSensitiveData"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveData(shared_ptr<ScanSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scanSensitiveDataWithOptions(request, runtime);
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTablesWithOptions(shared_ptr<SearchMetaTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchMetaTablesResponse(doRPCRequest(make_shared<string>("SearchMetaTables"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTables(shared_ptr<SearchMetaTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMetaTablesWithOptions(request, runtime);
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutputWithOptions(shared_ptr<SearchNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchNodesByOutputResponse(doRPCRequest(make_shared<string>("SearchNodesByOutput"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutput(shared_ptr<SearchNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchNodesByOutputWithOptions(request, runtime);
}

SetConnectionShareResponse Alibabacloud_Dataworks-public20200518::Client::setConnectionShareWithOptions(shared_ptr<SetConnectionShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetConnectionShareResponse(doRPCRequest(make_shared<string>("SetConnectionShare"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetConnectionShareResponse Alibabacloud_Dataworks-public20200518::Client::setConnectionShare(shared_ptr<SetConnectionShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setConnectionShareWithOptions(request, runtime);
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShareWithOptions(shared_ptr<SetDataSourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDataSourceShareResponse(doRPCRequest(make_shared<string>("SetDataSourceShare"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShare(shared_ptr<SetDataSourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataSourceShareWithOptions(request, runtime);
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstanceWithOptions(shared_ptr<SetSuccessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetSuccessInstanceResponse(doRPCRequest(make_shared<string>("SetSuccessInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstance(shared_ptr<SetSuccessInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSuccessInstanceWithOptions(request, runtime);
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstanceWithOptions(shared_ptr<StartDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDISyncInstanceResponse(doRPCRequest(make_shared<string>("StartDISyncInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstance(shared_ptr<StartDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDISyncInstanceWithOptions(request, runtime);
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigrationWithOptions(shared_ptr<StartMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartMigrationResponse(doRPCRequest(make_shared<string>("StartMigration"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigration(shared_ptr<StartMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMigrationWithOptions(request, runtime);
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstanceWithOptions(shared_ptr<StopDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDISyncInstanceResponse(doRPCRequest(make_shared<string>("StopDISyncInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstance(shared_ptr<StopDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDISyncInstanceWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInstanceResponse(doRPCRequest(make_shared<string>("StopInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFileWithOptions(shared_ptr<SubmitFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFileResponse(doRPCRequest(make_shared<string>("SubmitFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFile(shared_ptr<SubmitFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFileWithOptions(request, runtime);
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstanceWithOptions(shared_ptr<SuspendInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendInstanceResponse(doRPCRequest(make_shared<string>("SuspendInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstance(shared_ptr<SuspendInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendInstanceWithOptions(request, runtime);
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstanceWithOptions(shared_ptr<TerminateDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TerminateDISyncInstanceResponse(doRPCRequest(make_shared<string>("TerminateDISyncInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstance(shared_ptr<TerminateDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateDISyncInstanceWithOptions(request, runtime);
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnectionWithOptions(shared_ptr<TestNetworkConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TestNetworkConnectionResponse(doRPCRequest(make_shared<string>("TestNetworkConnection"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnection(shared_ptr<TestNetworkConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testNetworkConnectionWithOptions(request, runtime);
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstanceWithOptions(shared_ptr<TopTenElapsedTimeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TopTenElapsedTimeInstanceResponse(doRPCRequest(make_shared<string>("TopTenElapsedTimeInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstance(shared_ptr<TopTenElapsedTimeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenElapsedTimeInstanceWithOptions(request, runtime);
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstanceWithOptions(shared_ptr<TopTenErrorTimesInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TopTenErrorTimesInstanceResponse(doRPCRequest(make_shared<string>("TopTenErrorTimesInstance"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstance(shared_ptr<TopTenErrorTimesInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenErrorTimesInstanceWithOptions(request, runtime);
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusinessWithOptions(shared_ptr<UpdateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateBusinessResponse(doRPCRequest(make_shared<string>("UpdateBusiness"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusiness(shared_ptr<UpdateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessWithOptions(request, runtime);
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnectionWithOptions(shared_ptr<UpdateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConnectionResponse(doRPCRequest(make_shared<string>("UpdateConnection"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnection(shared_ptr<UpdateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnectionWithOptions(request, runtime);
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfigWithOptions(shared_ptr<UpdateDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDIProjectConfigResponse(doRPCRequest(make_shared<string>("UpdateDIProjectConfig"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfig(shared_ptr<UpdateDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDIProjectConfigWithOptions(request, runtime);
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTaskWithOptions(shared_ptr<UpdateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDISyncTaskResponse(doRPCRequest(make_shared<string>("UpdateDISyncTask"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTask(shared_ptr<UpdateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDISyncTaskWithOptions(request, runtime);
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApiWithOptions(shared_ptr<UpdateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDataServiceApiResponse(doRPCRequest(make_shared<string>("UpdateDataServiceApi"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApi(shared_ptr<UpdateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataServiceApiWithOptions(request, runtime);
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSourceWithOptions(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDataSourceResponse(doRPCRequest(make_shared<string>("UpdateDataSource"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSource(shared_ptr<UpdateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceWithOptions(request, runtime);
}

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFileWithOptions(shared_ptr<UpdateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFileResponse(doRPCRequest(make_shared<string>("UpdateFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFile(shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileWithOptions(request, runtime);
}

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFolderResponse(doRPCRequest(make_shared<string>("UpdateFolder"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolder(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolderWithOptions(request, runtime);
}

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateIDEEventResultWithOptions(shared_ptr<UpdateIDEEventResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIDEEventResultResponse(doRPCRequest(make_shared<string>("UpdateIDEEventResult"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateIDEEventResult(shared_ptr<UpdateIDEEventResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIDEEventResultWithOptions(request, runtime);
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategoryWithOptions(shared_ptr<UpdateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMetaCategoryResponse(doRPCRequest(make_shared<string>("UpdateMetaCategory"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategory(shared_ptr<UpdateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaCategoryWithOptions(request, runtime);
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableWithOptions(shared_ptr<UpdateMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMetaTableResponse(doRPCRequest(make_shared<string>("UpdateMetaTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTable(shared_ptr<UpdateMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTableWithOptions(request, runtime);
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWikiWithOptions(shared_ptr<UpdateMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMetaTableIntroWikiResponse(doRPCRequest(make_shared<string>("UpdateMetaTableIntroWiki"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWiki(shared_ptr<UpdateMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTableIntroWikiWithOptions(request, runtime);
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwnerWithOptions(shared_ptr<UpdateNodeOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateNodeOwnerResponse(doRPCRequest(make_shared<string>("UpdateNodeOwner"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwner(shared_ptr<UpdateNodeOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeOwnerWithOptions(request, runtime);
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunModeWithOptions(shared_ptr<UpdateNodeRunModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateNodeRunModeResponse(doRPCRequest(make_shared<string>("UpdateNodeRunMode"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunMode(shared_ptr<UpdateNodeRunModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeRunModeWithOptions(request, runtime);
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollowerWithOptions(shared_ptr<UpdateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateQualityFollowerResponse(doRPCRequest(make_shared<string>("UpdateQualityFollower"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollower(shared_ptr<UpdateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityFollowerWithOptions(request, runtime);
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRuleWithOptions(shared_ptr<UpdateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateQualityRuleResponse(doRPCRequest(make_shared<string>("UpdateQualityRule"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRule(shared_ptr<UpdateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityRuleWithOptions(request, runtime);
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemindWithOptions(shared_ptr<UpdateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRemindResponse(doRPCRequest(make_shared<string>("UpdateRemind"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemind(shared_ptr<UpdateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRemindWithOptions(request, runtime);
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTableWithOptions(shared_ptr<UpdateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTableResponse(doRPCRequest(make_shared<string>("UpdateTable"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTable(shared_ptr<UpdateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableWithOptions(request, runtime);
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumnWithOptions(shared_ptr<UpdateTableAddColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTableAddColumnResponse(doRPCRequest(make_shared<string>("UpdateTableAddColumn"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumn(shared_ptr<UpdateTableAddColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableAddColumnWithOptions(request, runtime);
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevelWithOptions(shared_ptr<UpdateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTableLevelResponse(doRPCRequest(make_shared<string>("UpdateTableLevel"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevel(shared_ptr<UpdateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableLevelWithOptions(request, runtime);
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfoWithOptions(shared_ptr<UpdateTableModelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTableModelInfoResponse(doRPCRequest(make_shared<string>("UpdateTableModelInfo"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfo(shared_ptr<UpdateTableModelInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableModelInfoWithOptions(request, runtime);
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableThemeWithOptions(shared_ptr<UpdateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTableThemeResponse(doRPCRequest(make_shared<string>("UpdateTableTheme"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableTheme(shared_ptr<UpdateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableThemeWithOptions(request, runtime);
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFileWithOptions(shared_ptr<UpdateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUdfFileResponse(doRPCRequest(make_shared<string>("UpdateUdfFile"), make_shared<string>("2020-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFile(shared_ptr<UpdateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUdfFileWithOptions(request, runtime);
}

