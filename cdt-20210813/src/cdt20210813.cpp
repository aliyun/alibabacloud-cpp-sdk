// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cdt20210813.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_CDT20210813;

Alibabacloud_CDT20210813::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cdt"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CDT20210813::Client::getEndpoint(shared_ptr<string> productId,
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

GetCdtServiceStatusResponse Alibabacloud_CDT20210813::Client::getCdtServiceStatusWithOptions(shared_ptr<GetCdtServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCdtServiceStatusResponse(doRPCRequest(make_shared<string>("GetCdtServiceStatus"), make_shared<string>("2021-08-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCdtServiceStatusResponse Alibabacloud_CDT20210813::Client::getCdtServiceStatus(shared_ptr<GetCdtServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCdtServiceStatusWithOptions(request, runtime);
}

OpenCdtServiceResponse Alibabacloud_CDT20210813::Client::openCdtServiceWithOptions(shared_ptr<OpenCdtServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenCdtServiceResponse(doRPCRequest(make_shared<string>("OpenCdtService"), make_shared<string>("2021-08-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenCdtServiceResponse Alibabacloud_CDT20210813::Client::openCdtService(shared_ptr<OpenCdtServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openCdtServiceWithOptions(request, runtime);
}

GetCdtCbServiceStatusResponse Alibabacloud_CDT20210813::Client::getCdtCbServiceStatusWithOptions(shared_ptr<GetCdtCbServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCdtCbServiceStatusResponse(doRPCRequest(make_shared<string>("GetCdtCbServiceStatus"), make_shared<string>("2021-08-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCdtCbServiceStatusResponse Alibabacloud_CDT20210813::Client::getCdtCbServiceStatus(shared_ptr<GetCdtCbServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCdtCbServiceStatusWithOptions(request, runtime);
}

OpenCdtCbServiceResponse Alibabacloud_CDT20210813::Client::openCdtCbServiceWithOptions(shared_ptr<OpenCdtCbServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenCdtCbServiceResponse(doRPCRequest(make_shared<string>("OpenCdtCbService"), make_shared<string>("2021-08-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenCdtCbServiceResponse Alibabacloud_CDT20210813::Client::openCdtCbService(shared_ptr<OpenCdtCbServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openCdtCbServiceWithOptions(request, runtime);
}

