// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ddi_20200617.hpp>
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

using namespace Alibabacloud_Ddi20200617;

Alibabacloud_Ddi20200617::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ddi.cn-qingdao.aliyuncs.com"},
    {"cn-chengdu", "ddi.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "ddi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "ddi.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong", "ddi.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-2", "ddi.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "ddi.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "ddi.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "ddi.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1", "ddi.eu-west-1.aliyuncs.com"},
    {"us-east-1", "ddi.us-east-1.aliyuncs.com"},
    {"eu-central-1", "ddi.eu-central-1.aliyuncs.com"},
    {"me-east-1", "ddi.me-east-1.aliyuncs.com"},
    {"ap-south-1", "ddi.ap-south-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ddi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ddi20200617::Client::getEndpoint(shared_ptr<string> productId,
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

CreateClusterV2Response Alibabacloud_Ddi20200617::Client::createClusterV2WithOptions(shared_ptr<CreateClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthorizeContent", *request->authorizeContent));
  query->insert(pair<string, bool>("Auto_", *request->auto_));
  query->insert(pair<string, bool>("AutoPayOrder", *request->autoPayOrder));
  query->insert(pair<string, vector<CreateClusterV2RequestBootstrapAction>>("BootstrapAction", *request->bootstrapAction));
  query->insert(pair<string, string>("ChargeType", *request->chargeType));
  query->insert(pair<string, string>("ClickHouseConf", *request->clickHouseConf));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ClusterType", *request->clusterType));
  query->insert(pair<string, vector<CreateClusterV2RequestConfig>>("Config", *request->config));
  query->insert(pair<string, string>("Configurations", *request->configurations));
  query->insert(pair<string, string>("DepositType", *request->depositType));
  query->insert(pair<string, string>("EmrVer", *request->emrVer));
  query->insert(pair<string, bool>("EnableEas", *request->enableEas));
  query->insert(pair<string, bool>("EnableHighAvailability", *request->enableHighAvailability));
  query->insert(pair<string, bool>("EnableSsh", *request->enableSsh));
  query->insert(pair<string, string>("ExtraAttributes", *request->extraAttributes));
  query->insert(pair<string, vector<CreateClusterV2RequestHostComponentInfo>>("HostComponentInfo", *request->hostComponentInfo));
  query->insert(pair<string, vector<CreateClusterV2RequestHostGroup>>("HostGroup", *request->hostGroup));
  query->insert(pair<string, bool>("InitCustomHiveMetaDB", *request->initCustomHiveMetaDB));
  query->insert(pair<string, string>("InstanceGeneration", *request->instanceGeneration));
  query->insert(pair<string, bool>("IsOpenPublicIp", *request->isOpenPublicIp));
  query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  query->insert(pair<string, string>("LogPath", *request->logPath));
  query->insert(pair<string, string>("MachineType", *request->machineType));
  query->insert(pair<string, string>("MasterPwd", *request->masterPwd));
  query->insert(pair<string, string>("MetaStoreConf", *request->metaStoreConf));
  query->insert(pair<string, string>("MetaStoreType", *request->metaStoreType));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("NetType", *request->netType));
  query->insert(pair<string, long>("Period", *request->period));
  query->insert(pair<string, vector<CreateClusterV2RequestPromotionInfo>>("PromotionInfo", *request->promotionInfo));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("RelatedClusterId", *request->relatedClusterId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  query->insert(pair<string, vector<CreateClusterV2RequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  query->insert(pair<string, vector<CreateClusterV2RequestTag>>("Tag", *request->tag));
  query->insert(pair<string, bool>("UseCustomHiveMetaDB", *request->useCustomHiveMetaDB));
  query->insert(pair<string, bool>("UseLocalMetaDb", *request->useLocalMetaDb));
  query->insert(pair<string, string>("UserDefinedEmrEcsRole", *request->userDefinedEmrEcsRole));
  query->insert(pair<string, vector<CreateClusterV2RequestUserInfo>>("UserInfo", *request->userInfo));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("WhiteListType", *request->whiteListType));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClusterV2"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterV2Response(callApi(params, req, runtime));
}

CreateClusterV2Response Alibabacloud_Ddi20200617::Client::createClusterV2(shared_ptr<CreateClusterV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterV2WithOptions(request, runtime);
}

CreateFlowJobResponse Alibabacloud_Ddi20200617::Client::createFlowJobWithOptions(shared_ptr<CreateFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("Adhoc", *request->adhoc));
  query->insert(pair<string, string>("AlertConf", *request->alertConf));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ClusterId", *request->clusterId));
  query->insert(pair<string, string>("CustomVariables", *request->customVariables));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EnvConf", *request->envConf));
  query->insert(pair<string, string>("FailAct", *request->failAct));
  query->insert(pair<string, string>("Mode", *request->mode));
  query->insert(pair<string, string>("MonitorConf", *request->monitorConf));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("ParamConf", *request->paramConf));
  query->insert(pair<string, string>("Params", *request->params));
  query->insert(pair<string, string>("ParentCategory", *request->parentCategory));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<CreateFlowJobRequestResourceList>>("ResourceList", *request->resourceList));
  query->insert(pair<string, string>("RetryPolicy", *request->retryPolicy));
  query->insert(pair<string, string>("RunConf", *request->runConf));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowJobResponse(callApi(params, req, runtime));
}

