// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nls_filetrans_20180817.hpp>
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

using namespace Alibabacloud_Nls-filetrans20180817;

Alibabacloud_Nls-filetrans20180817::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nls-filetrans"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Nls-filetrans20180817::Client::getEndpoint(shared_ptr<string> productId,
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

GetTaskResultResponse Alibabacloud_Nls-filetrans20180817::Client::getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetTaskResultResponse(doRPCRequest(make_shared<string>("GetTaskResult"), make_shared<string>("2018-08-17"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskResultResponse Alibabacloud_Nls-filetrans20180817::Client::getTaskResult(shared_ptr<GetTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskResultWithOptions(request, runtime);
}

SubmitTaskResponse Alibabacloud_Nls-filetrans20180817::Client::submitTaskWithOptions(shared_ptr<SubmitTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitTaskResponse(doRPCRequest(make_shared<string>("SubmitTask"), make_shared<string>("2018-08-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitTaskResponse Alibabacloud_Nls-filetrans20180817::Client::submitTask(shared_ptr<SubmitTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTaskWithOptions(request, runtime);
}

