// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/wuying_solution_framework_20230810.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_WuyingSolutionFramework20230810;

Alibabacloud_WuyingSolutionFramework20230810::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("wuyingsolutionframework"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_WuyingSolutionFramework20230810::Client::getEndpoint(shared_ptr<string> productId,
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

SendOpsMessageToTerminalResponse Alibabacloud_WuyingSolutionFramework20230810::Client::sendOpsMessageToTerminalWithOptions(shared_ptr<SendOpsMessageToTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->messageBody)) {
    query->insert(pair<string, string>("MessageBody", *request->messageBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeRegionId)) {
    query->insert(pair<string, string>("OfficeRegionId", *request->officeRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opsAction)) {
    query->insert(pair<string, string>("OpsAction", *request->opsAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    query->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->waitForAck)) {
    query->insert(pair<string, bool>("WaitForAck", *request->waitForAck));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->waitForMsg)) {
    query->insert(pair<string, bool>("WaitForMsg", *request->waitForMsg));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendOpsMessageToTerminal"))},
    {"version", boost::any(string("2023-08-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendOpsMessageToTerminalResponse(callApi(params, req, runtime));
}

SendOpsMessageToTerminalResponse Alibabacloud_WuyingSolutionFramework20230810::Client::sendOpsMessageToTerminal(shared_ptr<SendOpsMessageToTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendOpsMessageToTerminalWithOptions(request, runtime);
}

