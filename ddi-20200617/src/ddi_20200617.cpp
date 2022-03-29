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

CloneFlowJobResponse Alibabacloud_Ddi20200617::Client::cloneFlowJobWithOptions(shared_ptr<CloneFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneFlowJobResponse(callApi(params, req, runtime));
}

CloneFlowJobResponse Alibabacloud_Ddi20200617::Client::cloneFlowJob(shared_ptr<CloneFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneFlowJobWithOptions(request, runtime);
}

CreateClusterV2Response Alibabacloud_Ddi20200617::Client::createClusterV2WithOptions(shared_ptr<CreateClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizeContent)) {
    query->insert(pair<string, string>("AuthorizeContent", *request->authorizeContent));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->auto_)) {
    query->insert(pair<string, bool>("Auto_", *request->auto_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPayOrder)) {
    query->insert(pair<string, bool>("AutoPayOrder", *request->autoPayOrder));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestBootstrapAction>>(request->bootstrapAction)) {
    query->insert(pair<string, vector<CreateClusterV2RequestBootstrapAction>>("BootstrapAction", *request->bootstrapAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clickHouseConf)) {
    query->insert(pair<string, string>("ClickHouseConf", *request->clickHouseConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestConfig>>(request->config)) {
    query->insert(pair<string, vector<CreateClusterV2RequestConfig>>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configurations)) {
    query->insert(pair<string, string>("Configurations", *request->configurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depositType)) {
    query->insert(pair<string, string>("DepositType", *request->depositType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emrVer)) {
    query->insert(pair<string, string>("EmrVer", *request->emrVer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableEas)) {
    query->insert(pair<string, bool>("EnableEas", *request->enableEas));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableHighAvailability)) {
    query->insert(pair<string, bool>("EnableHighAvailability", *request->enableHighAvailability));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSsh)) {
    query->insert(pair<string, bool>("EnableSsh", *request->enableSsh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraAttributes)) {
    query->insert(pair<string, string>("ExtraAttributes", *request->extraAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestHostComponentInfo>>(request->hostComponentInfo)) {
    query->insert(pair<string, vector<CreateClusterV2RequestHostComponentInfo>>("HostComponentInfo", *request->hostComponentInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestHostGroup>>(request->hostGroup)) {
    query->insert(pair<string, vector<CreateClusterV2RequestHostGroup>>("HostGroup", *request->hostGroup));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initCustomHiveMetaDB)) {
    query->insert(pair<string, bool>("InitCustomHiveMetaDB", *request->initCustomHiveMetaDB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGeneration)) {
    query->insert(pair<string, string>("InstanceGeneration", *request->instanceGeneration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOpenPublicIp)) {
    query->insert(pair<string, bool>("IsOpenPublicIp", *request->isOpenPublicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logPath)) {
    query->insert(pair<string, string>("LogPath", *request->logPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineType)) {
    query->insert(pair<string, string>("MachineType", *request->machineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterPwd)) {
    query->insert(pair<string, string>("MasterPwd", *request->masterPwd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaStoreConf)) {
    query->insert(pair<string, string>("MetaStoreConf", *request->metaStoreConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaStoreType)) {
    query->insert(pair<string, string>("MetaStoreType", *request->metaStoreType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netType)) {
    query->insert(pair<string, string>("NetType", *request->netType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestPromotionInfo>>(request->promotionInfo)) {
    query->insert(pair<string, vector<CreateClusterV2RequestPromotionInfo>>("PromotionInfo", *request->promotionInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedClusterId)) {
    query->insert(pair<string, string>("RelatedClusterId", *request->relatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupName)) {
    query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestServiceInfo>>(request->serviceInfo)) {
    query->insert(pair<string, vector<CreateClusterV2RequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateClusterV2RequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCustomHiveMetaDB)) {
    query->insert(pair<string, bool>("UseCustomHiveMetaDB", *request->useCustomHiveMetaDB));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useLocalMetaDb)) {
    query->insert(pair<string, bool>("UseLocalMetaDb", *request->useLocalMetaDb));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDefinedEmrEcsRole)) {
    query->insert(pair<string, string>("UserDefinedEmrEcsRole", *request->userDefinedEmrEcsRole));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterV2RequestUserInfo>>(request->userInfo)) {
    query->insert(pair<string, vector<CreateClusterV2RequestUserInfo>>("UserInfo", *request->userInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whiteListType)) {
    query->insert(pair<string, string>("WhiteListType", *request->whiteListType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
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

CreateFlowResponse Alibabacloud_Ddi20200617::Client::createFlowWithOptions(shared_ptr<CreateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertConf)) {
    query->insert(pair<string, string>("AlertConf", *request->alertConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertDingDingGroupBizId)) {
    query->insert(pair<string, string>("AlertDingDingGroupBizId", *request->alertDingDingGroupBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUserGroupBizId)) {
    query->insert(pair<string, string>("AlertUserGroupBizId", *request->alertUserGroupBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->application)) {
    query->insert(pair<string, string>("Application", *request->application));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createCluster)) {
    query->insert(pair<string, bool>("CreateCluster", *request->createCluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endSchedule)) {
    query->insert(pair<string, long>("EndSchedule", *request->endSchedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCategory)) {
    query->insert(pair<string, string>("ParentCategory", *request->parentCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFlowList)) {
    query->insert(pair<string, string>("ParentFlowList", *request->parentFlowList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startSchedule)) {
    query->insert(pair<string, long>("StartSchedule", *request->startSchedule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowResponse(callApi(params, req, runtime));
}

CreateFlowResponse Alibabacloud_Ddi20200617::Client::createFlow(shared_ptr<CreateFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowWithOptions(request, runtime);
}

CreateFlowCategoryResponse Alibabacloud_Ddi20200617::Client::createFlowCategoryWithOptions(shared_ptr<CreateFlowCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowCategory"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowCategoryResponse(callApi(params, req, runtime));
}

CreateFlowCategoryResponse Alibabacloud_Ddi20200617::Client::createFlowCategory(shared_ptr<CreateFlowCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowCategoryWithOptions(request, runtime);
}

CreateFlowJobResponse Alibabacloud_Ddi20200617::Client::createFlowJobWithOptions(shared_ptr<CreateFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->adhoc)) {
    query->insert(pair<string, bool>("Adhoc", *request->adhoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertConf)) {
    query->insert(pair<string, string>("AlertConf", *request->alertConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customVariables)) {
    query->insert(pair<string, string>("CustomVariables", *request->customVariables));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envConf)) {
    query->insert(pair<string, string>("EnvConf", *request->envConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failAct)) {
    query->insert(pair<string, string>("FailAct", *request->failAct));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorConf)) {
    query->insert(pair<string, string>("MonitorConf", *request->monitorConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramConf)) {
    query->insert(pair<string, string>("ParamConf", *request->paramConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCategory)) {
    query->insert(pair<string, string>("ParentCategory", *request->parentCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFlowJobRequestResourceList>>(request->resourceList)) {
    query->insert(pair<string, vector<CreateFlowJobRequestResourceList>>("ResourceList", *request->resourceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retryPolicy)) {
    query->insert(pair<string, string>("RetryPolicy", *request->retryPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runConf)) {
    query->insert(pair<string, string>("RunConf", *request->runConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
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

CreateFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::createFlowProjectUserWithOptions(shared_ptr<CreateFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFlowProjectUserRequestUser>>(request->user)) {
    query->insert(pair<string, vector<CreateFlowProjectUserRequestUser>>("User", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowProjectUser"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowProjectUserResponse(callApi(params, req, runtime));
}

CreateFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::createFlowProjectUser(shared_ptr<CreateFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowProjectUserWithOptions(request, runtime);
}

DeleteFlowResponse Alibabacloud_Ddi20200617::Client::deleteFlowWithOptions(shared_ptr<DeleteFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowResponse(callApi(params, req, runtime));
}

DeleteFlowResponse Alibabacloud_Ddi20200617::Client::deleteFlow(shared_ptr<DeleteFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowWithOptions(request, runtime);
}

DeleteFlowCategoryResponse Alibabacloud_Ddi20200617::Client::deleteFlowCategoryWithOptions(shared_ptr<DeleteFlowCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowCategory"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowCategoryResponse(callApi(params, req, runtime));
}

DeleteFlowCategoryResponse Alibabacloud_Ddi20200617::Client::deleteFlowCategory(shared_ptr<DeleteFlowCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowCategoryWithOptions(request, runtime);
}

DeleteFlowProjectResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectWithOptions(shared_ptr<DeleteFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowProject"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowProjectResponse(callApi(params, req, runtime));
}

DeleteFlowProjectResponse Alibabacloud_Ddi20200617::Client::deleteFlowProject(shared_ptr<DeleteFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowProjectWithOptions(request, runtime);
}

DeleteFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectUserWithOptions(shared_ptr<DeleteFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowProjectUser"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowProjectUserResponse(callApi(params, req, runtime));
}

DeleteFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectUser(shared_ptr<DeleteFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowProjectUserWithOptions(request, runtime);
}

DescribeClusterV2Response Alibabacloud_Ddi20200617::Client::describeClusterV2WithOptions(shared_ptr<DescribeClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
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

DescribeFlowResponse Alibabacloud_Ddi20200617::Client::describeFlowWithOptions(shared_ptr<DescribeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowResponse(callApi(params, req, runtime));
}

DescribeFlowResponse Alibabacloud_Ddi20200617::Client::describeFlow(shared_ptr<DescribeFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowWithOptions(request, runtime);
}

DescribeFlowCategoryTreeResponse Alibabacloud_Ddi20200617::Client::describeFlowCategoryTreeWithOptions(shared_ptr<DescribeFlowCategoryTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    query->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowCategoryTree"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowCategoryTreeResponse(callApi(params, req, runtime));
}

DescribeFlowCategoryTreeResponse Alibabacloud_Ddi20200617::Client::describeFlowCategoryTree(shared_ptr<DescribeFlowCategoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowCategoryTreeWithOptions(request, runtime);
}

DescribeFlowJobResponse Alibabacloud_Ddi20200617::Client::describeFlowJobWithOptions(shared_ptr<DescribeFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowJobResponse(callApi(params, req, runtime));
}

DescribeFlowJobResponse Alibabacloud_Ddi20200617::Client::describeFlowJob(shared_ptr<DescribeFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowJobWithOptions(request, runtime);
}

DescribeFlowNodeInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceWithOptions(shared_ptr<DescribeFlowNodeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowNodeInstance"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowNodeInstanceResponse(callApi(params, req, runtime));
}

DescribeFlowNodeInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstance(shared_ptr<DescribeFlowNodeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowNodeInstanceWithOptions(request, runtime);
}

DescribeFlowProjectResponse Alibabacloud_Ddi20200617::Client::describeFlowProjectWithOptions(shared_ptr<DescribeFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowProject"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowProjectResponse(callApi(params, req, runtime));
}

DescribeFlowProjectResponse Alibabacloud_Ddi20200617::Client::describeFlowProject(shared_ptr<DescribeFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowProjectWithOptions(request, runtime);
}

KillFlowJobResponse Alibabacloud_Ddi20200617::Client::killFlowJobWithOptions(shared_ptr<KillFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobInstanceId)) {
    query->insert(pair<string, string>("JobInstanceId", *request->jobInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillFlowJobResponse(callApi(params, req, runtime));
}

KillFlowJobResponse Alibabacloud_Ddi20200617::Client::killFlowJob(shared_ptr<KillFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killFlowJobWithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_Ddi20200617::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->clusterTypeList)) {
    query->insert(pair<string, vector<string>>("ClusterTypeList", *request->clusterTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("CreateType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultStatus)) {
    query->insert(pair<string, bool>("DefaultStatus", *request->defaultStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depositType)) {
    query->insert(pair<string, string>("DepositType", *request->depositType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->expiredTagList)) {
    query->insert(pair<string, vector<string>>("ExpiredTagList", *request->expiredTagList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDesc)) {
    query->insert(pair<string, bool>("IsDesc", *request->isDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineType)) {
    query->insert(pair<string, string>("MachineType", *request->machineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListClustersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListClustersRequestTag>>("Tag", *request->tag));
  }
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

ListFlowResponse Alibabacloud_Ddi20200617::Client::listFlowWithOptions(shared_ptr<ListFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->periodic)) {
    query->insert(pair<string, bool>("Periodic", *request->periodic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowResponse(callApi(params, req, runtime));
}

ListFlowResponse Alibabacloud_Ddi20200617::Client::listFlow(shared_ptr<ListFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowWithOptions(request, runtime);
}

ListFlowJobHistoryResponse Alibabacloud_Ddi20200617::Client::listFlowJobHistoryWithOptions(shared_ptr<ListFlowJobHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("TimeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowJobHistory"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowJobHistoryResponse(callApi(params, req, runtime));
}

ListFlowJobHistoryResponse Alibabacloud_Ddi20200617::Client::listFlowJobHistory(shared_ptr<ListFlowJobHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowJobHistoryWithOptions(request, runtime);
}

ListFlowJobsResponse Alibabacloud_Ddi20200617::Client::listFlowJobsWithOptions(shared_ptr<ListFlowJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->adhoc)) {
    query->insert(pair<string, bool>("Adhoc", *request->adhoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exactName)) {
    query->insert(pair<string, string>("ExactName", *request->exactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowJobs"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowJobsResponse(callApi(params, req, runtime));
}

ListFlowJobsResponse Alibabacloud_Ddi20200617::Client::listFlowJobs(shared_ptr<ListFlowJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowJobsWithOptions(request, runtime);
}

ListFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::listFlowProjectUserWithOptions(shared_ptr<ListFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowProjectUser"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowProjectUserResponse(callApi(params, req, runtime));
}

ListFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::listFlowProjectUser(shared_ptr<ListFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowProjectUserWithOptions(request, runtime);
}

ListFlowProjectsResponse Alibabacloud_Ddi20200617::Client::listFlowProjectsWithOptions(shared_ptr<ListFlowProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowProjects"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowProjectsResponse(callApi(params, req, runtime));
}

ListFlowProjectsResponse Alibabacloud_Ddi20200617::Client::listFlowProjects(shared_ptr<ListFlowProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowProjectsWithOptions(request, runtime);
}

ModifyFlowJobResponse Alibabacloud_Ddi20200617::Client::modifyFlowJobWithOptions(shared_ptr<ModifyFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertConf)) {
    query->insert(pair<string, string>("AlertConf", *request->alertConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customVariables)) {
    query->insert(pair<string, string>("CustomVariables", *request->customVariables));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envConf)) {
    query->insert(pair<string, string>("EnvConf", *request->envConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failAct)) {
    query->insert(pair<string, string>("FailAct", *request->failAct));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knoxPassword)) {
    query->insert(pair<string, string>("KnoxPassword", *request->knoxPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knoxUser)) {
    query->insert(pair<string, string>("KnoxUser", *request->knoxUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorConf)) {
    query->insert(pair<string, string>("MonitorConf", *request->monitorConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramConf)) {
    query->insert(pair<string, string>("ParamConf", *request->paramConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyFlowJobRequestResourceList>>(request->resourceList)) {
    query->insert(pair<string, vector<ModifyFlowJobRequestResourceList>>("ResourceList", *request->resourceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retryPolicy)) {
    query->insert(pair<string, string>("RetryPolicy", *request->retryPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runConf)) {
    query->insert(pair<string, string>("RunConf", *request->runConf));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFlowJobResponse(callApi(params, req, runtime));
}

ModifyFlowJobResponse Alibabacloud_Ddi20200617::Client::modifyFlowJob(shared_ptr<ModifyFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowJobWithOptions(request, runtime);
}

ModifyFlowProjectResponse Alibabacloud_Ddi20200617::Client::modifyFlowProjectWithOptions(shared_ptr<ModifyFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFlowProject"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFlowProjectResponse(callApi(params, req, runtime));
}

ModifyFlowProjectResponse Alibabacloud_Ddi20200617::Client::modifyFlowProject(shared_ptr<ModifyFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowProjectWithOptions(request, runtime);
}

ReleaseClusterResponse Alibabacloud_Ddi20200617::Client::releaseClusterWithOptions(shared_ptr<ReleaseClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceRelease)) {
    query->insert(pair<string, bool>("ForceRelease", *request->forceRelease));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
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

RerunFlowResponse Alibabacloud_Ddi20200617::Client::rerunFlowWithOptions(shared_ptr<RerunFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowInstanceId)) {
    query->insert(pair<string, string>("FlowInstanceId", *request->flowInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reRunFail)) {
    query->insert(pair<string, bool>("ReRunFail", *request->reRunFail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RerunFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RerunFlowResponse(callApi(params, req, runtime));
}

RerunFlowResponse Alibabacloud_Ddi20200617::Client::rerunFlow(shared_ptr<RerunFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunFlowWithOptions(request, runtime);
}

ResumeFlowResponse Alibabacloud_Ddi20200617::Client::resumeFlowWithOptions(shared_ptr<ResumeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowInstanceId)) {
    query->insert(pair<string, string>("FlowInstanceId", *request->flowInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeFlowResponse(callApi(params, req, runtime));
}

ResumeFlowResponse Alibabacloud_Ddi20200617::Client::resumeFlow(shared_ptr<ResumeFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeFlowWithOptions(request, runtime);
}

SubmitFlowResponse Alibabacloud_Ddi20200617::Client::submitFlowWithOptions(shared_ptr<SubmitFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conf)) {
    query->insert(pair<string, string>("Conf", *request->conf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitFlow"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitFlowResponse(callApi(params, req, runtime));
}

SubmitFlowResponse Alibabacloud_Ddi20200617::Client::submitFlow(shared_ptr<SubmitFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFlowWithOptions(request, runtime);
}

SubmitFlowJobResponse Alibabacloud_Ddi20200617::Client::submitFlowJobWithOptions(shared_ptr<SubmitFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conf)) {
    query->insert(pair<string, string>("Conf", *request->conf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitFlowJob"))},
    {"version", boost::any(string("2020-06-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitFlowJobResponse(callApi(params, req, runtime));
}

SubmitFlowJobResponse Alibabacloud_Ddi20200617::Client::submitFlowJob(shared_ptr<SubmitFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFlowJobWithOptions(request, runtime);
}

