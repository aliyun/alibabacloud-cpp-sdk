// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_api20160714.hpp>
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

using namespace Alibabacloud_CloudAPI20160714;

Alibabacloud_CloudAPI20160714::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "apigateway.cn-qingdao.aliyuncs.com"},
    {"cn-beijing", "apigateway.cn-beijing.aliyuncs.com"},
    {"cn-chengdu", "apigateway.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "apigateway.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "apigateway.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou", "apigateway.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "apigateway.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "apigateway.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "apigateway.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "apigateway.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "apigateway.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "apigateway.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "apigateway.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "apigateway.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1", "apigateway.eu-west-1.aliyuncs.com"},
    {"us-west-1", "apigateway.us-west-1.aliyuncs.com"},
    {"us-east-1", "apigateway.us-east-1.aliyuncs.com"},
    {"eu-central-1", "apigateway.eu-central-1.aliyuncs.com"},
    {"me-east-1", "apigateway.me-east-1.aliyuncs.com"},
    {"ap-south-1", "apigateway.ap-south-1.aliyuncs.com"},
    {"cn-north-2-gov-1", "apigateway.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "apigateway.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "apigateway.aliyuncs.com"},
    {"cn-shanghai-finance-1", "apigateway.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CloudAPI20160714::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAuthorizedAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedAppsWithOptions(shared_ptr<DescribeAuthorizedAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAuthorizedAppsResponse(doRPCRequest(make_shared<string>("DescribeAuthorizedApps"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAuthorizedAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApps(shared_ptr<DescribeAuthorizedAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthorizedAppsWithOptions(request, runtime);
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroupsWithOptions(shared_ptr<DescribePurchasedApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePurchasedApiGroupsResponse(doRPCRequest(make_shared<string>("DescribePurchasedApiGroups"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroups(shared_ptr<DescribePurchasedApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupsWithOptions(request, runtime);
}

DescribePluginsResponse Alibabacloud_CloudAPI20160714::Client::describePluginsWithOptions(shared_ptr<DescribePluginsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePluginsResponse(doRPCRequest(make_shared<string>("DescribePlugins"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePluginsResponse Alibabacloud_CloudAPI20160714::Client::describePlugins(shared_ptr<DescribePluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginsWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_CloudAPI20160714::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_CloudAPI20160714::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

DescribeLogConfigResponse Alibabacloud_CloudAPI20160714::Client::describeLogConfigWithOptions(shared_ptr<DescribeLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogConfigResponse(doRPCRequest(make_shared<string>("DescribeLogConfig"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogConfigResponse Alibabacloud_CloudAPI20160714::Client::describeLogConfig(shared_ptr<DescribeLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogConfigWithOptions(request, runtime);
}

SetApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setApisAuthoritiesWithOptions(shared_ptr<SetApisAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetApisAuthoritiesResponse(doRPCRequest(make_shared<string>("SetApisAuthorities"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setApisAuthorities(shared_ptr<SetApisAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setApisAuthoritiesWithOptions(request, runtime);
}

DescribeGroupConfigSynFlowResponse Alibabacloud_CloudAPI20160714::Client::describeGroupConfigSynFlowWithOptions(shared_ptr<DescribeGroupConfigSynFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupConfigSynFlowResponse(doRPCRequest(make_shared<string>("DescribeGroupConfigSynFlow"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupConfigSynFlowResponse Alibabacloud_CloudAPI20160714::Client::describeGroupConfigSynFlow(shared_ptr<DescribeGroupConfigSynFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupConfigSynFlowWithOptions(request, runtime);
}

DeleteSignatureResponse Alibabacloud_CloudAPI20160714::Client::deleteSignatureWithOptions(shared_ptr<DeleteSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSignatureResponse(doRPCRequest(make_shared<string>("DeleteSignature"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSignatureResponse Alibabacloud_CloudAPI20160714::Client::deleteSignature(shared_ptr<DeleteSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSignatureWithOptions(request, runtime);
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficControlWithOptions(shared_ptr<DeleteTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTrafficControlResponse(doRPCRequest(make_shared<string>("DeleteTrafficControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficControl(shared_ptr<DeleteTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficControlWithOptions(request, runtime);
}

CreateFcServiceLinkedRoleResponse Alibabacloud_CloudAPI20160714::Client::createFcServiceLinkedRoleWithOptions(shared_ptr<CreateFcServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFcServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateFcServiceLinkedRole"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFcServiceLinkedRoleResponse Alibabacloud_CloudAPI20160714::Client::createFcServiceLinkedRole(shared_ptr<CreateFcServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFcServiceLinkedRoleWithOptions(request, runtime);
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160714::Client::describeSystemParametersWithOptions(shared_ptr<DescribeSystemParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSystemParametersResponse(doRPCRequest(make_shared<string>("DescribeSystemParameters"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160714::Client::describeSystemParameters(shared_ptr<DescribeSystemParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSystemParametersWithOptions(request, runtime);
}

DescribeInstanceNewConnectionsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceNewConnectionsWithOptions(shared_ptr<DescribeInstanceNewConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceNewConnectionsResponse(doRPCRequest(make_shared<string>("DescribeInstanceNewConnections"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceNewConnectionsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceNewConnections(shared_ptr<DescribeInstanceNewConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceNewConnectionsWithOptions(request, runtime);
}

DescribeUpdateVpcInfoTaskResponse Alibabacloud_CloudAPI20160714::Client::describeUpdateVpcInfoTaskWithOptions(shared_ptr<DescribeUpdateVpcInfoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUpdateVpcInfoTaskResponse(doRPCRequest(make_shared<string>("DescribeUpdateVpcInfoTask"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUpdateVpcInfoTaskResponse Alibabacloud_CloudAPI20160714::Client::describeUpdateVpcInfoTask(shared_ptr<DescribeUpdateVpcInfoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpdateVpcInfoTaskWithOptions(request, runtime);
}

DeletePluginResponse Alibabacloud_CloudAPI20160714::Client::deletePluginWithOptions(shared_ptr<DeletePluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePluginResponse(doRPCRequest(make_shared<string>("DeletePlugin"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePluginResponse Alibabacloud_CloudAPI20160714::Client::deletePlugin(shared_ptr<DeletePluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePluginWithOptions(request, runtime);
}

CreateGroupConfigSynFlowResponse Alibabacloud_CloudAPI20160714::Client::createGroupConfigSynFlowWithOptions(shared_ptr<CreateGroupConfigSynFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupConfigSynFlowResponse(doRPCRequest(make_shared<string>("CreateGroupConfigSynFlow"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupConfigSynFlowResponse Alibabacloud_CloudAPI20160714::Client::createGroupConfigSynFlow(shared_ptr<CreateGroupConfigSynFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupConfigSynFlowWithOptions(request, runtime);
}

BatchDeployApisResponse Alibabacloud_CloudAPI20160714::Client::batchDeployApisWithOptions(shared_ptr<BatchDeployApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeployApisResponse(doRPCRequest(make_shared<string>("BatchDeployApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeployApisResponse Alibabacloud_CloudAPI20160714::Client::batchDeployApis(shared_ptr<BatchDeployApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeployApisWithOptions(request, runtime);
}

DescribePluginTemplatesResponse Alibabacloud_CloudAPI20160714::Client::describePluginTemplatesWithOptions(shared_ptr<DescribePluginTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePluginTemplatesResponse(doRPCRequest(make_shared<string>("DescribePluginTemplates"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePluginTemplatesResponse Alibabacloud_CloudAPI20160714::Client::describePluginTemplates(shared_ptr<DescribePluginTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginTemplatesWithOptions(request, runtime);
}

RemoveIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlApisWithOptions(shared_ptr<RemoveIpControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveIpControlApisResponse(doRPCRequest(make_shared<string>("RemoveIpControlApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlApis(shared_ptr<RemoveIpControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeIpControlApisWithOptions(request, runtime);
}

DescribeAbolishApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeAbolishApiTaskWithOptions(shared_ptr<DescribeAbolishApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAbolishApiTaskResponse(doRPCRequest(make_shared<string>("DescribeAbolishApiTask"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAbolishApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeAbolishApiTask(shared_ptr<DescribeAbolishApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAbolishApiTaskWithOptions(request, runtime);
}

DescribeSubscribeResponse Alibabacloud_CloudAPI20160714::Client::describeSubscribeWithOptions(shared_ptr<DescribeSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSubscribeResponse(doRPCRequest(make_shared<string>("DescribeSubscribe"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSubscribeResponse Alibabacloud_CloudAPI20160714::Client::describeSubscribe(shared_ptr<DescribeSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscribeWithOptions(request, runtime);
}

CreateApiResponse Alibabacloud_CloudAPI20160714::Client::createApiWithOptions(shared_ptr<CreateApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateApiResponse(doRPCRequest(make_shared<string>("CreateApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateApiResponse Alibabacloud_CloudAPI20160714::Client::createApi(shared_ptr<CreateApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiWithOptions(request, runtime);
}

DescribeConflictApisResponse Alibabacloud_CloudAPI20160714::Client::describeConflictApisWithOptions(shared_ptr<DescribeConflictApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeConflictApisResponse(doRPCRequest(make_shared<string>("DescribeConflictApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeConflictApisResponse Alibabacloud_CloudAPI20160714::Client::describeConflictApis(shared_ptr<DescribeConflictApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConflictApisWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_CloudAPI20160714::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppResponse(doRPCRequest(make_shared<string>("DeleteApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppResponse Alibabacloud_CloudAPI20160714::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

DescribeRegionLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeRegionLatencyWithOptions(shared_ptr<DescribeRegionLatencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionLatencyResponse(doRPCRequest(make_shared<string>("DescribeRegionLatency"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeRegionLatency(shared_ptr<DescribeRegionLatencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionLatencyWithOptions(request, runtime);
}

ModifyInstanceSpecResponse Alibabacloud_CloudAPI20160714::Client::modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyInstanceSpec"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceSpecResponse Alibabacloud_CloudAPI20160714::Client::modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSpecWithOptions(request, runtime);
}

BatchAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::batchAbolishApisWithOptions(shared_ptr<BatchAbolishApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchAbolishApisResponse(doRPCRequest(make_shared<string>("BatchAbolishApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::batchAbolishApis(shared_ptr<BatchAbolishApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAbolishApisWithOptions(request, runtime);
}

DescribeApiHistoriesResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistoriesWithOptions(shared_ptr<DescribeApiHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiHistoriesResponse(doRPCRequest(make_shared<string>("DescribeApiHistories"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiHistoriesResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistories(shared_ptr<DescribeApiHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiHistoriesWithOptions(request, runtime);
}

RemoveTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeTrafficControlApisWithOptions(shared_ptr<RemoveTrafficControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTrafficControlApisResponse(doRPCRequest(make_shared<string>("RemoveTrafficControlApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeTrafficControlApis(shared_ptr<RemoveTrafficControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTrafficControlApisWithOptions(request, runtime);
}

ModifyApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::modifyApiMarketAttributesWithOptions(shared_ptr<ModifyApiMarketAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyApiMarketAttributesResponse(doRPCRequest(make_shared<string>("ModifyApiMarketAttributes"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::modifyApiMarketAttributes(shared_ptr<ModifyApiMarketAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiMarketAttributesWithOptions(request, runtime);
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteAllTrafficSpecialControlWithOptions(shared_ptr<DeleteAllTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAllTrafficSpecialControlResponse(doRPCRequest(make_shared<string>("DeleteAllTrafficSpecialControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteAllTrafficSpecialControl(shared_ptr<DeleteAllTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllTrafficSpecialControlWithOptions(request, runtime);
}

AbolishApiResponse Alibabacloud_CloudAPI20160714::Client::abolishApiWithOptions(shared_ptr<AbolishApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AbolishApiResponse(doRPCRequest(make_shared<string>("AbolishApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AbolishApiResponse Alibabacloud_CloudAPI20160714::Client::abolishApi(shared_ptr<AbolishApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishApiWithOptions(request, runtime);
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160714::Client::createApiGroupWithOptions(shared_ptr<CreateApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateApiGroupResponse(doRPCRequest(make_shared<string>("CreateApiGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160714::Client::createApiGroup(shared_ptr<CreateApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiGroupWithOptions(request, runtime);
}

DeleteProductResponse Alibabacloud_CloudAPI20160714::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProductResponse(doRPCRequest(make_shared<string>("DeleteProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProductResponse Alibabacloud_CloudAPI20160714::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductWithOptions(request, runtime);
}

DescribeDomainsResolutionResponse Alibabacloud_CloudAPI20160714::Client::describeDomainsResolutionWithOptions(shared_ptr<DescribeDomainsResolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainsResolutionResponse(doRPCRequest(make_shared<string>("DescribeDomainsResolution"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainsResolutionResponse Alibabacloud_CloudAPI20160714::Client::describeDomainsResolution(shared_ptr<DescribeDomainsResolutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainsResolutionWithOptions(request, runtime);
}

DeleteApiResponse Alibabacloud_CloudAPI20160714::Client::deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteApiResponse(doRPCRequest(make_shared<string>("DeleteApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteApiResponse Alibabacloud_CloudAPI20160714::Client::deleteApi(shared_ptr<DeleteApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiWithOptions(request, runtime);
}

SynchronizeGroupConfigFlowStartResponse Alibabacloud_CloudAPI20160714::Client::synchronizeGroupConfigFlowStartWithOptions(shared_ptr<SynchronizeGroupConfigFlowStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SynchronizeGroupConfigFlowStartResponse(doRPCRequest(make_shared<string>("SynchronizeGroupConfigFlowStart"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SynchronizeGroupConfigFlowStartResponse Alibabacloud_CloudAPI20160714::Client::synchronizeGroupConfigFlowStart(shared_ptr<SynchronizeGroupConfigFlowStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeGroupConfigFlowStartWithOptions(request, runtime);
}

DescribePurchasedApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroupWithOptions(shared_ptr<DescribePurchasedApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePurchasedApiGroupResponse(doRPCRequest(make_shared<string>("DescribePurchasedApiGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePurchasedApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroup(shared_ptr<DescribePurchasedApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupWithOptions(request, runtime);
}

RefreshMarketGroupAuthorizationsResponse Alibabacloud_CloudAPI20160714::Client::refreshMarketGroupAuthorizationsWithOptions(shared_ptr<RefreshMarketGroupAuthorizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshMarketGroupAuthorizationsResponse(doRPCRequest(make_shared<string>("RefreshMarketGroupAuthorizations"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshMarketGroupAuthorizationsResponse Alibabacloud_CloudAPI20160714::Client::refreshMarketGroupAuthorizations(shared_ptr<RefreshMarketGroupAuthorizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshMarketGroupAuthorizationsWithOptions(request, runtime);
}

ModifyIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlPolicyItemWithOptions(shared_ptr<ModifyIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyIpControlPolicyItemResponse(doRPCRequest(make_shared<string>("ModifyIpControlPolicyItem"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlPolicyItem(shared_ptr<ModifyIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpControlPolicyItemWithOptions(request, runtime);
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::createTrafficControlWithOptions(shared_ptr<CreateTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTrafficControlResponse(doRPCRequest(make_shared<string>("CreateTrafficControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::createTrafficControl(shared_ptr<CreateTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrafficControlWithOptions(request, runtime);
}

SdkGenerateByAppResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByAppWithOptions(shared_ptr<SdkGenerateByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SdkGenerateByAppResponse(doRPCRequest(make_shared<string>("SdkGenerateByApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SdkGenerateByAppResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByApp(shared_ptr<SdkGenerateByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sdkGenerateByAppWithOptions(request, runtime);
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::setDomainCertificateWithOptions(shared_ptr<SetDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDomainCertificateResponse(doRPCRequest(make_shared<string>("SetDomainCertificate"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::setDomainCertificate(shared_ptr<SetDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainCertificateWithOptions(request, runtime);
}

DescribeModelsResponse Alibabacloud_CloudAPI20160714::Client::describeModelsWithOptions(shared_ptr<DescribeModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeModelsResponse(doRPCRequest(make_shared<string>("DescribeModels"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeModelsResponse Alibabacloud_CloudAPI20160714::Client::describeModels(shared_ptr<DescribeModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModelsWithOptions(request, runtime);
}

SdkGenerateByGroupResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByGroupWithOptions(shared_ptr<SdkGenerateByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SdkGenerateByGroupResponse(doRPCRequest(make_shared<string>("SdkGenerateByGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SdkGenerateByGroupResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByGroup(shared_ptr<SdkGenerateByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sdkGenerateByGroupWithOptions(request, runtime);
}

SetAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setAppsAuthoritiesWithOptions(shared_ptr<SetAppsAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppsAuthoritiesResponse(doRPCRequest(make_shared<string>("SetAppsAuthorities"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setAppsAuthorities(shared_ptr<SetAppsAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppsAuthoritiesWithOptions(request, runtime);
}

CheckInstanceSupportStageNameResponse Alibabacloud_CloudAPI20160714::Client::checkInstanceSupportStageNameWithOptions(shared_ptr<CheckInstanceSupportStageNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckInstanceSupportStageNameResponse(doRPCRequest(make_shared<string>("CheckInstanceSupportStageName"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckInstanceSupportStageNameResponse Alibabacloud_CloudAPI20160714::Client::checkInstanceSupportStageName(shared_ptr<CheckInstanceSupportStageNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkInstanceSupportStageNameWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_CloudAPI20160714::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_CloudAPI20160714::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

DescribeApiTrafficDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficDataWithOptions(shared_ptr<DescribeApiTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeApiTrafficData"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiTrafficDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficData(shared_ptr<DescribeApiTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiTrafficDataWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_CloudAPI20160714::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppResponse(doRPCRequest(make_shared<string>("CreateApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppResponse Alibabacloud_CloudAPI20160714::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160714::Client::resetAppCodeWithOptions(shared_ptr<ResetAppCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAppCodeResponse(doRPCRequest(make_shared<string>("ResetAppCode"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160714::Client::resetAppCode(shared_ptr<ResetAppCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppCodeWithOptions(request, runtime);
}

DeleteApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::deleteApiStageVariableWithOptions(shared_ptr<DeleteApiStageVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteApiStageVariableResponse(doRPCRequest(make_shared<string>("DeleteApiStageVariable"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::deleteApiStageVariable(shared_ptr<DeleteApiStageVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiStageVariableWithOptions(request, runtime);
}

DescribeReadyReservationApisResponse Alibabacloud_CloudAPI20160714::Client::describeReadyReservationApisWithOptions(shared_ptr<DescribeReadyReservationApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeReadyReservationApisResponse(doRPCRequest(make_shared<string>("DescribeReadyReservationApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeReadyReservationApisResponse Alibabacloud_CloudAPI20160714::Client::describeReadyReservationApis(shared_ptr<DescribeReadyReservationApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReadyReservationApisWithOptions(request, runtime);
}

ModifySignatureResponse Alibabacloud_CloudAPI20160714::Client::modifySignatureWithOptions(shared_ptr<ModifySignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySignatureResponse(doRPCRequest(make_shared<string>("ModifySignature"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySignatureResponse Alibabacloud_CloudAPI20160714::Client::modifySignature(shared_ptr<ModifySignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySignatureWithOptions(request, runtime);
}

DescribeInstanceLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceLatencyWithOptions(shared_ptr<DescribeInstanceLatencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceLatencyResponse(doRPCRequest(make_shared<string>("DescribeInstanceLatency"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceLatency(shared_ptr<DescribeInstanceLatencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceLatencyWithOptions(request, runtime);
}

DescribeApiQpsDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiQpsDataWithOptions(shared_ptr<DescribeApiQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiQpsDataResponse(doRPCRequest(make_shared<string>("DescribeApiQpsData"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiQpsDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiQpsData(shared_ptr<DescribeApiQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiQpsDataWithOptions(request, runtime);
}

DescribeInstanceHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceHttpCodeWithOptions(shared_ptr<DescribeInstanceHttpCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceHttpCodeResponse(doRPCRequest(make_shared<string>("DescribeInstanceHttpCode"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceHttpCode(shared_ptr<DescribeInstanceHttpCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceHttpCodeWithOptions(request, runtime);
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160714::Client::describeAppSecurityWithOptions(shared_ptr<DescribeAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppSecurityResponse(doRPCRequest(make_shared<string>("DescribeAppSecurity"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160714::Client::describeAppSecurity(shared_ptr<DescribeAppSecurityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppSecurityWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_CloudAPI20160714::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_CloudAPI20160714::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DescribeRegionTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeRegionTrafficWithOptions(shared_ptr<DescribeRegionTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionTrafficResponse(doRPCRequest(make_shared<string>("DescribeRegionTraffic"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeRegionTraffic(shared_ptr<DescribeRegionTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionTrafficWithOptions(request, runtime);
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160714::Client::describeApisByAppWithOptions(shared_ptr<DescribeApisByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApisByAppResponse(doRPCRequest(make_shared<string>("DescribeApisByApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160714::Client::describeApisByApp(shared_ptr<DescribeApisByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByAppWithOptions(request, runtime);
}

DescribeRegionQpsGroupByInstanceResponse Alibabacloud_CloudAPI20160714::Client::describeRegionQpsGroupByInstanceWithOptions(shared_ptr<DescribeRegionQpsGroupByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionQpsGroupByInstanceResponse(doRPCRequest(make_shared<string>("DescribeRegionQpsGroupByInstance"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionQpsGroupByInstanceResponse Alibabacloud_CloudAPI20160714::Client::describeRegionQpsGroupByInstance(shared_ptr<DescribeRegionQpsGroupByInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionQpsGroupByInstanceWithOptions(request, runtime);
}

DryRunSwaggerResponse Alibabacloud_CloudAPI20160714::Client::dryRunSwaggerWithOptions(shared_ptr<DryRunSwaggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DryRunSwaggerShrinkRequest> request = make_shared<DryRunSwaggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->globalCondition)) {
    request->globalConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalCondition, make_shared<string>("GlobalCondition"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DryRunSwaggerResponse(doRPCRequest(make_shared<string>("DryRunSwagger"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DryRunSwaggerResponse Alibabacloud_CloudAPI20160714::Client::dryRunSwagger(shared_ptr<DryRunSwaggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dryRunSwaggerWithOptions(request, runtime);
}

CreatePluginResponse Alibabacloud_CloudAPI20160714::Client::createPluginWithOptions(shared_ptr<CreatePluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePluginResponse(doRPCRequest(make_shared<string>("CreatePlugin"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePluginResponse Alibabacloud_CloudAPI20160714::Client::createPlugin(shared_ptr<CreatePluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPluginWithOptions(request, runtime);
}

ModifyLogConfigResponse Alibabacloud_CloudAPI20160714::Client::modifyLogConfigWithOptions(shared_ptr<ModifyLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLogConfigResponse(doRPCRequest(make_shared<string>("ModifyLogConfig"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLogConfigResponse Alibabacloud_CloudAPI20160714::Client::modifyLogConfig(shared_ptr<ModifyLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogConfigWithOptions(request, runtime);
}

DescribeApisByIpControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByIpControlWithOptions(shared_ptr<DescribeApisByIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApisByIpControlResponse(doRPCRequest(make_shared<string>("DescribeApisByIpControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApisByIpControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByIpControl(shared_ptr<DescribeApisByIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByIpControlWithOptions(request, runtime);
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApiWithOptions(shared_ptr<DescribeDeployedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeployedApiResponse(doRPCRequest(make_shared<string>("DescribeDeployedApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApi(shared_ptr<DescribeDeployedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApiWithOptions(request, runtime);
}

DescribeApisBySignatureResponse Alibabacloud_CloudAPI20160714::Client::describeApisBySignatureWithOptions(shared_ptr<DescribeApisBySignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApisBySignatureResponse(doRPCRequest(make_shared<string>("DescribeApisBySignature"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApisBySignatureResponse Alibabacloud_CloudAPI20160714::Client::describeApisBySignature(shared_ptr<DescribeApisBySignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisBySignatureWithOptions(request, runtime);
}

DescribeAccordanceApisResponse Alibabacloud_CloudAPI20160714::Client::describeAccordanceApisWithOptions(shared_ptr<DescribeAccordanceApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccordanceApisResponse(doRPCRequest(make_shared<string>("DescribeAccordanceApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccordanceApisResponse Alibabacloud_CloudAPI20160714::Client::describeAccordanceApis(shared_ptr<DescribeAccordanceApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccordanceApisWithOptions(request, runtime);
}

RemoveApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeApisAuthoritiesWithOptions(shared_ptr<RemoveApisAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveApisAuthoritiesResponse(doRPCRequest(make_shared<string>("RemoveApisAuthorities"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeApisAuthorities(shared_ptr<RemoveApisAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeApisAuthoritiesWithOptions(request, runtime);
}

SetVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::setVpcAccessWithOptions(shared_ptr<SetVpcAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetVpcAccessResponse(doRPCRequest(make_shared<string>("SetVpcAccess"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::setVpcAccess(shared_ptr<SetVpcAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVpcAccessWithOptions(request, runtime);
}

AttachPluginResponse Alibabacloud_CloudAPI20160714::Client::attachPluginWithOptions(shared_ptr<AttachPluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachPluginResponse(doRPCRequest(make_shared<string>("AttachPlugin"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachPluginResponse Alibabacloud_CloudAPI20160714::Client::attachPlugin(shared_ptr<AttachPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachPluginWithOptions(request, runtime);
}

DescribeSignaturesByApiResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesByApiWithOptions(shared_ptr<DescribeSignaturesByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSignaturesByApiResponse(doRPCRequest(make_shared<string>("DescribeSignaturesByApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSignaturesByApiResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesByApi(shared_ptr<DescribeSignaturesByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSignaturesByApiWithOptions(request, runtime);
}

ModifyApiResponse Alibabacloud_CloudAPI20160714::Client::modifyApiWithOptions(shared_ptr<ModifyApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyApiResponse(doRPCRequest(make_shared<string>("ModifyApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyApiResponse Alibabacloud_CloudAPI20160714::Client::modifyApi(shared_ptr<ModifyApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiWithOptions(request, runtime);
}

ResetAppSecretResponse Alibabacloud_CloudAPI20160714::Client::resetAppSecretWithOptions(shared_ptr<ResetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAppSecretResponse(doRPCRequest(make_shared<string>("ResetAppSecret"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAppSecretResponse Alibabacloud_CloudAPI20160714::Client::resetAppSecret(shared_ptr<ResetAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppSecretWithOptions(request, runtime);
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::addTrafficSpecialControlWithOptions(shared_ptr<AddTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTrafficSpecialControlResponse(doRPCRequest(make_shared<string>("AddTrafficSpecialControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::addTrafficSpecialControl(shared_ptr<AddTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTrafficSpecialControlWithOptions(request, runtime);
}

DeployApiResponse Alibabacloud_CloudAPI20160714::Client::deployApiWithOptions(shared_ptr<DeployApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeployApiResponse(doRPCRequest(make_shared<string>("DeployApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeployApiResponse Alibabacloud_CloudAPI20160714::Client::deployApi(shared_ptr<DeployApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployApiWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_CloudAPI20160714::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAppResponse(doRPCRequest(make_shared<string>("ModifyApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAppResponse Alibabacloud_CloudAPI20160714::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

SetDomainWebSocketStatusResponse Alibabacloud_CloudAPI20160714::Client::setDomainWebSocketStatusWithOptions(shared_ptr<SetDomainWebSocketStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDomainWebSocketStatusResponse(doRPCRequest(make_shared<string>("SetDomainWebSocketStatus"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDomainWebSocketStatusResponse Alibabacloud_CloudAPI20160714::Client::setDomainWebSocketStatus(shared_ptr<SetDomainWebSocketStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainWebSocketStatusWithOptions(request, runtime);
}

DescribeInstanceDropConnectionsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceDropConnectionsWithOptions(shared_ptr<DescribeInstanceDropConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceDropConnectionsResponse(doRPCRequest(make_shared<string>("DescribeInstanceDropConnections"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceDropConnectionsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceDropConnections(shared_ptr<DescribeInstanceDropConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceDropConnectionsWithOptions(request, runtime);
}

DescribeApiTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficControlsWithOptions(shared_ptr<DescribeApiTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiTrafficControlsResponse(doRPCRequest(make_shared<string>("DescribeApiTrafficControls"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficControls(shared_ptr<DescribeApiTrafficControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiTrafficControlsWithOptions(request, runtime);
}

SetSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::setSignatureApisWithOptions(shared_ptr<SetSignatureApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetSignatureApisResponse(doRPCRequest(make_shared<string>("SetSignatureApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::setSignatureApis(shared_ptr<SetSignatureApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSignatureApisWithOptions(request, runtime);
}

DescribeAppResponse Alibabacloud_CloudAPI20160714::Client::describeAppWithOptions(shared_ptr<DescribeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppResponse(doRPCRequest(make_shared<string>("DescribeApp"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppResponse Alibabacloud_CloudAPI20160714::Client::describeApp(shared_ptr<DescribeAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppWithOptions(request, runtime);
}

RemoveIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlPolicyItemWithOptions(shared_ptr<RemoveIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveIpControlPolicyItemResponse(doRPCRequest(make_shared<string>("RemoveIpControlPolicyItem"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlPolicyItem(shared_ptr<RemoveIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeIpControlPolicyItemWithOptions(request, runtime);
}

DescribeInstanceTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceTrafficWithOptions(shared_ptr<DescribeInstanceTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceTrafficResponse(doRPCRequest(make_shared<string>("DescribeInstanceTraffic"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceTraffic(shared_ptr<DescribeInstanceTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTrafficWithOptions(request, runtime);
}

DescribeInstanceQpsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceQpsWithOptions(shared_ptr<DescribeInstanceQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceQpsResponse(doRPCRequest(make_shared<string>("DescribeInstanceQps"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceQpsResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceQps(shared_ptr<DescribeInstanceQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceQpsWithOptions(request, runtime);
}

HideProductResponse Alibabacloud_CloudAPI20160714::Client::hideProductWithOptions(shared_ptr<HideProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HideProductResponse(doRPCRequest(make_shared<string>("HideProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HideProductResponse Alibabacloud_CloudAPI20160714::Client::hideProduct(shared_ptr<HideProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hideProductWithOptions(request, runtime);
}

DescribeGroupQpsResponse Alibabacloud_CloudAPI20160714::Client::describeGroupQpsWithOptions(shared_ptr<DescribeGroupQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupQpsResponse(doRPCRequest(make_shared<string>("DescribeGroupQps"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupQpsResponse Alibabacloud_CloudAPI20160714::Client::describeGroupQps(shared_ptr<DescribeGroupQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupQpsWithOptions(request, runtime);
}

CreateApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::createApiStageVariableWithOptions(shared_ptr<CreateApiStageVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateApiStageVariableResponse(doRPCRequest(make_shared<string>("CreateApiStageVariable"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::createApiStageVariable(shared_ptr<CreateApiStageVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiStageVariableWithOptions(request, runtime);
}

CreateMonitorGroupResponse Alibabacloud_CloudAPI20160714::Client::createMonitorGroupWithOptions(shared_ptr<CreateMonitorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMonitorGroupResponse(doRPCRequest(make_shared<string>("CreateMonitorGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMonitorGroupResponse Alibabacloud_CloudAPI20160714::Client::createMonitorGroup(shared_ptr<CreateMonitorGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMonitorGroupWithOptions(request, runtime);
}

DescribeApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeApiMarketAttributesWithOptions(shared_ptr<DescribeApiMarketAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiMarketAttributesResponse(doRPCRequest(make_shared<string>("DescribeApiMarketAttributes"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeApiMarketAttributes(shared_ptr<DescribeApiMarketAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiMarketAttributesWithOptions(request, runtime);
}

DescribeApiSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeApiSignaturesWithOptions(shared_ptr<DescribeApiSignaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiSignaturesResponse(doRPCRequest(make_shared<string>("DescribeApiSignatures"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeApiSignatures(shared_ptr<DescribeApiSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiSignaturesWithOptions(request, runtime);
}

DescribeIpControlPolicyItemsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlPolicyItemsWithOptions(shared_ptr<DescribeIpControlPolicyItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpControlPolicyItemsResponse(doRPCRequest(make_shared<string>("DescribeIpControlPolicyItems"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpControlPolicyItemsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlPolicyItems(shared_ptr<DescribeIpControlPolicyItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpControlPolicyItemsWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDomainResponse(doRPCRequest(make_shared<string>("DeleteDomain"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDomainResponse Alibabacloud_CloudAPI20160714::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DescribeGroupConfigSynFlowsResponse Alibabacloud_CloudAPI20160714::Client::describeGroupConfigSynFlowsWithOptions(shared_ptr<DescribeGroupConfigSynFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupConfigSynFlowsResponse(doRPCRequest(make_shared<string>("DescribeGroupConfigSynFlows"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupConfigSynFlowsResponse Alibabacloud_CloudAPI20160714::Client::describeGroupConfigSynFlows(shared_ptr<DescribeGroupConfigSynFlowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupConfigSynFlowsWithOptions(request, runtime);
}

DescribeSyncApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeSyncApiTaskWithOptions(shared_ptr<DescribeSyncApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSyncApiTaskResponse(doRPCRequest(make_shared<string>("DescribeSyncApiTask"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSyncApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeSyncApiTask(shared_ptr<DescribeSyncApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSyncApiTaskWithOptions(request, runtime);
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupWithOptions(shared_ptr<ModifyApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyApiGroupResponse(doRPCRequest(make_shared<string>("ModifyApiGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroup(shared_ptr<ModifyApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiGroupWithOptions(request, runtime);
}

SetWildcardDomainPatternsResponse Alibabacloud_CloudAPI20160714::Client::setWildcardDomainPatternsWithOptions(shared_ptr<SetWildcardDomainPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetWildcardDomainPatternsResponse(doRPCRequest(make_shared<string>("SetWildcardDomainPatterns"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetWildcardDomainPatternsResponse Alibabacloud_CloudAPI20160714::Client::setWildcardDomainPatterns(shared_ptr<SetWildcardDomainPatternsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setWildcardDomainPatternsWithOptions(request, runtime);
}

DescribeApiResponse Alibabacloud_CloudAPI20160714::Client::describeApiWithOptions(shared_ptr<DescribeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiResponse(doRPCRequest(make_shared<string>("DescribeApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiResponse Alibabacloud_CloudAPI20160714::Client::describeApi(shared_ptr<DescribeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiWithOptions(request, runtime);
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsWithOptions(shared_ptr<DescribeTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTrafficControlsResponse(doRPCRequest(make_shared<string>("DescribeTrafficControls"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControls(shared_ptr<DescribeTrafficControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrafficControlsWithOptions(request, runtime);
}

SetDomainResponse Alibabacloud_CloudAPI20160714::Client::setDomainWithOptions(shared_ptr<SetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDomainResponse(doRPCRequest(make_shared<string>("SetDomain"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDomainResponse Alibabacloud_CloudAPI20160714::Client::setDomain(shared_ptr<SetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainWithOptions(request, runtime);
}

DeleteIpControlResponse Alibabacloud_CloudAPI20160714::Client::deleteIpControlWithOptions(shared_ptr<DeleteIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteIpControlResponse(doRPCRequest(make_shared<string>("DeleteIpControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteIpControlResponse Alibabacloud_CloudAPI20160714::Client::deleteIpControl(shared_ptr<DeleteIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpControlWithOptions(request, runtime);
}

DescribeApiLatencyDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiLatencyDataWithOptions(shared_ptr<DescribeApiLatencyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiLatencyDataResponse(doRPCRequest(make_shared<string>("DescribeApiLatencyData"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiLatencyDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiLatencyData(shared_ptr<DescribeApiLatencyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiLatencyDataWithOptions(request, runtime);
}

DescribeGroupLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeGroupLatencyWithOptions(shared_ptr<DescribeGroupLatencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupLatencyResponse(doRPCRequest(make_shared<string>("DescribeGroupLatency"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupLatencyResponse Alibabacloud_CloudAPI20160714::Client::describeGroupLatency(shared_ptr<DescribeGroupLatencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupLatencyWithOptions(request, runtime);
}

DescribeBackendDifferentApisResponse Alibabacloud_CloudAPI20160714::Client::describeBackendDifferentApisWithOptions(shared_ptr<DescribeBackendDifferentApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackendDifferentApisResponse(doRPCRequest(make_shared<string>("DescribeBackendDifferentApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackendDifferentApisResponse Alibabacloud_CloudAPI20160714::Client::describeBackendDifferentApis(shared_ptr<DescribeBackendDifferentApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackendDifferentApisWithOptions(request, runtime);
}

DescribeApiHistoryResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistoryWithOptions(shared_ptr<DescribeApiHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiHistoryResponse(doRPCRequest(make_shared<string>("DescribeApiHistory"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiHistoryResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistory(shared_ptr<DescribeApiHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiHistoryWithOptions(request, runtime);
}

UpdatePartProductResponse Alibabacloud_CloudAPI20160714::Client::updatePartProductWithOptions(shared_ptr<UpdatePartProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePartProductResponse(doRPCRequest(make_shared<string>("UpdatePartProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePartProductResponse Alibabacloud_CloudAPI20160714::Client::updatePartProduct(shared_ptr<UpdatePartProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePartProductWithOptions(request, runtime);
}

ChangeProductSpecsOrderResponse Alibabacloud_CloudAPI20160714::Client::changeProductSpecsOrderWithOptions(shared_ptr<ChangeProductSpecsOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeProductSpecsOrderResponse(doRPCRequest(make_shared<string>("ChangeProductSpecsOrder"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeProductSpecsOrderResponse Alibabacloud_CloudAPI20160714::Client::changeProductSpecsOrder(shared_ptr<ChangeProductSpecsOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeProductSpecsOrderWithOptions(request, runtime);
}

CreateIntranetDomainResponse Alibabacloud_CloudAPI20160714::Client::createIntranetDomainWithOptions(shared_ptr<CreateIntranetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIntranetDomainResponse(doRPCRequest(make_shared<string>("CreateIntranetDomain"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIntranetDomainResponse Alibabacloud_CloudAPI20160714::Client::createIntranetDomain(shared_ptr<CreateIntranetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntranetDomainWithOptions(request, runtime);
}

ModifyModelResponse Alibabacloud_CloudAPI20160714::Client::modifyModelWithOptions(shared_ptr<ModifyModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyModelResponse(doRPCRequest(make_shared<string>("ModifyModel"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyModelResponse Alibabacloud_CloudAPI20160714::Client::modifyModel(shared_ptr<ModifyModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyModelWithOptions(request, runtime);
}

DescribeApiErrorDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiErrorDataWithOptions(shared_ptr<DescribeApiErrorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiErrorDataResponse(doRPCRequest(make_shared<string>("DescribeApiErrorData"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiErrorDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiErrorData(shared_ptr<DescribeApiErrorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiErrorDataWithOptions(request, runtime);
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficSpecialControlWithOptions(shared_ptr<DeleteTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTrafficSpecialControlResponse(doRPCRequest(make_shared<string>("DeleteTrafficSpecialControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficSpecialControl(shared_ptr<DeleteTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficSpecialControlWithOptions(request, runtime);
}

ModifyPluginResponse Alibabacloud_CloudAPI20160714::Client::modifyPluginWithOptions(shared_ptr<ModifyPluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPluginResponse(doRPCRequest(make_shared<string>("ModifyPlugin"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPluginResponse Alibabacloud_CloudAPI20160714::Client::modifyPlugin(shared_ptr<ModifyPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPluginWithOptions(request, runtime);
}

DescribeSummaryDataResponse Alibabacloud_CloudAPI20160714::Client::describeSummaryDataWithOptions(shared_ptr<DescribeSummaryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSummaryDataResponse(doRPCRequest(make_shared<string>("DescribeSummaryData"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSummaryDataResponse Alibabacloud_CloudAPI20160714::Client::describeSummaryData(shared_ptr<DescribeSummaryDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSummaryDataWithOptions(request, runtime);
}

DescribeApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupWithOptions(shared_ptr<DescribeApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiGroupResponse(doRPCRequest(make_shared<string>("DescribeApiGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroup(shared_ptr<DescribeApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupWithOptions(request, runtime);
}

ModifyApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupVpcWhitelistWithOptions(shared_ptr<ModifyApiGroupVpcWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyApiGroupVpcWhitelistResponse(doRPCRequest(make_shared<string>("ModifyApiGroupVpcWhitelist"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupVpcWhitelist(shared_ptr<ModifyApiGroupVpcWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiGroupVpcWhitelistWithOptions(request, runtime);
}

CheckFcServiceLinkedRoleResponse Alibabacloud_CloudAPI20160714::Client::checkFcServiceLinkedRoleWithOptions(shared_ptr<CheckFcServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckFcServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CheckFcServiceLinkedRole"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckFcServiceLinkedRoleResponse Alibabacloud_CloudAPI20160714::Client::checkFcServiceLinkedRole(shared_ptr<CheckFcServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFcServiceLinkedRoleWithOptions(request, runtime);
}

SynchronizeGroupConfigResponse Alibabacloud_CloudAPI20160714::Client::synchronizeGroupConfigWithOptions(shared_ptr<SynchronizeGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SynchronizeGroupConfigResponse(doRPCRequest(make_shared<string>("SynchronizeGroupConfig"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SynchronizeGroupConfigResponse Alibabacloud_CloudAPI20160714::Client::synchronizeGroupConfig(shared_ptr<SynchronizeGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeGroupConfigWithOptions(request, runtime);
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160714::Client::deleteApiGroupWithOptions(shared_ptr<DeleteApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteApiGroupResponse(doRPCRequest(make_shared<string>("DeleteApiGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160714::Client::deleteApiGroup(shared_ptr<DeleteApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiGroupWithOptions(request, runtime);
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupsWithOptions(shared_ptr<DescribeApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiGroupsResponse(doRPCRequest(make_shared<string>("DescribeApiGroups"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroups(shared_ptr<DescribeApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupsWithOptions(request, runtime);
}

DescribeApisResponse Alibabacloud_CloudAPI20160714::Client::describeApisWithOptions(shared_ptr<DescribeApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApisResponse(doRPCRequest(make_shared<string>("DescribeApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApisResponse Alibabacloud_CloudAPI20160714::Client::describeApis(shared_ptr<DescribeApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisWithOptions(request, runtime);
}

DescribeVarDiffBetweenGroupResponse Alibabacloud_CloudAPI20160714::Client::describeVarDiffBetweenGroupWithOptions(shared_ptr<DescribeVarDiffBetweenGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVarDiffBetweenGroupResponse(doRPCRequest(make_shared<string>("DescribeVarDiffBetweenGroup"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVarDiffBetweenGroupResponse Alibabacloud_CloudAPI20160714::Client::describeVarDiffBetweenGroup(shared_ptr<DescribeVarDiffBetweenGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVarDiffBetweenGroupWithOptions(request, runtime);
}

DescribeInstanceDropPacketResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceDropPacketWithOptions(shared_ptr<DescribeInstanceDropPacketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceDropPacketResponse(doRPCRequest(make_shared<string>("DescribeInstanceDropPacket"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceDropPacketResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceDropPacket(shared_ptr<DescribeInstanceDropPacketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceDropPacketWithOptions(request, runtime);
}

SetIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::setIpControlApisWithOptions(shared_ptr<SetIpControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetIpControlApisResponse(doRPCRequest(make_shared<string>("SetIpControlApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::setIpControlApis(shared_ptr<SetIpControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setIpControlApisWithOptions(request, runtime);
}

DescribeAppAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeAppAttributesWithOptions(shared_ptr<DescribeAppAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppAttributesResponse(doRPCRequest(make_shared<string>("DescribeAppAttributes"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeAppAttributes(shared_ptr<DescribeAppAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppAttributesWithOptions(request, runtime);
}

DescribeGroupTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeGroupTrafficWithOptions(shared_ptr<DescribeGroupTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupTrafficResponse(doRPCRequest(make_shared<string>("DescribeGroupTraffic"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupTrafficResponse Alibabacloud_CloudAPI20160714::Client::describeGroupTraffic(shared_ptr<DescribeGroupTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupTrafficWithOptions(request, runtime);
}

DescribeDeployApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeDeployApiTaskWithOptions(shared_ptr<DescribeDeployApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeployApiTaskResponse(doRPCRequest(make_shared<string>("DescribeDeployApiTask"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeployApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeDeployApiTask(shared_ptr<DescribeDeployApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployApiTaskWithOptions(request, runtime);
}

DescribeWillBeSyncApisResponse Alibabacloud_CloudAPI20160714::Client::describeWillBeSyncApisWithOptions(shared_ptr<DescribeWillBeSyncApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWillBeSyncApisResponse(doRPCRequest(make_shared<string>("DescribeWillBeSyncApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWillBeSyncApisResponse Alibabacloud_CloudAPI20160714::Client::describeWillBeSyncApis(shared_ptr<DescribeWillBeSyncApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWillBeSyncApisWithOptions(request, runtime);
}

DescribeGroupHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeGroupHttpCodeWithOptions(shared_ptr<DescribeGroupHttpCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupHttpCodeResponse(doRPCRequest(make_shared<string>("DescribeGroupHttpCode"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeGroupHttpCode(shared_ptr<DescribeGroupHttpCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupHttpCodeWithOptions(request, runtime);
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160714::Client::describeApiDocWithOptions(shared_ptr<DescribeApiDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiDocResponse(doRPCRequest(make_shared<string>("DescribeApiDoc"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160714::Client::describeApiDoc(shared_ptr<DescribeApiDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiDocWithOptions(request, runtime);
}

DescribeRegionQpsResponse Alibabacloud_CloudAPI20160714::Client::describeRegionQpsWithOptions(shared_ptr<DescribeRegionQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionQpsResponse(doRPCRequest(make_shared<string>("DescribeRegionQps"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionQpsResponse Alibabacloud_CloudAPI20160714::Client::describeRegionQps(shared_ptr<DescribeRegionQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionQpsWithOptions(request, runtime);
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainCertificateWithOptions(shared_ptr<DeleteDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDomainCertificateResponse(doRPCRequest(make_shared<string>("DeleteDomainCertificate"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainCertificate(shared_ptr<DeleteDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainCertificateWithOptions(request, runtime);
}

DescribeSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesWithOptions(shared_ptr<DescribeSignaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSignaturesResponse(doRPCRequest(make_shared<string>("DescribeSignatures"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeSignatures(shared_ptr<DescribeSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSignaturesWithOptions(request, runtime);
}

DescribeApiStageResponse Alibabacloud_CloudAPI20160714::Client::describeApiStageWithOptions(shared_ptr<DescribeApiStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiStageResponse(doRPCRequest(make_shared<string>("DescribeApiStage"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiStageResponse Alibabacloud_CloudAPI20160714::Client::describeApiStage(shared_ptr<DescribeApiStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiStageWithOptions(request, runtime);
}

DescribeInstancePacketsResponse Alibabacloud_CloudAPI20160714::Client::describeInstancePacketsWithOptions(shared_ptr<DescribeInstancePacketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancePacketsResponse(doRPCRequest(make_shared<string>("DescribeInstancePackets"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancePacketsResponse Alibabacloud_CloudAPI20160714::Client::describeInstancePackets(shared_ptr<DescribeInstancePacketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancePacketsWithOptions(request, runtime);
}

DescribeApisByTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByTrafficControlWithOptions(shared_ptr<DescribeApisByTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApisByTrafficControlResponse(doRPCRequest(make_shared<string>("DescribeApisByTrafficControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApisByTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByTrafficControl(shared_ptr<DescribeApisByTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByTrafficControlWithOptions(request, runtime);
}

RemoveVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessWithOptions(shared_ptr<RemoveVpcAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveVpcAccessResponse(doRPCRequest(make_shared<string>("RemoveVpcAccess"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccess(shared_ptr<RemoveVpcAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVpcAccessWithOptions(request, runtime);
}

DeleteProductSpecsResponse Alibabacloud_CloudAPI20160714::Client::deleteProductSpecsWithOptions(shared_ptr<DeleteProductSpecsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProductSpecsResponse(doRPCRequest(make_shared<string>("DeleteProductSpecs"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProductSpecsResponse Alibabacloud_CloudAPI20160714::Client::deleteProductSpecs(shared_ptr<DeleteProductSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductSpecsWithOptions(request, runtime);
}

DescribePluginsByApiResponse Alibabacloud_CloudAPI20160714::Client::describePluginsByApiWithOptions(shared_ptr<DescribePluginsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePluginsByApiResponse(doRPCRequest(make_shared<string>("DescribePluginsByApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePluginsByApiResponse Alibabacloud_CloudAPI20160714::Client::describePluginsByApi(shared_ptr<DescribePluginsByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginsByApiWithOptions(request, runtime);
}

ModifyIpControlResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlWithOptions(shared_ptr<ModifyIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyIpControlResponse(doRPCRequest(make_shared<string>("ModifyIpControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyIpControlResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControl(shared_ptr<ModifyIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpControlWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_CloudAPI20160714::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_CloudAPI20160714::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DescribeAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppsResponse(doRPCRequest(make_shared<string>("DescribeApps"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppsResponse Alibabacloud_CloudAPI20160714::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_CloudAPI20160714::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_CloudAPI20160714::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

DescribeReadyNewApisResponse Alibabacloud_CloudAPI20160714::Client::describeReadyNewApisWithOptions(shared_ptr<DescribeReadyNewApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeReadyNewApisResponse(doRPCRequest(make_shared<string>("DescribeReadyNewApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeReadyNewApisResponse Alibabacloud_CloudAPI20160714::Client::describeReadyNewApis(shared_ptr<DescribeReadyNewApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReadyNewApisWithOptions(request, runtime);
}

RemoveSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::removeSignatureApisWithOptions(shared_ptr<RemoveSignatureApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSignatureApisResponse(doRPCRequest(make_shared<string>("RemoveSignatureApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::removeSignatureApis(shared_ptr<RemoveSignatureApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSignatureApisWithOptions(request, runtime);
}

AddIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::addIpControlPolicyItemWithOptions(shared_ptr<AddIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddIpControlPolicyItemResponse(doRPCRequest(make_shared<string>("AddIpControlPolicyItem"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::addIpControlPolicyItem(shared_ptr<AddIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addIpControlPolicyItemWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_CloudAPI20160714::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_CloudAPI20160714::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

DescribeDomainResponse Alibabacloud_CloudAPI20160714::Client::describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainResponse(doRPCRequest(make_shared<string>("DescribeDomain"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainResponse Alibabacloud_CloudAPI20160714::Client::describeDomain(shared_ptr<DescribeDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithOptions(request, runtime);
}

DeleteModelResponse Alibabacloud_CloudAPI20160714::Client::deleteModelWithOptions(shared_ptr<DeleteModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteModelResponse(doRPCRequest(make_shared<string>("DeleteModel"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteModelResponse Alibabacloud_CloudAPI20160714::Client::deleteModel(shared_ptr<DeleteModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteModelWithOptions(request, runtime);
}

CreateModelResponse Alibabacloud_CloudAPI20160714::Client::createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateModelResponse(doRPCRequest(make_shared<string>("CreateModel"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateModelResponse Alibabacloud_CloudAPI20160714::Client::createModel(shared_ptr<CreateModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createModelWithOptions(request, runtime);
}

DescribeProductResponse Alibabacloud_CloudAPI20160714::Client::describeProductWithOptions(shared_ptr<DescribeProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProductResponse(doRPCRequest(make_shared<string>("DescribeProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProductResponse Alibabacloud_CloudAPI20160714::Client::describeProduct(shared_ptr<DescribeProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProductWithOptions(request, runtime);
}

DescribeIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlsWithOptions(shared_ptr<DescribeIpControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpControlsResponse(doRPCRequest(make_shared<string>("DescribeIpControls"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControls(shared_ptr<DescribeIpControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpControlsWithOptions(request, runtime);
}

ImportSwaggerResponse Alibabacloud_CloudAPI20160714::Client::importSwaggerWithOptions(shared_ptr<ImportSwaggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportSwaggerShrinkRequest> request = make_shared<ImportSwaggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->globalCondition)) {
    request->globalConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalCondition, make_shared<string>("GlobalCondition"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportSwaggerResponse(doRPCRequest(make_shared<string>("ImportSwagger"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportSwaggerResponse Alibabacloud_CloudAPI20160714::Client::importSwagger(shared_ptr<ImportSwaggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importSwaggerWithOptions(request, runtime);
}

SetGroupConfigSynchronizePolicyResponse Alibabacloud_CloudAPI20160714::Client::setGroupConfigSynchronizePolicyWithOptions(shared_ptr<SetGroupConfigSynchronizePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGroupConfigSynchronizePolicyResponse(doRPCRequest(make_shared<string>("SetGroupConfigSynchronizePolicy"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGroupConfigSynchronizePolicyResponse Alibabacloud_CloudAPI20160714::Client::setGroupConfigSynchronizePolicy(shared_ptr<SetGroupConfigSynchronizePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupConfigSynchronizePolicyWithOptions(request, runtime);
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160714::Client::describeHistoryApisWithOptions(shared_ptr<DescribeHistoryApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHistoryApisResponse(doRPCRequest(make_shared<string>("DescribeHistoryApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160714::Client::describeHistoryApis(shared_ptr<DescribeHistoryApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryApisWithOptions(request, runtime);
}

DescribeApiIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiIpControlsWithOptions(shared_ptr<DescribeApiIpControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiIpControlsResponse(doRPCRequest(make_shared<string>("DescribeApiIpControls"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiIpControls(shared_ptr<DescribeApiIpControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiIpControlsWithOptions(request, runtime);
}

DescribeMarketRemainsQuotaResponse Alibabacloud_CloudAPI20160714::Client::describeMarketRemainsQuotaWithOptions(shared_ptr<DescribeMarketRemainsQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMarketRemainsQuotaResponse(doRPCRequest(make_shared<string>("DescribeMarketRemainsQuota"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMarketRemainsQuotaResponse Alibabacloud_CloudAPI20160714::Client::describeMarketRemainsQuota(shared_ptr<DescribeMarketRemainsQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMarketRemainsQuotaWithOptions(request, runtime);
}

CreateIpControlResponse Alibabacloud_CloudAPI20160714::Client::createIpControlWithOptions(shared_ptr<CreateIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIpControlResponse(doRPCRequest(make_shared<string>("CreateIpControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIpControlResponse Alibabacloud_CloudAPI20160714::Client::createIpControl(shared_ptr<CreateIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIpControlWithOptions(request, runtime);
}

DescribePluginSchemasResponse Alibabacloud_CloudAPI20160714::Client::describePluginSchemasWithOptions(shared_ptr<DescribePluginSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePluginSchemasResponse(doRPCRequest(make_shared<string>("DescribePluginSchemas"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePluginSchemasResponse Alibabacloud_CloudAPI20160714::Client::describePluginSchemas(shared_ptr<DescribePluginSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginSchemasWithOptions(request, runtime);
}

CreateSignatureResponse Alibabacloud_CloudAPI20160714::Client::createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSignatureResponse(doRPCRequest(make_shared<string>("CreateSignature"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSignatureResponse Alibabacloud_CloudAPI20160714::Client::createSignature(shared_ptr<CreateSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSignatureWithOptions(request, runtime);
}

RemoveVpcAccessAndAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessAndAbolishApisWithOptions(shared_ptr<RemoveVpcAccessAndAbolishApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveVpcAccessAndAbolishApisResponse(doRPCRequest(make_shared<string>("RemoveVpcAccessAndAbolishApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveVpcAccessAndAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessAndAbolishApis(shared_ptr<RemoveVpcAccessAndAbolishApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVpcAccessAndAbolishApisWithOptions(request, runtime);
}

PublishProductResponse Alibabacloud_CloudAPI20160714::Client::publishProductWithOptions(shared_ptr<PublishProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishProductResponse(doRPCRequest(make_shared<string>("PublishProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishProductResponse Alibabacloud_CloudAPI20160714::Client::publishProduct(shared_ptr<PublishProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishProductWithOptions(request, runtime);
}

CreatePartProductResponse Alibabacloud_CloudAPI20160714::Client::createPartProductWithOptions(shared_ptr<CreatePartProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePartProductResponse(doRPCRequest(make_shared<string>("CreatePartProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePartProductResponse Alibabacloud_CloudAPI20160714::Client::createPartProduct(shared_ptr<CreatePartProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPartProductWithOptions(request, runtime);
}

DescribeApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupVpcWhitelistWithOptions(shared_ptr<DescribeApiGroupVpcWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiGroupVpcWhitelistResponse(doRPCRequest(make_shared<string>("DescribeApiGroupVpcWhitelist"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupVpcWhitelist(shared_ptr<DescribeApiGroupVpcWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupVpcWhitelistWithOptions(request, runtime);
}

BatchUpdateApisVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::batchUpdateApisVpcAccessWithOptions(shared_ptr<BatchUpdateApisVpcAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUpdateApisVpcAccessResponse(doRPCRequest(make_shared<string>("BatchUpdateApisVpcAccess"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUpdateApisVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::batchUpdateApisVpcAccess(shared_ptr<BatchUpdateApisVpcAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateApisVpcAccessWithOptions(request, runtime);
}

DescribeRegionHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeRegionHttpCodeWithOptions(shared_ptr<DescribeRegionHttpCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionHttpCodeResponse(doRPCRequest(make_shared<string>("DescribeRegionHttpCode"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionHttpCodeResponse Alibabacloud_CloudAPI20160714::Client::describeRegionHttpCode(shared_ptr<DescribeRegionHttpCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionHttpCodeWithOptions(request, runtime);
}

DescribeSyncFailApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeSyncFailApiTaskWithOptions(shared_ptr<DescribeSyncFailApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSyncFailApiTaskResponse(doRPCRequest(make_shared<string>("DescribeSyncFailApiTask"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSyncFailApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeSyncFailApiTask(shared_ptr<DescribeSyncFailApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSyncFailApiTaskWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160714::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160714::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApisWithOptions(shared_ptr<DescribePurchasedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePurchasedApisResponse(doRPCRequest(make_shared<string>("DescribePurchasedApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApis(shared_ptr<DescribePurchasedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApisWithOptions(request, runtime);
}

DescribeTrafficControlsByApiResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsByApiWithOptions(shared_ptr<DescribeTrafficControlsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTrafficControlsByApiResponse(doRPCRequest(make_shared<string>("DescribeTrafficControlsByApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTrafficControlsByApiResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsByApi(shared_ptr<DescribeTrafficControlsByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrafficControlsByApiWithOptions(request, runtime);
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApisWithOptions(shared_ptr<DescribeDeployedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeployedApisResponse(doRPCRequest(make_shared<string>("DescribeDeployedApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApis(shared_ptr<DescribeDeployedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApisWithOptions(request, runtime);
}

RemoveAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeAppsAuthoritiesWithOptions(shared_ptr<RemoveAppsAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveAppsAuthoritiesResponse(doRPCRequest(make_shared<string>("RemoveAppsAuthorities"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeAppsAuthorities(shared_ptr<RemoveAppsAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAppsAuthoritiesWithOptions(request, runtime);
}

DeleteLogConfigResponse Alibabacloud_CloudAPI20160714::Client::deleteLogConfigWithOptions(shared_ptr<DeleteLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLogConfigResponse(doRPCRequest(make_shared<string>("DeleteLogConfig"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLogConfigResponse Alibabacloud_CloudAPI20160714::Client::deleteLogConfig(shared_ptr<DeleteLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLogConfigWithOptions(request, runtime);
}

ReactivateDomainResponse Alibabacloud_CloudAPI20160714::Client::reactivateDomainWithOptions(shared_ptr<ReactivateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReactivateDomainResponse(doRPCRequest(make_shared<string>("ReactivateDomain"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReactivateDomainResponse Alibabacloud_CloudAPI20160714::Client::reactivateDomain(shared_ptr<ReactivateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reactivateDomainWithOptions(request, runtime);
}

DescribeAuthorizedApisResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApisWithOptions(shared_ptr<DescribeAuthorizedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAuthorizedApisResponse(doRPCRequest(make_shared<string>("DescribeAuthorizedApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAuthorizedApisResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApis(shared_ptr<DescribeAuthorizedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthorizedApisWithOptions(request, runtime);
}

CreateProductSpecsResponse Alibabacloud_CloudAPI20160714::Client::createProductSpecsWithOptions(shared_ptr<CreateProductSpecsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProductSpecsResponse(doRPCRequest(make_shared<string>("CreateProductSpecs"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProductSpecsResponse Alibabacloud_CloudAPI20160714::Client::createProductSpecs(shared_ptr<CreateProductSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductSpecsWithOptions(request, runtime);
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::modifyTrafficControlWithOptions(shared_ptr<ModifyTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyTrafficControlResponse(doRPCRequest(make_shared<string>("ModifyTrafficControl"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::modifyTrafficControl(shared_ptr<ModifyTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTrafficControlWithOptions(request, runtime);
}

CreateLogConfigResponse Alibabacloud_CloudAPI20160714::Client::createLogConfigWithOptions(shared_ptr<CreateLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLogConfigResponse(doRPCRequest(make_shared<string>("CreateLogConfig"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLogConfigResponse Alibabacloud_CloudAPI20160714::Client::createLogConfig(shared_ptr<CreateLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogConfigWithOptions(request, runtime);
}

SetTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::setTrafficControlApisWithOptions(shared_ptr<SetTrafficControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetTrafficControlApisResponse(doRPCRequest(make_shared<string>("SetTrafficControlApis"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::setTrafficControlApis(shared_ptr<SetTrafficControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTrafficControlApisWithOptions(request, runtime);
}

AbolishProductResponse Alibabacloud_CloudAPI20160714::Client::abolishProductWithOptions(shared_ptr<AbolishProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AbolishProductResponse(doRPCRequest(make_shared<string>("AbolishProduct"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AbolishProductResponse Alibabacloud_CloudAPI20160714::Client::abolishProduct(shared_ptr<AbolishProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishProductWithOptions(request, runtime);
}

OpenApiGatewayServiceResponse Alibabacloud_CloudAPI20160714::Client::openApiGatewayServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return OpenApiGatewayServiceResponse(doRPCRequest(make_shared<string>("OpenApiGatewayService"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenApiGatewayServiceResponse Alibabacloud_CloudAPI20160714::Client::openApiGatewayService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiGatewayServiceWithOptions(runtime);
}

SwitchApiResponse Alibabacloud_CloudAPI20160714::Client::switchApiWithOptions(shared_ptr<SwitchApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchApiResponse(doRPCRequest(make_shared<string>("SwitchApi"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchApiResponse Alibabacloud_CloudAPI20160714::Client::switchApi(shared_ptr<SwitchApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchApiWithOptions(request, runtime);
}

DescribeVpcAccessesResponse Alibabacloud_CloudAPI20160714::Client::describeVpcAccessesWithOptions(shared_ptr<DescribeVpcAccessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVpcAccessesResponse(doRPCRequest(make_shared<string>("DescribeVpcAccesses"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcAccessesResponse Alibabacloud_CloudAPI20160714::Client::describeVpcAccesses(shared_ptr<DescribeVpcAccessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcAccessesWithOptions(request, runtime);
}

DescribeInstanceSlbConnectResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceSlbConnectWithOptions(shared_ptr<DescribeInstanceSlbConnectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceSlbConnectResponse(doRPCRequest(make_shared<string>("DescribeInstanceSlbConnect"), make_shared<string>("2016-07-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceSlbConnectResponse Alibabacloud_CloudAPI20160714::Client::describeInstanceSlbConnect(shared_ptr<DescribeInstanceSlbConnectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSlbConnectWithOptions(request, runtime);
}

