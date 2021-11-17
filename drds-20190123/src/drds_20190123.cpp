// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/drds_20190123.hpp>
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

using namespace Alibabacloud_Drds20190123;

Alibabacloud_Drds20190123::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "drds.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "drds.aliyuncs.com"},
    {"cn-beijing-finance-pop", "drds.aliyuncs.com"},
    {"cn-beijing-gov-1", "drds.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "drds.aliyuncs.com"},
    {"cn-chengdu", "drds.aliyuncs.com"},
    {"cn-edge-1", "drds.aliyuncs.com"},
    {"cn-fujian", "drds.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "drds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "drds.aliyuncs.com"},
    {"cn-hangzhou-finance", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "drds.aliyuncs.com"},
    {"cn-hangzhou-test-306", "drds.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "drds.aliyuncs.com"},
    {"cn-qingdao-nebula", "drds.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "drds.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "drds.aliyuncs.com"},
    {"cn-shanghai-inner", "drds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "drds.aliyuncs.com"},
    {"cn-shenzhen-inner", "drds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "drds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "drds.aliyuncs.com"},
    {"cn-wuhan", "drds.aliyuncs.com"},
    {"cn-yushanfang", "drds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "drds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "drds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "drds.aliyuncs.com"},
    {"eu-central-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "drds.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "drds.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "drds.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("drds"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Drds20190123::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeAccountPasswordResponse Alibabacloud_Drds20190123::Client::changeAccountPasswordWithOptions(shared_ptr<ChangeAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeAccountPasswordResponse(doRPCRequest(make_shared<string>("ChangeAccountPassword"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeAccountPasswordResponse Alibabacloud_Drds20190123::Client::changeAccountPassword(shared_ptr<ChangeAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAccountPasswordWithOptions(request, runtime);
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzoneWithOptions(shared_ptr<ChangeInstanceAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeInstanceAzoneResponse(doRPCRequest(make_shared<string>("ChangeInstanceAzone"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzone(shared_ptr<ChangeInstanceAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeInstanceAzoneWithOptions(request, runtime);
}

ChangeInstanceNetworkResponse Alibabacloud_Drds20190123::Client::changeInstanceNetworkWithOptions(shared_ptr<ChangeInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeInstanceNetworkResponse(doRPCRequest(make_shared<string>("ChangeInstanceNetwork"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeInstanceNetworkResponse Alibabacloud_Drds20190123::Client::changeInstanceNetwork(shared_ptr<ChangeInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeInstanceNetworkWithOptions(request, runtime);
}

CheckConnectivityResponse Alibabacloud_Drds20190123::Client::checkConnectivityWithOptions(shared_ptr<CheckConnectivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckConnectivityShrinkRequest> request = make_shared<CheckConnectivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->dbInfo)) {
    request->dbInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dbInfo, make_shared<string>("DbInfo"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckConnectivityResponse(doRPCRequest(make_shared<string>("CheckConnectivity"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckConnectivityResponse Alibabacloud_Drds20190123::Client::checkConnectivity(shared_ptr<CheckConnectivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkConnectivityWithOptions(request, runtime);
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbNameWithOptions(shared_ptr<CheckDrdsDbNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckDrdsDbNameResponse(doRPCRequest(make_shared<string>("CheckDrdsDbName"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbName(shared_ptr<CheckDrdsDbNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDrdsDbNameWithOptions(request, runtime);
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatusWithOptions(shared_ptr<CheckExpandStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckExpandStatusResponse(doRPCRequest(make_shared<string>("CheckExpandStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatus(shared_ptr<CheckExpandStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkExpandStatusWithOptions(request, runtime);
}

CheckNewTableNameValidResponse Alibabacloud_Drds20190123::Client::checkNewTableNameValidWithOptions(shared_ptr<CheckNewTableNameValidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckNewTableNameValidResponse(doRPCRequest(make_shared<string>("CheckNewTableNameValid"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckNewTableNameValidResponse Alibabacloud_Drds20190123::Client::checkNewTableNameValid(shared_ptr<CheckNewTableNameValidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkNewTableNameValidWithOptions(request, runtime);
}

CheckRdsSuperAccountResponse Alibabacloud_Drds20190123::Client::checkRdsSuperAccountWithOptions(shared_ptr<CheckRdsSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckRdsSuperAccountResponse(doRPCRequest(make_shared<string>("CheckRdsSuperAccount"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckRdsSuperAccountResponse Alibabacloud_Drds20190123::Client::checkRdsSuperAccount(shared_ptr<CheckRdsSuperAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkRdsSuperAccountWithOptions(request, runtime);
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatusWithOptions(shared_ptr<CheckSqlAuditEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckSqlAuditEnableStatusResponse(doRPCRequest(make_shared<string>("CheckSqlAuditEnableStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatus(shared_ptr<CheckSqlAuditEnableStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSqlAuditEnableStatusWithOptions(request, runtime);
}

ConfigureDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::configureDrdsDbInstancesWithOptions(shared_ptr<ConfigureDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigureDrdsDbInstancesResponse(doRPCRequest(make_shared<string>("ConfigureDrdsDbInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigureDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::configureDrdsDbInstances(shared_ptr<ConfigureDrdsDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureDrdsDbInstancesWithOptions(request, runtime);
}

CreateCustomDataExportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataExportPreCheckTaskWithOptions(shared_ptr<CreateCustomDataExportPreCheckTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCustomDataExportPreCheckTaskShrinkRequest> request = make_shared<CreateCustomDataExportPreCheckTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->exportParam)) {
    request->exportParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->exportParam, make_shared<string>("ExportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomDataExportPreCheckTaskResponse(doRPCRequest(make_shared<string>("CreateCustomDataExportPreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomDataExportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataExportPreCheckTask(shared_ptr<CreateCustomDataExportPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomDataExportPreCheckTaskWithOptions(request, runtime);
}

CreateCustomDataExportTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataExportTaskWithOptions(shared_ptr<CreateCustomDataExportTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCustomDataExportTaskShrinkRequest> request = make_shared<CreateCustomDataExportTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->exportParam)) {
    request->exportParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->exportParam, make_shared<string>("ExportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomDataExportTaskResponse(doRPCRequest(make_shared<string>("CreateCustomDataExportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomDataExportTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataExportTask(shared_ptr<CreateCustomDataExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomDataExportTaskWithOptions(request, runtime);
}

CreateCustomDataImportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataImportPreCheckTaskWithOptions(shared_ptr<CreateCustomDataImportPreCheckTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCustomDataImportPreCheckTaskShrinkRequest> request = make_shared<CreateCustomDataImportPreCheckTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomDataImportPreCheckTaskResponse(doRPCRequest(make_shared<string>("CreateCustomDataImportPreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomDataImportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataImportPreCheckTask(shared_ptr<CreateCustomDataImportPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomDataImportPreCheckTaskWithOptions(request, runtime);
}

CreateCustomDataImportTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataImportTaskWithOptions(shared_ptr<CreateCustomDataImportTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCustomDataImportTaskShrinkRequest> request = make_shared<CreateCustomDataImportTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomDataImportTaskResponse(doRPCRequest(make_shared<string>("CreateCustomDataImportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomDataImportTaskResponse Alibabacloud_Drds20190123::Client::createCustomDataImportTask(shared_ptr<CreateCustomDataImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomDataImportTaskWithOptions(request, runtime);
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDBWithOptions(shared_ptr<CreateDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDrdsDBResponse(doRPCRequest(make_shared<string>("CreateDrdsDB"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDB(shared_ptr<CreateDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBWithOptions(request, runtime);
}

CreateDrdsDBPreCheckResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreCheckWithOptions(shared_ptr<CreateDrdsDBPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDrdsDBPreCheckResponse(doRPCRequest(make_shared<string>("CreateDrdsDBPreCheck"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDrdsDBPreCheckResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreCheck(shared_ptr<CreateDrdsDBPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBPreCheckWithOptions(request, runtime);
}

CreateDrdsDBPreviewResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreviewWithOptions(shared_ptr<CreateDrdsDBPreviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDrdsDBPreviewResponse(doRPCRequest(make_shared<string>("CreateDrdsDBPreview"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDrdsDBPreviewResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreview(shared_ptr<CreateDrdsDBPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBPreviewWithOptions(request, runtime);
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstanceWithOptions(shared_ptr<CreateDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDrdsInstanceResponse(doRPCRequest(make_shared<string>("CreateDrdsInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstance(shared_ptr<CreateDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsInstanceWithOptions(request, runtime);
}

CreateEvaluateDataImportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateDataImportPreCheckTaskWithOptions(shared_ptr<CreateEvaluateDataImportPreCheckTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEvaluateDataImportPreCheckTaskShrinkRequest> request = make_shared<CreateEvaluateDataImportPreCheckTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEvaluateDataImportPreCheckTaskResponse(doRPCRequest(make_shared<string>("CreateEvaluateDataImportPreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEvaluateDataImportPreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateDataImportPreCheckTask(shared_ptr<CreateEvaluateDataImportPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEvaluateDataImportPreCheckTaskWithOptions(request, runtime);
}

CreateEvaluateDataImportTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateDataImportTaskWithOptions(shared_ptr<CreateEvaluateDataImportTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEvaluateDataImportTaskShrinkRequest> request = make_shared<CreateEvaluateDataImportTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEvaluateDataImportTaskResponse(doRPCRequest(make_shared<string>("CreateEvaluateDataImportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEvaluateDataImportTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateDataImportTask(shared_ptr<CreateEvaluateDataImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEvaluateDataImportTaskWithOptions(request, runtime);
}

CreateEvaluatePreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluatePreCheckTaskWithOptions(shared_ptr<CreateEvaluatePreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEvaluatePreCheckTaskResponse(doRPCRequest(make_shared<string>("CreateEvaluatePreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEvaluatePreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluatePreCheckTask(shared_ptr<CreateEvaluatePreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEvaluatePreCheckTaskWithOptions(request, runtime);
}

CreateEvaluateTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateTaskWithOptions(shared_ptr<CreateEvaluateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEvaluateTaskResponse(doRPCRequest(make_shared<string>("CreateEvaluateTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEvaluateTaskResponse Alibabacloud_Drds20190123::Client::createEvaluateTask(shared_ptr<CreateEvaluateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEvaluateTaskWithOptions(request, runtime);
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccountWithOptions(shared_ptr<CreateInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceAccountResponse(doRPCRequest(make_shared<string>("CreateInstanceAccount"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccount(shared_ptr<CreateInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceAccountWithOptions(request, runtime);
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddressWithOptions(shared_ptr<CreateInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceInternetAddressResponse(doRPCRequest(make_shared<string>("CreateInstanceInternetAddress"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddress(shared_ptr<CreateInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceInternetAddressWithOptions(request, runtime);
}

CreateMyCatEvaluateResponse Alibabacloud_Drds20190123::Client::createMyCatEvaluateWithOptions(shared_ptr<CreateMyCatEvaluateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMyCatEvaluateResponse(doRPCRequest(make_shared<string>("CreateMyCatEvaluate"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMyCatEvaluateResponse Alibabacloud_Drds20190123::Client::createMyCatEvaluate(shared_ptr<CreateMyCatEvaluateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMyCatEvaluateWithOptions(request, runtime);
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRdsWithOptions(shared_ptr<CreateOrderForRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOrderForRdsResponse(doRPCRequest(make_shared<string>("CreateOrderForRds"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRds(shared_ptr<CreateOrderForRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderForRdsWithOptions(request, runtime);
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTaskWithOptions(shared_ptr<CreateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateShardTaskResponse(doRPCRequest(make_shared<string>("CreateShardTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTask(shared_ptr<CreateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createShardTaskWithOptions(request, runtime);
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenuWithOptions(shared_ptr<DescribeBackMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackMenuResponse(doRPCRequest(make_shared<string>("DescribeBackMenu"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenu(shared_ptr<DescribeBackMenuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackMenuWithOptions(request, runtime);
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbsWithOptions(shared_ptr<DescribeBackupDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupDbsResponse(doRPCRequest(make_shared<string>("DescribeBackupDbs"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbs(shared_ptr<DescribeBackupDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDbsWithOptions(request, runtime);
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocalWithOptions(shared_ptr<DescribeBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupLocalResponse(doRPCRequest(make_shared<string>("DescribeBackupLocal"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocal(shared_ptr<DescribeBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupLocalWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSetsWithOptions(shared_ptr<DescribeBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupSetsResponse(doRPCRequest(make_shared<string>("DescribeBackupSets"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSets(shared_ptr<DescribeBackupSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetsWithOptions(request, runtime);
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimesWithOptions(shared_ptr<DescribeBackupTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupTimesResponse(doRPCRequest(make_shared<string>("DescribeBackupTimes"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimes(shared_ptr<DescribeBackupTimesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTimesWithOptions(request, runtime);
}

DescribeBatchEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::describeBatchEvaluateTaskReportWithOptions(shared_ptr<DescribeBatchEvaluateTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBatchEvaluateTaskReportResponse(doRPCRequest(make_shared<string>("DescribeBatchEvaluateTaskReport"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBatchEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::describeBatchEvaluateTaskReport(shared_ptr<DescribeBatchEvaluateTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBatchEvaluateTaskReportWithOptions(request, runtime);
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTablesWithOptions(shared_ptr<DescribeBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBroadcastTablesResponse(doRPCRequest(make_shared<string>("DescribeBroadcastTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTables(shared_ptr<DescribeBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBroadcastTablesWithOptions(request, runtime);
}

DescribeCanExpandInstanceDetailListResponse Alibabacloud_Drds20190123::Client::describeCanExpandInstanceDetailListWithOptions(shared_ptr<DescribeCanExpandInstanceDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCanExpandInstanceDetailListResponse(doRPCRequest(make_shared<string>("DescribeCanExpandInstanceDetailList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCanExpandInstanceDetailListResponse Alibabacloud_Drds20190123::Client::describeCanExpandInstanceDetailList(shared_ptr<DescribeCanExpandInstanceDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCanExpandInstanceDetailListWithOptions(request, runtime);
}

DescribeCustomDataExportSrcDstTablesResponse Alibabacloud_Drds20190123::Client::describeCustomDataExportSrcDstTablesWithOptions(shared_ptr<DescribeCustomDataExportSrcDstTablesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCustomDataExportSrcDstTablesShrinkRequest> request = make_shared<DescribeCustomDataExportSrcDstTablesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->exportParam)) {
    request->exportParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->exportParam, make_shared<string>("ExportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCustomDataExportSrcDstTablesResponse(doRPCRequest(make_shared<string>("DescribeCustomDataExportSrcDstTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCustomDataExportSrcDstTablesResponse Alibabacloud_Drds20190123::Client::describeCustomDataExportSrcDstTables(shared_ptr<DescribeCustomDataExportSrcDstTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomDataExportSrcDstTablesWithOptions(request, runtime);
}

DescribeCustomDataImportSrcDstTablesResponse Alibabacloud_Drds20190123::Client::describeCustomDataImportSrcDstTablesWithOptions(shared_ptr<DescribeCustomDataImportSrcDstTablesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCustomDataImportSrcDstTablesShrinkRequest> request = make_shared<DescribeCustomDataImportSrcDstTablesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCustomDataImportSrcDstTablesResponse(doRPCRequest(make_shared<string>("DescribeCustomDataImportSrcDstTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCustomDataImportSrcDstTablesResponse Alibabacloud_Drds20190123::Client::describeCustomDataImportSrcDstTables(shared_ptr<DescribeCustomDataImportSrcDstTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomDataImportSrcDstTablesWithOptions(request, runtime);
}

DescribeDataExportPreCheckResultResponse Alibabacloud_Drds20190123::Client::describeDataExportPreCheckResultWithOptions(shared_ptr<DescribeDataExportPreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataExportPreCheckResultResponse(doRPCRequest(make_shared<string>("DescribeDataExportPreCheckResult"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataExportPreCheckResultResponse Alibabacloud_Drds20190123::Client::describeDataExportPreCheckResult(shared_ptr<DescribeDataExportPreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataExportPreCheckResultWithOptions(request, runtime);
}

DescribeDataExportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataExportTaskReportWithOptions(shared_ptr<DescribeDataExportTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataExportTaskReportResponse(doRPCRequest(make_shared<string>("DescribeDataExportTaskReport"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataExportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataExportTaskReport(shared_ptr<DescribeDataExportTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataExportTaskReportWithOptions(request, runtime);
}

DescribeDataExportTasksResponse Alibabacloud_Drds20190123::Client::describeDataExportTasksWithOptions(shared_ptr<DescribeDataExportTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataExportTasksResponse(doRPCRequest(make_shared<string>("DescribeDataExportTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataExportTasksResponse Alibabacloud_Drds20190123::Client::describeDataExportTasks(shared_ptr<DescribeDataExportTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataExportTasksWithOptions(request, runtime);
}

DescribeDataImportPreCheckResultResponse Alibabacloud_Drds20190123::Client::describeDataImportPreCheckResultWithOptions(shared_ptr<DescribeDataImportPreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataImportPreCheckResultResponse(doRPCRequest(make_shared<string>("DescribeDataImportPreCheckResult"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataImportPreCheckResultResponse Alibabacloud_Drds20190123::Client::describeDataImportPreCheckResult(shared_ptr<DescribeDataImportPreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataImportPreCheckResultWithOptions(request, runtime);
}

DescribeDataImportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataImportTaskReportWithOptions(shared_ptr<DescribeDataImportTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataImportTaskReportResponse(doRPCRequest(make_shared<string>("DescribeDataImportTaskReport"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataImportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataImportTaskReport(shared_ptr<DescribeDataImportTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataImportTaskReportWithOptions(request, runtime);
}

DescribeDataImportTasksResponse Alibabacloud_Drds20190123::Client::describeDataImportTasksWithOptions(shared_ptr<DescribeDataImportTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDataImportTasksResponse(doRPCRequest(make_shared<string>("DescribeDataImportTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDataImportTasksResponse Alibabacloud_Drds20190123::Client::describeDataImportTasks(shared_ptr<DescribeDataImportTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataImportTasksWithOptions(request, runtime);
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbsWithOptions(shared_ptr<DescribeDbInstanceDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDbInstanceDbsResponse(doRPCRequest(make_shared<string>("DescribeDbInstanceDbs"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbs(shared_ptr<DescribeDbInstanceDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstanceDbsWithOptions(request, runtime);
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstancesWithOptions(shared_ptr<DescribeDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDbInstancesResponse(doRPCRequest(make_shared<string>("DescribeDbInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstances(shared_ptr<DescribeDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDBWithOptions(shared_ptr<DescribeDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDBResponse(doRPCRequest(make_shared<string>("DescribeDrdsDB"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDB(shared_ptr<DescribeDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBWithOptions(request, runtime);
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBClusterWithOptions(shared_ptr<DescribeDrdsDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDBClusterResponse(doRPCRequest(make_shared<string>("DescribeDrdsDBCluster"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBCluster(shared_ptr<DescribeDrdsDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBClusterWithOptions(request, runtime);
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteListWithOptions(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDBIpWhiteListResponse(doRPCRequest(make_shared<string>("DescribeDrdsDBIpWhiteList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteList(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBIpWhiteListWithOptions(request, runtime);
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBsWithOptions(shared_ptr<DescribeDrdsDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDBsResponse(doRPCRequest(make_shared<string>("DescribeDrdsDBs"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBs(shared_ptr<DescribeDrdsDBsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBsWithOptions(request, runtime);
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstanceWithOptions(shared_ptr<DescribeDrdsDbInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDbInstanceResponse(doRPCRequest(make_shared<string>("DescribeDrdsDbInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstance(shared_ptr<DescribeDrdsDbInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstanceWithOptions(request, runtime);
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstancesWithOptions(shared_ptr<DescribeDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDbInstancesResponse(doRPCRequest(make_shared<string>("DescribeDrdsDbInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstances(shared_ptr<DescribeDrdsDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameListWithOptions(shared_ptr<DescribeDrdsDbRdsNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDbRdsNameListResponse(doRPCRequest(make_shared<string>("DescribeDrdsDbRdsNameList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameList(shared_ptr<DescribeDrdsDbRdsNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbRdsNameListWithOptions(request, runtime);
}

DescribeDrdsDbSpecAndPriceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbSpecAndPriceWithOptions(shared_ptr<DescribeDrdsDbSpecAndPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDbSpecAndPriceResponse(doRPCRequest(make_shared<string>("DescribeDrdsDbSpecAndPrice"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDbSpecAndPriceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbSpecAndPrice(shared_ptr<DescribeDrdsDbSpecAndPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbSpecAndPriceWithOptions(request, runtime);
}

DescribeDrdsDbTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsDbTasksWithOptions(shared_ptr<DescribeDrdsDbTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsDbTasksResponse(doRPCRequest(make_shared<string>("DescribeDrdsDbTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsDbTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsDbTasks(shared_ptr<DescribeDrdsDbTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbTasksWithOptions(request, runtime);
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceWithOptions(shared_ptr<DescribeDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstanceResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstance(shared_ptr<DescribeDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceWithOptions(request, runtime);
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitorWithOptions(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstanceDbMonitorResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstanceDbMonitor"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitor(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceDbMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasksWithOptions(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstanceLevelTasksResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstanceLevelTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasks(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceLevelTasksWithOptions(request, runtime);
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitorWithOptions(shared_ptr<DescribeDrdsInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstanceMonitorResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstanceMonitor"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitor(shared_ptr<DescribeDrdsInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersionWithOptions(shared_ptr<DescribeDrdsInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstanceVersionResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstanceVersion"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersion(shared_ptr<DescribeDrdsInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceVersionWithOptions(request, runtime);
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstancesWithOptions(shared_ptr<DescribeDrdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsInstancesResponse(doRPCRequest(make_shared<string>("DescribeDrdsInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstances(shared_ptr<DescribeDrdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstancesWithOptions(request, runtime);
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParamsWithOptions(shared_ptr<DescribeDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsParamsResponse(doRPCRequest(make_shared<string>("DescribeDrdsParams"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParams(shared_ptr<DescribeDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsParamsWithOptions(request, runtime);
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstancesWithOptions(shared_ptr<DescribeDrdsRdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsRdsInstancesResponse(doRPCRequest(make_shared<string>("DescribeDrdsRdsInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstances(shared_ptr<DescribeDrdsRdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsRdsInstancesWithOptions(request, runtime);
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbsWithOptions(shared_ptr<DescribeDrdsShardingDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsShardingDbsResponse(doRPCRequest(make_shared<string>("DescribeDrdsShardingDbs"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbs(shared_ptr<DescribeDrdsShardingDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsShardingDbsWithOptions(request, runtime);
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqlsWithOptions(shared_ptr<DescribeDrdsSlowSqlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsSlowSqlsResponse(doRPCRequest(make_shared<string>("DescribeDrdsSlowSqls"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqls(shared_ptr<DescribeDrdsSlowSqlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSlowSqlsWithOptions(request, runtime);
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatusWithOptions(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsSqlAuditStatusResponse(doRPCRequest(make_shared<string>("DescribeDrdsSqlAuditStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatus(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSqlAuditStatusWithOptions(request, runtime);
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasksWithOptions(shared_ptr<DescribeDrdsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDrdsTasksResponse(doRPCRequest(make_shared<string>("DescribeDrdsTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasks(shared_ptr<DescribeDrdsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsTasksWithOptions(request, runtime);
}

DescribeEvaluateDataImportDbTopologysResponse Alibabacloud_Drds20190123::Client::describeEvaluateDataImportDbTopologysWithOptions(shared_ptr<DescribeEvaluateDataImportDbTopologysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeEvaluateDataImportDbTopologysShrinkRequest> request = make_shared<DescribeEvaluateDataImportDbTopologysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->importParam)) {
    request->importParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importParam, make_shared<string>("ImportParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluateDataImportDbTopologysResponse(doRPCRequest(make_shared<string>("DescribeEvaluateDataImportDbTopologys"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluateDataImportDbTopologysResponse Alibabacloud_Drds20190123::Client::describeEvaluateDataImportDbTopologys(shared_ptr<DescribeEvaluateDataImportDbTopologysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluateDataImportDbTopologysWithOptions(request, runtime);
}

DescribeEvaluatePreCheckResultResponse Alibabacloud_Drds20190123::Client::describeEvaluatePreCheckResultWithOptions(shared_ptr<DescribeEvaluatePreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluatePreCheckResultResponse(doRPCRequest(make_shared<string>("DescribeEvaluatePreCheckResult"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluatePreCheckResultResponse Alibabacloud_Drds20190123::Client::describeEvaluatePreCheckResult(shared_ptr<DescribeEvaluatePreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluatePreCheckResultWithOptions(request, runtime);
}

DescribeEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::describeEvaluateTaskReportWithOptions(shared_ptr<DescribeEvaluateTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluateTaskReportResponse(doRPCRequest(make_shared<string>("DescribeEvaluateTaskReport"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::describeEvaluateTaskReport(shared_ptr<DescribeEvaluateTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluateTaskReportWithOptions(request, runtime);
}

DescribeEvaluateTasksResponse Alibabacloud_Drds20190123::Client::describeEvaluateTasksWithOptions(shared_ptr<DescribeEvaluateTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluateTasksResponse(doRPCRequest(make_shared<string>("DescribeEvaluateTasks"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluateTasksResponse Alibabacloud_Drds20190123::Client::describeEvaluateTasks(shared_ptr<DescribeEvaluateTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluateTasksWithOptions(request, runtime);
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoListWithOptions(shared_ptr<DescribeExpandLogicTableInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExpandLogicTableInfoListResponse(doRPCRequest(make_shared<string>("DescribeExpandLogicTableInfoList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoList(shared_ptr<DescribeExpandLogicTableInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpandLogicTableInfoListWithOptions(request, runtime);
}

DescribeHiStoreInstanceInfoResponse Alibabacloud_Drds20190123::Client::describeHiStoreInstanceInfoWithOptions(shared_ptr<DescribeHiStoreInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHiStoreInstanceInfoResponse(doRPCRequest(make_shared<string>("DescribeHiStoreInstanceInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHiStoreInstanceInfoResponse Alibabacloud_Drds20190123::Client::describeHiStoreInstanceInfo(shared_ptr<DescribeHiStoreInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHiStoreInstanceInfoWithOptions(request, runtime);
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbListWithOptions(shared_ptr<DescribeHotDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHotDbListResponse(doRPCRequest(make_shared<string>("DescribeHotDbList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbList(shared_ptr<DescribeHotDbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHotDbListWithOptions(request, runtime);
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfoWithOptions(shared_ptr<DescribeInstDbLogInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstDbLogInfoResponse(doRPCRequest(make_shared<string>("DescribeInstDbLogInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfo(shared_ptr<DescribeInstDbLogInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbLogInfoWithOptions(request, runtime);
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfoWithOptions(shared_ptr<DescribeInstDbSlsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstDbSlsInfoResponse(doRPCRequest(make_shared<string>("DescribeInstDbSlsInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfo(shared_ptr<DescribeInstDbSlsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbSlsInfoWithOptions(request, runtime);
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccountsWithOptions(shared_ptr<DescribeInstanceAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAccountsResponse(doRPCRequest(make_shared<string>("DescribeInstanceAccounts"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccounts(shared_ptr<DescribeInstanceAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAccountsWithOptions(request, runtime);
}

DescribeInstanceMenuSwitchResponse Alibabacloud_Drds20190123::Client::describeInstanceMenuSwitchWithOptions(shared_ptr<DescribeInstanceMenuSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceMenuSwitchResponse(doRPCRequest(make_shared<string>("DescribeInstanceMenuSwitch"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceMenuSwitchResponse Alibabacloud_Drds20190123::Client::describeInstanceMenuSwitch(shared_ptr<DescribeInstanceMenuSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMenuSwitchWithOptions(request, runtime);
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzoneWithOptions(shared_ptr<DescribeInstanceSwitchAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceSwitchAzoneResponse(doRPCRequest(make_shared<string>("DescribeInstanceSwitchAzone"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzone(shared_ptr<DescribeInstanceSwitchAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchAzoneWithOptions(request, runtime);
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetworkWithOptions(shared_ptr<DescribeInstanceSwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceSwitchNetworkResponse(doRPCRequest(make_shared<string>("DescribeInstanceSwitchNetwork"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetwork(shared_ptr<DescribeInstanceSwitchNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchNetworkWithOptions(request, runtime);
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResultWithOptions(shared_ptr<DescribePreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePreCheckResultResponse(doRPCRequest(make_shared<string>("DescribePreCheckResult"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResult(shared_ptr<DescribePreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckResultWithOptions(request, runtime);
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformanceWithOptions(shared_ptr<DescribeRDSPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRDSPerformanceResponse(doRPCRequest(make_shared<string>("DescribeRDSPerformance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformance(shared_ptr<DescribeRDSPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRDSPerformanceWithOptions(request, runtime);
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodityWithOptions(shared_ptr<DescribeRdsCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsCommodityResponse(doRPCRequest(make_shared<string>("DescribeRdsCommodity"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodity(shared_ptr<DescribeRdsCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsCommodityWithOptions(request, runtime);
}

DescribeRdsDrdsDBResponse Alibabacloud_Drds20190123::Client::describeRdsDrdsDBWithOptions(shared_ptr<DescribeRdsDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsDrdsDBResponse(doRPCRequest(make_shared<string>("DescribeRdsDrdsDB"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsDrdsDBResponse Alibabacloud_Drds20190123::Client::describeRdsDrdsDB(shared_ptr<DescribeRdsDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsDrdsDBWithOptions(request, runtime);
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummaryWithOptions(shared_ptr<DescribeRdsPerformanceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsPerformanceSummaryResponse(doRPCRequest(make_shared<string>("DescribeRdsPerformanceSummary"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummary(shared_ptr<DescribeRdsPerformanceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsPerformanceSummaryWithOptions(request, runtime);
}

DescribeRdsPriceResponse Alibabacloud_Drds20190123::Client::describeRdsPriceWithOptions(shared_ptr<DescribeRdsPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsPriceResponse(doRPCRequest(make_shared<string>("DescribeRdsPrice"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsPriceResponse Alibabacloud_Drds20190123::Client::describeRdsPrice(shared_ptr<DescribeRdsPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsPriceWithOptions(request, runtime);
}

DescribeRdsReadOnlyResponse Alibabacloud_Drds20190123::Client::describeRdsReadOnlyWithOptions(shared_ptr<DescribeRdsReadOnlyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsReadOnlyResponse(doRPCRequest(make_shared<string>("DescribeRdsReadOnly"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsReadOnlyResponse Alibabacloud_Drds20190123::Client::describeRdsReadOnly(shared_ptr<DescribeRdsReadOnlyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsReadOnlyWithOptions(request, runtime);
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstancesWithOptions(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsSuperAccountInstancesResponse(doRPCRequest(make_shared<string>("DescribeRdsSuperAccountInstances"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstances(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsSuperAccountInstancesWithOptions(request, runtime);
}

DescribeRdsVpcForZoneResponse Alibabacloud_Drds20190123::Client::describeRdsVpcForZoneWithOptions(shared_ptr<DescribeRdsVpcForZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsVpcForZoneResponse(doRPCRequest(make_shared<string>("DescribeRdsVpcForZone"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsVpcForZoneResponse Alibabacloud_Drds20190123::Client::describeRdsVpcForZone(shared_ptr<DescribeRdsVpcForZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsVpcForZoneWithOptions(request, runtime);
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatusWithOptions(shared_ptr<DescribeRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecycleBinStatusResponse(doRPCRequest(make_shared<string>("DescribeRecycleBinStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatus(shared_ptr<DescribeRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinStatusWithOptions(request, runtime);
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTablesWithOptions(shared_ptr<DescribeRecycleBinTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecycleBinTablesResponse(doRPCRequest(make_shared<string>("DescribeRecycleBinTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTables(shared_ptr<DescribeRecycleBinTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinTablesWithOptions(request, runtime);
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrderWithOptions(shared_ptr<DescribeRestoreOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRestoreOrderResponse(doRPCRequest(make_shared<string>("DescribeRestoreOrder"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrder(shared_ptr<DescribeRestoreOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreOrderWithOptions(request, runtime);
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfoWithOptions(shared_ptr<DescribeShardTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeShardTaskInfoResponse(doRPCRequest(make_shared<string>("DescribeShardTaskInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfo(shared_ptr<DescribeShardTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShardTaskInfoWithOptions(request, runtime);
}

DescribeShardTaskListResponse Alibabacloud_Drds20190123::Client::describeShardTaskListWithOptions(shared_ptr<DescribeShardTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeShardTaskListResponse(doRPCRequest(make_shared<string>("DescribeShardTaskList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeShardTaskListResponse Alibabacloud_Drds20190123::Client::describeShardTaskList(shared_ptr<DescribeShardTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShardTaskListWithOptions(request, runtime);
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTaskWithOptions(shared_ptr<DescribeSqlFlashbakTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSqlFlashbakTaskResponse(doRPCRequest(make_shared<string>("DescribeSqlFlashbakTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTask(shared_ptr<DescribeSqlFlashbakTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlFlashbakTaskWithOptions(request, runtime);
}

DescribeSrcRdsListResponse Alibabacloud_Drds20190123::Client::describeSrcRdsListWithOptions(shared_ptr<DescribeSrcRdsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSrcRdsListResponse(doRPCRequest(make_shared<string>("DescribeSrcRdsList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSrcRdsListResponse Alibabacloud_Drds20190123::Client::describeSrcRdsList(shared_ptr<DescribeSrcRdsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSrcRdsListWithOptions(request, runtime);
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTableWithOptions(shared_ptr<DescribeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTableResponse(doRPCRequest(make_shared<string>("DescribeTable"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTable(shared_ptr<DescribeTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableWithOptions(request, runtime);
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByTypeWithOptions(shared_ptr<DescribeTableListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTableListByTypeResponse(doRPCRequest(make_shared<string>("DescribeTableListByType"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByType(shared_ptr<DescribeTableListByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableListByTypeWithOptions(request, runtime);
}

DescribeTableShardingInfoResponse Alibabacloud_Drds20190123::Client::describeTableShardingInfoWithOptions(shared_ptr<DescribeTableShardingInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTableShardingInfoResponse(doRPCRequest(make_shared<string>("DescribeTableShardingInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTableShardingInfoResponse Alibabacloud_Drds20190123::Client::describeTableShardingInfo(shared_ptr<DescribeTableShardingInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableShardingInfoWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTablesResponse(doRPCRequest(make_shared<string>("DescribeTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAuditWithOptions(shared_ptr<DisableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableSqlAuditResponse(doRPCRequest(make_shared<string>("DisableSqlAudit"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAudit(shared_ptr<DisableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSqlAuditWithOptions(request, runtime);
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6AddressWithOptions(shared_ptr<EnableInstanceIpv6AddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableInstanceIpv6AddressResponse(doRPCRequest(make_shared<string>("EnableInstanceIpv6Address"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6Address(shared_ptr<EnableInstanceIpv6AddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableInstanceIpv6AddressWithOptions(request, runtime);
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAuditWithOptions(shared_ptr<EnableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableSqlAuditResponse(doRPCRequest(make_shared<string>("EnableSqlAudit"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAudit(shared_ptr<EnableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlAuditWithOptions(request, runtime);
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitchWithOptions(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableSqlFlashbackMatchSwitchResponse(doRPCRequest(make_shared<string>("EnableSqlFlashbackMatchSwitch"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitch(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlFlashbackMatchSwitchWithOptions(request, runtime);
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTableWithOptions(shared_ptr<FlashbackRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FlashbackRecycleBinTableResponse(doRPCRequest(make_shared<string>("FlashbackRecycleBinTable"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTable(shared_ptr<FlashbackRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return flashbackRecycleBinTableWithOptions(request, runtime);
}

GetBatchEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::getBatchEvaluateTaskReportWithOptions(shared_ptr<GetBatchEvaluateTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBatchEvaluateTaskReportResponse(doRPCRequest(make_shared<string>("GetBatchEvaluateTaskReport"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBatchEvaluateTaskReportResponse Alibabacloud_Drds20190123::Client::getBatchEvaluateTaskReport(shared_ptr<GetBatchEvaluateTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchEvaluateTaskReportWithOptions(request, runtime);
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfoWithOptions(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDrdsDbRdsRelationInfoResponse(doRPCRequest(make_shared<string>("GetDrdsDbRdsRelationInfo"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfo(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDrdsDbRdsRelationInfoWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUserReportsResponse Alibabacloud_Drds20190123::Client::listUserReportsWithOptions(shared_ptr<ListUserReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserReportsResponse(doRPCRequest(make_shared<string>("ListUserReports"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserReportsResponse Alibabacloud_Drds20190123::Client::listUserReports(shared_ptr<ListUserReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserReportsWithOptions(request, runtime);
}

ListVersionsResponse Alibabacloud_Drds20190123::Client::listVersionsWithOptions(shared_ptr<ListVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVersionsResponse(doRPCRequest(make_shared<string>("ListVersions"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVersionsResponse Alibabacloud_Drds20190123::Client::listVersions(shared_ptr<ListVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVersionsWithOptions(request, runtime);
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRdsWithOptions(shared_ptr<ManagePrivateRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ManagePrivateRdsResponse(doRPCRequest(make_shared<string>("ManagePrivateRds"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRds(shared_ptr<ManagePrivateRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return managePrivateRdsWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilegeWithOptions(shared_ptr<ModifyAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountPrivilegeResponse(doRPCRequest(make_shared<string>("ModifyAccountPrivilege"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilege(shared_ptr<ModifyAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPrivilegeWithOptions(request, runtime);
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescriptionWithOptions(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDrdsInstanceDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDrdsInstanceDescription"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescription(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsInstanceDescriptionWithOptions(request, runtime);
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteListWithOptions(shared_ptr<ModifyDrdsIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDrdsIpWhiteListResponse(doRPCRequest(make_shared<string>("ModifyDrdsIpWhiteList"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteList(shared_ptr<ModifyDrdsIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsIpWhiteListWithOptions(request, runtime);
}

ModifyEventTaskStatusResponse Alibabacloud_Drds20190123::Client::modifyEventTaskStatusWithOptions(shared_ptr<ModifyEventTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyEventTaskStatusResponse(doRPCRequest(make_shared<string>("ModifyEventTaskStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyEventTaskStatusResponse Alibabacloud_Drds20190123::Client::modifyEventTaskStatus(shared_ptr<ModifyEventTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventTaskStatusWithOptions(request, runtime);
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeightWithOptions(shared_ptr<ModifyPolarDbReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPolarDbReadWeightResponse(doRPCRequest(make_shared<string>("ModifyPolarDbReadWeight"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeight(shared_ptr<ModifyPolarDbReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolarDbReadWeightWithOptions(request, runtime);
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeightWithOptions(shared_ptr<ModifyRdsReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRdsReadWeightResponse(doRPCRequest(make_shared<string>("ModifyRdsReadWeight"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeight(shared_ptr<ModifyRdsReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRdsReadWeightWithOptions(request, runtime);
}

MyCatConnectTestResponse Alibabacloud_Drds20190123::Client::myCatConnectTestWithOptions(shared_ptr<MyCatConnectTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MyCatConnectTestResponse(doRPCRequest(make_shared<string>("MyCatConnectTest"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MyCatConnectTestResponse Alibabacloud_Drds20190123::Client::myCatConnectTest(shared_ptr<MyCatConnectTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return myCatConnectTestWithOptions(request, runtime);
}

MyCatCustomImportPreCheckResponse Alibabacloud_Drds20190123::Client::myCatCustomImportPreCheckWithOptions(shared_ptr<MyCatCustomImportPreCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<MyCatCustomImportPreCheckShrinkRequest> request = make_shared<MyCatCustomImportPreCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tableMap)) {
    request->tableMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableMap, make_shared<string>("TableMap"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MyCatCustomImportPreCheckResponse(doRPCRequest(make_shared<string>("MyCatCustomImportPreCheck"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MyCatCustomImportPreCheckResponse Alibabacloud_Drds20190123::Client::myCatCustomImportPreCheck(shared_ptr<MyCatCustomImportPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return myCatCustomImportPreCheckWithOptions(request, runtime);
}

PreCheckModifyTableShardingKeyParamResponse Alibabacloud_Drds20190123::Client::preCheckModifyTableShardingKeyParamWithOptions(shared_ptr<PreCheckModifyTableShardingKeyParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreCheckModifyTableShardingKeyParamResponse(doRPCRequest(make_shared<string>("PreCheckModifyTableShardingKeyParam"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreCheckModifyTableShardingKeyParamResponse Alibabacloud_Drds20190123::Client::preCheckModifyTableShardingKeyParam(shared_ptr<PreCheckModifyTableShardingKeyParamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preCheckModifyTableShardingKeyParamWithOptions(request, runtime);
}

PreCheckSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::preCheckSqlFlashbackTaskWithOptions(shared_ptr<PreCheckSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreCheckSqlFlashbackTaskResponse(doRPCRequest(make_shared<string>("PreCheckSqlFlashbackTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreCheckSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::preCheckSqlFlashbackTask(shared_ptr<PreCheckSqlFlashbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preCheckSqlFlashbackTaskWithOptions(request, runtime);
}

PrecheckMyCatEvaluateResponse Alibabacloud_Drds20190123::Client::precheckMyCatEvaluateWithOptions(shared_ptr<PrecheckMyCatEvaluateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PrecheckMyCatEvaluateResponse(doRPCRequest(make_shared<string>("PrecheckMyCatEvaluate"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PrecheckMyCatEvaluateResponse Alibabacloud_Drds20190123::Client::precheckMyCatEvaluate(shared_ptr<PrecheckMyCatEvaluateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return precheckMyCatEvaluateWithOptions(request, runtime);
}

PutRestorePreCheckResponse Alibabacloud_Drds20190123::Client::putRestorePreCheckWithOptions(shared_ptr<PutRestorePreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutRestorePreCheckResponse(doRPCRequest(make_shared<string>("PutRestorePreCheck"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutRestorePreCheckResponse Alibabacloud_Drds20190123::Client::putRestorePreCheck(shared_ptr<PutRestorePreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putRestorePreCheckWithOptions(request, runtime);
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackupWithOptions(shared_ptr<PutStartBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutStartBackupResponse(doRPCRequest(make_shared<string>("PutStartBackup"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackup(shared_ptr<PutStartBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putStartBackupWithOptions(request, runtime);
}

RearrangeDbToInstanceResponse Alibabacloud_Drds20190123::Client::rearrangeDbToInstanceWithOptions(shared_ptr<RearrangeDbToInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RearrangeDbToInstanceResponse(doRPCRequest(make_shared<string>("RearrangeDbToInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RearrangeDbToInstanceResponse Alibabacloud_Drds20190123::Client::rearrangeDbToInstance(shared_ptr<RearrangeDbToInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rearrangeDbToInstanceWithOptions(request, runtime);
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrlWithOptions(shared_ptr<RefreshDrdsAtomUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshDrdsAtomUrlResponse(doRPCRequest(make_shared<string>("RefreshDrdsAtomUrl"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrl(shared_ptr<RefreshDrdsAtomUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDrdsAtomUrlWithOptions(request, runtime);
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddressWithOptions(shared_ptr<ReleaseInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstanceInternetAddressResponse(doRPCRequest(make_shared<string>("ReleaseInstanceInternetAddress"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddress(shared_ptr<ReleaseInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceInternetAddressWithOptions(request, runtime);
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSetWithOptions(shared_ptr<RemoveBackupsSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveBackupsSetResponse(doRPCRequest(make_shared<string>("RemoveBackupsSet"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSet(shared_ptr<RemoveBackupsSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackupsSetWithOptions(request, runtime);
}

RemoveDataExportTaskResponse Alibabacloud_Drds20190123::Client::removeDataExportTaskWithOptions(shared_ptr<RemoveDataExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDataExportTaskResponse(doRPCRequest(make_shared<string>("RemoveDataExportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDataExportTaskResponse Alibabacloud_Drds20190123::Client::removeDataExportTask(shared_ptr<RemoveDataExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDataExportTaskWithOptions(request, runtime);
}

RemoveDataImportTaskResponse Alibabacloud_Drds20190123::Client::removeDataImportTaskWithOptions(shared_ptr<RemoveDataImportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDataImportTaskResponse(doRPCRequest(make_shared<string>("RemoveDataImportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDataImportTaskResponse Alibabacloud_Drds20190123::Client::removeDataImportTask(shared_ptr<RemoveDataImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDataImportTaskWithOptions(request, runtime);
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDbWithOptions(shared_ptr<RemoveDrdsDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDrdsDbResponse(doRPCRequest(make_shared<string>("RemoveDrdsDb"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDb(shared_ptr<RemoveDrdsDbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbWithOptions(request, runtime);
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecordWithOptions(shared_ptr<RemoveDrdsDbFailedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDrdsDbFailedRecordResponse(doRPCRequest(make_shared<string>("RemoveDrdsDbFailedRecord"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecord(shared_ptr<RemoveDrdsDbFailedRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbFailedRecordWithOptions(request, runtime);
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstanceWithOptions(shared_ptr<RemoveDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDrdsInstanceResponse(doRPCRequest(make_shared<string>("RemoveDrdsInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstance(shared_ptr<RemoveDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsInstanceWithOptions(request, runtime);
}

RemoveDrdsMysqlResponse Alibabacloud_Drds20190123::Client::removeDrdsMysqlWithOptions(shared_ptr<RemoveDrdsMysqlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveDrdsMysqlResponse(doRPCRequest(make_shared<string>("RemoveDrdsMysql"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveDrdsMysqlResponse Alibabacloud_Drds20190123::Client::removeDrdsMysql(shared_ptr<RemoveDrdsMysqlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsMysqlWithOptions(request, runtime);
}

RemoveEvaluateTaskResponse Alibabacloud_Drds20190123::Client::removeEvaluateTaskWithOptions(shared_ptr<RemoveEvaluateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveEvaluateTaskResponse(doRPCRequest(make_shared<string>("RemoveEvaluateTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveEvaluateTaskResponse Alibabacloud_Drds20190123::Client::removeEvaluateTask(shared_ptr<RemoveEvaluateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEvaluateTaskWithOptions(request, runtime);
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccountWithOptions(shared_ptr<RemoveInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveInstanceAccountResponse(doRPCRequest(make_shared<string>("RemoveInstanceAccount"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccount(shared_ptr<RemoveInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstanceAccountWithOptions(request, runtime);
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTableWithOptions(shared_ptr<RemoveRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveRecycleBinTableResponse(doRPCRequest(make_shared<string>("RemoveRecycleBinTable"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTable(shared_ptr<RemoveRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeRecycleBinTableWithOptions(request, runtime);
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstanceWithOptions(shared_ptr<RestartDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDrdsInstanceResponse(doRPCRequest(make_shared<string>("RestartDrdsInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstance(shared_ptr<RestartDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDrdsInstanceWithOptions(request, runtime);
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersionWithOptions(shared_ptr<RollbackInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RollbackInstanceVersionResponse(doRPCRequest(make_shared<string>("RollbackInstanceVersion"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersion(shared_ptr<RollbackInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackInstanceVersionWithOptions(request, runtime);
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocalWithOptions(shared_ptr<SetBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetBackupLocalResponse(doRPCRequest(make_shared<string>("SetBackupLocal"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocal(shared_ptr<SetBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupLocalWithOptions(request, runtime);
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicyWithOptions(shared_ptr<SetBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetBackupPolicyResponse(doRPCRequest(make_shared<string>("SetBackupPolicy"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicy(shared_ptr<SetBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupPolicyWithOptions(request, runtime);
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTablesWithOptions(shared_ptr<SetupBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetupBroadcastTablesResponse(doRPCRequest(make_shared<string>("SetupBroadcastTables"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTables(shared_ptr<SetupBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupBroadcastTablesWithOptions(request, runtime);
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParamsWithOptions(shared_ptr<SetupDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetupDrdsParamsResponse(doRPCRequest(make_shared<string>("SetupDrdsParams"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParams(shared_ptr<SetupDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupDrdsParamsWithOptions(request, runtime);
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatusWithOptions(shared_ptr<SetupRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetupRecycleBinStatusResponse(doRPCRequest(make_shared<string>("SetupRecycleBinStatus"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatus(shared_ptr<SetupRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupRecycleBinStatusWithOptions(request, runtime);
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTableWithOptions(shared_ptr<SetupTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetupTableResponse(doRPCRequest(make_shared<string>("SetupTable"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTable(shared_ptr<SetupTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupTableWithOptions(request, runtime);
}

SetupTableAsyncResponse Alibabacloud_Drds20190123::Client::setupTableAsyncWithOptions(shared_ptr<SetupTableAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetupTableAsyncResponse(doRPCRequest(make_shared<string>("SetupTableAsync"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetupTableAsyncResponse Alibabacloud_Drds20190123::Client::setupTableAsync(shared_ptr<SetupTableAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupTableAsyncWithOptions(request, runtime);
}

SqlCompatibilityCancelResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityCancelWithOptions(shared_ptr<SqlCompatibilityCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SqlCompatibilityCancelResponse(doRPCRequest(make_shared<string>("SqlCompatibilityCancel"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SqlCompatibilityCancelResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityCancel(shared_ptr<SqlCompatibilityCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sqlCompatibilityCancelWithOptions(request, runtime);
}

SqlCompatibilityStartResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityStartWithOptions(shared_ptr<SqlCompatibilityStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SqlCompatibilityStartResponse(doRPCRequest(make_shared<string>("SqlCompatibilityStart"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SqlCompatibilityStartResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityStart(shared_ptr<SqlCompatibilityStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sqlCompatibilityStartWithOptions(request, runtime);
}

StartEvaluateTaskResponse Alibabacloud_Drds20190123::Client::startEvaluateTaskWithOptions(shared_ptr<StartEvaluateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartEvaluateTaskResponse(doRPCRequest(make_shared<string>("StartEvaluateTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartEvaluateTaskResponse Alibabacloud_Drds20190123::Client::startEvaluateTask(shared_ptr<StartEvaluateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startEvaluateTaskWithOptions(request, runtime);
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestoreWithOptions(shared_ptr<StartRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartRestoreResponse(doRPCRequest(make_shared<string>("StartRestore"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestore(shared_ptr<StartRestoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRestoreWithOptions(request, runtime);
}

StopDataExportTaskResponse Alibabacloud_Drds20190123::Client::stopDataExportTaskWithOptions(shared_ptr<StopDataExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDataExportTaskResponse(doRPCRequest(make_shared<string>("StopDataExportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDataExportTaskResponse Alibabacloud_Drds20190123::Client::stopDataExportTask(shared_ptr<StopDataExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDataExportTaskWithOptions(request, runtime);
}

StopDataImportTaskResponse Alibabacloud_Drds20190123::Client::stopDataImportTaskWithOptions(shared_ptr<StopDataImportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDataImportTaskResponse(doRPCRequest(make_shared<string>("StopDataImportTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDataImportTaskResponse Alibabacloud_Drds20190123::Client::stopDataImportTask(shared_ptr<StopDataImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDataImportTaskWithOptions(request, runtime);
}

StopEvaluateTaskResponse Alibabacloud_Drds20190123::Client::stopEvaluateTaskWithOptions(shared_ptr<StopEvaluateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopEvaluateTaskResponse(doRPCRequest(make_shared<string>("StopEvaluateTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopEvaluateTaskResponse Alibabacloud_Drds20190123::Client::stopEvaluateTask(shared_ptr<StopEvaluateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopEvaluateTaskWithOptions(request, runtime);
}

SubmitCleanTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitCleanTableShardingKeyModifyWithOptions(shared_ptr<SubmitCleanTableShardingKeyModifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCleanTableShardingKeyModifyResponse(doRPCRequest(make_shared<string>("SubmitCleanTableShardingKeyModify"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCleanTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitCleanTableShardingKeyModify(shared_ptr<SubmitCleanTableShardingKeyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCleanTableShardingKeyModifyWithOptions(request, runtime);
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTaskWithOptions(shared_ptr<SubmitCleanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCleanTaskResponse(doRPCRequest(make_shared<string>("SubmitCleanTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTask(shared_ptr<SubmitCleanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCleanTaskWithOptions(request, runtime);
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTaskWithOptions(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitHotExpandPreCheckTaskResponse(doRPCRequest(make_shared<string>("SubmitHotExpandPreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTask(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTaskWithOptions(shared_ptr<SubmitHotExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitHotExpandTaskResponse(doRPCRequest(make_shared<string>("SubmitHotExpandTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTask(shared_ptr<SubmitHotExpandTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandTaskWithOptions(request, runtime);
}

SubmitRollbackShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitRollbackShardingKeyModifyWithOptions(shared_ptr<SubmitRollbackShardingKeyModifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitRollbackShardingKeyModifyResponse(doRPCRequest(make_shared<string>("SubmitRollbackShardingKeyModify"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitRollbackShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitRollbackShardingKeyModify(shared_ptr<SubmitRollbackShardingKeyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitRollbackShardingKeyModifyWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckWithOptions(shared_ptr<SubmitSmoothExpandPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSmoothExpandPreCheckResponse(doRPCRequest(make_shared<string>("SubmitSmoothExpandPreCheck"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheck(shared_ptr<SubmitSmoothExpandPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTaskWithOptions(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSmoothExpandPreCheckTaskResponse(doRPCRequest(make_shared<string>("SubmitSmoothExpandPreCheckTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTask(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitSmoothExpandTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandTaskWithOptions(shared_ptr<SubmitSmoothExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSmoothExpandTaskResponse(doRPCRequest(make_shared<string>("SubmitSmoothExpandTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSmoothExpandTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandTask(shared_ptr<SubmitSmoothExpandTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandTaskWithOptions(request, runtime);
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTaskWithOptions(shared_ptr<SubmitSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSqlFlashbackTaskResponse(doRPCRequest(make_shared<string>("SubmitSqlFlashbackTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTask(shared_ptr<SubmitSqlFlashbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSqlFlashbackTaskWithOptions(request, runtime);
}

SubmitSwitchTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitSwitchTableShardingKeyModifyWithOptions(shared_ptr<SubmitSwitchTableShardingKeyModifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSwitchTableShardingKeyModifyResponse(doRPCRequest(make_shared<string>("SubmitSwitchTableShardingKeyModify"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSwitchTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitSwitchTableShardingKeyModify(shared_ptr<SubmitSwitchTableShardingKeyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSwitchTableShardingKeyModifyWithOptions(request, runtime);
}

SubmitSwitchTaskResponse Alibabacloud_Drds20190123::Client::submitSwitchTaskWithOptions(shared_ptr<SubmitSwitchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSwitchTaskResponse(doRPCRequest(make_shared<string>("SubmitSwitchTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSwitchTaskResponse Alibabacloud_Drds20190123::Client::submitSwitchTask(shared_ptr<SubmitSwitchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSwitchTaskWithOptions(request, runtime);
}

SubmitTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitTableShardingKeyModifyWithOptions(shared_ptr<SubmitTableShardingKeyModifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitTableShardingKeyModifyResponse(doRPCRequest(make_shared<string>("SubmitTableShardingKeyModify"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitTableShardingKeyModifyResponse Alibabacloud_Drds20190123::Client::submitTableShardingKeyModify(shared_ptr<SubmitTableShardingKeyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTableShardingKeyModifyWithOptions(request, runtime);
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastTypeWithOptions(shared_ptr<SwitchGlobalBroadcastTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchGlobalBroadcastTypeResponse(doRPCRequest(make_shared<string>("SwitchGlobalBroadcastType"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastType(shared_ptr<SwitchGlobalBroadcastTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchGlobalBroadcastTypeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetworkWithOptions(shared_ptr<UpdateInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateInstanceNetworkResponse(doRPCRequest(make_shared<string>("UpdateInstanceNetwork"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetwork(shared_ptr<UpdateInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceNetworkWithOptions(request, runtime);
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClassWithOptions(shared_ptr<UpdatePrivateRdsClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePrivateRdsClassResponse(doRPCRequest(make_shared<string>("UpdatePrivateRdsClass"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClass(shared_ptr<UpdatePrivateRdsClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrivateRdsClassWithOptions(request, runtime);
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttributeWithOptions(shared_ptr<UpdateResourceGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateResourceGroupAttributeResponse(doRPCRequest(make_shared<string>("UpdateResourceGroupAttribute"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttribute(shared_ptr<UpdateResourceGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceGroupAttributeWithOptions(request, runtime);
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstanceWithOptions(shared_ptr<UpgradeHiStoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeHiStoreInstanceResponse(doRPCRequest(make_shared<string>("UpgradeHiStoreInstance"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstance(shared_ptr<UpgradeHiStoreInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeHiStoreInstanceWithOptions(request, runtime);
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeInstanceVersionResponse(doRPCRequest(make_shared<string>("UpgradeInstanceVersion"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTaskWithOptions(shared_ptr<ValidateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ValidateShardTaskResponse(doRPCRequest(make_shared<string>("ValidateShardTask"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTask(shared_ptr<ValidateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateShardTaskWithOptions(request, runtime);
}

DescribeRdsInstInfosResponse Alibabacloud_Drds20190123::Client::describeRdsInstInfosWithOptions(shared_ptr<DescribeRdsInstInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsInstInfosResponse(doRPCRequest(make_shared<string>("describeRdsInstInfos"), make_shared<string>("2019-01-23"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsInstInfosResponse Alibabacloud_Drds20190123::Client::describeRdsInstInfos(shared_ptr<DescribeRdsInstInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsInstInfosWithOptions(request, runtime);
}

