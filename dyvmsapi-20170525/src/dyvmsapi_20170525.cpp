// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dyvmsapi_20170525.hpp>
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

using namespace Alibabacloud_Dyvmsapi20170525;

Alibabacloud_Dyvmsapi20170525::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dyvmsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dyvmsapi20170525::Client::getEndpoint(shared_ptr<string> productId,
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

AddRtcAccountResponse Alibabacloud_Dyvmsapi20170525::Client::addRtcAccountWithOptions(shared_ptr<AddRtcAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddRtcAccountResponse(doRPCRequest(make_shared<string>("AddRtcAccount"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddRtcAccountResponse Alibabacloud_Dyvmsapi20170525::Client::addRtcAccount(shared_ptr<AddRtcAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRtcAccountWithOptions(request, runtime);
}

AddVirtualNumberRelationResponse Alibabacloud_Dyvmsapi20170525::Client::addVirtualNumberRelationWithOptions(shared_ptr<AddVirtualNumberRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVirtualNumberRelationResponse(doRPCRequest(make_shared<string>("AddVirtualNumberRelation"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVirtualNumberRelationResponse Alibabacloud_Dyvmsapi20170525::Client::addVirtualNumberRelation(shared_ptr<AddVirtualNumberRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVirtualNumberRelationWithOptions(request, runtime);
}

BatchRobotSmartCallResponse Alibabacloud_Dyvmsapi20170525::Client::batchRobotSmartCallWithOptions(shared_ptr<BatchRobotSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchRobotSmartCallResponse(doRPCRequest(make_shared<string>("BatchRobotSmartCall"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchRobotSmartCallResponse Alibabacloud_Dyvmsapi20170525::Client::batchRobotSmartCall(shared_ptr<BatchRobotSmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRobotSmartCallWithOptions(request, runtime);
}

BindNumberAndVoipIdResponse Alibabacloud_Dyvmsapi20170525::Client::bindNumberAndVoipIdWithOptions(shared_ptr<BindNumberAndVoipIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindNumberAndVoipIdResponse(doRPCRequest(make_shared<string>("BindNumberAndVoipId"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindNumberAndVoipIdResponse Alibabacloud_Dyvmsapi20170525::Client::bindNumberAndVoipId(shared_ptr<BindNumberAndVoipIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindNumberAndVoipIdWithOptions(request, runtime);
}

CancelCallResponse Alibabacloud_Dyvmsapi20170525::Client::cancelCallWithOptions(shared_ptr<CancelCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelCallResponse(doRPCRequest(make_shared<string>("CancelCall"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelCallResponse Alibabacloud_Dyvmsapi20170525::Client::cancelCall(shared_ptr<CancelCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCallWithOptions(request, runtime);
}

CancelOrderRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::cancelOrderRobotTaskWithOptions(shared_ptr<CancelOrderRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOrderRobotTaskResponse(doRPCRequest(make_shared<string>("CancelOrderRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOrderRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::cancelOrderRobotTask(shared_ptr<CancelOrderRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderRobotTaskWithOptions(request, runtime);
}

CancelRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::cancelRobotTaskWithOptions(shared_ptr<CancelRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelRobotTaskResponse(doRPCRequest(make_shared<string>("CancelRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::cancelRobotTask(shared_ptr<CancelRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRobotTaskWithOptions(request, runtime);
}

ClickToDialResponse Alibabacloud_Dyvmsapi20170525::Client::clickToDialWithOptions(shared_ptr<ClickToDialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClickToDialResponse(doRPCRequest(make_shared<string>("ClickToDial"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClickToDialResponse Alibabacloud_Dyvmsapi20170525::Client::clickToDial(shared_ptr<ClickToDialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clickToDialWithOptions(request, runtime);
}

CloseSipAccountResponse Alibabacloud_Dyvmsapi20170525::Client::closeSipAccountWithOptions(shared_ptr<CloseSipAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloseSipAccountResponse(doRPCRequest(make_shared<string>("CloseSipAccount"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloseSipAccountResponse Alibabacloud_Dyvmsapi20170525::Client::closeSipAccount(shared_ptr<CloseSipAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeSipAccountWithOptions(request, runtime);
}

CreateCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::createCallTaskWithOptions(shared_ptr<CreateCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCallTaskResponse(doRPCRequest(make_shared<string>("CreateCallTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::createCallTask(shared_ptr<CreateCallTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCallTaskWithOptions(request, runtime);
}

CreateRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::createRobotTaskWithOptions(shared_ptr<CreateRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRobotTaskResponse(doRPCRequest(make_shared<string>("CreateRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::createRobotTask(shared_ptr<CreateRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRobotTaskWithOptions(request, runtime);
}

CreateSipAccountResponse Alibabacloud_Dyvmsapi20170525::Client::createSipAccountWithOptions(shared_ptr<CreateSipAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSipAccountResponse(doRPCRequest(make_shared<string>("CreateSipAccount"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSipAccountResponse Alibabacloud_Dyvmsapi20170525::Client::createSipAccount(shared_ptr<CreateSipAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSipAccountWithOptions(request, runtime);
}

DeleteRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::deleteRobotTaskWithOptions(shared_ptr<DeleteRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRobotTaskResponse(doRPCRequest(make_shared<string>("DeleteRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::deleteRobotTask(shared_ptr<DeleteRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRobotTaskWithOptions(request, runtime);
}

DescribeRecordDataResponse Alibabacloud_Dyvmsapi20170525::Client::describeRecordDataWithOptions(shared_ptr<DescribeRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordDataResponse(doRPCRequest(make_shared<string>("DescribeRecordData"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordDataResponse Alibabacloud_Dyvmsapi20170525::Client::describeRecordData(shared_ptr<DescribeRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordDataWithOptions(request, runtime);
}

DoRtcNumberAuthResponse Alibabacloud_Dyvmsapi20170525::Client::doRtcNumberAuthWithOptions(shared_ptr<DoRtcNumberAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoRtcNumberAuthResponse(doRPCRequest(make_shared<string>("DoRtcNumberAuth"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoRtcNumberAuthResponse Alibabacloud_Dyvmsapi20170525::Client::doRtcNumberAuth(shared_ptr<DoRtcNumberAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doRtcNumberAuthWithOptions(request, runtime);
}

DoubleCallSeatResponse Alibabacloud_Dyvmsapi20170525::Client::doubleCallSeatWithOptions(shared_ptr<DoubleCallSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoubleCallSeatResponse(doRPCRequest(make_shared<string>("DoubleCallSeat"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoubleCallSeatResponse Alibabacloud_Dyvmsapi20170525::Client::doubleCallSeat(shared_ptr<DoubleCallSeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doubleCallSeatWithOptions(request, runtime);
}

ExecuteCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::executeCallTaskWithOptions(shared_ptr<ExecuteCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteCallTaskResponse(doRPCRequest(make_shared<string>("ExecuteCallTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::executeCallTask(shared_ptr<ExecuteCallTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeCallTaskWithOptions(request, runtime);
}

GetHotlineQualificationByOrderResponse Alibabacloud_Dyvmsapi20170525::Client::getHotlineQualificationByOrderWithOptions(shared_ptr<GetHotlineQualificationByOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineQualificationByOrderResponse(doRPCRequest(make_shared<string>("GetHotlineQualificationByOrder"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineQualificationByOrderResponse Alibabacloud_Dyvmsapi20170525::Client::getHotlineQualificationByOrder(shared_ptr<GetHotlineQualificationByOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineQualificationByOrderWithOptions(request, runtime);
}

GetRtcTokenResponse Alibabacloud_Dyvmsapi20170525::Client::getRtcTokenWithOptions(shared_ptr<GetRtcTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRtcTokenResponse(doRPCRequest(make_shared<string>("GetRtcToken"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRtcTokenResponse Alibabacloud_Dyvmsapi20170525::Client::getRtcToken(shared_ptr<GetRtcTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRtcTokenWithOptions(request, runtime);
}

GetTokenResponse Alibabacloud_Dyvmsapi20170525::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTokenResponse(doRPCRequest(make_shared<string>("GetToken"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTokenResponse Alibabacloud_Dyvmsapi20170525::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTokenWithOptions(request, runtime);
}

IvrCallResponse Alibabacloud_Dyvmsapi20170525::Client::ivrCallWithOptions(shared_ptr<IvrCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IvrCallResponse(doRPCRequest(make_shared<string>("IvrCall"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IvrCallResponse Alibabacloud_Dyvmsapi20170525::Client::ivrCall(shared_ptr<IvrCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ivrCallWithOptions(request, runtime);
}

ListCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::listCallTaskWithOptions(shared_ptr<ListCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallTaskResponse(doRPCRequest(make_shared<string>("ListCallTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallTaskResponse Alibabacloud_Dyvmsapi20170525::Client::listCallTask(shared_ptr<ListCallTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallTaskWithOptions(request, runtime);
}

ListCallTaskDetailResponse Alibabacloud_Dyvmsapi20170525::Client::listCallTaskDetailWithOptions(shared_ptr<ListCallTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallTaskDetailResponse(doRPCRequest(make_shared<string>("ListCallTaskDetail"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallTaskDetailResponse Alibabacloud_Dyvmsapi20170525::Client::listCallTaskDetail(shared_ptr<ListCallTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallTaskDetailWithOptions(request, runtime);
}

ListHotlineTransferNumberResponse Alibabacloud_Dyvmsapi20170525::Client::listHotlineTransferNumberWithOptions(shared_ptr<ListHotlineTransferNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHotlineTransferNumberResponse(doRPCRequest(make_shared<string>("ListHotlineTransferNumber"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotlineTransferNumberResponse Alibabacloud_Dyvmsapi20170525::Client::listHotlineTransferNumber(shared_ptr<ListHotlineTransferNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineTransferNumberWithOptions(request, runtime);
}

ListHotlineTransferRegisterFileResponse Alibabacloud_Dyvmsapi20170525::Client::listHotlineTransferRegisterFileWithOptions(shared_ptr<ListHotlineTransferRegisterFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHotlineTransferRegisterFileResponse(doRPCRequest(make_shared<string>("ListHotlineTransferRegisterFile"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotlineTransferRegisterFileResponse Alibabacloud_Dyvmsapi20170525::Client::listHotlineTransferRegisterFile(shared_ptr<ListHotlineTransferRegisterFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineTransferRegisterFileWithOptions(request, runtime);
}

ListOrderedNumbersResponse Alibabacloud_Dyvmsapi20170525::Client::listOrderedNumbersWithOptions(shared_ptr<ListOrderedNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOrderedNumbersResponse(doRPCRequest(make_shared<string>("ListOrderedNumbers"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOrderedNumbersResponse Alibabacloud_Dyvmsapi20170525::Client::listOrderedNumbers(shared_ptr<ListOrderedNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrderedNumbersWithOptions(request, runtime);
}

ListOutboundStrategiesResponse Alibabacloud_Dyvmsapi20170525::Client::listOutboundStrategiesWithOptions(shared_ptr<ListOutboundStrategiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOutboundStrategiesResponse(doRPCRequest(make_shared<string>("ListOutboundStrategies"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundStrategiesResponse Alibabacloud_Dyvmsapi20170525::Client::listOutboundStrategies(shared_ptr<ListOutboundStrategiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundStrategiesWithOptions(request, runtime);
}

ListRobotTaskCallsResponse Alibabacloud_Dyvmsapi20170525::Client::listRobotTaskCallsWithOptions(shared_ptr<ListRobotTaskCallsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRobotTaskCallsResponse(doRPCRequest(make_shared<string>("ListRobotTaskCalls"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRobotTaskCallsResponse Alibabacloud_Dyvmsapi20170525::Client::listRobotTaskCalls(shared_ptr<ListRobotTaskCallsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRobotTaskCallsWithOptions(request, runtime);
}

QueryCallDetailByCallIdResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallDetailByCallIdWithOptions(shared_ptr<QueryCallDetailByCallIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCallDetailByCallIdResponse(doRPCRequest(make_shared<string>("QueryCallDetailByCallId"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCallDetailByCallIdResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallDetailByCallId(shared_ptr<QueryCallDetailByCallIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallDetailByCallIdWithOptions(request, runtime);
}

QueryCallDetailByTaskIdResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallDetailByTaskIdWithOptions(shared_ptr<QueryCallDetailByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCallDetailByTaskIdResponse(doRPCRequest(make_shared<string>("QueryCallDetailByTaskId"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCallDetailByTaskIdResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallDetailByTaskId(shared_ptr<QueryCallDetailByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallDetailByTaskIdWithOptions(request, runtime);
}

QueryCallInPoolTransferConfigResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallInPoolTransferConfigWithOptions(shared_ptr<QueryCallInPoolTransferConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCallInPoolTransferConfigResponse(doRPCRequest(make_shared<string>("QueryCallInPoolTransferConfig"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCallInPoolTransferConfigResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallInPoolTransferConfig(shared_ptr<QueryCallInPoolTransferConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallInPoolTransferConfigWithOptions(request, runtime);
}

QueryCallInTransferRecordResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallInTransferRecordWithOptions(shared_ptr<QueryCallInTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCallInTransferRecordResponse(doRPCRequest(make_shared<string>("QueryCallInTransferRecord"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCallInTransferRecordResponse Alibabacloud_Dyvmsapi20170525::Client::queryCallInTransferRecord(shared_ptr<QueryCallInTransferRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallInTransferRecordWithOptions(request, runtime);
}

QueryRobotInfoListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotInfoListWithOptions(shared_ptr<QueryRobotInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotInfoListResponse(doRPCRequest(make_shared<string>("QueryRobotInfoList"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotInfoListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotInfoList(shared_ptr<QueryRobotInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotInfoListWithOptions(request, runtime);
}

QueryRobotTaskCallDetailResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskCallDetailWithOptions(shared_ptr<QueryRobotTaskCallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotTaskCallDetailResponse(doRPCRequest(make_shared<string>("QueryRobotTaskCallDetail"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotTaskCallDetailResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskCallDetail(shared_ptr<QueryRobotTaskCallDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotTaskCallDetailWithOptions(request, runtime);
}

QueryRobotTaskCallListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskCallListWithOptions(shared_ptr<QueryRobotTaskCallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotTaskCallListResponse(doRPCRequest(make_shared<string>("QueryRobotTaskCallList"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotTaskCallListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskCallList(shared_ptr<QueryRobotTaskCallListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotTaskCallListWithOptions(request, runtime);
}

QueryRobotTaskDetailResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskDetailWithOptions(shared_ptr<QueryRobotTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotTaskDetailResponse(doRPCRequest(make_shared<string>("QueryRobotTaskDetail"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotTaskDetailResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskDetail(shared_ptr<QueryRobotTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotTaskDetailWithOptions(request, runtime);
}

QueryRobotTaskListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskListWithOptions(shared_ptr<QueryRobotTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotTaskListResponse(doRPCRequest(make_shared<string>("QueryRobotTaskList"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotTaskListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotTaskList(shared_ptr<QueryRobotTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotTaskListWithOptions(request, runtime);
}

QueryRobotv2AllListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotv2AllListWithOptions(shared_ptr<QueryRobotv2AllListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRobotv2AllListResponse(doRPCRequest(make_shared<string>("QueryRobotv2AllList"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRobotv2AllListResponse Alibabacloud_Dyvmsapi20170525::Client::queryRobotv2AllList(shared_ptr<QueryRobotv2AllListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRobotv2AllListWithOptions(request, runtime);
}

QueryRtcNumberAuthStatusResponse Alibabacloud_Dyvmsapi20170525::Client::queryRtcNumberAuthStatusWithOptions(shared_ptr<QueryRtcNumberAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRtcNumberAuthStatusResponse(doRPCRequest(make_shared<string>("QueryRtcNumberAuthStatus"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRtcNumberAuthStatusResponse Alibabacloud_Dyvmsapi20170525::Client::queryRtcNumberAuthStatus(shared_ptr<QueryRtcNumberAuthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRtcNumberAuthStatusWithOptions(request, runtime);
}

QueryVirtualNumberResponse Alibabacloud_Dyvmsapi20170525::Client::queryVirtualNumberWithOptions(shared_ptr<QueryVirtualNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVirtualNumberResponse(doRPCRequest(make_shared<string>("QueryVirtualNumber"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVirtualNumberResponse Alibabacloud_Dyvmsapi20170525::Client::queryVirtualNumber(shared_ptr<QueryVirtualNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVirtualNumberWithOptions(request, runtime);
}

QueryVirtualNumberRelationResponse Alibabacloud_Dyvmsapi20170525::Client::queryVirtualNumberRelationWithOptions(shared_ptr<QueryVirtualNumberRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVirtualNumberRelationResponse(doRPCRequest(make_shared<string>("QueryVirtualNumberRelation"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVirtualNumberRelationResponse Alibabacloud_Dyvmsapi20170525::Client::queryVirtualNumberRelation(shared_ptr<QueryVirtualNumberRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVirtualNumberRelationWithOptions(request, runtime);
}

QueryVoipNumberBindInfosResponse Alibabacloud_Dyvmsapi20170525::Client::queryVoipNumberBindInfosWithOptions(shared_ptr<QueryVoipNumberBindInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVoipNumberBindInfosResponse(doRPCRequest(make_shared<string>("QueryVoipNumberBindInfos"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVoipNumberBindInfosResponse Alibabacloud_Dyvmsapi20170525::Client::queryVoipNumberBindInfos(shared_ptr<QueryVoipNumberBindInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVoipNumberBindInfosWithOptions(request, runtime);
}

ReportVoipProblemsResponse Alibabacloud_Dyvmsapi20170525::Client::reportVoipProblemsWithOptions(shared_ptr<ReportVoipProblemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportVoipProblemsResponse(doRPCRequest(make_shared<string>("ReportVoipProblems"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportVoipProblemsResponse Alibabacloud_Dyvmsapi20170525::Client::reportVoipProblems(shared_ptr<ReportVoipProblemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportVoipProblemsWithOptions(request, runtime);
}

SendVerificationResponse Alibabacloud_Dyvmsapi20170525::Client::sendVerificationWithOptions(shared_ptr<SendVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendVerificationResponse(doRPCRequest(make_shared<string>("SendVerification"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendVerificationResponse Alibabacloud_Dyvmsapi20170525::Client::sendVerification(shared_ptr<SendVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVerificationWithOptions(request, runtime);
}

SetTransferCalleePoolConfigResponse Alibabacloud_Dyvmsapi20170525::Client::setTransferCalleePoolConfigWithOptions(shared_ptr<SetTransferCalleePoolConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetTransferCalleePoolConfigResponse(doRPCRequest(make_shared<string>("SetTransferCalleePoolConfig"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetTransferCalleePoolConfigResponse Alibabacloud_Dyvmsapi20170525::Client::setTransferCalleePoolConfig(shared_ptr<SetTransferCalleePoolConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTransferCalleePoolConfigWithOptions(request, runtime);
}

SingleCallByTtsResponse Alibabacloud_Dyvmsapi20170525::Client::singleCallByTtsWithOptions(shared_ptr<SingleCallByTtsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SingleCallByTtsResponse(doRPCRequest(make_shared<string>("SingleCallByTts"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SingleCallByTtsResponse Alibabacloud_Dyvmsapi20170525::Client::singleCallByTts(shared_ptr<SingleCallByTtsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return singleCallByTtsWithOptions(request, runtime);
}

SingleCallByVoiceResponse Alibabacloud_Dyvmsapi20170525::Client::singleCallByVoiceWithOptions(shared_ptr<SingleCallByVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SingleCallByVoiceResponse(doRPCRequest(make_shared<string>("SingleCallByVoice"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SingleCallByVoiceResponse Alibabacloud_Dyvmsapi20170525::Client::singleCallByVoice(shared_ptr<SingleCallByVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return singleCallByVoiceWithOptions(request, runtime);
}

SmartCallResponse Alibabacloud_Dyvmsapi20170525::Client::smartCallWithOptions(shared_ptr<SmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SmartCallResponse(doRPCRequest(make_shared<string>("SmartCall"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SmartCallResponse Alibabacloud_Dyvmsapi20170525::Client::smartCall(shared_ptr<SmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return smartCallWithOptions(request, runtime);
}

SmartCallOperateResponse Alibabacloud_Dyvmsapi20170525::Client::smartCallOperateWithOptions(shared_ptr<SmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SmartCallOperateResponse(doRPCRequest(make_shared<string>("SmartCallOperate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SmartCallOperateResponse Alibabacloud_Dyvmsapi20170525::Client::smartCallOperate(shared_ptr<SmartCallOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return smartCallOperateWithOptions(request, runtime);
}

StartMicroOutboundResponse Alibabacloud_Dyvmsapi20170525::Client::startMicroOutboundWithOptions(shared_ptr<StartMicroOutboundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartMicroOutboundResponse(doRPCRequest(make_shared<string>("StartMicroOutbound"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartMicroOutboundResponse Alibabacloud_Dyvmsapi20170525::Client::startMicroOutbound(shared_ptr<StartMicroOutboundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMicroOutboundWithOptions(request, runtime);
}

StartRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::startRobotTaskWithOptions(shared_ptr<StartRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartRobotTaskResponse(doRPCRequest(make_shared<string>("StartRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::startRobotTask(shared_ptr<StartRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRobotTaskWithOptions(request, runtime);
}

StopRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::stopRobotTaskWithOptions(shared_ptr<StopRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopRobotTaskResponse(doRPCRequest(make_shared<string>("StopRobotTask"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopRobotTaskResponse Alibabacloud_Dyvmsapi20170525::Client::stopRobotTask(shared_ptr<StopRobotTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRobotTaskWithOptions(request, runtime);
}

SubmitHotlineTransferRegisterResponse Alibabacloud_Dyvmsapi20170525::Client::submitHotlineTransferRegisterWithOptions(shared_ptr<SubmitHotlineTransferRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitHotlineTransferRegisterResponse(doRPCRequest(make_shared<string>("SubmitHotlineTransferRegister"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitHotlineTransferRegisterResponse Alibabacloud_Dyvmsapi20170525::Client::submitHotlineTransferRegister(shared_ptr<SubmitHotlineTransferRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotlineTransferRegisterWithOptions(request, runtime);
}

UnbindNumberAndVoipIdResponse Alibabacloud_Dyvmsapi20170525::Client::unbindNumberAndVoipIdWithOptions(shared_ptr<UnbindNumberAndVoipIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindNumberAndVoipIdResponse(doRPCRequest(make_shared<string>("UnbindNumberAndVoipId"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindNumberAndVoipIdResponse Alibabacloud_Dyvmsapi20170525::Client::unbindNumberAndVoipId(shared_ptr<UnbindNumberAndVoipIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindNumberAndVoipIdWithOptions(request, runtime);
}

UndoRtcNumberAuthResponse Alibabacloud_Dyvmsapi20170525::Client::undoRtcNumberAuthWithOptions(shared_ptr<UndoRtcNumberAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UndoRtcNumberAuthResponse(doRPCRequest(make_shared<string>("UndoRtcNumberAuth"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UndoRtcNumberAuthResponse Alibabacloud_Dyvmsapi20170525::Client::undoRtcNumberAuth(shared_ptr<UndoRtcNumberAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return undoRtcNumberAuthWithOptions(request, runtime);
}

UploadRobotTaskCalledFileResponse Alibabacloud_Dyvmsapi20170525::Client::uploadRobotTaskCalledFileWithOptions(shared_ptr<UploadRobotTaskCalledFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadRobotTaskCalledFileResponse(doRPCRequest(make_shared<string>("UploadRobotTaskCalledFile"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadRobotTaskCalledFileResponse Alibabacloud_Dyvmsapi20170525::Client::uploadRobotTaskCalledFile(shared_ptr<UploadRobotTaskCalledFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadRobotTaskCalledFileWithOptions(request, runtime);
}

VoipAddAccountResponse Alibabacloud_Dyvmsapi20170525::Client::voipAddAccountWithOptions(shared_ptr<VoipAddAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VoipAddAccountResponse(doRPCRequest(make_shared<string>("VoipAddAccount"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VoipAddAccountResponse Alibabacloud_Dyvmsapi20170525::Client::voipAddAccount(shared_ptr<VoipAddAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voipAddAccountWithOptions(request, runtime);
}

VoipGetTokenResponse Alibabacloud_Dyvmsapi20170525::Client::voipGetTokenWithOptions(shared_ptr<VoipGetTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VoipGetTokenResponse(doRPCRequest(make_shared<string>("VoipGetToken"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VoipGetTokenResponse Alibabacloud_Dyvmsapi20170525::Client::voipGetToken(shared_ptr<VoipGetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voipGetTokenWithOptions(request, runtime);
}

