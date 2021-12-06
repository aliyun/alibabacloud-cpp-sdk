// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/antiddos_public_20170518.hpp>
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

using namespace Alibabacloud_Antiddos-public20170518;

Alibabacloud_Antiddos-public20170518::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("antiddos-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Antiddos-public20170518::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeBgpPackByIpResponse Alibabacloud_Antiddos-public20170518::Client::describeBgpPackByIpWithOptions(shared_ptr<DescribeBgpPackByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBgpPackByIpResponse(doRPCRequest(make_shared<string>("DescribeBgpPackByIp"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBgpPackByIpResponse Alibabacloud_Antiddos-public20170518::Client::describeBgpPackByIp(shared_ptr<DescribeBgpPackByIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBgpPackByIpWithOptions(request, runtime);
}

DescribeCapResponse Alibabacloud_Antiddos-public20170518::Client::describeCapWithOptions(shared_ptr<DescribeCapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCapResponse(doRPCRequest(make_shared<string>("DescribeCap"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCapResponse Alibabacloud_Antiddos-public20170518::Client::describeCap(shared_ptr<DescribeCapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapWithOptions(request, runtime);
}

DescribeDdosCountResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCountWithOptions(shared_ptr<DescribeDdosCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDdosCountResponse(doRPCRequest(make_shared<string>("DescribeDdosCount"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDdosCountResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCount(shared_ptr<DescribeDdosCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosCountWithOptions(request, runtime);
}

DescribeDdosCreditResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCreditWithOptions(shared_ptr<DescribeDdosCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDdosCreditResponse(doRPCRequest(make_shared<string>("DescribeDdosCredit"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDdosCreditResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCredit(shared_ptr<DescribeDdosCreditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosCreditWithOptions(request, runtime);
}

DescribeDdosEventListResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosEventListWithOptions(shared_ptr<DescribeDdosEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDdosEventListResponse(doRPCRequest(make_shared<string>("DescribeDdosEventList"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDdosEventListResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosEventList(shared_ptr<DescribeDdosEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosEventListWithOptions(request, runtime);
}

DescribeDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosThresholdWithOptions(shared_ptr<DescribeDdosThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDdosThresholdResponse(doRPCRequest(make_shared<string>("DescribeDdosThreshold"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosThreshold(shared_ptr<DescribeDdosThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosThresholdWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_Antiddos-public20170518::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceResponse(doRPCRequest(make_shared<string>("DescribeInstance"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceResponse Alibabacloud_Antiddos-public20170518::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Antiddos-public20170518::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Antiddos-public20170518::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

ModifyDdosStatusResponse Alibabacloud_Antiddos-public20170518::Client::modifyDdosStatusWithOptions(shared_ptr<ModifyDdosStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDdosStatusResponse(doRPCRequest(make_shared<string>("ModifyDdosStatus"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDdosStatusResponse Alibabacloud_Antiddos-public20170518::Client::modifyDdosStatus(shared_ptr<ModifyDdosStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDdosStatusWithOptions(request, runtime);
}

ModifyDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyDefenseThresholdWithOptions(shared_ptr<ModifyDefenseThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDefenseThresholdResponse(doRPCRequest(make_shared<string>("ModifyDefenseThreshold"), make_shared<string>("2017-05-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyDefenseThreshold(shared_ptr<ModifyDefenseThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseThresholdWithOptions(request, runtime);
}

