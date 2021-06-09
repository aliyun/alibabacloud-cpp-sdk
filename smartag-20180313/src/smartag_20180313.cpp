// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/smartag_20180313.hpp>
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

using namespace Alibabacloud_Smartag20180313;

Alibabacloud_Smartag20180313::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("smartag"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Smartag20180313::Client::getEndpoint(shared_ptr<string> productId,
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

GrantSagInstanceToVbrResponse Alibabacloud_Smartag20180313::Client::grantSagInstanceToVbrWithOptions(shared_ptr<GrantSagInstanceToVbrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantSagInstanceToVbrResponse(doRPCRequest(make_shared<string>("GrantSagInstanceToVbr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantSagInstanceToVbrResponse Alibabacloud_Smartag20180313::Client::grantSagInstanceToVbr(shared_ptr<GrantSagInstanceToVbrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantSagInstanceToVbrWithOptions(request, runtime);
}

DescribeSagTrafficTopNResponse Alibabacloud_Smartag20180313::Client::describeSagTrafficTopNWithOptions(shared_ptr<DescribeSagTrafficTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagTrafficTopNResponse(doRPCRequest(make_shared<string>("DescribeSagTrafficTopN"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagTrafficTopNResponse Alibabacloud_Smartag20180313::Client::describeSagTrafficTopN(shared_ptr<DescribeSagTrafficTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagTrafficTopNWithOptions(request, runtime);
}

DescribeGrantSagVbrRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantSagVbrRulesWithOptions(shared_ptr<DescribeGrantSagVbrRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGrantSagVbrRulesResponse(doRPCRequest(make_shared<string>("DescribeGrantSagVbrRules"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGrantSagVbrRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantSagVbrRules(shared_ptr<DescribeGrantSagVbrRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGrantSagVbrRulesWithOptions(request, runtime);
}

DescribeSagStaticRouteListResponse Alibabacloud_Smartag20180313::Client::describeSagStaticRouteListWithOptions(shared_ptr<DescribeSagStaticRouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagStaticRouteListResponse(doRPCRequest(make_shared<string>("DescribeSagStaticRouteList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagStaticRouteListResponse Alibabacloud_Smartag20180313::Client::describeSagStaticRouteList(shared_ptr<DescribeSagStaticRouteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagStaticRouteListWithOptions(request, runtime);
}

DescribeSagRouteListResponse Alibabacloud_Smartag20180313::Client::describeSagRouteListWithOptions(shared_ptr<DescribeSagRouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagRouteListResponse(doRPCRequest(make_shared<string>("DescribeSagRouteList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagRouteListResponse Alibabacloud_Smartag20180313::Client::describeSagRouteList(shared_ptr<DescribeSagRouteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagRouteListWithOptions(request, runtime);
}

DescribePolicyBasedRoutingsResponse Alibabacloud_Smartag20180313::Client::describePolicyBasedRoutingsWithOptions(shared_ptr<DescribePolicyBasedRoutingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePolicyBasedRoutingsResponse(doRPCRequest(make_shared<string>("DescribePolicyBasedRoutings"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePolicyBasedRoutingsResponse Alibabacloud_Smartag20180313::Client::describePolicyBasedRoutings(shared_ptr<DescribePolicyBasedRoutingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyBasedRoutingsWithOptions(request, runtime);
}

ProbeAccessPointNetworkQualityResponse Alibabacloud_Smartag20180313::Client::probeAccessPointNetworkQualityWithOptions(shared_ptr<ProbeAccessPointNetworkQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ProbeAccessPointNetworkQualityResponse(doRPCRequest(make_shared<string>("ProbeAccessPointNetworkQuality"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ProbeAccessPointNetworkQualityResponse Alibabacloud_Smartag20180313::Client::probeAccessPointNetworkQuality(shared_ptr<ProbeAccessPointNetworkQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return probeAccessPointNetworkQualityWithOptions(request, runtime);
}

ModifySagGlobalRouteProtocolResponse Alibabacloud_Smartag20180313::Client::modifySagGlobalRouteProtocolWithOptions(shared_ptr<ModifySagGlobalRouteProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagGlobalRouteProtocolResponse(doRPCRequest(make_shared<string>("ModifySagGlobalRouteProtocol"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagGlobalRouteProtocolResponse Alibabacloud_Smartag20180313::Client::modifySagGlobalRouteProtocol(shared_ptr<ModifySagGlobalRouteProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagGlobalRouteProtocolWithOptions(request, runtime);
}

DeleteRouteDistributionStrategyResponse Alibabacloud_Smartag20180313::Client::deleteRouteDistributionStrategyWithOptions(shared_ptr<DeleteRouteDistributionStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRouteDistributionStrategyResponse(doRPCRequest(make_shared<string>("DeleteRouteDistributionStrategy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRouteDistributionStrategyResponse Alibabacloud_Smartag20180313::Client::deleteRouteDistributionStrategy(shared_ptr<DeleteRouteDistributionStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRouteDistributionStrategyWithOptions(request, runtime);
}

CreateQosCarResponse Alibabacloud_Smartag20180313::Client::createQosCarWithOptions(shared_ptr<CreateQosCarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQosCarResponse(doRPCRequest(make_shared<string>("CreateQosCar"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQosCarResponse Alibabacloud_Smartag20180313::Client::createQosCar(shared_ptr<CreateQosCarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQosCarWithOptions(request, runtime);
}

UpdateSmartAGDpiAttributeResponse Alibabacloud_Smartag20180313::Client::updateSmartAGDpiAttributeWithOptions(shared_ptr<UpdateSmartAGDpiAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmartAGDpiAttributeResponse(doRPCRequest(make_shared<string>("UpdateSmartAGDpiAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmartAGDpiAttributeResponse Alibabacloud_Smartag20180313::Client::updateSmartAGDpiAttribute(shared_ptr<UpdateSmartAGDpiAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartAGDpiAttributeWithOptions(request, runtime);
}

ClearSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::clearSagRouteableAddressWithOptions(shared_ptr<ClearSagRouteableAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearSagRouteableAddressResponse(doRPCRequest(make_shared<string>("ClearSagRouteableAddress"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::clearSagRouteableAddress(shared_ptr<ClearSagRouteableAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearSagRouteableAddressWithOptions(request, runtime);
}

AssociateQosResponse Alibabacloud_Smartag20180313::Client::associateQosWithOptions(shared_ptr<AssociateQosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateQosResponse(doRPCRequest(make_shared<string>("AssociateQos"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateQosResponse Alibabacloud_Smartag20180313::Client::associateQos(shared_ptr<AssociateQosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateQosWithOptions(request, runtime);
}

ModifySAGAdminPasswordResponse Alibabacloud_Smartag20180313::Client::modifySAGAdminPasswordWithOptions(shared_ptr<ModifySAGAdminPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySAGAdminPasswordResponse(doRPCRequest(make_shared<string>("ModifySAGAdminPassword"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySAGAdminPasswordResponse Alibabacloud_Smartag20180313::Client::modifySAGAdminPassword(shared_ptr<ModifySAGAdminPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySAGAdminPasswordWithOptions(request, runtime);
}

DowngradeSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::downgradeSmartAccessGatewayWithOptions(shared_ptr<DowngradeSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DowngradeSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("DowngradeSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DowngradeSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::downgradeSmartAccessGateway(shared_ptr<DowngradeSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downgradeSmartAccessGatewayWithOptions(request, runtime);
}

DescribeSagPortRouteProtocolListResponse Alibabacloud_Smartag20180313::Client::describeSagPortRouteProtocolListWithOptions(shared_ptr<DescribeSagPortRouteProtocolListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagPortRouteProtocolListResponse(doRPCRequest(make_shared<string>("DescribeSagPortRouteProtocolList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagPortRouteProtocolListResponse Alibabacloud_Smartag20180313::Client::describeSagPortRouteProtocolList(shared_ptr<DescribeSagPortRouteProtocolListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagPortRouteProtocolListWithOptions(request, runtime);
}

DescribeSagWanSnatResponse Alibabacloud_Smartag20180313::Client::describeSagWanSnatWithOptions(shared_ptr<DescribeSagWanSnatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagWanSnatResponse(doRPCRequest(make_shared<string>("DescribeSagWanSnat"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagWanSnatResponse Alibabacloud_Smartag20180313::Client::describeSagWanSnat(shared_ptr<DescribeSagWanSnatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagWanSnatWithOptions(request, runtime);
}

DescribeSagUserDnsResponse Alibabacloud_Smartag20180313::Client::describeSagUserDnsWithOptions(shared_ptr<DescribeSagUserDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagUserDnsResponse(doRPCRequest(make_shared<string>("DescribeSagUserDns"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagUserDnsResponse Alibabacloud_Smartag20180313::Client::describeSagUserDns(shared_ptr<DescribeSagUserDnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagUserDnsWithOptions(request, runtime);
}

ListAccessPointNetworkQualitiesResponse Alibabacloud_Smartag20180313::Client::listAccessPointNetworkQualitiesWithOptions(shared_ptr<ListAccessPointNetworkQualitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccessPointNetworkQualitiesResponse(doRPCRequest(make_shared<string>("ListAccessPointNetworkQualities"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccessPointNetworkQualitiesResponse Alibabacloud_Smartag20180313::Client::listAccessPointNetworkQualities(shared_ptr<ListAccessPointNetworkQualitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessPointNetworkQualitiesWithOptions(request, runtime);
}

ModifyFlowLogAttributeResponse Alibabacloud_Smartag20180313::Client::modifyFlowLogAttributeWithOptions(shared_ptr<ModifyFlowLogAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowLogAttributeResponse(doRPCRequest(make_shared<string>("ModifyFlowLogAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowLogAttributeResponse Alibabacloud_Smartag20180313::Client::modifyFlowLogAttribute(shared_ptr<ModifyFlowLogAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

DescribeQosPoliciesResponse Alibabacloud_Smartag20180313::Client::describeQosPoliciesWithOptions(shared_ptr<DescribeQosPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeQosPoliciesResponse(doRPCRequest(make_shared<string>("DescribeQosPolicies"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeQosPoliciesResponse Alibabacloud_Smartag20180313::Client::describeQosPolicies(shared_ptr<DescribeQosPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQosPoliciesWithOptions(request, runtime);
}

CreateQosResponse Alibabacloud_Smartag20180313::Client::createQosWithOptions(shared_ptr<CreateQosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQosResponse(doRPCRequest(make_shared<string>("CreateQos"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQosResponse Alibabacloud_Smartag20180313::Client::createQos(shared_ptr<CreateQosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQosWithOptions(request, runtime);
}

ModifySagECRouteBackupResponse Alibabacloud_Smartag20180313::Client::modifySagECRouteBackupWithOptions(shared_ptr<ModifySagECRouteBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagECRouteBackupResponse(doRPCRequest(make_shared<string>("ModifySagECRouteBackup"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagECRouteBackupResponse Alibabacloud_Smartag20180313::Client::modifySagECRouteBackup(shared_ptr<ModifySagECRouteBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagECRouteBackupWithOptions(request, runtime);
}

DiscribeSmartAccessGatewayDiagnosisReportResponse Alibabacloud_Smartag20180313::Client::discribeSmartAccessGatewayDiagnosisReportWithOptions(shared_ptr<DiscribeSmartAccessGatewayDiagnosisReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DiscribeSmartAccessGatewayDiagnosisReportResponse(doRPCRequest(make_shared<string>("DiscribeSmartAccessGatewayDiagnosisReport"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DiscribeSmartAccessGatewayDiagnosisReportResponse Alibabacloud_Smartag20180313::Client::discribeSmartAccessGatewayDiagnosisReport(shared_ptr<DiscribeSmartAccessGatewayDiagnosisReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return discribeSmartAccessGatewayDiagnosisReportWithOptions(request, runtime);
}

RoamClientUserResponse Alibabacloud_Smartag20180313::Client::roamClientUserWithOptions(shared_ptr<RoamClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RoamClientUserResponse(doRPCRequest(make_shared<string>("RoamClientUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RoamClientUserResponse Alibabacloud_Smartag20180313::Client::roamClientUser(shared_ptr<RoamClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return roamClientUserWithOptions(request, runtime);
}

CreateSagStaticRouteResponse Alibabacloud_Smartag20180313::Client::createSagStaticRouteWithOptions(shared_ptr<CreateSagStaticRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSagStaticRouteResponse(doRPCRequest(make_shared<string>("CreateSagStaticRoute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSagStaticRouteResponse Alibabacloud_Smartag20180313::Client::createSagStaticRoute(shared_ptr<CreateSagStaticRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSagStaticRouteWithOptions(request, runtime);
}

DescribeSmartAccessGatewayAttributeResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayAttributeWithOptions(shared_ptr<DescribeSmartAccessGatewayAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSmartAccessGatewayAttributeResponse(doRPCRequest(make_shared<string>("DescribeSmartAccessGatewayAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSmartAccessGatewayAttributeResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayAttribute(shared_ptr<DescribeSmartAccessGatewayAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartAccessGatewayAttributeWithOptions(request, runtime);
}

CreateCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::createCloudConnectNetworkWithOptions(shared_ptr<CreateCloudConnectNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCloudConnectNetworkResponse(doRPCRequest(make_shared<string>("CreateCloudConnectNetwork"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::createCloudConnectNetwork(shared_ptr<CreateCloudConnectNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudConnectNetworkWithOptions(request, runtime);
}

DeleteQosPolicyResponse Alibabacloud_Smartag20180313::Client::deleteQosPolicyWithOptions(shared_ptr<DeleteQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQosPolicyResponse(doRPCRequest(make_shared<string>("DeleteQosPolicy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQosPolicyResponse Alibabacloud_Smartag20180313::Client::deleteQosPolicy(shared_ptr<DeleteQosPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQosPolicyWithOptions(request, runtime);
}

ModifySagHaResponse Alibabacloud_Smartag20180313::Client::modifySagHaWithOptions(shared_ptr<ModifySagHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagHaResponse(doRPCRequest(make_shared<string>("ModifySagHa"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagHaResponse Alibabacloud_Smartag20180313::Client::modifySagHa(shared_ptr<ModifySagHaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagHaWithOptions(request, runtime);
}

DeleteHealthCheckResponse Alibabacloud_Smartag20180313::Client::deleteHealthCheckWithOptions(shared_ptr<DeleteHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHealthCheckResponse(doRPCRequest(make_shared<string>("DeleteHealthCheck"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHealthCheckResponse Alibabacloud_Smartag20180313::Client::deleteHealthCheck(shared_ptr<DeleteHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHealthCheckWithOptions(request, runtime);
}

SynchronizeSmartAGWebConfigResponse Alibabacloud_Smartag20180313::Client::synchronizeSmartAGWebConfigWithOptions(shared_ptr<SynchronizeSmartAGWebConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SynchronizeSmartAGWebConfigResponse(doRPCRequest(make_shared<string>("SynchronizeSmartAGWebConfig"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SynchronizeSmartAGWebConfigResponse Alibabacloud_Smartag20180313::Client::synchronizeSmartAGWebConfig(shared_ptr<SynchronizeSmartAGWebConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeSmartAGWebConfigWithOptions(request, runtime);
}

DeleteSnatEntryResponse Alibabacloud_Smartag20180313::Client::deleteSnatEntryWithOptions(shared_ptr<DeleteSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnatEntryResponse(doRPCRequest(make_shared<string>("DeleteSnatEntry"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnatEntryResponse Alibabacloud_Smartag20180313::Client::deleteSnatEntry(shared_ptr<DeleteSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnatEntryWithOptions(request, runtime);
}

DeleteQosResponse Alibabacloud_Smartag20180313::Client::deleteQosWithOptions(shared_ptr<DeleteQosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQosResponse(doRPCRequest(make_shared<string>("DeleteQos"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQosResponse Alibabacloud_Smartag20180313::Client::deleteQos(shared_ptr<DeleteQosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQosWithOptions(request, runtime);
}

AddSagCidrResponse Alibabacloud_Smartag20180313::Client::addSagCidrWithOptions(shared_ptr<AddSagCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSagCidrResponse(doRPCRequest(make_shared<string>("AddSagCidr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSagCidrResponse Alibabacloud_Smartag20180313::Client::addSagCidr(shared_ptr<AddSagCidrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSagCidrWithOptions(request, runtime);
}

DeleteSagStaticRouteResponse Alibabacloud_Smartag20180313::Client::deleteSagStaticRouteWithOptions(shared_ptr<DeleteSagStaticRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSagStaticRouteResponse(doRPCRequest(make_shared<string>("DeleteSagStaticRoute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSagStaticRouteResponse Alibabacloud_Smartag20180313::Client::deleteSagStaticRoute(shared_ptr<DeleteSagStaticRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSagStaticRouteWithOptions(request, runtime);
}

DescribeGrantSagRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantSagRulesWithOptions(shared_ptr<DescribeGrantSagRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGrantSagRulesResponse(doRPCRequest(make_shared<string>("DescribeGrantSagRules"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGrantSagRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantSagRules(shared_ptr<DescribeGrantSagRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGrantSagRulesWithOptions(request, runtime);
}

DescribeUserOnlineClientsResponse Alibabacloud_Smartag20180313::Client::describeUserOnlineClientsWithOptions(shared_ptr<DescribeUserOnlineClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserOnlineClientsResponse(doRPCRequest(make_shared<string>("DescribeUserOnlineClients"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserOnlineClientsResponse Alibabacloud_Smartag20180313::Client::describeUserOnlineClients(shared_ptr<DescribeUserOnlineClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserOnlineClientsWithOptions(request, runtime);
}

DiagnoseSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::diagnoseSmartAccessGatewayWithOptions(shared_ptr<DiagnoseSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DiagnoseSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("DiagnoseSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DiagnoseSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::diagnoseSmartAccessGateway(shared_ptr<DiagnoseSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return diagnoseSmartAccessGatewayWithOptions(request, runtime);
}

DescribeSagWifiResponse Alibabacloud_Smartag20180313::Client::describeSagWifiWithOptions(shared_ptr<DescribeSagWifiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagWifiResponse(doRPCRequest(make_shared<string>("DescribeSagWifi"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagWifiResponse Alibabacloud_Smartag20180313::Client::describeSagWifi(shared_ptr<DescribeSagWifiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagWifiWithOptions(request, runtime);
}

UnbindSerialNumberResponse Alibabacloud_Smartag20180313::Client::unbindSerialNumberWithOptions(shared_ptr<UnbindSerialNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindSerialNumberResponse(doRPCRequest(make_shared<string>("UnbindSerialNumber"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindSerialNumberResponse Alibabacloud_Smartag20180313::Client::unbindSerialNumber(shared_ptr<UnbindSerialNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSerialNumberWithOptions(request, runtime);
}

DescribeSAGDeviceInfoResponse Alibabacloud_Smartag20180313::Client::describeSAGDeviceInfoWithOptions(shared_ptr<DescribeSAGDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSAGDeviceInfoResponse(doRPCRequest(make_shared<string>("DescribeSAGDeviceInfo"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSAGDeviceInfoResponse Alibabacloud_Smartag20180313::Client::describeSAGDeviceInfo(shared_ptr<DescribeSAGDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSAGDeviceInfoWithOptions(request, runtime);
}

DescribeUserFlowStatisticsResponse Alibabacloud_Smartag20180313::Client::describeUserFlowStatisticsWithOptions(shared_ptr<DescribeUserFlowStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserFlowStatisticsResponse(doRPCRequest(make_shared<string>("DescribeUserFlowStatistics"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserFlowStatisticsResponse Alibabacloud_Smartag20180313::Client::describeUserFlowStatistics(shared_ptr<DescribeUserFlowStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserFlowStatisticsWithOptions(request, runtime);
}

ModifySagLanResponse Alibabacloud_Smartag20180313::Client::modifySagLanWithOptions(shared_ptr<ModifySagLanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagLanResponse(doRPCRequest(make_shared<string>("ModifySagLan"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagLanResponse Alibabacloud_Smartag20180313::Client::modifySagLan(shared_ptr<ModifySagLanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagLanWithOptions(request, runtime);
}

DescribeFlowLogsResponse Alibabacloud_Smartag20180313::Client::describeFlowLogsWithOptions(shared_ptr<DescribeFlowLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowLogsResponse(doRPCRequest(make_shared<string>("DescribeFlowLogs"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowLogsResponse Alibabacloud_Smartag20180313::Client::describeFlowLogs(shared_ptr<DescribeFlowLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowLogsWithOptions(request, runtime);
}

DescribeSmartAccessGatewayClientUsersResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayClientUsersWithOptions(shared_ptr<DescribeSmartAccessGatewayClientUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSmartAccessGatewayClientUsersResponse(doRPCRequest(make_shared<string>("DescribeSmartAccessGatewayClientUsers"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSmartAccessGatewayClientUsersResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayClientUsers(shared_ptr<DescribeSmartAccessGatewayClientUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartAccessGatewayClientUsersWithOptions(request, runtime);
}

DescribeHealthCheckAttributeResponse Alibabacloud_Smartag20180313::Client::describeHealthCheckAttributeWithOptions(shared_ptr<DescribeHealthCheckAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHealthCheckAttributeResponse(doRPCRequest(make_shared<string>("DescribeHealthCheckAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHealthCheckAttributeResponse Alibabacloud_Smartag20180313::Client::describeHealthCheckAttribute(shared_ptr<DescribeHealthCheckAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHealthCheckAttributeWithOptions(request, runtime);
}

ModifyQosPolicyResponse Alibabacloud_Smartag20180313::Client::modifyQosPolicyWithOptions(shared_ptr<ModifyQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyQosPolicyResponse(doRPCRequest(make_shared<string>("ModifyQosPolicy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyQosPolicyResponse Alibabacloud_Smartag20180313::Client::modifyQosPolicy(shared_ptr<ModifyQosPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyQosPolicyWithOptions(request, runtime);
}

ModifySagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::modifySagExpressConnectInterfaceWithOptions(shared_ptr<ModifySagExpressConnectInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagExpressConnectInterfaceResponse(doRPCRequest(make_shared<string>("ModifySagExpressConnectInterface"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::modifySagExpressConnectInterface(shared_ptr<ModifySagExpressConnectInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagExpressConnectInterfaceWithOptions(request, runtime);
}

UpdateSmartAGAccessPointResponse Alibabacloud_Smartag20180313::Client::updateSmartAGAccessPointWithOptions(shared_ptr<UpdateSmartAGAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmartAGAccessPointResponse(doRPCRequest(make_shared<string>("UpdateSmartAGAccessPoint"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmartAGAccessPointResponse Alibabacloud_Smartag20180313::Client::updateSmartAGAccessPoint(shared_ptr<UpdateSmartAGAccessPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartAGAccessPointWithOptions(request, runtime);
}

BindSerialNumberResponse Alibabacloud_Smartag20180313::Client::bindSerialNumberWithOptions(shared_ptr<BindSerialNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindSerialNumberResponse(doRPCRequest(make_shared<string>("BindSerialNumber"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindSerialNumberResponse Alibabacloud_Smartag20180313::Client::bindSerialNumber(shared_ptr<BindSerialNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSerialNumberWithOptions(request, runtime);
}

ModifySagRouteProtocolOspfResponse Alibabacloud_Smartag20180313::Client::modifySagRouteProtocolOspfWithOptions(shared_ptr<ModifySagRouteProtocolOspfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagRouteProtocolOspfResponse(doRPCRequest(make_shared<string>("ModifySagRouteProtocolOspf"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagRouteProtocolOspfResponse Alibabacloud_Smartag20180313::Client::modifySagRouteProtocolOspf(shared_ptr<ModifySagRouteProtocolOspfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagRouteProtocolOspfWithOptions(request, runtime);
}

AddDnatEntryResponse Alibabacloud_Smartag20180313::Client::addDnatEntryWithOptions(shared_ptr<AddDnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddDnatEntryResponse(doRPCRequest(make_shared<string>("AddDnatEntry"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddDnatEntryResponse Alibabacloud_Smartag20180313::Client::addDnatEntry(shared_ptr<AddDnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDnatEntryWithOptions(request, runtime);
}

DeleteSagCidrResponse Alibabacloud_Smartag20180313::Client::deleteSagCidrWithOptions(shared_ptr<DeleteSagCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSagCidrResponse(doRPCRequest(make_shared<string>("DeleteSagCidr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSagCidrResponse Alibabacloud_Smartag20180313::Client::deleteSagCidr(shared_ptr<DeleteSagCidrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSagCidrWithOptions(request, runtime);
}

DescribeSagRouteProtocolOspfResponse Alibabacloud_Smartag20180313::Client::describeSagRouteProtocolOspfWithOptions(shared_ptr<DescribeSagRouteProtocolOspfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagRouteProtocolOspfResponse(doRPCRequest(make_shared<string>("DescribeSagRouteProtocolOspf"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagRouteProtocolOspfResponse Alibabacloud_Smartag20180313::Client::describeSagRouteProtocolOspf(shared_ptr<DescribeSagRouteProtocolOspfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagRouteProtocolOspfWithOptions(request, runtime);
}

DescribeRouteDistributionStrategiesResponse Alibabacloud_Smartag20180313::Client::describeRouteDistributionStrategiesWithOptions(shared_ptr<DescribeRouteDistributionStrategiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRouteDistributionStrategiesResponse(doRPCRequest(make_shared<string>("DescribeRouteDistributionStrategies"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRouteDistributionStrategiesResponse Alibabacloud_Smartag20180313::Client::describeRouteDistributionStrategies(shared_ptr<DescribeRouteDistributionStrategiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRouteDistributionStrategiesWithOptions(request, runtime);
}

DescribeSagHaResponse Alibabacloud_Smartag20180313::Client::describeSagHaWithOptions(shared_ptr<DescribeSagHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagHaResponse(doRPCRequest(make_shared<string>("DescribeSagHa"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagHaResponse Alibabacloud_Smartag20180313::Client::describeSagHa(shared_ptr<DescribeSagHaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagHaWithOptions(request, runtime);
}

AddACLRuleResponse Alibabacloud_Smartag20180313::Client::addACLRuleWithOptions(shared_ptr<AddACLRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddACLRuleResponse(doRPCRequest(make_shared<string>("AddACLRule"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddACLRuleResponse Alibabacloud_Smartag20180313::Client::addACLRule(shared_ptr<AddACLRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addACLRuleWithOptions(request, runtime);
}

AssociateFlowLogResponse Alibabacloud_Smartag20180313::Client::associateFlowLogWithOptions(shared_ptr<AssociateFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateFlowLogResponse(doRPCRequest(make_shared<string>("AssociateFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateFlowLogResponse Alibabacloud_Smartag20180313::Client::associateFlowLog(shared_ptr<AssociateFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateFlowLogWithOptions(request, runtime);
}

BindSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::bindSmartAccessGatewayWithOptions(shared_ptr<BindSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("BindSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::bindSmartAccessGateway(shared_ptr<BindSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSmartAccessGatewayWithOptions(request, runtime);
}

DisassociateACLResponse Alibabacloud_Smartag20180313::Client::disassociateACLWithOptions(shared_ptr<DisassociateACLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisassociateACLResponse(doRPCRequest(make_shared<string>("DisassociateACL"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisassociateACLResponse Alibabacloud_Smartag20180313::Client::disassociateACL(shared_ptr<DisassociateACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateACLWithOptions(request, runtime);
}

DeactiveFlowLogResponse Alibabacloud_Smartag20180313::Client::deactiveFlowLogWithOptions(shared_ptr<DeactiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeactiveFlowLogResponse(doRPCRequest(make_shared<string>("DeactiveFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeactiveFlowLogResponse Alibabacloud_Smartag20180313::Client::deactiveFlowLog(shared_ptr<DeactiveFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactiveFlowLogWithOptions(request, runtime);
}

ActiveFlowLogResponse Alibabacloud_Smartag20180313::Client::activeFlowLogWithOptions(shared_ptr<ActiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActiveFlowLogResponse(doRPCRequest(make_shared<string>("ActiveFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActiveFlowLogResponse Alibabacloud_Smartag20180313::Client::activeFlowLog(shared_ptr<ActiveFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeFlowLogWithOptions(request, runtime);
}

KickOutClientsResponse Alibabacloud_Smartag20180313::Client::kickOutClientsWithOptions(shared_ptr<KickOutClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return KickOutClientsResponse(doRPCRequest(make_shared<string>("KickOutClients"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

KickOutClientsResponse Alibabacloud_Smartag20180313::Client::kickOutClients(shared_ptr<KickOutClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return kickOutClientsWithOptions(request, runtime);
}

DescribeSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::describeSagRouteableAddressWithOptions(shared_ptr<DescribeSagRouteableAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagRouteableAddressResponse(doRPCRequest(make_shared<string>("DescribeSagRouteableAddress"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::describeSagRouteableAddress(shared_ptr<DescribeSagRouteableAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagRouteableAddressWithOptions(request, runtime);
}

ModifySagPortRoleResponse Alibabacloud_Smartag20180313::Client::modifySagPortRoleWithOptions(shared_ptr<ModifySagPortRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagPortRoleResponse(doRPCRequest(make_shared<string>("ModifySagPortRole"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagPortRoleResponse Alibabacloud_Smartag20180313::Client::modifySagPortRole(shared_ptr<ModifySagPortRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagPortRoleWithOptions(request, runtime);
}

ModifySagWanSnatResponse Alibabacloud_Smartag20180313::Client::modifySagWanSnatWithOptions(shared_ptr<ModifySagWanSnatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagWanSnatResponse(doRPCRequest(make_shared<string>("ModifySagWanSnat"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagWanSnatResponse Alibabacloud_Smartag20180313::Client::modifySagWanSnat(shared_ptr<ModifySagWanSnatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagWanSnatWithOptions(request, runtime);
}

ListDpiConfigErrorResponse Alibabacloud_Smartag20180313::Client::listDpiConfigErrorWithOptions(shared_ptr<ListDpiConfigErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDpiConfigErrorResponse(doRPCRequest(make_shared<string>("ListDpiConfigError"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDpiConfigErrorResponse Alibabacloud_Smartag20180313::Client::listDpiConfigError(shared_ptr<ListDpiConfigErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDpiConfigErrorWithOptions(request, runtime);
}

DeleteACLResponse Alibabacloud_Smartag20180313::Client::deleteACLWithOptions(shared_ptr<DeleteACLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteACLResponse(doRPCRequest(make_shared<string>("DeleteACL"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteACLResponse Alibabacloud_Smartag20180313::Client::deleteACL(shared_ptr<DeleteACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteACLWithOptions(request, runtime);
}

UpdateSmartAGEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::updateSmartAGEnterpriseCodeWithOptions(shared_ptr<UpdateSmartAGEnterpriseCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmartAGEnterpriseCodeResponse(doRPCRequest(make_shared<string>("UpdateSmartAGEnterpriseCode"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmartAGEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::updateSmartAGEnterpriseCode(shared_ptr<UpdateSmartAGEnterpriseCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartAGEnterpriseCodeWithOptions(request, runtime);
}

DescribePbrInterfacesResponse Alibabacloud_Smartag20180313::Client::describePbrInterfacesWithOptions(shared_ptr<DescribePbrInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePbrInterfacesResponse(doRPCRequest(make_shared<string>("DescribePbrInterfaces"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePbrInterfacesResponse Alibabacloud_Smartag20180313::Client::describePbrInterfaces(shared_ptr<DescribePbrInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePbrInterfacesWithOptions(request, runtime);
}

AssociateACLResponse Alibabacloud_Smartag20180313::Client::associateACLWithOptions(shared_ptr<AssociateACLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateACLResponse(doRPCRequest(make_shared<string>("AssociateACL"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateACLResponse Alibabacloud_Smartag20180313::Client::associateACL(shared_ptr<AssociateACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateACLWithOptions(request, runtime);
}

ModifyHealthCheckResponse Alibabacloud_Smartag20180313::Client::modifyHealthCheckWithOptions(shared_ptr<ModifyHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHealthCheckResponse(doRPCRequest(make_shared<string>("ModifyHealthCheck"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHealthCheckResponse Alibabacloud_Smartag20180313::Client::modifyHealthCheck(shared_ptr<ModifyHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHealthCheckWithOptions(request, runtime);
}

CreateEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::createEnterpriseCodeWithOptions(shared_ptr<CreateEnterpriseCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEnterpriseCodeResponse(doRPCRequest(make_shared<string>("CreateEnterpriseCode"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::createEnterpriseCode(shared_ptr<CreateEnterpriseCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnterpriseCodeWithOptions(request, runtime);
}

DescribeACLsResponse Alibabacloud_Smartag20180313::Client::describeACLsWithOptions(shared_ptr<DescribeACLsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeACLsResponse(doRPCRequest(make_shared<string>("DescribeACLs"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeACLsResponse Alibabacloud_Smartag20180313::Client::describeACLs(shared_ptr<DescribeACLsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeACLsWithOptions(request, runtime);
}

ResetSmartAccessGatewayClientUserPasswordResponse Alibabacloud_Smartag20180313::Client::resetSmartAccessGatewayClientUserPasswordWithOptions(shared_ptr<ResetSmartAccessGatewayClientUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetSmartAccessGatewayClientUserPasswordResponse(doRPCRequest(make_shared<string>("ResetSmartAccessGatewayClientUserPassword"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetSmartAccessGatewayClientUserPasswordResponse Alibabacloud_Smartag20180313::Client::resetSmartAccessGatewayClientUserPassword(shared_ptr<ResetSmartAccessGatewayClientUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSmartAccessGatewayClientUserPasswordWithOptions(request, runtime);
}

UnlockSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::unlockSmartAccessGatewayWithOptions(shared_ptr<UnlockSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("UnlockSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::unlockSmartAccessGateway(shared_ptr<UnlockSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockSmartAccessGatewayWithOptions(request, runtime);
}

DescribeUnbindFlowLogSagsResponse Alibabacloud_Smartag20180313::Client::describeUnbindFlowLogSagsWithOptions(shared_ptr<DescribeUnbindFlowLogSagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUnbindFlowLogSagsResponse(doRPCRequest(make_shared<string>("DescribeUnbindFlowLogSags"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUnbindFlowLogSagsResponse Alibabacloud_Smartag20180313::Client::describeUnbindFlowLogSags(shared_ptr<DescribeUnbindFlowLogSagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUnbindFlowLogSagsWithOptions(request, runtime);
}

DisassociateFlowLogResponse Alibabacloud_Smartag20180313::Client::disassociateFlowLogWithOptions(shared_ptr<DisassociateFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisassociateFlowLogResponse(doRPCRequest(make_shared<string>("DisassociateFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisassociateFlowLogResponse Alibabacloud_Smartag20180313::Client::disassociateFlowLog(shared_ptr<DisassociateFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateFlowLogWithOptions(request, runtime);
}

DescribeSagGlobalRouteProtocolResponse Alibabacloud_Smartag20180313::Client::describeSagGlobalRouteProtocolWithOptions(shared_ptr<DescribeSagGlobalRouteProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagGlobalRouteProtocolResponse(doRPCRequest(make_shared<string>("DescribeSagGlobalRouteProtocol"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagGlobalRouteProtocolResponse Alibabacloud_Smartag20180313::Client::describeSagGlobalRouteProtocol(shared_ptr<DescribeSagGlobalRouteProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagGlobalRouteProtocolWithOptions(request, runtime);
}

DescribeSagExpressConnectInterfaceListResponse Alibabacloud_Smartag20180313::Client::describeSagExpressConnectInterfaceListWithOptions(shared_ptr<DescribeSagExpressConnectInterfaceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagExpressConnectInterfaceListResponse(doRPCRequest(make_shared<string>("DescribeSagExpressConnectInterfaceList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagExpressConnectInterfaceListResponse Alibabacloud_Smartag20180313::Client::describeSagExpressConnectInterfaceList(shared_ptr<DescribeSagExpressConnectInterfaceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagExpressConnectInterfaceListWithOptions(request, runtime);
}

CreateACLResponse Alibabacloud_Smartag20180313::Client::createACLWithOptions(shared_ptr<CreateACLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateACLResponse(doRPCRequest(make_shared<string>("CreateACL"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateACLResponse Alibabacloud_Smartag20180313::Client::createACL(shared_ptr<CreateACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createACLWithOptions(request, runtime);
}

RebootSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::rebootSmartAccessGatewayWithOptions(shared_ptr<RebootSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("RebootSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::rebootSmartAccessGateway(shared_ptr<RebootSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootSmartAccessGatewayWithOptions(request, runtime);
}

ModifySagStaticRouteResponse Alibabacloud_Smartag20180313::Client::modifySagStaticRouteWithOptions(shared_ptr<ModifySagStaticRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagStaticRouteResponse(doRPCRequest(make_shared<string>("ModifySagStaticRoute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagStaticRouteResponse Alibabacloud_Smartag20180313::Client::modifySagStaticRoute(shared_ptr<ModifySagStaticRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagStaticRouteWithOptions(request, runtime);
}

RevokeInstanceFromVbrResponse Alibabacloud_Smartag20180313::Client::revokeInstanceFromVbrWithOptions(shared_ptr<RevokeInstanceFromVbrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeInstanceFromVbrResponse(doRPCRequest(make_shared<string>("RevokeInstanceFromVbr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeInstanceFromVbrResponse Alibabacloud_Smartag20180313::Client::revokeInstanceFromVbr(shared_ptr<RevokeInstanceFromVbrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeInstanceFromVbrWithOptions(request, runtime);
}

DescribeCloudConnectNetworksResponse Alibabacloud_Smartag20180313::Client::describeCloudConnectNetworksWithOptions(shared_ptr<DescribeCloudConnectNetworksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCloudConnectNetworksResponse(doRPCRequest(make_shared<string>("DescribeCloudConnectNetworks"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCloudConnectNetworksResponse Alibabacloud_Smartag20180313::Client::describeCloudConnectNetworks(shared_ptr<DescribeCloudConnectNetworksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudConnectNetworksWithOptions(request, runtime);
}

ModifyACLRuleResponse Alibabacloud_Smartag20180313::Client::modifyACLRuleWithOptions(shared_ptr<ModifyACLRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyACLRuleResponse(doRPCRequest(make_shared<string>("ModifyACLRule"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyACLRuleResponse Alibabacloud_Smartag20180313::Client::modifyACLRule(shared_ptr<ModifyACLRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyACLRuleWithOptions(request, runtime);
}

ModifySmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGatewayClientUserWithOptions(shared_ptr<ModifySmartAccessGatewayClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySmartAccessGatewayClientUserResponse(doRPCRequest(make_shared<string>("ModifySmartAccessGatewayClientUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGatewayClientUser(shared_ptr<ModifySmartAccessGatewayClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmartAccessGatewayClientUserWithOptions(request, runtime);
}

DescribeSagManagementPortResponse Alibabacloud_Smartag20180313::Client::describeSagManagementPortWithOptions(shared_ptr<DescribeSagManagementPortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagManagementPortResponse(doRPCRequest(make_shared<string>("DescribeSagManagementPort"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagManagementPortResponse Alibabacloud_Smartag20180313::Client::describeSagManagementPort(shared_ptr<DescribeSagManagementPortRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagManagementPortWithOptions(request, runtime);
}

UpgradeSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::upgradeSmartAccessGatewayWithOptions(shared_ptr<UpgradeSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("UpgradeSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::upgradeSmartAccessGateway(shared_ptr<UpgradeSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeSmartAccessGatewayWithOptions(request, runtime);
}

GetSmartAGDpiAttributeResponse Alibabacloud_Smartag20180313::Client::getSmartAGDpiAttributeWithOptions(shared_ptr<GetSmartAGDpiAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSmartAGDpiAttributeResponse(doRPCRequest(make_shared<string>("GetSmartAGDpiAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSmartAGDpiAttributeResponse Alibabacloud_Smartag20180313::Client::getSmartAGDpiAttribute(shared_ptr<GetSmartAGDpiAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartAGDpiAttributeWithOptions(request, runtime);
}

DisassociateQosResponse Alibabacloud_Smartag20180313::Client::disassociateQosWithOptions(shared_ptr<DisassociateQosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisassociateQosResponse(doRPCRequest(make_shared<string>("DisassociateQos"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisassociateQosResponse Alibabacloud_Smartag20180313::Client::disassociateQos(shared_ptr<DisassociateQosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateQosWithOptions(request, runtime);
}

ModifyRouteDistributionStrategyResponse Alibabacloud_Smartag20180313::Client::modifyRouteDistributionStrategyWithOptions(shared_ptr<ModifyRouteDistributionStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRouteDistributionStrategyResponse(doRPCRequest(make_shared<string>("ModifyRouteDistributionStrategy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRouteDistributionStrategyResponse Alibabacloud_Smartag20180313::Client::modifyRouteDistributionStrategy(shared_ptr<ModifyRouteDistributionStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRouteDistributionStrategyWithOptions(request, runtime);
}

ModifySagPortRouteProtocolResponse Alibabacloud_Smartag20180313::Client::modifySagPortRouteProtocolWithOptions(shared_ptr<ModifySagPortRouteProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagPortRouteProtocolResponse(doRPCRequest(make_shared<string>("ModifySagPortRouteProtocol"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagPortRouteProtocolResponse Alibabacloud_Smartag20180313::Client::modifySagPortRouteProtocol(shared_ptr<ModifySagPortRouteProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagPortRouteProtocolWithOptions(request, runtime);
}

EnableSmartAccessGatewayUserResponse Alibabacloud_Smartag20180313::Client::enableSmartAccessGatewayUserWithOptions(shared_ptr<EnableSmartAccessGatewayUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableSmartAccessGatewayUserResponse(doRPCRequest(make_shared<string>("EnableSmartAccessGatewayUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableSmartAccessGatewayUserResponse Alibabacloud_Smartag20180313::Client::enableSmartAccessGatewayUser(shared_ptr<EnableSmartAccessGatewayUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSmartAccessGatewayUserWithOptions(request, runtime);
}

ModifyQosResponse Alibabacloud_Smartag20180313::Client::modifyQosWithOptions(shared_ptr<ModifyQosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyQosResponse(doRPCRequest(make_shared<string>("ModifyQos"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyQosResponse Alibabacloud_Smartag20180313::Client::modifyQos(shared_ptr<ModifyQosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyQosWithOptions(request, runtime);
}

GetAclAttributeResponse Alibabacloud_Smartag20180313::Client::getAclAttributeWithOptions(shared_ptr<GetAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAclAttributeResponse(doRPCRequest(make_shared<string>("GetAclAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAclAttributeResponse Alibabacloud_Smartag20180313::Client::getAclAttribute(shared_ptr<GetAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAclAttributeWithOptions(request, runtime);
}

DescribeSagWanListResponse Alibabacloud_Smartag20180313::Client::describeSagWanListWithOptions(shared_ptr<DescribeSagWanListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagWanListResponse(doRPCRequest(make_shared<string>("DescribeSagWanList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagWanListResponse Alibabacloud_Smartag20180313::Client::describeSagWanList(shared_ptr<DescribeSagWanListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagWanListWithOptions(request, runtime);
}

ListSmartAGApiUnsupportedFeatureResponse Alibabacloud_Smartag20180313::Client::listSmartAGApiUnsupportedFeatureWithOptions(shared_ptr<ListSmartAGApiUnsupportedFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSmartAGApiUnsupportedFeatureResponse(doRPCRequest(make_shared<string>("ListSmartAGApiUnsupportedFeature"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSmartAGApiUnsupportedFeatureResponse Alibabacloud_Smartag20180313::Client::listSmartAGApiUnsupportedFeature(shared_ptr<ListSmartAGApiUnsupportedFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartAGApiUnsupportedFeatureWithOptions(request, runtime);
}

EnableSmartAGDpiMonitorResponse Alibabacloud_Smartag20180313::Client::enableSmartAGDpiMonitorWithOptions(shared_ptr<EnableSmartAGDpiMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableSmartAGDpiMonitorResponse(doRPCRequest(make_shared<string>("EnableSmartAGDpiMonitor"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableSmartAGDpiMonitorResponse Alibabacloud_Smartag20180313::Client::enableSmartAGDpiMonitor(shared_ptr<EnableSmartAGDpiMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSmartAGDpiMonitorWithOptions(request, runtime);
}

ActivateSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::activateSmartAccessGatewayWithOptions(shared_ptr<ActivateSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActivateSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("ActivateSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActivateSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::activateSmartAccessGateway(shared_ptr<ActivateSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateSmartAccessGatewayWithOptions(request, runtime);
}

DeleteACLRuleResponse Alibabacloud_Smartag20180313::Client::deleteACLRuleWithOptions(shared_ptr<DeleteACLRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteACLRuleResponse(doRPCRequest(make_shared<string>("DeleteACLRule"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteACLRuleResponse Alibabacloud_Smartag20180313::Client::deleteACLRule(shared_ptr<DeleteACLRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteACLRuleWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Smartag20180313::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Smartag20180313::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

DescribeSagVbrRelationsResponse Alibabacloud_Smartag20180313::Client::describeSagVbrRelationsWithOptions(shared_ptr<DescribeSagVbrRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagVbrRelationsResponse(doRPCRequest(make_shared<string>("DescribeSagVbrRelations"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagVbrRelationsResponse Alibabacloud_Smartag20180313::Client::describeSagVbrRelations(shared_ptr<DescribeSagVbrRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagVbrRelationsWithOptions(request, runtime);
}

CreateSmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGatewayClientUserWithOptions(shared_ptr<CreateSmartAccessGatewayClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSmartAccessGatewayClientUserResponse(doRPCRequest(make_shared<string>("CreateSmartAccessGatewayClientUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGatewayClientUser(shared_ptr<CreateSmartAccessGatewayClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmartAccessGatewayClientUserWithOptions(request, runtime);
}

GetQosAttributeResponse Alibabacloud_Smartag20180313::Client::getQosAttributeWithOptions(shared_ptr<GetQosAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQosAttributeResponse(doRPCRequest(make_shared<string>("GetQosAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQosAttributeResponse Alibabacloud_Smartag20180313::Client::getQosAttribute(shared_ptr<GetQosAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQosAttributeWithOptions(request, runtime);
}

CreateHealthCheckResponse Alibabacloud_Smartag20180313::Client::createHealthCheckWithOptions(shared_ptr<CreateHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHealthCheckResponse(doRPCRequest(make_shared<string>("CreateHealthCheck"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHealthCheckResponse Alibabacloud_Smartag20180313::Client::createHealthCheck(shared_ptr<CreateHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHealthCheckWithOptions(request, runtime);
}

ModifySagRemoteAccessResponse Alibabacloud_Smartag20180313::Client::modifySagRemoteAccessWithOptions(shared_ptr<ModifySagRemoteAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagRemoteAccessResponse(doRPCRequest(make_shared<string>("ModifySagRemoteAccess"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagRemoteAccessResponse Alibabacloud_Smartag20180313::Client::modifySagRemoteAccess(shared_ptr<ModifySagRemoteAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagRemoteAccessWithOptions(request, runtime);
}

RevokeSagInstanceFromCcnResponse Alibabacloud_Smartag20180313::Client::revokeSagInstanceFromCcnWithOptions(shared_ptr<RevokeSagInstanceFromCcnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeSagInstanceFromCcnResponse(doRPCRequest(make_shared<string>("RevokeSagInstanceFromCcn"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeSagInstanceFromCcnResponse Alibabacloud_Smartag20180313::Client::revokeSagInstanceFromCcn(shared_ptr<RevokeSagInstanceFromCcnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSagInstanceFromCcnWithOptions(request, runtime);
}

DeleteEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::deleteEnterpriseCodeWithOptions(shared_ptr<DeleteEnterpriseCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEnterpriseCodeResponse(doRPCRequest(make_shared<string>("DeleteEnterpriseCode"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::deleteEnterpriseCode(shared_ptr<DeleteEnterpriseCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseCodeWithOptions(request, runtime);
}

DeleteSmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::deleteSmartAccessGatewayClientUserWithOptions(shared_ptr<DeleteSmartAccessGatewayClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmartAccessGatewayClientUserResponse(doRPCRequest(make_shared<string>("DeleteSmartAccessGatewayClientUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmartAccessGatewayClientUserResponse Alibabacloud_Smartag20180313::Client::deleteSmartAccessGatewayClientUser(shared_ptr<DeleteSmartAccessGatewayClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartAccessGatewayClientUserWithOptions(request, runtime);
}

ListSmartAGByAccessPointResponse Alibabacloud_Smartag20180313::Client::listSmartAGByAccessPointWithOptions(shared_ptr<ListSmartAGByAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSmartAGByAccessPointResponse(doRPCRequest(make_shared<string>("ListSmartAGByAccessPoint"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSmartAGByAccessPointResponse Alibabacloud_Smartag20180313::Client::listSmartAGByAccessPoint(shared_ptr<ListSmartAGByAccessPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartAGByAccessPointWithOptions(request, runtime);
}

DescribeGrantRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantRulesWithOptions(shared_ptr<DescribeGrantRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGrantRulesResponse(doRPCRequest(make_shared<string>("DescribeGrantRules"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGrantRulesResponse Alibabacloud_Smartag20180313::Client::describeGrantRules(shared_ptr<DescribeGrantRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGrantRulesWithOptions(request, runtime);
}

CreateSagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::createSagExpressConnectInterfaceWithOptions(shared_ptr<CreateSagExpressConnectInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSagExpressConnectInterfaceResponse(doRPCRequest(make_shared<string>("CreateSagExpressConnectInterface"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::createSagExpressConnectInterface(shared_ptr<CreateSagExpressConnectInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSagExpressConnectInterfaceWithOptions(request, runtime);
}

UnbindSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::unbindSmartAccessGatewayWithOptions(shared_ptr<UnbindSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("UnbindSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::unbindSmartAccessGateway(shared_ptr<UnbindSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSmartAccessGatewayWithOptions(request, runtime);
}

CreateSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGatewayWithOptions(shared_ptr<CreateSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("CreateSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGateway(shared_ptr<CreateSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmartAccessGatewayWithOptions(request, runtime);
}

DeleteFlowLogResponse Alibabacloud_Smartag20180313::Client::deleteFlowLogWithOptions(shared_ptr<DeleteFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowLogResponse(doRPCRequest(make_shared<string>("DeleteFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowLogResponse Alibabacloud_Smartag20180313::Client::deleteFlowLog(shared_ptr<DeleteFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowLogWithOptions(request, runtime);
}

DescribeSagOnlineClientStatisticsResponse Alibabacloud_Smartag20180313::Client::describeSagOnlineClientStatisticsWithOptions(shared_ptr<DescribeSagOnlineClientStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagOnlineClientStatisticsResponse(doRPCRequest(make_shared<string>("DescribeSagOnlineClientStatistics"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagOnlineClientStatisticsResponse Alibabacloud_Smartag20180313::Client::describeSagOnlineClientStatistics(shared_ptr<DescribeSagOnlineClientStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagOnlineClientStatisticsWithOptions(request, runtime);
}

ModifyCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::modifyCloudConnectNetworkWithOptions(shared_ptr<ModifyCloudConnectNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCloudConnectNetworkResponse(doRPCRequest(make_shared<string>("ModifyCloudConnectNetwork"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::modifyCloudConnectNetwork(shared_ptr<ModifyCloudConnectNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCloudConnectNetworkWithOptions(request, runtime);
}

ModifySmartAccessGatewayUpBandwidthResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGatewayUpBandwidthWithOptions(shared_ptr<ModifySmartAccessGatewayUpBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySmartAccessGatewayUpBandwidthResponse(doRPCRequest(make_shared<string>("ModifySmartAccessGatewayUpBandwidth"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySmartAccessGatewayUpBandwidthResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGatewayUpBandwidth(shared_ptr<ModifySmartAccessGatewayUpBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmartAccessGatewayUpBandwidthWithOptions(request, runtime);
}

GrantSagInstanceToCcnResponse Alibabacloud_Smartag20180313::Client::grantSagInstanceToCcnWithOptions(shared_ptr<GrantSagInstanceToCcnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantSagInstanceToCcnResponse(doRPCRequest(make_shared<string>("GrantSagInstanceToCcn"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantSagInstanceToCcnResponse Alibabacloud_Smartag20180313::Client::grantSagInstanceToCcn(shared_ptr<GrantSagInstanceToCcnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantSagInstanceToCcnWithOptions(request, runtime);
}

OrchestrateSagECRouteBackupResponse Alibabacloud_Smartag20180313::Client::orchestrateSagECRouteBackupWithOptions(shared_ptr<OrchestrateSagECRouteBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OrchestrateSagECRouteBackupResponse(doRPCRequest(make_shared<string>("OrchestrateSagECRouteBackup"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OrchestrateSagECRouteBackupResponse Alibabacloud_Smartag20180313::Client::orchestrateSagECRouteBackup(shared_ptr<OrchestrateSagECRouteBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return orchestrateSagECRouteBackupWithOptions(request, runtime);
}

ModifySmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGatewayWithOptions(shared_ptr<ModifySmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySmartAccessGatewayResponse(doRPCRequest(make_shared<string>("ModifySmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::modifySmartAccessGateway(shared_ptr<ModifySmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmartAccessGatewayWithOptions(request, runtime);
}

UpdateSmartAccessGatewayVersionResponse Alibabacloud_Smartag20180313::Client::updateSmartAccessGatewayVersionWithOptions(shared_ptr<UpdateSmartAccessGatewayVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmartAccessGatewayVersionResponse(doRPCRequest(make_shared<string>("UpdateSmartAccessGatewayVersion"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmartAccessGatewayVersionResponse Alibabacloud_Smartag20180313::Client::updateSmartAccessGatewayVersion(shared_ptr<UpdateSmartAccessGatewayVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartAccessGatewayVersionWithOptions(request, runtime);
}

ModifySagCidrResponse Alibabacloud_Smartag20180313::Client::modifySagCidrWithOptions(shared_ptr<ModifySagCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagCidrResponse(doRPCRequest(make_shared<string>("ModifySagCidr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagCidrResponse Alibabacloud_Smartag20180313::Client::modifySagCidr(shared_ptr<ModifySagCidrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagCidrWithOptions(request, runtime);
}

DescribeSagDropTopNResponse Alibabacloud_Smartag20180313::Client::describeSagDropTopNWithOptions(shared_ptr<DescribeSagDropTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagDropTopNResponse(doRPCRequest(make_shared<string>("DescribeSagDropTopN"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagDropTopNResponse Alibabacloud_Smartag20180313::Client::describeSagDropTopN(shared_ptr<DescribeSagDropTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagDropTopNWithOptions(request, runtime);
}

DescribeSagLanListResponse Alibabacloud_Smartag20180313::Client::describeSagLanListWithOptions(shared_ptr<DescribeSagLanListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagLanListResponse(doRPCRequest(make_shared<string>("DescribeSagLanList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagLanListResponse Alibabacloud_Smartag20180313::Client::describeSagLanList(shared_ptr<DescribeSagLanListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagLanListWithOptions(request, runtime);
}

DescribePbrRulesResponse Alibabacloud_Smartag20180313::Client::describePbrRulesWithOptions(shared_ptr<DescribePbrRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePbrRulesResponse(doRPCRequest(make_shared<string>("DescribePbrRules"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePbrRulesResponse Alibabacloud_Smartag20180313::Client::describePbrRules(shared_ptr<DescribePbrRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePbrRulesWithOptions(request, runtime);
}

DescribeACLAttributeResponse Alibabacloud_Smartag20180313::Client::describeACLAttributeWithOptions(shared_ptr<DescribeACLAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeACLAttributeResponse(doRPCRequest(make_shared<string>("DescribeACLAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeACLAttributeResponse Alibabacloud_Smartag20180313::Client::describeACLAttribute(shared_ptr<DescribeACLAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeACLAttributeWithOptions(request, runtime);
}

DeleteSagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::deleteSagExpressConnectInterfaceWithOptions(shared_ptr<DeleteSagExpressConnectInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSagExpressConnectInterfaceResponse(doRPCRequest(make_shared<string>("DeleteSagExpressConnectInterface"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSagExpressConnectInterfaceResponse Alibabacloud_Smartag20180313::Client::deleteSagExpressConnectInterface(shared_ptr<DeleteSagExpressConnectInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSagExpressConnectInterfaceWithOptions(request, runtime);
}

ListEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::listEnterpriseCodeWithOptions(shared_ptr<ListEnterpriseCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListEnterpriseCodeResponse(doRPCRequest(make_shared<string>("ListEnterpriseCode"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::listEnterpriseCode(shared_ptr<ListEnterpriseCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseCodeWithOptions(request, runtime);
}

CreateSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGatewaySoftwareWithOptions(shared_ptr<CreateSmartAccessGatewaySoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSmartAccessGatewaySoftwareResponse(doRPCRequest(make_shared<string>("CreateSmartAccessGatewaySoftware"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::createSmartAccessGatewaySoftware(shared_ptr<CreateSmartAccessGatewaySoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

DescribeQosesResponse Alibabacloud_Smartag20180313::Client::describeQosesWithOptions(shared_ptr<DescribeQosesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeQosesResponse(doRPCRequest(make_shared<string>("DescribeQoses"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeQosesResponse Alibabacloud_Smartag20180313::Client::describeQoses(shared_ptr<DescribeQosesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQosesWithOptions(request, runtime);
}

UpgradeSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::upgradeSmartAccessGatewaySoftwareWithOptions(shared_ptr<UpgradeSmartAccessGatewaySoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeSmartAccessGatewaySoftwareResponse(doRPCRequest(make_shared<string>("UpgradeSmartAccessGatewaySoftware"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::upgradeSmartAccessGatewaySoftware(shared_ptr<UpgradeSmartAccessGatewaySoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

DescribeSagCurrentDnsResponse Alibabacloud_Smartag20180313::Client::describeSagCurrentDnsWithOptions(shared_ptr<DescribeSagCurrentDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagCurrentDnsResponse(doRPCRequest(make_shared<string>("DescribeSagCurrentDns"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagCurrentDnsResponse Alibabacloud_Smartag20180313::Client::describeSagCurrentDns(shared_ptr<DescribeSagCurrentDnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagCurrentDnsWithOptions(request, runtime);
}

DescribeSmartAccessGatewaysResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewaysWithOptions(shared_ptr<DescribeSmartAccessGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSmartAccessGatewaysResponse(doRPCRequest(make_shared<string>("DescribeSmartAccessGateways"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSmartAccessGatewaysResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGateways(shared_ptr<DescribeSmartAccessGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartAccessGatewaysWithOptions(request, runtime);
}

DescribeQosCarsResponse Alibabacloud_Smartag20180313::Client::describeQosCarsWithOptions(shared_ptr<DescribeQosCarsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeQosCarsResponse(doRPCRequest(make_shared<string>("DescribeQosCars"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeQosCarsResponse Alibabacloud_Smartag20180313::Client::describeQosCars(shared_ptr<DescribeQosCarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQosCarsWithOptions(request, runtime);
}

DescribeUserOnlineClientStatisticsResponse Alibabacloud_Smartag20180313::Client::describeUserOnlineClientStatisticsWithOptions(shared_ptr<DescribeUserOnlineClientStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserOnlineClientStatisticsResponse(doRPCRequest(make_shared<string>("DescribeUserOnlineClientStatistics"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserOnlineClientStatisticsResponse Alibabacloud_Smartag20180313::Client::describeUserOnlineClientStatistics(shared_ptr<DescribeUserOnlineClientStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserOnlineClientStatisticsWithOptions(request, runtime);
}

UpdateEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::updateEnterpriseCodeWithOptions(shared_ptr<UpdateEnterpriseCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEnterpriseCodeResponse(doRPCRequest(make_shared<string>("UpdateEnterpriseCode"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEnterpriseCodeResponse Alibabacloud_Smartag20180313::Client::updateEnterpriseCode(shared_ptr<UpdateEnterpriseCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnterpriseCodeWithOptions(request, runtime);
}

BindVbrResponse Alibabacloud_Smartag20180313::Client::bindVbrWithOptions(shared_ptr<BindVbrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindVbrResponse(doRPCRequest(make_shared<string>("BindVbr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindVbrResponse Alibabacloud_Smartag20180313::Client::bindVbr(shared_ptr<BindVbrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindVbrWithOptions(request, runtime);
}

DescribeSagRouteProtocolBgpResponse Alibabacloud_Smartag20180313::Client::describeSagRouteProtocolBgpWithOptions(shared_ptr<DescribeSagRouteProtocolBgpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagRouteProtocolBgpResponse(doRPCRequest(make_shared<string>("DescribeSagRouteProtocolBgp"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagRouteProtocolBgpResponse Alibabacloud_Smartag20180313::Client::describeSagRouteProtocolBgp(shared_ptr<DescribeSagRouteProtocolBgpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagRouteProtocolBgpWithOptions(request, runtime);
}

DisableSmartAccessGatewayUserResponse Alibabacloud_Smartag20180313::Client::disableSmartAccessGatewayUserWithOptions(shared_ptr<DisableSmartAccessGatewayUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableSmartAccessGatewayUserResponse(doRPCRequest(make_shared<string>("DisableSmartAccessGatewayUser"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableSmartAccessGatewayUserResponse Alibabacloud_Smartag20180313::Client::disableSmartAccessGatewayUser(shared_ptr<DisableSmartAccessGatewayUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSmartAccessGatewayUserWithOptions(request, runtime);
}

DeleteDnatEntryResponse Alibabacloud_Smartag20180313::Client::deleteDnatEntryWithOptions(shared_ptr<DeleteDnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDnatEntryResponse(doRPCRequest(make_shared<string>("DeleteDnatEntry"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDnatEntryResponse Alibabacloud_Smartag20180313::Client::deleteDnatEntry(shared_ptr<DeleteDnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDnatEntryWithOptions(request, runtime);
}

SetSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::setSagRouteableAddressWithOptions(shared_ptr<SetSagRouteableAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetSagRouteableAddressResponse(doRPCRequest(make_shared<string>("SetSagRouteableAddress"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSagRouteableAddressResponse Alibabacloud_Smartag20180313::Client::setSagRouteableAddress(shared_ptr<SetSagRouteableAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSagRouteableAddressWithOptions(request, runtime);
}

ModifyACLResponse Alibabacloud_Smartag20180313::Client::modifyACLWithOptions(shared_ptr<ModifyACLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyACLResponse(doRPCRequest(make_shared<string>("ModifyACL"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyACLResponse Alibabacloud_Smartag20180313::Client::modifyACL(shared_ptr<ModifyACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyACLWithOptions(request, runtime);
}

GetSmartAccessGatewayUseLimitResponse Alibabacloud_Smartag20180313::Client::getSmartAccessGatewayUseLimitWithOptions(shared_ptr<GetSmartAccessGatewayUseLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSmartAccessGatewayUseLimitResponse(doRPCRequest(make_shared<string>("GetSmartAccessGatewayUseLimit"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSmartAccessGatewayUseLimitResponse Alibabacloud_Smartag20180313::Client::getSmartAccessGatewayUseLimit(shared_ptr<GetSmartAccessGatewayUseLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartAccessGatewayUseLimitWithOptions(request, runtime);
}

DeleteSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::deleteSmartAccessGatewayWithOptions(shared_ptr<DeleteSmartAccessGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmartAccessGatewayResponse(doRPCRequest(make_shared<string>("DeleteSmartAccessGateway"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmartAccessGatewayResponse Alibabacloud_Smartag20180313::Client::deleteSmartAccessGateway(shared_ptr<DeleteSmartAccessGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartAccessGatewayWithOptions(request, runtime);
}

GrantInstanceToCbnResponse Alibabacloud_Smartag20180313::Client::grantInstanceToCbnWithOptions(shared_ptr<GrantInstanceToCbnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantInstanceToCbnResponse(doRPCRequest(make_shared<string>("GrantInstanceToCbn"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantInstanceToCbnResponse Alibabacloud_Smartag20180313::Client::grantInstanceToCbn(shared_ptr<GrantInstanceToCbnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantInstanceToCbnWithOptions(request, runtime);
}

AddSnatEntryResponse Alibabacloud_Smartag20180313::Client::addSnatEntryWithOptions(shared_ptr<AddSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSnatEntryResponse(doRPCRequest(make_shared<string>("AddSnatEntry"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSnatEntryResponse Alibabacloud_Smartag20180313::Client::addSnatEntry(shared_ptr<AddSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSnatEntryWithOptions(request, runtime);
}

DisableSmartAGDpiMonitorResponse Alibabacloud_Smartag20180313::Client::disableSmartAGDpiMonitorWithOptions(shared_ptr<DisableSmartAGDpiMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableSmartAGDpiMonitorResponse(doRPCRequest(make_shared<string>("DisableSmartAGDpiMonitor"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableSmartAGDpiMonitorResponse Alibabacloud_Smartag20180313::Client::disableSmartAGDpiMonitor(shared_ptr<DisableSmartAGDpiMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSmartAGDpiMonitorWithOptions(request, runtime);
}

DescribeSnatEntriesResponse Alibabacloud_Smartag20180313::Client::describeSnatEntriesWithOptions(shared_ptr<DescribeSnatEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnatEntriesResponse(doRPCRequest(make_shared<string>("DescribeSnatEntries"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnatEntriesResponse Alibabacloud_Smartag20180313::Client::describeSnatEntries(shared_ptr<DescribeSnatEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnatEntriesWithOptions(request, runtime);
}

ModifyClientUserDNSResponse Alibabacloud_Smartag20180313::Client::modifyClientUserDNSWithOptions(shared_ptr<ModifyClientUserDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyClientUserDNSResponse(doRPCRequest(make_shared<string>("ModifyClientUserDNS"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClientUserDNSResponse Alibabacloud_Smartag20180313::Client::modifyClientUserDNS(shared_ptr<ModifyClientUserDNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClientUserDNSWithOptions(request, runtime);
}

ModifySagRouteProtocolBgpResponse Alibabacloud_Smartag20180313::Client::modifySagRouteProtocolBgpWithOptions(shared_ptr<ModifySagRouteProtocolBgpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagRouteProtocolBgpResponse(doRPCRequest(make_shared<string>("ModifySagRouteProtocolBgp"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagRouteProtocolBgpResponse Alibabacloud_Smartag20180313::Client::modifySagRouteProtocolBgp(shared_ptr<ModifySagRouteProtocolBgpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagRouteProtocolBgpWithOptions(request, runtime);
}

ModifyQosCarResponse Alibabacloud_Smartag20180313::Client::modifyQosCarWithOptions(shared_ptr<ModifyQosCarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyQosCarResponse(doRPCRequest(make_shared<string>("ModifyQosCar"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyQosCarResponse Alibabacloud_Smartag20180313::Client::modifyQosCar(shared_ptr<ModifyQosCarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyQosCarWithOptions(request, runtime);
}

CreateFlowLogResponse Alibabacloud_Smartag20180313::Client::createFlowLogWithOptions(shared_ptr<CreateFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowLogResponse(doRPCRequest(make_shared<string>("CreateFlowLog"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowLogResponse Alibabacloud_Smartag20180313::Client::createFlowLog(shared_ptr<CreateFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowLogWithOptions(request, runtime);
}

ModifyDeviceAutoUpgradePolicyResponse Alibabacloud_Smartag20180313::Client::modifyDeviceAutoUpgradePolicyWithOptions(shared_ptr<ModifyDeviceAutoUpgradePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceAutoUpgradePolicyResponse(doRPCRequest(make_shared<string>("ModifyDeviceAutoUpgradePolicy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceAutoUpgradePolicyResponse Alibabacloud_Smartag20180313::Client::modifyDeviceAutoUpgradePolicy(shared_ptr<ModifyDeviceAutoUpgradePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceAutoUpgradePolicyWithOptions(request, runtime);
}

DescribeClientUserDNSResponse Alibabacloud_Smartag20180313::Client::describeClientUserDNSWithOptions(shared_ptr<DescribeClientUserDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClientUserDNSResponse(doRPCRequest(make_shared<string>("DescribeClientUserDNS"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClientUserDNSResponse Alibabacloud_Smartag20180313::Client::describeClientUserDNS(shared_ptr<DescribeClientUserDNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientUserDNSWithOptions(request, runtime);
}

ClearSagCipherResponse Alibabacloud_Smartag20180313::Client::clearSagCipherWithOptions(shared_ptr<ClearSagCipherRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearSagCipherResponse(doRPCRequest(make_shared<string>("ClearSagCipher"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearSagCipherResponse Alibabacloud_Smartag20180313::Client::clearSagCipher(shared_ptr<ClearSagCipherRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearSagCipherWithOptions(request, runtime);
}

DescribeSagWan4GResponse Alibabacloud_Smartag20180313::Client::describeSagWan4GWithOptions(shared_ptr<DescribeSagWan4GRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagWan4GResponse(doRPCRequest(make_shared<string>("DescribeSagWan4G"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagWan4GResponse Alibabacloud_Smartag20180313::Client::describeSagWan4G(shared_ptr<DescribeSagWan4GRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagWan4GWithOptions(request, runtime);
}

ModifySagUserDnsResponse Alibabacloud_Smartag20180313::Client::modifySagUserDnsWithOptions(shared_ptr<ModifySagUserDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagUserDnsResponse(doRPCRequest(make_shared<string>("ModifySagUserDns"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagUserDnsResponse Alibabacloud_Smartag20180313::Client::modifySagUserDns(shared_ptr<ModifySagUserDnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagUserDnsWithOptions(request, runtime);
}

ModifySagManagementPortResponse Alibabacloud_Smartag20180313::Client::modifySagManagementPortWithOptions(shared_ptr<ModifySagManagementPortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagManagementPortResponse(doRPCRequest(make_shared<string>("ModifySagManagementPort"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagManagementPortResponse Alibabacloud_Smartag20180313::Client::modifySagManagementPort(shared_ptr<ModifySagManagementPortRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagManagementPortWithOptions(request, runtime);
}

DescribeDnatEntriesResponse Alibabacloud_Smartag20180313::Client::describeDnatEntriesWithOptions(shared_ptr<DescribeDnatEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDnatEntriesResponse(doRPCRequest(make_shared<string>("DescribeDnatEntries"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDnatEntriesResponse Alibabacloud_Smartag20180313::Client::describeDnatEntries(shared_ptr<DescribeDnatEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDnatEntriesWithOptions(request, runtime);
}

DescribeSmartAccessGatewayVersionsResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayVersionsWithOptions(shared_ptr<DescribeSmartAccessGatewayVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSmartAccessGatewayVersionsResponse(doRPCRequest(make_shared<string>("DescribeSmartAccessGatewayVersions"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSmartAccessGatewayVersionsResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayVersions(shared_ptr<DescribeSmartAccessGatewayVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartAccessGatewayVersionsWithOptions(request, runtime);
}

RevokeInstanceFromCbnResponse Alibabacloud_Smartag20180313::Client::revokeInstanceFromCbnWithOptions(shared_ptr<RevokeInstanceFromCbnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeInstanceFromCbnResponse(doRPCRequest(make_shared<string>("RevokeInstanceFromCbn"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeInstanceFromCbnResponse Alibabacloud_Smartag20180313::Client::revokeInstanceFromCbn(shared_ptr<RevokeInstanceFromCbnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeInstanceFromCbnWithOptions(request, runtime);
}

DescribeSagRemoteAccessResponse Alibabacloud_Smartag20180313::Client::describeSagRemoteAccessWithOptions(shared_ptr<DescribeSagRemoteAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagRemoteAccessResponse(doRPCRequest(make_shared<string>("DescribeSagRemoteAccess"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagRemoteAccessResponse Alibabacloud_Smartag20180313::Client::describeSagRemoteAccess(shared_ptr<DescribeSagRemoteAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagRemoteAccessWithOptions(request, runtime);
}

CreateQosPolicyResponse Alibabacloud_Smartag20180313::Client::createQosPolicyWithOptions(shared_ptr<CreateQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQosPolicyResponse(doRPCRequest(make_shared<string>("CreateQosPolicy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQosPolicyResponse Alibabacloud_Smartag20180313::Client::createQosPolicy(shared_ptr<CreateQosPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQosPolicyWithOptions(request, runtime);
}

DescribeSagECRouteBackupAttributeResponse Alibabacloud_Smartag20180313::Client::describeSagECRouteBackupAttributeWithOptions(shared_ptr<DescribeSagECRouteBackupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagECRouteBackupAttributeResponse(doRPCRequest(make_shared<string>("DescribeSagECRouteBackupAttribute"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagECRouteBackupAttributeResponse Alibabacloud_Smartag20180313::Client::describeSagECRouteBackupAttribute(shared_ptr<DescribeSagECRouteBackupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagECRouteBackupAttributeWithOptions(request, runtime);
}

DescribeFlowLogSagsResponse Alibabacloud_Smartag20180313::Client::describeFlowLogSagsWithOptions(shared_ptr<DescribeFlowLogSagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowLogSagsResponse(doRPCRequest(make_shared<string>("DescribeFlowLogSags"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowLogSagsResponse Alibabacloud_Smartag20180313::Client::describeFlowLogSags(shared_ptr<DescribeFlowLogSagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowLogSagsWithOptions(request, runtime);
}

ModifySagWifiResponse Alibabacloud_Smartag20180313::Client::modifySagWifiWithOptions(shared_ptr<ModifySagWifiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagWifiResponse(doRPCRequest(make_shared<string>("ModifySagWifi"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagWifiResponse Alibabacloud_Smartag20180313::Client::modifySagWifi(shared_ptr<ModifySagWifiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagWifiWithOptions(request, runtime);
}

ModifySagWanResponse Alibabacloud_Smartag20180313::Client::modifySagWanWithOptions(shared_ptr<ModifySagWanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySagWanResponse(doRPCRequest(make_shared<string>("ModifySagWan"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySagWanResponse Alibabacloud_Smartag20180313::Client::modifySagWan(shared_ptr<ModifySagWanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySagWanWithOptions(request, runtime);
}

DescribeSmartAccessGatewayHaResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayHaWithOptions(shared_ptr<DescribeSmartAccessGatewayHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSmartAccessGatewayHaResponse(doRPCRequest(make_shared<string>("DescribeSmartAccessGatewayHa"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSmartAccessGatewayHaResponse Alibabacloud_Smartag20180313::Client::describeSmartAccessGatewayHa(shared_ptr<DescribeSmartAccessGatewayHaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartAccessGatewayHaWithOptions(request, runtime);
}

DeleteCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::deleteCloudConnectNetworkWithOptions(shared_ptr<DeleteCloudConnectNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCloudConnectNetworkResponse(doRPCRequest(make_shared<string>("DeleteCloudConnectNetwork"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCloudConnectNetworkResponse Alibabacloud_Smartag20180313::Client::deleteCloudConnectNetwork(shared_ptr<DeleteCloudConnectNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCloudConnectNetworkWithOptions(request, runtime);
}

DowngradeSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::downgradeSmartAccessGatewaySoftwareWithOptions(shared_ptr<DowngradeSmartAccessGatewaySoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DowngradeSmartAccessGatewaySoftwareResponse(doRPCRequest(make_shared<string>("DowngradeSmartAccessGatewaySoftware"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DowngradeSmartAccessGatewaySoftwareResponse Alibabacloud_Smartag20180313::Client::downgradeSmartAccessGatewaySoftware(shared_ptr<DowngradeSmartAccessGatewaySoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downgradeSmartAccessGatewaySoftwareWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Smartag20180313::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Smartag20180313::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeHealthChecksResponse Alibabacloud_Smartag20180313::Client::describeHealthChecksWithOptions(shared_ptr<DescribeHealthChecksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHealthChecksResponse(doRPCRequest(make_shared<string>("DescribeHealthChecks"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHealthChecksResponse Alibabacloud_Smartag20180313::Client::describeHealthChecks(shared_ptr<DescribeHealthChecksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHealthChecksWithOptions(request, runtime);
}

GetCloudConnectNetworkUseLimitResponse Alibabacloud_Smartag20180313::Client::getCloudConnectNetworkUseLimitWithOptions(shared_ptr<GetCloudConnectNetworkUseLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCloudConnectNetworkUseLimitResponse(doRPCRequest(make_shared<string>("GetCloudConnectNetworkUseLimit"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCloudConnectNetworkUseLimitResponse Alibabacloud_Smartag20180313::Client::getCloudConnectNetworkUseLimit(shared_ptr<GetCloudConnectNetworkUseLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudConnectNetworkUseLimitWithOptions(request, runtime);
}

ListAccessPointsResponse Alibabacloud_Smartag20180313::Client::listAccessPointsWithOptions(shared_ptr<ListAccessPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccessPointsResponse(doRPCRequest(make_shared<string>("ListAccessPoints"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccessPointsResponse Alibabacloud_Smartag20180313::Client::listAccessPoints(shared_ptr<ListAccessPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessPointsWithOptions(request, runtime);
}

DeleteQosCarResponse Alibabacloud_Smartag20180313::Client::deleteQosCarWithOptions(shared_ptr<DeleteQosCarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQosCarResponse(doRPCRequest(make_shared<string>("DeleteQosCar"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQosCarResponse Alibabacloud_Smartag20180313::Client::deleteQosCar(shared_ptr<DeleteQosCarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQosCarWithOptions(request, runtime);
}

DescribeDeviceAutoUpgradePolicyResponse Alibabacloud_Smartag20180313::Client::describeDeviceAutoUpgradePolicyWithOptions(shared_ptr<DescribeDeviceAutoUpgradePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceAutoUpgradePolicyResponse(doRPCRequest(make_shared<string>("DescribeDeviceAutoUpgradePolicy"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceAutoUpgradePolicyResponse Alibabacloud_Smartag20180313::Client::describeDeviceAutoUpgradePolicy(shared_ptr<DescribeDeviceAutoUpgradePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceAutoUpgradePolicyWithOptions(request, runtime);
}

ListDpiSignaturesResponse Alibabacloud_Smartag20180313::Client::listDpiSignaturesWithOptions(shared_ptr<ListDpiSignaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDpiSignaturesResponse(doRPCRequest(make_shared<string>("ListDpiSignatures"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDpiSignaturesResponse Alibabacloud_Smartag20180313::Client::listDpiSignatures(shared_ptr<ListDpiSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDpiSignaturesWithOptions(request, runtime);
}

UnbindVbrResponse Alibabacloud_Smartag20180313::Client::unbindVbrWithOptions(shared_ptr<UnbindVbrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindVbrResponse(doRPCRequest(make_shared<string>("UnbindVbr"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindVbrResponse Alibabacloud_Smartag20180313::Client::unbindVbr(shared_ptr<UnbindVbrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindVbrWithOptions(request, runtime);
}

DescribeBindableSmartAccessGatewaysResponse Alibabacloud_Smartag20180313::Client::describeBindableSmartAccessGatewaysWithOptions(shared_ptr<DescribeBindableSmartAccessGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBindableSmartAccessGatewaysResponse(doRPCRequest(make_shared<string>("DescribeBindableSmartAccessGateways"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBindableSmartAccessGatewaysResponse Alibabacloud_Smartag20180313::Client::describeBindableSmartAccessGateways(shared_ptr<DescribeBindableSmartAccessGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBindableSmartAccessGatewaysWithOptions(request, runtime);
}

DescribeSagPortListResponse Alibabacloud_Smartag20180313::Client::describeSagPortListWithOptions(shared_ptr<DescribeSagPortListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSagPortListResponse(doRPCRequest(make_shared<string>("DescribeSagPortList"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSagPortListResponse Alibabacloud_Smartag20180313::Client::describeSagPortList(shared_ptr<DescribeSagPortListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSagPortListWithOptions(request, runtime);
}

ListDpiGroupsResponse Alibabacloud_Smartag20180313::Client::listDpiGroupsWithOptions(shared_ptr<ListDpiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDpiGroupsResponse(doRPCRequest(make_shared<string>("ListDpiGroups"), make_shared<string>("2018-03-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDpiGroupsResponse Alibabacloud_Smartag20180313::Client::listDpiGroups(shared_ptr<ListDpiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDpiGroupsWithOptions(request, runtime);
}

