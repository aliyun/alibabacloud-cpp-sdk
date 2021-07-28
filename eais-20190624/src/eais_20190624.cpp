// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eais_20190624.hpp>
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

using namespace Alibabacloud_Eais20190624;

Alibabacloud_Eais20190624::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "eais.aliyuncs.com"},
    {"ap-northeast-2-pop", "eais.aliyuncs.com"},
    {"ap-south-1", "eais.aliyuncs.com"},
    {"ap-southeast-1", "eais.aliyuncs.com"},
    {"ap-southeast-2", "eais.aliyuncs.com"},
    {"ap-southeast-3", "eais.aliyuncs.com"},
    {"ap-southeast-5", "eais.aliyuncs.com"},
    {"cn-beijing-finance-1", "eais.aliyuncs.com"},
    {"cn-beijing-finance-pop", "eais.aliyuncs.com"},
    {"cn-beijing-gov-1", "eais.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "eais.aliyuncs.com"},
    {"cn-edge-1", "eais.aliyuncs.com"},
    {"cn-fujian", "eais.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "eais.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "eais.aliyuncs.com"},
    {"cn-hangzhou-finance", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "eais.aliyuncs.com"},
    {"cn-hangzhou-test-306", "eais.aliyuncs.com"},
    {"cn-hongkong", "eais.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "eais.aliyuncs.com"},
    {"cn-huhehaote", "eais.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "eais.aliyuncs.com"},
    {"cn-north-2-gov-1", "eais.aliyuncs.com"},
    {"cn-qingdao", "eais.aliyuncs.com"},
    {"cn-qingdao-nebula", "eais.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "eais.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "eais.aliyuncs.com"},
    {"cn-shanghai-finance-1", "eais.aliyuncs.com"},
    {"cn-shanghai-inner", "eais.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "eais.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "eais.aliyuncs.com"},
    {"cn-shenzhen-inner", "eais.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "eais.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "eais.aliyuncs.com"},
    {"cn-wuhan", "eais.aliyuncs.com"},
    {"cn-wulanchabu", "eais.aliyuncs.com"},
    {"cn-yushanfang", "eais.aliyuncs.com"},
    {"cn-zhangbei", "eais.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "eais.aliyuncs.com"},
    {"cn-zhangjiakou", "eais.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "eais.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "eais.aliyuncs.com"},
    {"eu-central-1", "eais.aliyuncs.com"},
    {"eu-west-1", "eais.aliyuncs.com"},
    {"eu-west-1-oxs", "eais.aliyuncs.com"},
    {"me-east-1", "eais.aliyuncs.com"},
    {"rus-west-1-pop", "eais.aliyuncs.com"},
    {"us-east-1", "eais.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eais"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eais20190624::Client::getEndpoint(shared_ptr<string> productId,
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

AttachEaiResponse Alibabacloud_Eais20190624::Client::attachEaiWithOptions(shared_ptr<AttachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachEaiResponse(doRPCRequest(make_shared<string>("AttachEai"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachEaiResponse Alibabacloud_Eais20190624::Client::attachEai(shared_ptr<AttachEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachEaiWithOptions(request, runtime);
}

CreateEaiResponse Alibabacloud_Eais20190624::Client::createEaiWithOptions(shared_ptr<CreateEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEaiResponse(doRPCRequest(make_shared<string>("CreateEai"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEaiResponse Alibabacloud_Eais20190624::Client::createEai(shared_ptr<CreateEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEaiWithOptions(request, runtime);
}

CreateEaiAllResponse Alibabacloud_Eais20190624::Client::createEaiAllWithOptions(shared_ptr<CreateEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEaiAllResponse(doRPCRequest(make_shared<string>("CreateEaiAll"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEaiAllResponse Alibabacloud_Eais20190624::Client::createEaiAll(shared_ptr<CreateEaiAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEaiAllWithOptions(request, runtime);
}

DeleteEaiResponse Alibabacloud_Eais20190624::Client::deleteEaiWithOptions(shared_ptr<DeleteEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEaiResponse(doRPCRequest(make_shared<string>("DeleteEai"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEaiResponse Alibabacloud_Eais20190624::Client::deleteEai(shared_ptr<DeleteEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEaiWithOptions(request, runtime);
}

DeleteEaiAllResponse Alibabacloud_Eais20190624::Client::deleteEaiAllWithOptions(shared_ptr<DeleteEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEaiAllResponse(doRPCRequest(make_shared<string>("DeleteEaiAll"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEaiAllResponse Alibabacloud_Eais20190624::Client::deleteEaiAll(shared_ptr<DeleteEaiAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEaiAllWithOptions(request, runtime);
}

DescribeEaisResponse Alibabacloud_Eais20190624::Client::describeEaisWithOptions(shared_ptr<DescribeEaisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEaisResponse(doRPCRequest(make_shared<string>("DescribeEais"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEaisResponse Alibabacloud_Eais20190624::Client::describeEais(shared_ptr<DescribeEaisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEaisWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Eais20190624::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Eais20190624::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DetachEaiResponse Alibabacloud_Eais20190624::Client::detachEaiWithOptions(shared_ptr<DetachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachEaiResponse(doRPCRequest(make_shared<string>("DetachEai"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachEaiResponse Alibabacloud_Eais20190624::Client::detachEai(shared_ptr<DetachEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachEaiWithOptions(request, runtime);
}

GetPrivateIpResponse Alibabacloud_Eais20190624::Client::getPrivateIpWithOptions(shared_ptr<GetPrivateIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPrivateIpResponse(doRPCRequest(make_shared<string>("GetPrivateIp"), make_shared<string>("2019-06-24"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPrivateIpResponse Alibabacloud_Eais20190624::Client::getPrivateIp(shared_ptr<GetPrivateIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrivateIpWithOptions(request, runtime);
}

