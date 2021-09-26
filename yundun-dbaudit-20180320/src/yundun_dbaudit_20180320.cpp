// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/yundun_dbaudit_20180320.hpp>
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

using namespace Alibabacloud_Yundun-dbaudit20180320;

Alibabacloud_Yundun-dbaudit20180320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("yundun-dbaudit"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Yundun-dbaudit20180320::Client::getEndpoint(shared_ptr<string> productId,
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

AddLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::addLogMaskConfigWithOptions(shared_ptr<AddLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddLogMaskConfigResponse(doRPCRequest(make_shared<string>("AddLogMaskConfig"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::addLogMaskConfig(shared_ptr<AddLogMaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLogMaskConfigWithOptions(request, runtime);
}

AssociateDbToRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::associateDbToRuleWithOptions(shared_ptr<AssociateDbToRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateDbToRuleResponse(doRPCRequest(make_shared<string>("AssociateDbToRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateDbToRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::associateDbToRule(shared_ptr<AssociateDbToRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateDbToRuleWithOptions(request, runtime);
}

AssociateRuleToDbResponse Alibabacloud_Yundun-dbaudit20180320::Client::associateRuleToDbWithOptions(shared_ptr<AssociateRuleToDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateRuleToDbResponse(doRPCRequest(make_shared<string>("AssociateRuleToDb"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateRuleToDbResponse Alibabacloud_Yundun-dbaudit20180320::Client::associateRuleToDb(shared_ptr<AssociateRuleToDbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateRuleToDbWithOptions(request, runtime);
}

ChangeAgentStatusResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeAgentStatusWithOptions(shared_ptr<ChangeAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeAgentStatusResponse(doRPCRequest(make_shared<string>("ChangeAgentStatus"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeAgentStatusResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeAgentStatus(shared_ptr<ChangeAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAgentStatusWithOptions(request, runtime);
}

ChangeLogMaskConfigStateResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeLogMaskConfigStateWithOptions(shared_ptr<ChangeLogMaskConfigStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeLogMaskConfigStateResponse(doRPCRequest(make_shared<string>("ChangeLogMaskConfigState"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeLogMaskConfigStateResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeLogMaskConfigState(shared_ptr<ChangeLogMaskConfigStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeLogMaskConfigStateWithOptions(request, runtime);
}

ChangeRulePriorityResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeRulePriorityWithOptions(shared_ptr<ChangeRulePriorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeRulePriorityResponse(doRPCRequest(make_shared<string>("ChangeRulePriority"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeRulePriorityResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeRulePriority(shared_ptr<ChangeRulePriorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeRulePriorityWithOptions(request, runtime);
}

ChangeRuleStatusResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeRuleStatusWithOptions(shared_ptr<ChangeRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeRuleStatusResponse(doRPCRequest(make_shared<string>("ChangeRuleStatus"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeRuleStatusResponse Alibabacloud_Yundun-dbaudit20180320::Client::changeRuleStatus(shared_ptr<ChangeRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeRuleStatusWithOptions(request, runtime);
}

CheckMailRegisteredResponse Alibabacloud_Yundun-dbaudit20180320::Client::checkMailRegisteredWithOptions(shared_ptr<CheckMailRegisteredRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckMailRegisteredResponse(doRPCRequest(make_shared<string>("CheckMailRegistered"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckMailRegisteredResponse Alibabacloud_Yundun-dbaudit20180320::Client::checkMailRegistered(shared_ptr<CheckMailRegisteredRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMailRegisteredWithOptions(request, runtime);
}

ClearAgentRecordsResponse Alibabacloud_Yundun-dbaudit20180320::Client::clearAgentRecordsWithOptions(shared_ptr<ClearAgentRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearAgentRecordsResponse(doRPCRequest(make_shared<string>("ClearAgentRecords"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearAgentRecordsResponse Alibabacloud_Yundun-dbaudit20180320::Client::clearAgentRecords(shared_ptr<ClearAgentRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearAgentRecordsWithOptions(request, runtime);
}

ConfigInstanceNetworkResponse Alibabacloud_Yundun-dbaudit20180320::Client::configInstanceNetworkWithOptions(shared_ptr<ConfigInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigInstanceNetworkResponse(doRPCRequest(make_shared<string>("ConfigInstanceNetwork"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigInstanceNetworkResponse Alibabacloud_Yundun-dbaudit20180320::Client::configInstanceNetwork(shared_ptr<ConfigInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configInstanceNetworkWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataSourceResponse(doRPCRequest(make_shared<string>("CreateDataSource"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateGradeProtectionReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createGradeProtectionReportWithOptions(shared_ptr<CreateGradeProtectionReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGradeProtectionReportResponse(doRPCRequest(make_shared<string>("CreateGradeProtectionReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGradeProtectionReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createGradeProtectionReport(shared_ptr<CreateGradeProtectionReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGradeProtectionReportWithOptions(request, runtime);
}

CreateIntegratedReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createIntegratedReportWithOptions(shared_ptr<CreateIntegratedReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIntegratedReportResponse(doRPCRequest(make_shared<string>("CreateIntegratedReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIntegratedReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createIntegratedReport(shared_ptr<CreateIntegratedReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntegratedReportWithOptions(request, runtime);
}

CreateLogAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createLogAlarmTaskWithOptions(shared_ptr<CreateLogAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLogAlarmTaskResponse(doRPCRequest(make_shared<string>("CreateLogAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLogAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createLogAlarmTask(shared_ptr<CreateLogAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogAlarmTaskWithOptions(request, runtime);
}

CreatePCIReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createPCIReportWithOptions(shared_ptr<CreatePCIReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePCIReportResponse(doRPCRequest(make_shared<string>("CreatePCIReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePCIReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createPCIReport(shared_ptr<CreatePCIReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPCIReportWithOptions(request, runtime);
}

CreateReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createReportPushTaskWithOptions(shared_ptr<CreateReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateReportPushTaskResponse(doRPCRequest(make_shared<string>("CreateReportPushTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createReportPushTask(shared_ptr<CreateReportPushTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReportPushTaskWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleResponse(doRPCRequest(make_shared<string>("CreateRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::createRuleGroupWithOptions(shared_ptr<CreateRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleGroupResponse(doRPCRequest(make_shared<string>("CreateRuleGroup"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::createRuleGroup(shared_ptr<CreateRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleGroupWithOptions(request, runtime);
}

CreateSOXReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSOXReportWithOptions(shared_ptr<CreateSOXReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSOXReportResponse(doRPCRequest(make_shared<string>("CreateSOXReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSOXReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSOXReport(shared_ptr<CreateSOXReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSOXReportWithOptions(request, runtime);
}

CreateSqlRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSqlRuleWithOptions(shared_ptr<CreateSqlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSqlRuleResponse(doRPCRequest(make_shared<string>("CreateSqlRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSqlRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSqlRule(shared_ptr<CreateSqlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSqlRuleWithOptions(request, runtime);
}

CreateSystemAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSystemAlarmTaskWithOptions(shared_ptr<CreateSystemAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSystemAlarmTaskResponse(doRPCRequest(make_shared<string>("CreateSystemAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSystemAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::createSystemAlarmTask(shared_ptr<CreateSystemAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSystemAlarmTaskWithOptions(request, runtime);
}

DeleteAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteAlarmTaskWithOptions(shared_ptr<DeleteAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAlarmTaskResponse(doRPCRequest(make_shared<string>("DeleteAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteAlarmTask(shared_ptr<DeleteAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlarmTaskWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDataSourceResponse(doRPCRequest(make_shared<string>("DeleteDataSource"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteReportPushTaskWithOptions(shared_ptr<DeleteReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteReportPushTaskResponse(doRPCRequest(make_shared<string>("DeleteReportPushTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteReportPushTask(shared_ptr<DeleteReportPushTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteReportPushTaskWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRuleResponse(doRPCRequest(make_shared<string>("DeleteRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteRuleGroupWithOptions(shared_ptr<DeleteRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRuleGroupResponse(doRPCRequest(make_shared<string>("DeleteRuleGroup"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::deleteRuleGroup(shared_ptr<DeleteRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleGroupWithOptions(request, runtime);
}

DeregisterTemplatesFromRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::deregisterTemplatesFromRuleWithOptions(shared_ptr<DeregisterTemplatesFromRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeregisterTemplatesFromRuleResponse(doRPCRequest(make_shared<string>("DeregisterTemplatesFromRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeregisterTemplatesFromRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::deregisterTemplatesFromRule(shared_ptr<DeregisterTemplatesFromRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterTemplatesFromRuleWithOptions(request, runtime);
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttribute"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttributeWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesResponse(doRPCRequest(make_shared<string>("DescribeInstances"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeLoginTicketResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeLoginTicketWithOptions(shared_ptr<DescribeLoginTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoginTicketResponse(doRPCRequest(make_shared<string>("DescribeLoginTicket"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoginTicketResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeLoginTicket(shared_ptr<DescribeLoginTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoginTicketWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSyncInfoResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeSyncInfoWithOptions(shared_ptr<DescribeSyncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSyncInfoResponse(doRPCRequest(make_shared<string>("DescribeSyncInfo"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSyncInfoResponse Alibabacloud_Yundun-dbaudit20180320::Client::describeSyncInfo(shared_ptr<DescribeSyncInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSyncInfoWithOptions(request, runtime);
}

DisableLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::disableLogMaskConfigsWithOptions(shared_ptr<DisableLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableLogMaskConfigsResponse(doRPCRequest(make_shared<string>("DisableLogMaskConfigs"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::disableLogMaskConfigs(shared_ptr<DisableLogMaskConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableLogMaskConfigsWithOptions(request, runtime);
}

DissociateRulesFromDbResponse Alibabacloud_Yundun-dbaudit20180320::Client::dissociateRulesFromDbWithOptions(shared_ptr<DissociateRulesFromDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateRulesFromDbResponse(doRPCRequest(make_shared<string>("DissociateRulesFromDb"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateRulesFromDbResponse Alibabacloud_Yundun-dbaudit20180320::Client::dissociateRulesFromDb(shared_ptr<DissociateRulesFromDbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateRulesFromDbWithOptions(request, runtime);
}

DissociateTemplatesFromRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::dissociateTemplatesFromRuleWithOptions(shared_ptr<DissociateTemplatesFromRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateTemplatesFromRuleResponse(doRPCRequest(make_shared<string>("DissociateTemplatesFromRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateTemplatesFromRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::dissociateTemplatesFromRule(shared_ptr<DissociateTemplatesFromRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateTemplatesFromRuleWithOptions(request, runtime);
}

EditLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::editLogMaskConfigWithOptions(shared_ptr<EditLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditLogMaskConfigResponse(doRPCRequest(make_shared<string>("EditLogMaskConfig"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::editLogMaskConfig(shared_ptr<EditLogMaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editLogMaskConfigWithOptions(request, runtime);
}

EnableLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::enableLogMaskConfigsWithOptions(shared_ptr<EnableLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableLogMaskConfigsResponse(doRPCRequest(make_shared<string>("EnableLogMaskConfigs"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::enableLogMaskConfigs(shared_ptr<EnableLogMaskConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableLogMaskConfigsWithOptions(request, runtime);
}

GetAgentFileUrlResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAgentFileUrlWithOptions(shared_ptr<GetAgentFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAgentFileUrlResponse(doRPCRequest(make_shared<string>("GetAgentFileUrl"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentFileUrlResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAgentFileUrl(shared_ptr<GetAgentFileUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentFileUrlWithOptions(request, runtime);
}

GetAgentListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAgentListWithOptions(shared_ptr<GetAgentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAgentListResponse(doRPCRequest(make_shared<string>("GetAgentList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAgentList(shared_ptr<GetAgentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentListWithOptions(request, runtime);
}

GetAppointOperationResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAppointOperationWithOptions(shared_ptr<GetAppointOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAppointOperationResponse(doRPCRequest(make_shared<string>("GetAppointOperation"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAppointOperationResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAppointOperation(shared_ptr<GetAppointOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppointOperationWithOptions(request, runtime);
}

GetAuditCountResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAuditCountWithOptions(shared_ptr<GetAuditCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuditCountResponse(doRPCRequest(make_shared<string>("GetAuditCount"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuditCountResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAuditCount(shared_ptr<GetAuditCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuditCountWithOptions(request, runtime);
}

GetAuditCountDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAuditCountDistributionWithOptions(shared_ptr<GetAuditCountDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuditCountDistributionResponse(doRPCRequest(make_shared<string>("GetAuditCountDistribution"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuditCountDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getAuditCountDistribution(shared_ptr<GetAuditCountDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuditCountDistributionWithOptions(request, runtime);
}

GetBaseTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getBaseTemplateListWithOptions(shared_ptr<GetBaseTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBaseTemplateListResponse(doRPCRequest(make_shared<string>("GetBaseTemplateList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBaseTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getBaseTemplateList(shared_ptr<GetBaseTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaseTemplateListWithOptions(request, runtime);
}

GetDasUsageResponse Alibabacloud_Yundun-dbaudit20180320::Client::getDasUsageWithOptions(shared_ptr<GetDasUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDasUsageResponse(doRPCRequest(make_shared<string>("GetDasUsage"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDasUsageResponse Alibabacloud_Yundun-dbaudit20180320::Client::getDasUsage(shared_ptr<GetDasUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDasUsageWithOptions(request, runtime);
}

GetDBAuditCountListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getDBAuditCountListWithOptions(shared_ptr<GetDBAuditCountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDBAuditCountListResponse(doRPCRequest(make_shared<string>("GetDBAuditCountList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDBAuditCountListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getDBAuditCountList(shared_ptr<GetDBAuditCountListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBAuditCountListWithOptions(request, runtime);
}

GetGroupDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getGroupDetailWithOptions(shared_ptr<GetGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetGroupDetailResponse(doRPCRequest(make_shared<string>("GetGroupDetail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGroupDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getGroupDetail(shared_ptr<GetGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupDetailWithOptions(request, runtime);
}

GetLicenseResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLicenseResponse(doRPCRequest(make_shared<string>("GetLicense"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLicenseResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLicense(shared_ptr<GetLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLicenseWithOptions(request, runtime);
}

GetLogDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogDetailWithOptions(shared_ptr<GetLogDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogDetailResponse(doRPCRequest(make_shared<string>("GetLogDetail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogDetail(shared_ptr<GetLogDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogDetailWithOptions(request, runtime);
}

GetLogListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogListWithOptions(shared_ptr<GetLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogListResponse(doRPCRequest(make_shared<string>("GetLogList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogList(shared_ptr<GetLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogListWithOptions(request, runtime);
}

GetLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogMaskConfigsWithOptions(shared_ptr<GetLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogMaskConfigsResponse(doRPCRequest(make_shared<string>("GetLogMaskConfigs"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogMaskConfigsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogMaskConfigs(shared_ptr<GetLogMaskConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogMaskConfigsWithOptions(request, runtime);
}

GetLogQueryConditionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogQueryConditionWithOptions(shared_ptr<GetLogQueryConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogQueryConditionResponse(doRPCRequest(make_shared<string>("GetLogQueryCondition"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogQueryConditionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogQueryCondition(shared_ptr<GetLogQueryConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogQueryConditionWithOptions(request, runtime);
}

GetLogStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogStatisticsWithOptions(shared_ptr<GetLogStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogStatisticsResponse(doRPCRequest(make_shared<string>("GetLogStatistics"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogStatistics(shared_ptr<GetLogStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogStatisticsWithOptions(request, runtime);
}

GetLogTopDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTopDistributionWithOptions(shared_ptr<GetLogTopDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogTopDistributionResponse(doRPCRequest(make_shared<string>("GetLogTopDistribution"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogTopDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTopDistribution(shared_ptr<GetLogTopDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogTopDistributionWithOptions(request, runtime);
}

GetLogTopStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTopStatisticsWithOptions(shared_ptr<GetLogTopStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogTopStatisticsResponse(doRPCRequest(make_shared<string>("GetLogTopStatistics"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogTopStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTopStatistics(shared_ptr<GetLogTopStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogTopStatisticsWithOptions(request, runtime);
}

GetLogTypeDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTypeDistributionWithOptions(shared_ptr<GetLogTypeDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogTypeDistributionResponse(doRPCRequest(make_shared<string>("GetLogTypeDistribution"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogTypeDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getLogTypeDistribution(shared_ptr<GetLogTypeDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogTypeDistributionWithOptions(request, runtime);
}

GetNewSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getNewSqlTemplateListWithOptions(shared_ptr<GetNewSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNewSqlTemplateListResponse(doRPCRequest(make_shared<string>("GetNewSqlTemplateList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNewSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getNewSqlTemplateList(shared_ptr<GetNewSqlTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNewSqlTemplateListWithOptions(request, runtime);
}

GetReportFileUrlResponse Alibabacloud_Yundun-dbaudit20180320::Client::getReportFileUrlWithOptions(shared_ptr<GetReportFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetReportFileUrlResponse(doRPCRequest(make_shared<string>("GetReportFileUrl"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetReportFileUrlResponse Alibabacloud_Yundun-dbaudit20180320::Client::getReportFileUrl(shared_ptr<GetReportFileUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getReportFileUrlWithOptions(request, runtime);
}

GetRiskLevelDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRiskLevelDistributionWithOptions(shared_ptr<GetRiskLevelDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRiskLevelDistributionResponse(doRPCRequest(make_shared<string>("GetRiskLevelDistribution"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRiskLevelDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRiskLevelDistribution(shared_ptr<GetRiskLevelDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskLevelDistributionWithOptions(request, runtime);
}

GetRiskStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRiskStatisticsWithOptions(shared_ptr<GetRiskStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRiskStatisticsResponse(doRPCRequest(make_shared<string>("GetRiskStatistics"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRiskStatisticsResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRiskStatistics(shared_ptr<GetRiskStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskStatisticsWithOptions(request, runtime);
}

GetRuleDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleDetailResponse(doRPCRequest(make_shared<string>("GetRuleDetail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRuleDetail(shared_ptr<GetRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleDetailWithOptions(request, runtime);
}

GetRuleGroupNameResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRuleGroupNameWithOptions(shared_ptr<GetRuleGroupNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleGroupNameResponse(doRPCRequest(make_shared<string>("GetRuleGroupName"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleGroupNameResponse Alibabacloud_Yundun-dbaudit20180320::Client::getRuleGroupName(shared_ptr<GetRuleGroupNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleGroupNameWithOptions(request, runtime);
}

GetSessionDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionDetailWithOptions(shared_ptr<GetSessionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSessionDetailResponse(doRPCRequest(make_shared<string>("GetSessionDetail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSessionDetailResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionDetail(shared_ptr<GetSessionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSessionDetailWithOptions(request, runtime);
}

GetSessionDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionDistributionWithOptions(shared_ptr<GetSessionDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSessionDistributionResponse(doRPCRequest(make_shared<string>("GetSessionDistribution"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSessionDistributionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionDistribution(shared_ptr<GetSessionDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSessionDistributionWithOptions(request, runtime);
}

GetSessionListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionListWithOptions(shared_ptr<GetSessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSessionListResponse(doRPCRequest(make_shared<string>("GetSessionList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSessionListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionList(shared_ptr<GetSessionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSessionListWithOptions(request, runtime);
}

GetSessionQueryConditionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionQueryConditionWithOptions(shared_ptr<GetSessionQueryConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSessionQueryConditionResponse(doRPCRequest(make_shared<string>("GetSessionQueryCondition"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSessionQueryConditionResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSessionQueryCondition(shared_ptr<GetSessionQueryConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSessionQueryConditionWithOptions(request, runtime);
}

GetSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSqlTemplateListWithOptions(shared_ptr<GetSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSqlTemplateListResponse(doRPCRequest(make_shared<string>("GetSqlTemplateList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getSqlTemplateList(shared_ptr<GetSqlTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSqlTemplateListWithOptions(request, runtime);
}

GetTopSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getTopSqlTemplateListWithOptions(shared_ptr<GetTopSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTopSqlTemplateListResponse(doRPCRequest(make_shared<string>("GetTopSqlTemplateList"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTopSqlTemplateListResponse Alibabacloud_Yundun-dbaudit20180320::Client::getTopSqlTemplateList(shared_ptr<GetTopSqlTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopSqlTemplateListWithOptions(request, runtime);
}

GradeProtectionReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::gradeProtectionReportWithOptions(shared_ptr<GradeProtectionReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GradeProtectionReportResponse(doRPCRequest(make_shared<string>("GradeProtectionReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GradeProtectionReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::gradeProtectionReport(shared_ptr<GradeProtectionReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return gradeProtectionReportWithOptions(request, runtime);
}

ImportDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::importDataSourceWithOptions(shared_ptr<ImportDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportDataSourceResponse(doRPCRequest(make_shared<string>("ImportDataSource"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::importDataSource(shared_ptr<ImportDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDataSourceWithOptions(request, runtime);
}

IntegratedReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::integratedReportWithOptions(shared_ptr<IntegratedReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IntegratedReportResponse(doRPCRequest(make_shared<string>("IntegratedReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IntegratedReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::integratedReport(shared_ptr<IntegratedReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return integratedReportWithOptions(request, runtime);
}

ListAssociatedRulesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listAssociatedRulesWithOptions(shared_ptr<ListAssociatedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAssociatedRulesResponse(doRPCRequest(make_shared<string>("ListAssociatedRules"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAssociatedRulesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listAssociatedRules(shared_ptr<ListAssociatedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAssociatedRulesWithOptions(request, runtime);
}

ListDataSourceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::listDataSourceAttributeWithOptions(shared_ptr<ListDataSourceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataSourceAttributeResponse(doRPCRequest(make_shared<string>("ListDataSourceAttribute"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataSourceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::listDataSourceAttribute(shared_ptr<ListDataSourceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceAttributeWithOptions(request, runtime);
}

ListDataSourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataSourcesResponse(doRPCRequest(make_shared<string>("ListDataSources"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataSourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourcesWithOptions(request, runtime);
}

ListLogAlarmTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listLogAlarmTasksWithOptions(shared_ptr<ListLogAlarmTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLogAlarmTasksResponse(doRPCRequest(make_shared<string>("ListLogAlarmTasks"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLogAlarmTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listLogAlarmTasks(shared_ptr<ListLogAlarmTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogAlarmTasksWithOptions(request, runtime);
}

ListReportPushTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listReportPushTasksWithOptions(shared_ptr<ListReportPushTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListReportPushTasksResponse(doRPCRequest(make_shared<string>("ListReportPushTasks"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListReportPushTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listReportPushTasks(shared_ptr<ListReportPushTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listReportPushTasksWithOptions(request, runtime);
}

ListRuleGroupsResponse Alibabacloud_Yundun-dbaudit20180320::Client::listRuleGroupsWithOptions(shared_ptr<ListRuleGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRuleGroupsResponse(doRPCRequest(make_shared<string>("ListRuleGroups"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRuleGroupsResponse Alibabacloud_Yundun-dbaudit20180320::Client::listRuleGroups(shared_ptr<ListRuleGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleGroupsWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRulesResponse(doRPCRequest(make_shared<string>("ListRules"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRulesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

ListSqlTypeKeysForRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSqlTypeKeysForRuleWithOptions(shared_ptr<ListSqlTypeKeysForRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSqlTypeKeysForRuleResponse(doRPCRequest(make_shared<string>("ListSqlTypeKeysForRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSqlTypeKeysForRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSqlTypeKeysForRule(shared_ptr<ListSqlTypeKeysForRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSqlTypeKeysForRuleWithOptions(request, runtime);
}

ListSqlTypesForRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSqlTypesForRuleWithOptions(shared_ptr<ListSqlTypesForRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSqlTypesForRuleResponse(doRPCRequest(make_shared<string>("ListSqlTypesForRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSqlTypesForRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSqlTypesForRule(shared_ptr<ListSqlTypesForRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSqlTypesForRuleWithOptions(request, runtime);
}

ListSupportDbTypesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSupportDbTypesWithOptions(shared_ptr<ListSupportDbTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSupportDbTypesResponse(doRPCRequest(make_shared<string>("ListSupportDbTypes"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSupportDbTypesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSupportDbTypes(shared_ptr<ListSupportDbTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSupportDbTypesWithOptions(request, runtime);
}

ListSystemAlarmsResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSystemAlarmsWithOptions(shared_ptr<ListSystemAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSystemAlarmsResponse(doRPCRequest(make_shared<string>("ListSystemAlarms"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSystemAlarmsResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSystemAlarms(shared_ptr<ListSystemAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemAlarmsWithOptions(request, runtime);
}

ListSystemAlarmTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSystemAlarmTasksWithOptions(shared_ptr<ListSystemAlarmTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSystemAlarmTasksResponse(doRPCRequest(make_shared<string>("ListSystemAlarmTasks"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSystemAlarmTasksResponse Alibabacloud_Yundun-dbaudit20180320::Client::listSystemAlarmTasks(shared_ptr<ListSystemAlarmTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemAlarmTasksWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTemplatesForSqlRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTemplatesForSqlRuleWithOptions(shared_ptr<ListTemplatesForSqlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTemplatesForSqlRuleResponse(doRPCRequest(make_shared<string>("ListTemplatesForSqlRule"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTemplatesForSqlRuleResponse Alibabacloud_Yundun-dbaudit20180320::Client::listTemplatesForSqlRule(shared_ptr<ListTemplatesForSqlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesForSqlRuleWithOptions(request, runtime);
}

ListUsedSqlTypesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listUsedSqlTypesWithOptions(shared_ptr<ListUsedSqlTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsedSqlTypesResponse(doRPCRequest(make_shared<string>("ListUsedSqlTypes"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsedSqlTypesResponse Alibabacloud_Yundun-dbaudit20180320::Client::listUsedSqlTypes(shared_ptr<ListUsedSqlTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsedSqlTypesWithOptions(request, runtime);
}

ModifyBaseTemplateStateResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyBaseTemplateStateWithOptions(shared_ptr<ModifyBaseTemplateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBaseTemplateStateResponse(doRPCRequest(make_shared<string>("ModifyBaseTemplateState"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBaseTemplateStateResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyBaseTemplateState(shared_ptr<ModifyBaseTemplateStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBaseTemplateStateWithOptions(request, runtime);
}

ModifyCustomNameResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyCustomNameWithOptions(shared_ptr<ModifyCustomNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCustomNameResponse(doRPCRequest(make_shared<string>("ModifyCustomName"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCustomNameResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyCustomName(shared_ptr<ModifyCustomNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCustomNameWithOptions(request, runtime);
}

ModifyDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyDataSourceWithOptions(shared_ptr<ModifyDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDataSourceResponse(doRPCRequest(make_shared<string>("ModifyDataSource"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDataSourceResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyDataSource(shared_ptr<ModifyDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataSourceWithOptions(request, runtime);
}

ModifyDataSourceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyDataSourceAttributeWithOptions(shared_ptr<ModifyDataSourceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDataSourceAttributeResponse(doRPCRequest(make_shared<string>("ModifyDataSourceAttribute"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDataSourceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyDataSourceAttribute(shared_ptr<ModifyDataSourceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataSourceAttributeWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttribute"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyLogAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyLogAlarmTaskWithOptions(shared_ptr<ModifyLogAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLogAlarmTaskResponse(doRPCRequest(make_shared<string>("ModifyLogAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLogAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyLogAlarmTask(shared_ptr<ModifyLogAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogAlarmTaskWithOptions(request, runtime);
}

ModifyPlanResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyPlanWithOptions(shared_ptr<ModifyPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPlanResponse(doRPCRequest(make_shared<string>("ModifyPlan"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPlanResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyPlan(shared_ptr<ModifyPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPlanWithOptions(request, runtime);
}

ModifyReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyReportPushTaskWithOptions(shared_ptr<ModifyReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyReportPushTaskResponse(doRPCRequest(make_shared<string>("ModifyReportPushTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyReportPushTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyReportPushTask(shared_ptr<ModifyReportPushTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReportPushTaskWithOptions(request, runtime);
}

ModifyRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyRuleGroupWithOptions(shared_ptr<ModifyRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRuleGroupResponse(doRPCRequest(make_shared<string>("ModifyRuleGroup"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRuleGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifyRuleGroup(shared_ptr<ModifyRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRuleGroupWithOptions(request, runtime);
}

ModifySystemAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifySystemAlarmTaskWithOptions(shared_ptr<ModifySystemAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySystemAlarmTaskResponse(doRPCRequest(make_shared<string>("ModifySystemAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySystemAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::modifySystemAlarmTask(shared_ptr<ModifySystemAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySystemAlarmTaskWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Yundun-dbaudit20180320::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

PciReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::pciReportWithOptions(shared_ptr<PciReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PciReportResponse(doRPCRequest(make_shared<string>("PciReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PciReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::pciReport(shared_ptr<PciReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pciReportWithOptions(request, runtime);
}

PutLoginCountResponse Alibabacloud_Yundun-dbaudit20180320::Client::putLoginCountWithOptions(shared_ptr<PutLoginCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutLoginCountResponse(doRPCRequest(make_shared<string>("PutLoginCount"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutLoginCountResponse Alibabacloud_Yundun-dbaudit20180320::Client::putLoginCount(shared_ptr<PutLoginCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putLoginCountWithOptions(request, runtime);
}

ReadMarkSystemAlarmsResponse Alibabacloud_Yundun-dbaudit20180320::Client::readMarkSystemAlarmsWithOptions(shared_ptr<ReadMarkSystemAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReadMarkSystemAlarmsResponse(doRPCRequest(make_shared<string>("ReadMarkSystemAlarms"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReadMarkSystemAlarmsResponse Alibabacloud_Yundun-dbaudit20180320::Client::readMarkSystemAlarms(shared_ptr<ReadMarkSystemAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readMarkSystemAlarmsWithOptions(request, runtime);
}

RefundInstanceResponse Alibabacloud_Yundun-dbaudit20180320::Client::refundInstanceWithOptions(shared_ptr<RefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefundInstanceResponse(doRPCRequest(make_shared<string>("RefundInstance"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefundInstanceResponse Alibabacloud_Yundun-dbaudit20180320::Client::refundInstance(shared_ptr<RefundInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundInstanceWithOptions(request, runtime);
}

RegisterNoticeMailResponse Alibabacloud_Yundun-dbaudit20180320::Client::registerNoticeMailWithOptions(shared_ptr<RegisterNoticeMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterNoticeMailResponse(doRPCRequest(make_shared<string>("RegisterNoticeMail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterNoticeMailResponse Alibabacloud_Yundun-dbaudit20180320::Client::registerNoticeMail(shared_ptr<RegisterNoticeMailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerNoticeMailWithOptions(request, runtime);
}

RemoveLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::removeLogMaskConfigWithOptions(shared_ptr<RemoveLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveLogMaskConfigResponse(doRPCRequest(make_shared<string>("RemoveLogMaskConfig"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveLogMaskConfigResponse Alibabacloud_Yundun-dbaudit20180320::Client::removeLogMaskConfig(shared_ptr<RemoveLogMaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeLogMaskConfigWithOptions(request, runtime);
}

SendVerifyCodeMailResponse Alibabacloud_Yundun-dbaudit20180320::Client::sendVerifyCodeMailWithOptions(shared_ptr<SendVerifyCodeMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendVerifyCodeMailResponse(doRPCRequest(make_shared<string>("SendVerifyCodeMail"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendVerifyCodeMailResponse Alibabacloud_Yundun-dbaudit20180320::Client::sendVerifyCodeMail(shared_ptr<SendVerifyCodeMailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVerifyCodeMailWithOptions(request, runtime);
}

SoxReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::soxReportWithOptions(shared_ptr<SoxReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SoxReportResponse(doRPCRequest(make_shared<string>("SoxReport"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SoxReportResponse Alibabacloud_Yundun-dbaudit20180320::Client::soxReport(shared_ptr<SoxReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return soxReportWithOptions(request, runtime);
}

StartAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::startAlarmTaskWithOptions(shared_ptr<StartAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartAlarmTaskResponse(doRPCRequest(make_shared<string>("StartAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::startAlarmTask(shared_ptr<StartAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAlarmTaskWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Yundun-dbaudit20180320::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstanceResponse(doRPCRequest(make_shared<string>("StartInstance"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_Yundun-dbaudit20180320::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StopAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::stopAlarmTaskWithOptions(shared_ptr<StopAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopAlarmTaskResponse(doRPCRequest(make_shared<string>("StopAlarmTask"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopAlarmTaskResponse Alibabacloud_Yundun-dbaudit20180320::Client::stopAlarmTask(shared_ptr<StopAlarmTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAlarmTaskWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Yundun-dbaudit20180320::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeInstanceVersionResponse Alibabacloud_Yundun-dbaudit20180320::Client::upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeInstanceVersionResponse(doRPCRequest(make_shared<string>("UpgradeInstanceVersion"), make_shared<string>("2018-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeInstanceVersionResponse Alibabacloud_Yundun-dbaudit20180320::Client::upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

