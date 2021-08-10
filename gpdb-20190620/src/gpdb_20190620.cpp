// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/gpdb_20190620.hpp>
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

using namespace Alibabacloud_Gpdb20190620;

Alibabacloud_Gpdb20190620::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "gpdb.aliyuncs.com"},
    {"cn-hangzhou", "gpdb.aliyuncs.com"},
    {"cn-shanghai", "gpdb.aliyuncs.com"},
    {"cn-shenzhen", "gpdb.aliyuncs.com"},
    {"cn-hongkong", "gpdb.aliyuncs.com"},
    {"ap-southeast-1", "gpdb.aliyuncs.com"},
    {"us-west-1", "gpdb.aliyuncs.com"},
    {"us-east-1", "gpdb.aliyuncs.com"},
    {"cn-hangzhou-finance", "gpdb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "gpdb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "gpdb.aliyuncs.com"},
    {"cn-qingdao", "gpdb.aliyuncs.com"},
    {"cn-north-2-gov-1", "gpdb.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("gpdb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Gpdb20190620::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeDBInstanceForDmsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstanceForDmsWithOptions(shared_ptr<DescribeDBInstanceForDmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceForDmsResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceForDms"), make_shared<string>("2019-06-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceForDmsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstanceForDms(shared_ptr<DescribeDBInstanceForDmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceForDmsWithOptions(request, runtime);
}

DescribeDBInstanceSecurityIpsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstanceSecurityIpsWithOptions(shared_ptr<DescribeDBInstanceSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceSecurityIpsResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceSecurityIps"), make_shared<string>("2019-06-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceSecurityIpsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstanceSecurityIps(shared_ptr<DescribeDBInstanceSecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSecurityIpsWithOptions(request, runtime);
}

DescribeDBInstancesForDmsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstancesForDmsWithOptions(shared_ptr<DescribeDBInstancesForDmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesForDmsResponse(doRPCRequest(make_shared<string>("DescribeDBInstancesForDms"), make_shared<string>("2019-06-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesForDmsResponse Alibabacloud_Gpdb20190620::Client::describeDBInstancesForDms(shared_ptr<DescribeDBInstancesForDmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesForDmsWithOptions(request, runtime);
}

ModifyDBInstanceSecurityIpsResponse Alibabacloud_Gpdb20190620::Client::modifyDBInstanceSecurityIpsWithOptions(shared_ptr<ModifyDBInstanceSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceSecurityIpsResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceSecurityIps"), make_shared<string>("2019-06-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceSecurityIpsResponse Alibabacloud_Gpdb20190620::Client::modifyDBInstanceSecurityIps(shared_ptr<ModifyDBInstanceSecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSecurityIpsWithOptions(request, runtime);
}

