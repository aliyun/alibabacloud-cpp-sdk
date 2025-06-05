// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eci_20180808.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Eci20180808;

Alibabacloud_Eci20180808::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eci"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eci20180808::Client::getEndpoint(shared_ptr<string> productId,
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

CommitContainerResponse Alibabacloud_Eci20180808::Client::commitContainerWithOptions(shared_ptr<CommitContainerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CommitContainerRequestAcrRegistryInfo>(request->acrRegistryInfo)) {
    query->insert(pair<string, CommitContainerRequestAcrRegistryInfo>("AcrRegistryInfo", *request->acrRegistryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<CommitContainerRequestArn>(request->arn)) {
    query->insert(pair<string, CommitContainerRequestArn>("Arn", *request->arn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    query->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<CommitContainerRequestImage>(request->image)) {
    query->insert(pair<string, CommitContainerRequestImage>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitContainer"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommitContainerResponse(callApi(params, req, runtime));
}

CommitContainerResponse Alibabacloud_Eci20180808::Client::commitContainer(shared_ptr<CommitContainerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitContainerWithOptions(request, runtime);
}

CopyDataCacheResponse Alibabacloud_Eci20180808::Client::copyDataCacheWithOptions(shared_ptr<CopyDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheId)) {
    query->insert(pair<string, string>("DataCacheId", *request->dataCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegionId)) {
    query->insert(pair<string, string>("DestinationRegionId", *request->destinationRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CopyDataCacheRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CopyDataCacheRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyDataCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyDataCacheResponse(callApi(params, req, runtime));
}

CopyDataCacheResponse Alibabacloud_Eci20180808::Client::copyDataCache(shared_ptr<CopyDataCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyDataCacheWithOptions(request, runtime);
}

CreateContainerGroupResponse Alibabacloud_Eci20180808::Client::createContainerGroupWithOptions(shared_ptr<CreateContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestAcrRegistryInfo>>(request->acrRegistryInfo)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestAcrRegistryInfo>>("AcrRegistryInfo", *request->acrRegistryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->activeDeadlineSeconds)) {
    query->insert(pair<string, long>("ActiveDeadlineSeconds", *request->activeDeadlineSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateEip)) {
    query->insert(pair<string, bool>("AutoCreateEip", *request->autoCreateEip));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoMatchImageCache)) {
    query->insert(pair<string, bool>("AutoMatchImageCache", *request->autoMatchImageCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->computeCategory)) {
    query->insert(pair<string, vector<string>>("ComputeCategory", *request->computeCategory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestContainer>>(request->container)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestContainer>>("Container", *request->container));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupName)) {
    query->insert(pair<string, string>("ContainerGroupName", *request->containerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->containerResourceView)) {
    query->insert(pair<string, bool>("ContainerResourceView", *request->containerResourceView));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corePattern)) {
    query->insert(pair<string, string>("CorePattern", *request->corePattern));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuArchitecture)) {
    query->insert(pair<string, string>("CpuArchitecture", *request->cpuArchitecture));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsCore)) {
    query->insert(pair<string, long>("CpuOptionsCore", *request->cpuOptionsCore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuOptionsNuma)) {
    query->insert(pair<string, string>("CpuOptionsNuma", *request->cpuOptionsNuma));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsThreadsPerCore)) {
    query->insert(pair<string, long>("CpuOptionsThreadsPerCore", *request->cpuOptionsThreadsPerCore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheBucket)) {
    query->insert(pair<string, string>("DataCacheBucket", *request->dataCacheBucket));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataCacheBurstingEnabled)) {
    query->insert(pair<string, bool>("DataCacheBurstingEnabled", *request->dataCacheBurstingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCachePL)) {
    query->insert(pair<string, string>("DataCachePL", *request->dataCachePL));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataCacheProvisionedIops)) {
    query->insert(pair<string, long>("DataCacheProvisionedIops", *request->dataCacheProvisionedIops));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsPolicy)) {
    query->insert(pair<string, string>("DnsPolicy", *request->dnsPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->egressBandwidth)) {
    query->insert(pair<string, long>("EgressBandwidth", *request->egressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eipBandwidth)) {
    query->insert(pair<string, long>("EipBandwidth", *request->eipBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipCommonBandwidthPackage)) {
    query->insert(pair<string, string>("EipCommonBandwidthPackage", *request->eipCommonBandwidthPackage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipISP)) {
    query->insert(pair<string, string>("EipISP", *request->eipISP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ephemeralStorage)) {
    query->insert(pair<string, long>("EphemeralStorage", *request->ephemeralStorage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fixedIp)) {
    query->insert(pair<string, string>("FixedIp", *request->fixedIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fixedIpRetainHour)) {
    query->insert(pair<string, long>("FixedIpRetainHour", *request->fixedIpRetainHour));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuDriverVersion)) {
    query->insert(pair<string, string>("GpuDriverVersion", *request->gpuDriverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestHostAliase>>(request->hostAliase)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestHostAliase>>("HostAliase", *request->hostAliase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageAccelerateMode)) {
    query->insert(pair<string, string>("ImageAccelerateMode", *request->imageAccelerateMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestImageRegistryCredential>>(request->imageRegistryCredential)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestImageRegistryCredential>>("ImageRegistryCredential", *request->imageRegistryCredential));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageSnapshotId)) {
    query->insert(pair<string, string>("ImageSnapshotId", *request->imageSnapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressBandwidth)) {
    query->insert(pair<string, long>("IngressBandwidth", *request->ingressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestInitContainer>>(request->initContainer)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestInitContainer>>("InitContainer", *request->initContainer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insecureRegistry)) {
    query->insert(pair<string, string>("InsecureRegistry", *request->insecureRegistry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6AddressCount)) {
    query->insert(pair<string, long>("Ipv6AddressCount", *request->ipv6AddressCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipv6GatewayBandwidth)) {
    query->insert(pair<string, string>("Ipv6GatewayBandwidth", *request->ipv6GatewayBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ipv6GatewayBandwidthEnable)) {
    query->insert(pair<string, bool>("Ipv6GatewayBandwidthEnable", *request->ipv6GatewayBandwidthEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPendingMinute)) {
    query->insert(pair<string, long>("MaxPendingMinute", *request->maxPendingMinute));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->memory)) {
    query->insert(pair<string, double>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ntpServer)) {
    query->insert(pair<string, vector<string>>("NtpServer", *request->ntpServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plainHttpRegistry)) {
    query->insert(pair<string, string>("PlainHttpRegistry", *request->plainHttpRegistry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartPolicy)) {
    query->insert(pair<string, string>("RestartPolicy", *request->restartPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleStrategy)) {
    query->insert(pair<string, string>("ScheduleStrategy", *request->scheduleStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->shareProcessNamespace)) {
    query->insert(pair<string, bool>("ShareProcessNamespace", *request->shareProcessNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->spotPriceLimit)) {
    query->insert(pair<string, double>("SpotPriceLimit", *request->spotPriceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->strictSpot)) {
    query->insert(pair<string, bool>("StrictSpot", *request->strictSpot));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateContainerGroupRequestVolume>>(request->volume)) {
    query->insert(pair<string, vector<CreateContainerGroupRequestVolume>>("Volume", *request->volume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<CreateContainerGroupRequestDnsConfig>(request->dnsConfig)) {
    query->insert(pair<string, CreateContainerGroupRequestDnsConfig>("DnsConfig", *request->dnsConfig));
  }
  if (!Darabonba_Util::Client::isUnset<CreateContainerGroupRequestHostSecurityContext>(request->hostSecurityContext)) {
    query->insert(pair<string, CreateContainerGroupRequestHostSecurityContext>("HostSecurityContext", *request->hostSecurityContext));
  }
  if (!Darabonba_Util::Client::isUnset<CreateContainerGroupRequestSecurityContext>(request->securityContext)) {
    query->insert(pair<string, CreateContainerGroupRequestSecurityContext>("SecurityContext", *request->securityContext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateContainerGroup"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateContainerGroupResponse(callApi(params, req, runtime));
}

CreateContainerGroupResponse Alibabacloud_Eci20180808::Client::createContainerGroup(shared_ptr<CreateContainerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createContainerGroupWithOptions(request, runtime);
}

CreateDataCacheResponse Alibabacloud_Eci20180808::Client::createDataCacheWithOptions(shared_ptr<CreateDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataCacheRequestDataSource>(request->dataSource)) {
    query->insert(pair<string, CreateDataCacheRequestDataSource>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataCacheRequestEipCreateParam>(request->eipCreateParam)) {
    query->insert(pair<string, CreateDataCacheRequestEipCreateParam>("EipCreateParam", *request->eipCreateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataCacheRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateDataCacheRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataCacheResponse(callApi(params, req, runtime));
}

CreateDataCacheResponse Alibabacloud_Eci20180808::Client::createDataCache(shared_ptr<CreateDataCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataCacheWithOptions(request, runtime);
}

CreateImageCacheResponse Alibabacloud_Eci20180808::Client::createImageCacheWithOptions(shared_ptr<CreateImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateImageCacheRequestAcrRegistryInfo>>(request->acrRegistryInfo)) {
    query->insert(pair<string, vector<CreateImageCacheRequestAcrRegistryInfo>>("AcrRegistryInfo", *request->acrRegistryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    query->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoMatchImageCache)) {
    query->insert(pair<string, bool>("AutoMatchImageCache", *request->autoMatchImageCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eliminationStrategy)) {
    query->insert(pair<string, string>("EliminationStrategy", *request->eliminationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->flash)) {
    query->insert(pair<string, bool>("Flash", *request->flash));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flashCopyCount)) {
    query->insert(pair<string, long>("FlashCopyCount", *request->flashCopyCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->image)) {
    query->insert(pair<string, vector<string>>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheName)) {
    query->insert(pair<string, string>("ImageCacheName", *request->imageCacheName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageCacheSize)) {
    query->insert(pair<string, long>("ImageCacheSize", *request->imageCacheSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateImageCacheRequestImageRegistryCredential>>(request->imageRegistryCredential)) {
    query->insert(pair<string, vector<CreateImageCacheRequestImageRegistryCredential>>("ImageRegistryCredential", *request->imageRegistryCredential));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insecureRegistry)) {
    query->insert(pair<string, string>("InsecureRegistry", *request->insecureRegistry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plainHttpRegistry)) {
    query->insert(pair<string, string>("PlainHttpRegistry", *request->plainHttpRegistry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->standardCopyCount)) {
    query->insert(pair<string, long>("StandardCopyCount", *request->standardCopyCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateImageCacheRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateImageCacheRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageCacheResponse(callApi(params, req, runtime));
}

CreateImageCacheResponse Alibabacloud_Eci20180808::Client::createImageCache(shared_ptr<CreateImageCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageCacheWithOptions(request, runtime);
}

CreateInstanceOpsTaskResponse Alibabacloud_Eci20180808::Client::createInstanceOpsTaskWithOptions(shared_ptr<CreateInstanceOpsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opsType)) {
    query->insert(pair<string, string>("OpsType", *request->opsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opsValue)) {
    query->insert(pair<string, string>("OpsValue", *request->opsValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceOpsTask"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceOpsTaskResponse(callApi(params, req, runtime));
}

CreateInstanceOpsTaskResponse Alibabacloud_Eci20180808::Client::createInstanceOpsTask(shared_ptr<CreateInstanceOpsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceOpsTaskWithOptions(request, runtime);
}

CreateVirtualNodeResponse Alibabacloud_Eci20180808::Client::createVirtualNodeWithOptions(shared_ptr<CreateVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDNS)) {
    query->insert(pair<string, string>("ClusterDNS", *request->clusterDNS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDomain)) {
    query->insert(pair<string, string>("ClusterDomain", *request->clusterDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customResources)) {
    query->insert(pair<string, string>("CustomResources", *request->customResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePublicNetwork)) {
    query->insert(pair<string, bool>("EnablePublicNetwork", *request->enablePublicNetwork));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubeConfig)) {
    query->insert(pair<string, string>("KubeConfig", *request->kubeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVirtualNodeRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateVirtualNodeRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVirtualNodeRequestTaint>>(request->taint)) {
    query->insert(pair<string, vector<CreateVirtualNodeRequestTaint>>("Taint", *request->taint));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tlsBootstrapEnabled)) {
    query->insert(pair<string, bool>("TlsBootstrapEnabled", *request->tlsBootstrapEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeName)) {
    query->insert(pair<string, string>("VirtualNodeName", *request->virtualNodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVirtualNode"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVirtualNodeResponse(callApi(params, req, runtime));
}

CreateVirtualNodeResponse Alibabacloud_Eci20180808::Client::createVirtualNode(shared_ptr<CreateVirtualNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualNodeWithOptions(request, runtime);
}

DeleteContainerGroupResponse Alibabacloud_Eci20180808::Client::deleteContainerGroupWithOptions(shared_ptr<DeleteContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContainerGroup"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteContainerGroupResponse(callApi(params, req, runtime));
}

DeleteContainerGroupResponse Alibabacloud_Eci20180808::Client::deleteContainerGroup(shared_ptr<DeleteContainerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContainerGroupWithOptions(request, runtime);
}

DeleteDataCacheResponse Alibabacloud_Eci20180808::Client::deleteDataCacheWithOptions(shared_ptr<DeleteDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheId)) {
    query->insert(pair<string, string>("DataCacheId", *request->dataCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataCacheResponse(callApi(params, req, runtime));
}

DeleteDataCacheResponse Alibabacloud_Eci20180808::Client::deleteDataCache(shared_ptr<DeleteDataCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataCacheWithOptions(request, runtime);
}

DeleteImageCacheResponse Alibabacloud_Eci20180808::Client::deleteImageCacheWithOptions(shared_ptr<DeleteImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheId)) {
    query->insert(pair<string, string>("ImageCacheId", *request->imageCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImageCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteImageCacheResponse(callApi(params, req, runtime));
}

DeleteImageCacheResponse Alibabacloud_Eci20180808::Client::deleteImageCache(shared_ptr<DeleteImageCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageCacheWithOptions(request, runtime);
}

DeleteVirtualNodeResponse Alibabacloud_Eci20180808::Client::deleteVirtualNodeWithOptions(shared_ptr<DeleteVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeId)) {
    query->insert(pair<string, string>("VirtualNodeId", *request->virtualNodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVirtualNode"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVirtualNodeResponse(callApi(params, req, runtime));
}

DeleteVirtualNodeResponse Alibabacloud_Eci20180808::Client::deleteVirtualNode(shared_ptr<DeleteVirtualNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualNodeWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Eci20180808::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<DescribeAvailableResourceRequestDestinationResource>(request->destinationResource)) {
    query->insert(pair<string, DescribeAvailableResourceRequestDestinationResource>("DestinationResource", *request->destinationResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<DescribeAvailableResourceRequestSpotResource>(request->spotResource)) {
    query->insert(pair<string, DescribeAvailableResourceRequestSpotResource>("SpotResource", *request->spotResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableResource"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Eci20180808::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeCommitContainerTaskResponse Alibabacloud_Eci20180808::Client::describeCommitContainerTaskWithOptions(shared_ptr<DescribeCommitContainerTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskId)) {
    query->insert(pair<string, vector<string>>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCommitContainerTask"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCommitContainerTaskResponse(callApi(params, req, runtime));
}

DescribeCommitContainerTaskResponse Alibabacloud_Eci20180808::Client::describeCommitContainerTask(shared_ptr<DescribeCommitContainerTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCommitContainerTaskWithOptions(request, runtime);
}

DescribeContainerGroupEventsResponse Alibabacloud_Eci20180808::Client::describeContainerGroupEventsWithOptions(shared_ptr<DescribeContainerGroupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupIds)) {
    query->insert(pair<string, string>("ContainerGroupIds", *request->containerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSource)) {
    query->insert(pair<string, string>("EventSource", *request->eventSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sinceSecond)) {
    query->insert(pair<string, long>("SinceSecond", *request->sinceSecond));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeContainerGroupEventsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeContainerGroupEventsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerGroupEvents"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerGroupEventsResponse(callApi(params, req, runtime));
}

DescribeContainerGroupEventsResponse Alibabacloud_Eci20180808::Client::describeContainerGroupEvents(shared_ptr<DescribeContainerGroupEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerGroupEventsWithOptions(request, runtime);
}

DescribeContainerGroupMetricResponse Alibabacloud_Eci20180808::Client::describeContainerGroupMetricWithOptions(shared_ptr<DescribeContainerGroupMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerGroupMetric"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerGroupMetricResponse(callApi(params, req, runtime));
}

DescribeContainerGroupMetricResponse Alibabacloud_Eci20180808::Client::describeContainerGroupMetric(shared_ptr<DescribeContainerGroupMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerGroupMetricWithOptions(request, runtime);
}

DescribeContainerGroupPriceResponse Alibabacloud_Eci20180808::Client::describeContainerGroupPriceWithOptions(shared_ptr<DescribeContainerGroupPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->computeCategory)) {
    query->insert(pair<string, string>("ComputeCategory", *request->computeCategory));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ephemeralStorage)) {
    query->insert(pair<string, long>("EphemeralStorage", *request->ephemeralStorage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->memory)) {
    query->insert(pair<string, double>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->spotPriceLimit)) {
    query->insert(pair<string, double>("SpotPriceLimit", *request->spotPriceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerGroupPrice"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerGroupPriceResponse(callApi(params, req, runtime));
}

DescribeContainerGroupPriceResponse Alibabacloud_Eci20180808::Client::describeContainerGroupPrice(shared_ptr<DescribeContainerGroupPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerGroupPriceWithOptions(request, runtime);
}

DescribeContainerGroupStatusResponse Alibabacloud_Eci20180808::Client::describeContainerGroupStatusWithOptions(shared_ptr<DescribeContainerGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupIds)) {
    query->insert(pair<string, string>("ContainerGroupIds", *request->containerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sinceSecond)) {
    query->insert(pair<string, long>("SinceSecond", *request->sinceSecond));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeContainerGroupStatusRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeContainerGroupStatusRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerGroupStatus"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerGroupStatusResponse(callApi(params, req, runtime));
}

DescribeContainerGroupStatusResponse Alibabacloud_Eci20180808::Client::describeContainerGroupStatus(shared_ptr<DescribeContainerGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerGroupStatusWithOptions(request, runtime);
}

DescribeContainerGroupsResponse Alibabacloud_Eci20180808::Client::describeContainerGroupsWithOptions(shared_ptr<DescribeContainerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->computeCategory)) {
    query->insert(pair<string, string>("ComputeCategory", *request->computeCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupIds)) {
    query->insert(pair<string, string>("ContainerGroupIds", *request->containerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupName)) {
    query->insert(pair<string, string>("ContainerGroupName", *request->containerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeContainerGroupsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeContainerGroupsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withEvent)) {
    query->insert(pair<string, bool>("WithEvent", *request->withEvent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerGroups"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerGroupsResponse(callApi(params, req, runtime));
}

DescribeContainerGroupsResponse Alibabacloud_Eci20180808::Client::describeContainerGroups(shared_ptr<DescribeContainerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerGroupsWithOptions(request, runtime);
}

DescribeContainerLogResponse Alibabacloud_Eci20180808::Client::describeContainerLogWithOptions(shared_ptr<DescribeContainerLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    query->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lastTime)) {
    query->insert(pair<string, bool>("LastTime", *request->lastTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitBytes)) {
    query->insert(pair<string, long>("LimitBytes", *request->limitBytes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sinceSeconds)) {
    query->insert(pair<string, long>("SinceSeconds", *request->sinceSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tail)) {
    query->insert(pair<string, long>("Tail", *request->tail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->timestamps)) {
    query->insert(pair<string, bool>("Timestamps", *request->timestamps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContainerLog"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerLogResponse(callApi(params, req, runtime));
}

DescribeContainerLogResponse Alibabacloud_Eci20180808::Client::describeContainerLog(shared_ptr<DescribeContainerLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerLogWithOptions(request, runtime);
}

DescribeDataCachesResponse Alibabacloud_Eci20180808::Client::describeDataCachesWithOptions(shared_ptr<DescribeDataCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dataCacheId)) {
    query->insert(pair<string, vector<string>>("DataCacheId", *request->dataCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDataCachesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDataCachesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCaches"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCachesResponse(callApi(params, req, runtime));
}

DescribeDataCachesResponse Alibabacloud_Eci20180808::Client::describeDataCaches(shared_ptr<DescribeDataCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataCachesWithOptions(request, runtime);
}

DescribeImageCachesResponse Alibabacloud_Eci20180808::Client::describeImageCachesWithOptions(shared_ptr<DescribeImageCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    query->insert(pair<string, string>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheId)) {
    query->insert(pair<string, string>("ImageCacheId", *request->imageCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheName)) {
    query->insert(pair<string, string>("ImageCacheName", *request->imageCacheName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->imageFullMatch)) {
    query->insert(pair<string, bool>("ImageFullMatch", *request->imageFullMatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageMatchCountRequest)) {
    query->insert(pair<string, long>("ImageMatchCountRequest", *request->imageMatchCountRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->matchImage)) {
    query->insert(pair<string, vector<string>>("MatchImage", *request->matchImage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeImageCachesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeImageCachesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageCaches"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImageCachesResponse(callApi(params, req, runtime));
}

DescribeImageCachesResponse Alibabacloud_Eci20180808::Client::describeImageCaches(shared_ptr<DescribeImageCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageCachesWithOptions(request, runtime);
}

DescribeInstanceOpsRecordsResponse Alibabacloud_Eci20180808::Client::describeInstanceOpsRecordsWithOptions(shared_ptr<DescribeInstanceOpsRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opsType)) {
    query->insert(pair<string, string>("OpsType", *request->opsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceOpsRecords"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceOpsRecordsResponse(callApi(params, req, runtime));
}

DescribeInstanceOpsRecordsResponse Alibabacloud_Eci20180808::Client::describeInstanceOpsRecords(shared_ptr<DescribeInstanceOpsRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceOpsRecordsWithOptions(request, runtime);
}

DescribeMultiContainerGroupMetricResponse Alibabacloud_Eci20180808::Client::describeMultiContainerGroupMetricWithOptions(shared_ptr<DescribeMultiContainerGroupMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupIds)) {
    query->insert(pair<string, string>("ContainerGroupIds", *request->containerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMultiContainerGroupMetric"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMultiContainerGroupMetricResponse(callApi(params, req, runtime));
}

DescribeMultiContainerGroupMetricResponse Alibabacloud_Eci20180808::Client::describeMultiContainerGroupMetric(shared_ptr<DescribeMultiContainerGroupMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMultiContainerGroupMetricWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Eci20180808::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Eci20180808::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeVirtualNodesResponse Alibabacloud_Eci20180808::Client::describeVirtualNodesWithOptions(shared_ptr<DescribeVirtualNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeVirtualNodesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeVirtualNodesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeIds)) {
    query->insert(pair<string, string>("VirtualNodeIds", *request->virtualNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeName)) {
    query->insert(pair<string, string>("VirtualNodeName", *request->virtualNodeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVirtualNodes"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVirtualNodesResponse(callApi(params, req, runtime));
}

DescribeVirtualNodesResponse Alibabacloud_Eci20180808::Client::describeVirtualNodes(shared_ptr<DescribeVirtualNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualNodesWithOptions(request, runtime);
}

ExecContainerCommandResponse Alibabacloud_Eci20180808::Client::execContainerCommandWithOptions(shared_ptr<ExecContainerCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    query->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stdin)) {
    query->insert(pair<string, bool>("Stdin", *request->stdin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sync)) {
    query->insert(pair<string, bool>("Sync", *request->sync));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->TTY)) {
    query->insert(pair<string, bool>("TTY", *request->TTY));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecContainerCommand"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecContainerCommandResponse(callApi(params, req, runtime));
}

ExecContainerCommandResponse Alibabacloud_Eci20180808::Client::execContainerCommand(shared_ptr<ExecContainerCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return execContainerCommandWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Eci20180808::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    query->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Eci20180808::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUsageResponse Alibabacloud_Eci20180808::Client::listUsageWithOptions(shared_ptr<ListUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsage"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsageResponse(callApi(params, req, runtime));
}

ListUsageResponse Alibabacloud_Eci20180808::Client::listUsage(shared_ptr<ListUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsageWithOptions(request, runtime);
}

ResizeContainerGroupVolumeResponse Alibabacloud_Eci20180808::Client::resizeContainerGroupVolumeWithOptions(shared_ptr<ResizeContainerGroupVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newSize)) {
    query->insert(pair<string, long>("NewSize", *request->newSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeName)) {
    query->insert(pair<string, string>("VolumeName", *request->volumeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeContainerGroupVolume"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeContainerGroupVolumeResponse(callApi(params, req, runtime));
}

ResizeContainerGroupVolumeResponse Alibabacloud_Eci20180808::Client::resizeContainerGroupVolume(shared_ptr<ResizeContainerGroupVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeContainerGroupVolumeWithOptions(request, runtime);
}

RestartContainerGroupResponse Alibabacloud_Eci20180808::Client::restartContainerGroupWithOptions(shared_ptr<RestartContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartContainerGroup"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartContainerGroupResponse(callApi(params, req, runtime));
}

RestartContainerGroupResponse Alibabacloud_Eci20180808::Client::restartContainerGroup(shared_ptr<RestartContainerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartContainerGroupWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Eci20180808::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Eci20180808::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Eci20180808::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Eci20180808::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateContainerGroupResponse Alibabacloud_Eci20180808::Client::updateContainerGroupWithOptions(shared_ptr<UpdateContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestAcrRegistryInfo>>(request->acrRegistryInfo)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestAcrRegistryInfo>>("AcrRegistryInfo", *request->acrRegistryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestContainer>>(request->container)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestContainer>>("Container", *request->container));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestImageRegistryCredential>>(request->imageRegistryCredential)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestImageRegistryCredential>>("ImageRegistryCredential", *request->imageRegistryCredential));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestInitContainer>>(request->initContainer)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestInitContainer>>("InitContainer", *request->initContainer));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->memory)) {
    query->insert(pair<string, double>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartPolicy)) {
    query->insert(pair<string, string>("RestartPolicy", *request->restartPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateType)) {
    query->insert(pair<string, string>("UpdateType", *request->updateType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateContainerGroupRequestVolume>>(request->volume)) {
    query->insert(pair<string, vector<UpdateContainerGroupRequestVolume>>("Volume", *request->volume));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateContainerGroupRequestDnsConfig>(request->dnsConfig)) {
    query->insert(pair<string, UpdateContainerGroupRequestDnsConfig>("DnsConfig", *request->dnsConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContainerGroup"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContainerGroupResponse(callApi(params, req, runtime));
}

UpdateContainerGroupResponse Alibabacloud_Eci20180808::Client::updateContainerGroup(shared_ptr<UpdateContainerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateContainerGroupWithOptions(request, runtime);
}

UpdateDataCacheResponse Alibabacloud_Eci20180808::Client::updateDataCacheWithOptions(shared_ptr<UpdateDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheId)) {
    query->insert(pair<string, string>("DataCacheId", *request->dataCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataCacheRequestDataSource>(request->dataSource)) {
    query->insert(pair<string, UpdateDataCacheRequestDataSource>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataCacheRequestEipCreateParam>(request->eipCreateParam)) {
    query->insert(pair<string, UpdateDataCacheRequestEipCreateParam>("EipCreateParam", *request->eipCreateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDataCacheRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UpdateDataCacheRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataCacheResponse(callApi(params, req, runtime));
}

UpdateDataCacheResponse Alibabacloud_Eci20180808::Client::updateDataCache(shared_ptr<UpdateDataCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataCacheWithOptions(request, runtime);
}

UpdateImageCacheResponse Alibabacloud_Eci20180808::Client::updateImageCacheWithOptions(shared_ptr<UpdateImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateImageCacheRequestAcrRegistryInfo>>(request->acrRegistryInfo)) {
    query->insert(pair<string, vector<UpdateImageCacheRequestAcrRegistryInfo>>("AcrRegistryInfo", *request->acrRegistryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoMatchImageCache)) {
    query->insert(pair<string, bool>("AutoMatchImageCache", *request->autoMatchImageCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipInstanceId)) {
    query->insert(pair<string, string>("EipInstanceId", *request->eipInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eliminationStrategy)) {
    query->insert(pair<string, string>("EliminationStrategy", *request->eliminationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->flash)) {
    query->insert(pair<string, bool>("Flash", *request->flash));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flashCopyCount)) {
    query->insert(pair<string, long>("FlashCopyCount", *request->flashCopyCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->image)) {
    query->insert(pair<string, vector<string>>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheId)) {
    query->insert(pair<string, string>("ImageCacheId", *request->imageCacheId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCacheName)) {
    query->insert(pair<string, string>("ImageCacheName", *request->imageCacheName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageCacheSize)) {
    query->insert(pair<string, long>("ImageCacheSize", *request->imageCacheSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateImageCacheRequestImageRegistryCredential>>(request->imageRegistryCredential)) {
    query->insert(pair<string, vector<UpdateImageCacheRequestImageRegistryCredential>>("ImageRegistryCredential", *request->imageRegistryCredential));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->standardCopyCount)) {
    query->insert(pair<string, long>("StandardCopyCount", *request->standardCopyCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateImageCacheRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UpdateImageCacheRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImageCache"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateImageCacheResponse(callApi(params, req, runtime));
}

UpdateImageCacheResponse Alibabacloud_Eci20180808::Client::updateImageCache(shared_ptr<UpdateImageCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageCacheWithOptions(request, runtime);
}

UpdateVirtualNodeResponse Alibabacloud_Eci20180808::Client::updateVirtualNodeWithOptions(shared_ptr<UpdateVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDNS)) {
    query->insert(pair<string, string>("ClusterDNS", *request->clusterDNS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDomain)) {
    query->insert(pair<string, string>("ClusterDomain", *request->clusterDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customResources)) {
    query->insert(pair<string, string>("CustomResources", *request->customResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateVirtualNodeRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UpdateVirtualNodeRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeId)) {
    query->insert(pair<string, string>("VirtualNodeId", *request->virtualNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualNodeName)) {
    query->insert(pair<string, string>("VirtualNodeName", *request->virtualNodeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVirtualNode"))},
    {"version", boost::any(string("2018-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVirtualNodeResponse(callApi(params, req, runtime));
}

UpdateVirtualNodeResponse Alibabacloud_Eci20180808::Client::updateVirtualNode(shared_ptr<UpdateVirtualNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVirtualNodeWithOptions(request, runtime);
}

