// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aliyunape_20210908.hpp>
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

using namespace Alibabacloud_Aliyunape20210908;

Alibabacloud_Aliyunape20210908::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aliyunape"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aliyunape20210908::Client::getEndpoint(shared_ptr<string> productId,
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

ExecuteResponse Alibabacloud_Aliyunape20210908::Client::executeWithOptions(shared_ptr<ExecuteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteShrinkRequest> request = make_shared<ExecuteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->serviceParam)) {
    request->serviceParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceParam, make_shared<string>("ServiceParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extendParam)) {
    request->extendParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendParam, make_shared<string>("ExtendParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteResponse(doRPCRequest(make_shared<string>("Execute"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteResponse Alibabacloud_Aliyunape20210908::Client::execute(shared_ptr<ExecuteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeWithOptions(request, runtime);
}

WeathermonitorProvinceHourResponse Alibabacloud_Aliyunape20210908::Client::weathermonitorProvinceHourWithOptions(shared_ptr<WeathermonitorProvinceHourRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<WeathermonitorProvinceHourShrinkRequest> request = make_shared<WeathermonitorProvinceHourShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->serviceParam)) {
    request->serviceParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceParam, make_shared<string>("ServiceParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extendParam)) {
    request->extendParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendParam, make_shared<string>("ExtendParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return WeathermonitorProvinceHourResponse(doRPCRequest(make_shared<string>("WeathermonitorProvinceHour"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

WeathermonitorProvinceHourResponse Alibabacloud_Aliyunape20210908::Client::weathermonitorProvinceHour(shared_ptr<WeathermonitorProvinceHourRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return weathermonitorProvinceHourWithOptions(request, runtime);
}

WeathermonitorResponse Alibabacloud_Aliyunape20210908::Client::weathermonitorWithOptions(shared_ptr<WeathermonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return WeathermonitorResponse(doRPCRequest(make_shared<string>("Weathermonitor"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

WeathermonitorResponse Alibabacloud_Aliyunape20210908::Client::weathermonitor(shared_ptr<WeathermonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return weathermonitorWithOptions(request, runtime);
}

WeatherforecastTimeResponse Alibabacloud_Aliyunape20210908::Client::weatherforecastTimeWithOptions(shared_ptr<WeatherforecastTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return WeatherforecastTimeResponse(doRPCRequest(make_shared<string>("WeatherforecastTime"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

WeatherforecastTimeResponse Alibabacloud_Aliyunape20210908::Client::weatherforecastTime(shared_ptr<WeatherforecastTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return weatherforecastTimeWithOptions(request, runtime);
}

StationDayResponse Alibabacloud_Aliyunape20210908::Client::stationDayWithOptions(shared_ptr<StationDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StationDayResponse(doRPCRequest(make_shared<string>("StationDay"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StationDayResponse Alibabacloud_Aliyunape20210908::Client::stationDay(shared_ptr<StationDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stationDayWithOptions(request, runtime);
}

WeatherforecastResponse Alibabacloud_Aliyunape20210908::Client::weatherforecastWithOptions(shared_ptr<WeatherforecastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return WeatherforecastResponse(doRPCRequest(make_shared<string>("Weatherforecast"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

WeatherforecastResponse Alibabacloud_Aliyunape20210908::Client::weatherforecast(shared_ptr<WeatherforecastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return weatherforecastWithOptions(request, runtime);
}

HistoricalResponse Alibabacloud_Aliyunape20210908::Client::historicalWithOptions(shared_ptr<HistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HistoricalResponse(doRPCRequest(make_shared<string>("Historical"), make_shared<string>("2021-09-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HistoricalResponse Alibabacloud_Aliyunape20210908::Client::historical(shared_ptr<HistoricalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return historicalWithOptions(request, runtime);
}

