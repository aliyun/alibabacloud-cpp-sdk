// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/trusted_server_20200613.hpp>
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

using namespace Alibabacloud_Trusted-server20200613;

Alibabacloud_Trusted-server20200613::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("trusted-server"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Trusted-server20200613::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeBootResponse Alibabacloud_Trusted-server20200613::Client::describeBootWithOptions(shared_ptr<DescribeBootRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBoot"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBootResponse(callApi(params, req, runtime));
}

DescribeBootResponse Alibabacloud_Trusted-server20200613::Client::describeBoot(shared_ptr<DescribeBootRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBootWithOptions(request, runtime);
}

DescribeEventsResponse Alibabacloud_Trusted-server20200613::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndDate)) {
    query->insert(pair<string, long>("CreateEndDate", *request->createEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartDate)) {
    query->insert(pair<string, long>("CreateStartDate", *request->createStartDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventAffiliation)) {
    query->insert(pair<string, long>("EventAffiliation", *request->eventAffiliation));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventLevel)) {
    query->insert(pair<string, long>("EventLevel", *request->eventLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventStatus)) {
    query->insert(pair<string, long>("EventStatus", *request->eventStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventType)) {
    query->insert(pair<string, long>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handleEndDate)) {
    query->insert(pair<string, long>("HandleEndDate", *request->handleEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handleStartDate)) {
    query->insert(pair<string, long>("HandleStartDate", *request->handleStartDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handleType)) {
    query->insert(pair<string, long>("HandleType", *request->handleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyName)) {
    query->insert(pair<string, string>("PropertyName", *request->propertyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyPrivateIp)) {
    query->insert(pair<string, string>("PropertyPrivateIp", *request->propertyPrivateIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyPublicIp)) {
    query->insert(pair<string, string>("PropertyPublicIp", *request->propertyPublicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspect)) {
    query->insert(pair<string, string>("Suspect", *request->suspect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspectSig)) {
    query->insert(pair<string, string>("SuspectSig", *request->suspectSig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvents"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsResponse(callApi(params, req, runtime));
}

DescribeEventsResponse Alibabacloud_Trusted-server20200613::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_Trusted-server20200613::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceResponse(callApi(params, req, runtime));
}

DescribeInstanceResponse Alibabacloud_Trusted-server20200613::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

GenerateAikcertResponse Alibabacloud_Trusted-server20200613::Client::generateAikcertWithOptions(shared_ptr<GenerateAikcertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aikName)) {
    query->insert(pair<string, string>("AikName", *request->aikName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aikPub)) {
    query->insert(pair<string, string>("AikPub", *request->aikPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekCert)) {
    query->insert(pair<string, string>("EkCert", *request->ekCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekPub)) {
    query->insert(pair<string, string>("EkPub", *request->ekPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nonceDigest)) {
    query->insert(pair<string, string>("NonceDigest", *request->nonceDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAikcert"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateAikcertResponse(callApi(params, req, runtime));
}

GenerateAikcertResponse Alibabacloud_Trusted-server20200613::Client::generateAikcert(shared_ptr<GenerateAikcertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAikcertWithOptions(request, runtime);
}

GenerateNonceResponse Alibabacloud_Trusted-server20200613::Client::generateNonceWithOptions(shared_ptr<GenerateNonceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aikName)) {
    query->insert(pair<string, string>("AikName", *request->aikName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekCert)) {
    query->insert(pair<string, string>("EkCert", *request->ekCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekPub)) {
    query->insert(pair<string, string>("EkPub", *request->ekPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateNonce"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateNonceResponse(callApi(params, req, runtime));
}

GenerateNonceResponse Alibabacloud_Trusted-server20200613::Client::generateNonce(shared_ptr<GenerateNonceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateNonceWithOptions(request, runtime);
}

IgnoreEventsResponse Alibabacloud_Trusted-server20200613::Client::ignoreEventsWithOptions(shared_ptr<IgnoreEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventUuids)) {
    query->insert(pair<string, string>("EventUuids", *request->eventUuids));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handleStyle)) {
    query->insert(pair<string, long>("HandleStyle", *request->handleStyle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IgnoreEvents"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IgnoreEventsResponse(callApi(params, req, runtime));
}

IgnoreEventsResponse Alibabacloud_Trusted-server20200613::Client::ignoreEvents(shared_ptr<IgnoreEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ignoreEventsWithOptions(request, runtime);
}

ProduceAikcertResponse Alibabacloud_Trusted-server20200613::Client::produceAikcertWithOptions(shared_ptr<ProduceAikcertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aikName)) {
    query->insert(pair<string, string>("AikName", *request->aikName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRequest)) {
    query->insert(pair<string, string>("CertRequest", *request->certRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekCert)) {
    query->insert(pair<string, string>("EkCert", *request->ekCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ekPubKey)) {
    query->insert(pair<string, string>("EkPubKey", *request->ekPubKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeCertChain)) {
    query->insert(pair<string, bool>("IncludeCertChain", *request->includeCertChain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProduceAikcert"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProduceAikcertResponse(callApi(params, req, runtime));
}

ProduceAikcertResponse Alibabacloud_Trusted-server20200613::Client::produceAikcert(shared_ptr<ProduceAikcertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return produceAikcertWithOptions(request, runtime);
}

PutMessageResponse Alibabacloud_Trusted-server20200613::Client::putMessageWithOptions(shared_ptr<PutMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileData)) {
    query->insert(pair<string, string>("FileData", *request->fileData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutMessage"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutMessageResponse(callApi(params, req, runtime));
}

PutMessageResponse Alibabacloud_Trusted-server20200613::Client::putMessage(shared_ptr<PutMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putMessageWithOptions(request, runtime);
}

RegisterMessageResponse Alibabacloud_Trusted-server20200613::Client::registerMessageWithOptions(shared_ptr<RegisterMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extensions)) {
    query->insert(pair<string, string>("Extensions", *request->extensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyAffiliation)) {
    query->insert(pair<string, long>("PropertyAffiliation", *request->propertyAffiliation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyName)) {
    query->insert(pair<string, string>("PropertyName", *request->propertyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyPrivateIp)) {
    query->insert(pair<string, string>("PropertyPrivateIp", *request->propertyPrivateIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyPublicIp)) {
    query->insert(pair<string, string>("PropertyPublicIp", *request->propertyPublicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyUuid)) {
    query->insert(pair<string, string>("PropertyUuid", *request->propertyUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMessage"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMessageResponse(callApi(params, req, runtime));
}

RegisterMessageResponse Alibabacloud_Trusted-server20200613::Client::registerMessage(shared_ptr<RegisterMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMessageWithOptions(request, runtime);
}

TrustEventsResponse Alibabacloud_Trusted-server20200613::Client::trustEventsWithOptions(shared_ptr<TrustEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventUuids)) {
    query->insert(pair<string, string>("EventUuids", *request->eventUuids));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handleStyle)) {
    query->insert(pair<string, long>("HandleStyle", *request->handleStyle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrustEvents"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrustEventsResponse(callApi(params, req, runtime));
}

TrustEventsResponse Alibabacloud_Trusted-server20200613::Client::trustEvents(shared_ptr<TrustEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return trustEventsWithOptions(request, runtime);
}

UnregisterMessageResponse Alibabacloud_Trusted-server20200613::Client::unregisterMessageWithOptions(shared_ptr<UnregisterMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->properties)) {
    query->insert(pair<string, string>("Properties", *request->properties));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnregisterMessage"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnregisterMessageResponse(callApi(params, req, runtime));
}

UnregisterMessageResponse Alibabacloud_Trusted-server20200613::Client::unregisterMessage(shared_ptr<UnregisterMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unregisterMessageWithOptions(request, runtime);
}

VerifyMessageResponse Alibabacloud_Trusted-server20200613::Client::verifyMessageWithOptions(shared_ptr<VerifyMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileData)) {
    body->insert(pair<string, string>("FileData", *request->fileData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyMessage"))},
    {"version", boost::any(string("2020-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyMessageResponse(callApi(params, req, runtime));
}

VerifyMessageResponse Alibabacloud_Trusted-server20200613::Client::verifyMessage(shared_ptr<VerifyMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyMessageWithOptions(request, runtime);
}

