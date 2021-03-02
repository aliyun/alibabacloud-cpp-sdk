// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/geoip_20200101.hpp>
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

using namespace Alibabacloud_Geoip20200101;

Alibabacloud_Geoip20200101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("geoip"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Geoip20200101::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

DescribeGeoipInstanceResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceWithOptions(shared_ptr<DescribeGeoipInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGeoipInstanceResponse(doRPCRequest(make_shared<string>("DescribeGeoipInstance"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGeoipInstanceResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstance(shared_ptr<DescribeGeoipInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeoipInstanceWithOptions(request, runtime);
}

DescribeGeoipInstanceDataInfosResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceDataInfosWithOptions(shared_ptr<DescribeGeoipInstanceDataInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGeoipInstanceDataInfosResponse(doRPCRequest(make_shared<string>("DescribeGeoipInstanceDataInfos"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGeoipInstanceDataInfosResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceDataInfos(shared_ptr<DescribeGeoipInstanceDataInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeoipInstanceDataInfosWithOptions(request, runtime);
}

DescribeGeoipInstanceDataUrlResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceDataUrlWithOptions(shared_ptr<DescribeGeoipInstanceDataUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGeoipInstanceDataUrlResponse(doRPCRequest(make_shared<string>("DescribeGeoipInstanceDataUrl"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGeoipInstanceDataUrlResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceDataUrl(shared_ptr<DescribeGeoipInstanceDataUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeoipInstanceDataUrlWithOptions(request, runtime);
}

DescribeGeoipInstancesResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstancesWithOptions(shared_ptr<DescribeGeoipInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGeoipInstancesResponse(doRPCRequest(make_shared<string>("DescribeGeoipInstances"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGeoipInstancesResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstances(shared_ptr<DescribeGeoipInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeoipInstancesWithOptions(request, runtime);
}

DescribeGeoipInstanceStatisticsResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceStatisticsWithOptions(shared_ptr<DescribeGeoipInstanceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGeoipInstanceStatisticsResponse(doRPCRequest(make_shared<string>("DescribeGeoipInstanceStatistics"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGeoipInstanceStatisticsResponse Alibabacloud_Geoip20200101::Client::describeGeoipInstanceStatistics(shared_ptr<DescribeGeoipInstanceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeoipInstanceStatisticsWithOptions(request, runtime);
}

DescribeIpv4LocationResponse Alibabacloud_Geoip20200101::Client::describeIpv4LocationWithOptions(shared_ptr<DescribeIpv4LocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpv4LocationResponse(doRPCRequest(make_shared<string>("DescribeIpv4Location"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpv4LocationResponse Alibabacloud_Geoip20200101::Client::describeIpv4Location(shared_ptr<DescribeIpv4LocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpv4LocationWithOptions(request, runtime);
}

DescribeIpv6LocationResponse Alibabacloud_Geoip20200101::Client::describeIpv6LocationWithOptions(shared_ptr<DescribeIpv6LocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpv6LocationResponse(doRPCRequest(make_shared<string>("DescribeIpv6Location"), make_shared<string>("2020-01-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpv6LocationResponse Alibabacloud_Geoip20200101::Client::describeIpv6Location(shared_ptr<DescribeIpv6LocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpv6LocationWithOptions(request, runtime);
}