CreateFlowJobResponse Alibabacloud_Ddi20200617::Client::createFlowJob(shared_ptr<CreateFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowJobWithOptions(request, runtime);
}

CreateFlowProjectResponse Alibabacloud_Ddi20200617::Client::createFlowProjectWithOptions(shared_ptr<CreateFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowProject"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowProjectResponse(callApi(params, req, runtime));
}

CreateFlowProjectResponse Alibabacloud_Ddi20200617::Client::createFlowProject(shared_ptr<CreateFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowProjectWithOptions(request, runtime);
}

DescribeClusterV2Response Alibabacloud_Ddi20200617::Client::describeClusterV2WithOptions(shared_ptr<DescribeClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Id", *request->id));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterV2"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterV2Response(callApi(params, req, runtime));
}

DescribeClusterV2Response Alibabacloud_Ddi20200617::Client::describeClusterV2(shared_ptr<DescribeClusterV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterV2WithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_Ddi20200617::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("ClusterTypeList", *request->clusterTypeList));
  query->insert(pair<string, string>("CreateType", *request->createType));
  query->insert(pair<string, bool>("DefaultStatus", *request->defaultStatus));
  query->insert(pair<string, string>("DepositType", *request->depositType));
  query->insert(pair<string, vector<string>>("ExpiredTagList", *request->expiredTagList));
  query->insert(pair<string, bool>("IsDesc", *request->isDesc));
  query->insert(pair<string, string>("MachineType", *request->machineType));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  query->insert(pair<string, vector<ListClustersRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusters"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClustersResponse(callApi(params, req, runtime));
}

ListClustersResponse Alibabacloud_Ddi20200617::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersWithOptions(request, runtime);
}

ListMainVersionsResponse Alibabacloud_Ddi20200617::Client::listMainVersionsWithOptions(shared_ptr<ListMainVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMainVersions"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMainVersionsResponse(callApi(params, req, runtime));
}

ListMainVersionsResponse Alibabacloud_Ddi20200617::Client::listMainVersions(shared_ptr<ListMainVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMainVersionsWithOptions(request, runtime);
}

ReleaseClusterResponse Alibabacloud_Ddi20200617::Client::releaseClusterWithOptions(shared_ptr<ReleaseClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("ForceRelease", *request->forceRelease));
  query->insert(pair<string, string>("Id", *request->id));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseCluster"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseClusterResponse(callApi(params, req, runtime));
}

ReleaseClusterResponse Alibabacloud_Ddi20200617::Client::releaseCluster(shared_ptr<ReleaseClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseClusterWithOptions(request, runtime);
}

