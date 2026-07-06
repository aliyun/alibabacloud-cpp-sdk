#include <darabonba/Core.hpp>
#include <alibabacloud/Alikafka20190916.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Alikafka20190916::Models;
namespace AlibabaCloud
{
namespace Alikafka20190916
{

AlibabaCloud::Alikafka20190916::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "alikafka.us-west-1.aliyuncs.com"},
    {"us-east-1" , "alikafka.us-east-1.aliyuncs.com"},
    {"na-south-1" , "alikafka.na-south-1.aliyuncs.com"},
    {"me-east-1" , "alikafka.me-east-1.aliyuncs.com"},
    {"me-central-1" , "alikafka.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "alikafka.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "alikafka.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "alikafka.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "alikafka.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "alikafka.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "alikafka.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "alikafka.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "alikafka.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "alikafka.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "alikafka.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "alikafka.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "alikafka.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "alikafka.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "alikafka.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "alikafka.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "alikafka.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "alikafka.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "alikafka.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "alikafka.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-5" , "alikafka.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "alikafka.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "alikafka.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "alikafka.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "alikafka.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "alikafka.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("alikafka", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary AddUserDefinedSg
 *
 * @param tmpReq AddUserDefinedSgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserDefinedSgResponse
 */
AddUserDefinedSgResponse Client::addUserDefinedSgWithOptions(const AddUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddUserDefinedSgShrinkRequest request = AddUserDefinedSgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSgIdList()) {
    request.setSgIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSgIdList(), "SgIdList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSgIdListShrink()) {
    query["SgIdList"] = request.getSgIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserDefinedSg"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserDefinedSgResponse>();
}

/**
 * @summary AddUserDefinedSg
 *
 * @param request AddUserDefinedSgRequest
 * @return AddUserDefinedSgResponse
 */
AddUserDefinedSgResponse Client::addUserDefinedSg(const AddUserDefinedSgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserDefinedSgWithOptions(request, runtime);
}

/**
 * @summary Moves a resource to a different resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Moves a resource to a different resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Converts a pay-as-you-go instance to a subscription instance.
 *
 * @param request ConvertPostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertPostPayOrderResponse
 */
ConvertPostPayOrderResponse Client::convertPostPayOrderWithOptions(const ConvertPostPayOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertPostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertPostPayOrderResponse>();
}

/**
 * @summary Converts a pay-as-you-go instance to a subscription instance.
 *
 * @param request ConvertPostPayOrderRequest
 * @return ConvertPostPayOrderResponse
 */
ConvertPostPayOrderResponse Client::convertPostPayOrder(const ConvertPostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPostPayOrderWithOptions(request, runtime);
}

/**
 * @summary This operation is used to create an access control list (ACL).
 *
 * @param request CreateAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAclWithOptions(const CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.getAclOperationType();
  }

  if (!!request.hasAclOperationTypes()) {
    query["AclOperationTypes"] = request.getAclOperationTypes();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.getAclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.getAclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.getAclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.getAclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAcl"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAclResponse>();
}

/**
 * @summary This operation is used to create an access control list (ACL).
 *
 * @param request CreateAclRequest
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAcl(const CreateAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclWithOptions(request, runtime);
}

/**
 * @summary You can call CreateConsumerGroup to create a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumerGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerGroupResponse>();
}

/**
 * @summary You can call CreateConsumerGroup to create a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroup(const CreateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary This operation creates a pay-as-you-go instance and returns the instance ID and order ID.
 *
 * @param tmpReq CreatePostPayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostPayInstanceResponse
 */
CreatePostPayInstanceResponse Client::createPostPayInstanceWithOptions(const CreatePostPayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePostPayInstanceShrinkRequest request = CreatePostPayInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostPayInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostPayInstanceResponse>();
}

/**
 * @summary This operation creates a pay-as-you-go instance and returns the instance ID and order ID.
 *
 * @param request CreatePostPayInstanceRequest
 * @return CreatePostPayInstanceResponse
 */
CreatePostPayInstanceResponse Client::createPostPayInstance(const CreatePostPayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostPayInstanceWithOptions(request, runtime);
}

/**
 * @summary Pay-as-you-go instances are billed based on actual usage. This billing method is ideal for testing or short-term scenarios with unpredictable traffic peaks. This topic describes how to call the CreatePostPayOrder operation to create a pay-as-you-go instance.
 *
 * @description Before you call this operation, make sure you understand the billing methods and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq CreatePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostPayOrderResponse
 */
CreatePostPayOrderResponse Client::createPostPayOrderWithOptions(const CreatePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePostPayOrderShrinkRequest request = CreatePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostPayOrderResponse>();
}

/**
 * @summary Pay-as-you-go instances are billed based on actual usage. This billing method is ideal for testing or short-term scenarios with unpredictable traffic peaks. This topic describes how to call the CreatePostPayOrder operation to create a pay-as-you-go instance.
 *
 * @description Before you call this operation, make sure you understand the billing methods and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request CreatePostPayOrderRequest
 * @return CreatePostPayOrderResponse
 */
CreatePostPayOrderResponse Client::createPostPayOrder(const CreatePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostPayOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a subscription instance and returns the instance ID and order ID.
 *
 * @description - Before calling this operation, ensure you understand the billing methods and pricing of subscription instances. For more information, see [billing overview](https://help.aliyun.com/document_detail/84737.html).
 * - By default, a subscription instance created using this operation has a one-month subscription period and is set to auto-renew monthly. To change the renewal period or disable auto-renewal, go to the [renewal management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.<props="china"> For more information, see [Set up auto-renewal](https://help.aliyun.com/document_detail/37128.html).
 *
 * @param tmpReq CreatePrePayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrePayInstanceResponse
 */
CreatePrePayInstanceResponse Client::createPrePayInstanceWithOptions(const CreatePrePayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrePayInstanceShrinkRequest request = CreatePrePayInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.getConfluentConfigShrink();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrePayInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrePayInstanceResponse>();
}

/**
 * @summary Creates a subscription instance and returns the instance ID and order ID.
 *
 * @description - Before calling this operation, ensure you understand the billing methods and pricing of subscription instances. For more information, see [billing overview](https://help.aliyun.com/document_detail/84737.html).
 * - By default, a subscription instance created using this operation has a one-month subscription period and is set to auto-renew monthly. To change the renewal period or disable auto-renewal, go to the [renewal management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.<props="china"> For more information, see [Set up auto-renewal](https://help.aliyun.com/document_detail/37128.html).
 *
 * @param request CreatePrePayInstanceRequest
 * @return CreatePrePayInstanceResponse
 */
CreatePrePayInstanceResponse Client::createPrePayInstance(const CreatePrePayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrePayInstanceWithOptions(request, runtime);
}

/**
 * @summary Subscription instances require prepayment for resources and are ideal for long-term, stable business scenarios. This topic describes how to call the CreatePrePayOrder operation to create a subscription instance.
 *
 * @description - Before you call this operation, ensure that you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 * - By default, when you call this operation, the subscription duration is one month and auto-renewal is enabled with a Unified Auto Renewal Cycle of one month. To modify the Unified Auto Renewal Cycle or disable auto-renewal, go to the [Renewal Management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console. For more information, see [Configure auto-renewal](https://help.aliyun.com/document_detail/37128.html).
 *
 * @param tmpReq CreatePrePayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrePayOrderResponse
 */
CreatePrePayOrderResponse Client::createPrePayOrderWithOptions(const CreatePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrePayOrderShrinkRequest request = CreatePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.getConfluentConfigShrink();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrePayOrderResponse>();
}

/**
 * @summary Subscription instances require prepayment for resources and are ideal for long-term, stable business scenarios. This topic describes how to call the CreatePrePayOrder operation to create a subscription instance.
 *
 * @description - Before you call this operation, ensure that you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 * - By default, when you call this operation, the subscription duration is one month and auto-renewal is enabled with a Unified Auto Renewal Cycle of one month. To modify the Unified Auto Renewal Cycle or disable auto-renewal, go to the [Renewal Management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console. For more information, see [Configure auto-renewal](https://help.aliyun.com/document_detail/37128.html).
 *
 * @param request CreatePrePayOrderRequest
 * @return CreatePrePayOrderResponse
 */
CreatePrePayOrderResponse Client::createPrePayOrder(const CreatePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrePayOrderWithOptions(request, runtime);
}

/**
 * @summary This operation creates a SASL user.
 *
 * @param request CreateSaslUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSaslUserResponse
 */
CreateSaslUserResponse Client::createSaslUserWithOptions(const CreateSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMechanism()) {
    query["Mechanism"] = request.getMechanism();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSaslUser"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSaslUserResponse>();
}

/**
 * @summary This operation creates a SASL user.
 *
 * @param request CreateSaslUserRequest
 * @return CreateSaslUserResponse
 */
CreateSaslUserResponse Client::createSaslUser(const CreateSaslUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSaslUserWithOptions(request, runtime);
}

/**
 * @summary After you deploy a serverless instance, you can use this API to create a scheduled scaling rule for the instance.
 *
 * @description ###### This operation supports only serverless instances.
 *
 * @param tmpReq CreateScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledScalingRuleResponse
 */
CreateScheduledScalingRuleResponse Client::createScheduledScalingRuleWithOptions(const CreateScheduledScalingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduledScalingRuleShrinkRequest request = CreateScheduledScalingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWeeklyTypes()) {
    request.setWeeklyTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWeeklyTypes(), "WeeklyTypes", "json"));
  }

  json query = {};
  if (!!request.hasDurationMinutes()) {
    query["DurationMinutes"] = request.getDurationMinutes();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasFirstScheduledTime()) {
    query["FirstScheduledTime"] = request.getFirstScheduledTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasReservedPubFlow()) {
    query["ReservedPubFlow"] = request.getReservedPubFlow();
  }

  if (!!request.hasReservedSubFlow()) {
    query["ReservedSubFlow"] = request.getReservedSubFlow();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.getScheduleType();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasWeeklyTypesShrink()) {
    query["WeeklyTypes"] = request.getWeeklyTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledScalingRuleResponse>();
}

/**
 * @summary After you deploy a serverless instance, you can use this API to create a scheduled scaling rule for the instance.
 *
 * @description ###### This operation supports only serverless instances.
 *
 * @param request CreateScheduledScalingRuleRequest
 * @return CreateScheduledScalingRuleResponse
 */
CreateScheduledScalingRuleResponse Client::createScheduledScalingRule(const CreateScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a topic.
 *
 * @description - Each user can send up to 20 queries per second (QPS).
 * - The maximum number of topics for an instance depends on its instance type.
 *
 * @param request CreateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompactTopic()) {
    query["CompactTopic"] = request.getCompactTopic();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLocalTopic()) {
    query["LocalTopic"] = request.getLocalTopic();
  }

  if (!!request.hasMinInsyncReplicas()) {
    query["MinInsyncReplicas"] = request.getMinInsyncReplicas();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.getReplicationFactor();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTopicResponse>();
}

/**
 * @summary Creates a topic.
 *
 * @description - Each user can send up to 20 queries per second (QPS).
 * - The maximum number of topics for an instance depends on its instance type.
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAclWithOptions(const DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.getAclOperationType();
  }

  if (!!request.hasAclOperationTypes()) {
    query["AclOperationTypes"] = request.getAclOperationTypes();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.getAclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.getAclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.getAclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.getAclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcl"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAclResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteAclRequest
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAcl(const DeleteAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclWithOptions(request, runtime);
}

/**
 * @summary Deletes a Group.
 *
 * @param request DeleteConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroupWithOptions(const DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupResponse>();
}

/**
 * @summary Deletes a Group.
 *
 * @param request DeleteConsumerGroupRequest
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary The DeleteInstance operation deletes an instance after a subscription instance or a pay-as-you-go instance is released.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary The DeleteInstance operation deletes an instance after a subscription instance or a pay-as-you-go instance is released.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary You can call the DeleteSaslUser operation to delete a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request DeleteSaslUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSaslUserResponse
 */
DeleteSaslUserResponse Client::deleteSaslUserWithOptions(const DeleteSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMechanism()) {
    query["Mechanism"] = request.getMechanism();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSaslUser"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSaslUserResponse>();
}

/**
 * @summary You can call the DeleteSaslUser operation to delete a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request DeleteSaslUserRequest
 * @return DeleteSaslUserResponse
 */
DeleteSaslUserResponse Client::deleteSaslUser(const DeleteSaslUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSaslUserWithOptions(request, runtime);
}

/**
 * @summary After a Serverless instance is deployed, you can call this API operation to delete its scheduled scaling policy configuration.
 *
 * @description ###### This operation applies only to Serverless instances.
 *
 * @param request DeleteScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledScalingRuleResponse
 */
DeleteScheduledScalingRuleResponse Client::deleteScheduledScalingRuleWithOptions(const DeleteScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledScalingRuleResponse>();
}

/**
 * @summary After a Serverless instance is deployed, you can call this API operation to delete its scheduled scaling policy configuration.
 *
 * @description ###### This operation applies only to Serverless instances.
 *
 * @param request DeleteScheduledScalingRuleRequest
 * @return DeleteScheduledScalingRuleResponse
 */
DeleteScheduledScalingRuleResponse Client::deleteScheduledScalingRule(const DeleteScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a topic.
 *
 * @param request DeleteTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTopicResponse>();
}

/**
 * @summary Deletes a topic.
 *
 * @param request DeleteTopicRequest
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const DeleteTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTopicWithOptions(request, runtime);
}

/**
 * @summary DeleteUserDefinedSg
 *
 * @param tmpReq DeleteUserDefinedSgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserDefinedSgResponse
 */
DeleteUserDefinedSgResponse Client::deleteUserDefinedSgWithOptions(const DeleteUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteUserDefinedSgShrinkRequest request = DeleteUserDefinedSgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSgIdList()) {
    request.setSgIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSgIdList(), "SgIdList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSgIdListShrink()) {
    query["SgIdList"] = request.getSgIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserDefinedSg"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserDefinedSgResponse>();
}

/**
 * @summary DeleteUserDefinedSg
 *
 * @param request DeleteUserDefinedSgRequest
 * @return DeleteUserDefinedSgResponse
 */
DeleteUserDefinedSgResponse Client::deleteUserDefinedSg(const DeleteUserDefinedSgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserDefinedSgWithOptions(request, runtime);
}

/**
 * @summary Queries access control list (ACL) resource names.
 *
 * @param request DescribeAclResourceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclResourceNameResponse
 */
DescribeAclResourceNameResponse Client::describeAclResourceNameWithOptions(const DescribeAclResourceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.getAclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.getAclResourceType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclResourceName"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclResourceNameResponse>();
}

/**
 * @summary Queries access control list (ACL) resource names.
 *
 * @param request DescribeAclResourceNameRequest
 * @return DescribeAclResourceNameResponse
 */
DescribeAclResourceNameResponse Client::describeAclResourceName(const DescribeAclResourceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclResourceNameWithOptions(request, runtime);
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAclsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclsResponse
 */
DescribeAclsResponse Client::describeAclsWithOptions(const DescribeAclsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.getAclOperationType();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.getAclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.getAclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.getAclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.getAclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAcls"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclsResponse>();
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAclsRequest
 * @return DescribeAclsResponse
 */
DescribeAclsResponse Client::describeAcls(const DescribeAclsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclsWithOptions(request, runtime);
}

/**
 * @summary You can call DescribeSaslUsers to query SASL users.
 *
 * @param request DescribeSaslUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSaslUsersResponse
 */
DescribeSaslUsersResponse Client::describeSaslUsersWithOptions(const DescribeSaslUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSaslUsers"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSaslUsersResponse>();
}

/**
 * @summary You can call DescribeSaslUsers to query SASL users.
 *
 * @param request DescribeSaslUsersRequest
 * @return DescribeSaslUsersResponse
 */
DescribeSaslUsersResponse Client::describeSaslUsers(const DescribeSaslUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSaslUsersWithOptions(request, runtime);
}

/**
 * @summary 降配后付费实例
 *
 * @param tmpReq DowngradePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradePostPayOrderResponse
 */
DowngradePostPayOrderResponse Client::downgradePostPayOrderWithOptions(const DowngradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DowngradePostPayOrderShrinkRequest request = DowngradePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.getEipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradePostPayOrderResponse>();
}

/**
 * @summary 降配后付费实例
 *
 * @param request DowngradePostPayOrderRequest
 * @return DowngradePostPayOrderResponse
 */
DowngradePostPayOrderResponse Client::downgradePostPayOrder(const DowngradePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradePostPayOrderWithOptions(request, runtime);
}

/**
 * @summary 降配预付费实例
 *
 * @param tmpReq DowngradePrePayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradePrePayOrderResponse
 */
DowngradePrePayOrderResponse Client::downgradePrePayOrderWithOptions(const DowngradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DowngradePrePayOrderShrinkRequest request = DowngradePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.getConfluentConfigShrink();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.getEipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradePrePayOrderResponse>();
}

/**
 * @summary 降配预付费实例
 *
 * @param request DowngradePrePayOrderRequest
 * @return DowngradePrePayOrderResponse
 */
DowngradePrePayOrderResponse Client::downgradePrePayOrder(const DowngradePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradePrePayOrderWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to call EnableAutoGroupCreation to enable or disable the free use of Groups.
 *
 * @description Currently, only reserved instances support this API.
 * Serverless instances are not supported at this time.
 *
 * @param request EnableAutoGroupCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoGroupCreationResponse
 */
EnableAutoGroupCreationResponse Client::enableAutoGroupCreationWithOptions(const EnableAutoGroupCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAutoGroupCreation"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoGroupCreationResponse>();
}

/**
 * @summary This topic describes how to call EnableAutoGroupCreation to enable or disable the free use of Groups.
 *
 * @description Currently, only reserved instances support this API.
 * Serverless instances are not supported at this time.
 *
 * @param request EnableAutoGroupCreationRequest
 * @return EnableAutoGroupCreationResponse
 */
EnableAutoGroupCreationResponse Client::enableAutoGroupCreation(const EnableAutoGroupCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoGroupCreationWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to call the EnableAutoTopicCreation operation to enable or disable automatic topic creation and modify the default number of partitions for automatically created topics.
 *
 * @param request EnableAutoTopicCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoTopicCreationResponse
 */
EnableAutoTopicCreationResponse Client::enableAutoTopicCreationWithOptions(const EnableAutoTopicCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.getOperate();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUpdatePartition()) {
    query["UpdatePartition"] = request.getUpdatePartition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAutoTopicCreation"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoTopicCreationResponse>();
}

/**
 * @summary This topic describes how to call the EnableAutoTopicCreation operation to enable or disable automatic topic creation and modify the default number of partitions for automatically created topics.
 *
 * @param request EnableAutoTopicCreationRequest
 * @return EnableAutoTopicCreationResponse
 */
EnableAutoTopicCreationResponse Client::enableAutoTopicCreation(const EnableAutoTopicCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoTopicCreationWithOptions(request, runtime);
}

/**
 * @summary 故障演练
 *
 * @param request FailoverTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverTestResponse
 */
FailoverTestResponse Client::failoverTestWithOptions(const FailoverTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigs()) {
    query["Configs"] = request.getConfigs();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExecuteTime()) {
    query["ExecuteTime"] = request.getExecuteTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverTest"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverTestResponse>();
}

/**
 * @summary 故障演练
 *
 * @param request FailoverTestRequest
 * @return FailoverTestResponse
 */
FailoverTestResponse Client::failoverTest(const FailoverTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverTestWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of all instances in the current account.
 *
 * @param request GetAllInstanceIdListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllInstanceIdListResponse
 */
GetAllInstanceIdListResponse Client::getAllInstanceIdListWithOptions(const GetAllInstanceIdListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAllInstanceIdList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllInstanceIdListResponse>();
}

/**
 * @summary Queries the IDs of all instances in the current account.
 *
 * @param request GetAllInstanceIdListRequest
 * @return GetAllInstanceIdListResponse
 */
GetAllInstanceIdListResponse Client::getAllInstanceIdList(const GetAllInstanceIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllInstanceIdListWithOptions(request, runtime);
}

/**
 * @summary The GetAllowedIpList operation retrieves the IP address allowlist.
 *
 * @param request GetAllowedIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllowedIpListResponse
 */
GetAllowedIpListResponse Client::getAllowedIpListWithOptions(const GetAllowedIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAllowedIpList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllowedIpListResponse>();
}

/**
 * @summary The GetAllowedIpList operation retrieves the IP address allowlist.
 *
 * @param request GetAllowedIpListRequest
 * @return GetAllowedIpListResponse
 */
GetAllowedIpListResponse Client::getAllowedIpList(const GetAllowedIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllowedIpListWithOptions(request, runtime);
}

/**
 * @summary After a Serverless instance is deployed, you can call this API operation to query the auto scaling configuration of the instance.
 *
 * @description ###### **This operation applies only to Serverless instances.**
 *
 * @param request GetAutoScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingConfigurationResponse
 */
GetAutoScalingConfigurationResponse Client::getAutoScalingConfigurationWithOptions(const GetAutoScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingConfiguration"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingConfigurationResponse>();
}

/**
 * @summary After a Serverless instance is deployed, you can call this API operation to query the auto scaling configuration of the instance.
 *
 * @description ###### **This operation applies only to Serverless instances.**
 *
 * @param request GetAutoScalingConfigurationRequest
 * @return GetAutoScalingConfigurationResponse
 */
GetAutoScalingConfigurationResponse Client::getAutoScalingConfiguration(const GetAutoScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @param request GetConsumerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerListResponse
 */
GetConsumerListResponse Client::getConsumerListWithOptions(const GetConsumerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerListResponse>();
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @param request GetConsumerListRequest
 * @return GetConsumerListResponse
 */
GetConsumerListResponse Client::getConsumerList(const GetConsumerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsumerListWithOptions(request, runtime);
}

/**
 * @summary Queries the consumption status of a consumer group.
 *
 * @param request GetConsumerProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerProgressResponse
 */
GetConsumerProgressResponse Client::getConsumerProgressWithOptions(const GetConsumerProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasHideLastTimestamp()) {
    query["HideLastTimestamp"] = request.getHideLastTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerProgress"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerProgressResponse>();
}

/**
 * @summary Queries the consumption status of a consumer group.
 *
 * @param request GetConsumerProgressRequest
 * @return GetConsumerProgressResponse
 */
GetConsumerProgressResponse Client::getConsumerProgress(const GetConsumerProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsumerProgressWithOptions(request, runtime);
}

/**
 * @summary Queries information about instances in a specified region.
 *
 * @param request GetInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceListWithOptions(const GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.getSeries();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceListResponse>();
}

/**
 * @summary Queries information about instances in a specified region.
 *
 * @param request GetInstanceListRequest
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceList(const GetInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the IP addresses of Kafka clients.
 *
 * @description - The IP information is retrieved from the sampling logs of client requests to the server through the Kafka API.
 * - The count indicates the number of connections from a single IP address using different ports that the server detected within the specified time range.
 * - If your server is not running the latest minor version, the sampling logs may be inaccurate and provide less precise IP information. We recommend that you upgrade the server to the latest minor version.
 *
 * @param request GetKafkaClientIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKafkaClientIpResponse
 */
GetKafkaClientIpResponse Client::getKafkaClientIpWithOptions(const GetKafkaClientIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKafkaClientIp"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKafkaClientIpResponse>();
}

/**
 * @summary Retrieves the IP addresses of Kafka clients.
 *
 * @description - The IP information is retrieved from the sampling logs of client requests to the server through the Kafka API.
 * - The count indicates the number of connections from a single IP address using different ports that the server detected within the specified time range.
 * - If your server is not running the latest minor version, the sampling logs may be inaccurate and provide less precise IP information. We recommend that you upgrade the server to the latest minor version.
 *
 * @param request GetKafkaClientIpRequest
 * @return GetKafkaClientIpResponse
 */
GetKafkaClientIpResponse Client::getKafkaClientIp(const GetKafkaClientIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKafkaClientIpWithOptions(request, runtime);
}

/**
 * @summary Retrieves the usage quotas for topics and partitions.
 *
 * @param request GetQuotaTipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaTipResponse
 */
GetQuotaTipResponse Client::getQuotaTipWithOptions(const GetQuotaTipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuotaTip"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaTipResponse>();
}

/**
 * @summary Retrieves the usage quotas for topics and partitions.
 *
 * @param request GetQuotaTipRequest
 * @return GetQuotaTipResponse
 */
GetQuotaTipResponse Client::getQuotaTip(const GetQuotaTipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaTipWithOptions(request, runtime);
}

/**
 * @summary Queries the list of threats on an instance.
 *
 * @param request GetRiskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRiskListResponse
 */
GetRiskListResponse Client::getRiskListWithOptions(const GetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartIndex()) {
    query["StartIndex"] = request.getStartIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRiskList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRiskListResponse>();
}

/**
 * @summary Queries the list of threats on an instance.
 *
 * @param request GetRiskListRequest
 * @return GetRiskListResponse
 */
GetRiskListResponse Client::getRiskList(const GetRiskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRiskListWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about topics.
 *
 * @param request GetTopicListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicListResponse
 */
GetTopicListResponse Client::getTopicListWithOptions(const GetTopicListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicListResponse>();
}

/**
 * @summary Retrieves information about topics.
 *
 * @param request GetTopicListRequest
 * @return GetTopicListResponse
 */
GetTopicListResponse Client::getTopicList(const GetTopicListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the message sending and receiving status of a topic.
 *
 * @param request GetTopicStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicStatusResponse
 */
GetTopicStatusResponse Client::getTopicStatusWithOptions(const GetTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicStatus"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicStatusResponse>();
}

/**
 * @summary Retrieves the message sending and receiving status of a topic.
 *
 * @param request GetTopicStatusRequest
 * @return GetTopicStatusResponse
 */
GetTopicStatusResponse Client::getTopicStatus(const GetTopicStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the subscription status of Groups for a topic.
 *
 * @param request GetTopicSubscribeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicSubscribeStatusResponse
 */
GetTopicSubscribeStatusResponse Client::getTopicSubscribeStatusWithOptions(const GetTopicSubscribeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicSubscribeStatus"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicSubscribeStatusResponse>();
}

/**
 * @summary Retrieves the subscription status of Groups for a topic.
 *
 * @param request GetTopicSubscribeStatusRequest
 * @return GetTopicSubscribeStatusResponse
 */
GetTopicSubscribeStatusResponse Client::getTopicSubscribeStatus(const GetTopicSubscribeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicSubscribeStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of rebalancing tasks.
 *
 * @param request ListRebalanceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRebalanceInfoResponse
 */
ListRebalanceInfoResponse Client::listRebalanceInfoWithOptions(const ListRebalanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRebalanceInfo"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRebalanceInfoResponse>();
}

/**
 * @summary Queries the details of rebalancing tasks.
 *
 * @param request ListRebalanceInfoRequest
 * @return ListRebalanceInfoResponse
 */
ListRebalanceInfoResponse Client::listRebalanceInfo(const ListRebalanceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRebalanceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of tags that are attached to resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the list of tags that are attached to resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary You can modify the name of an ApsaraMQ for Kafka instance after it is deployed. This topic describes how to call the ModifyInstanceName operation.
 *
 * @param request ModifyInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceNameWithOptions(const ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceName"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceNameResponse>();
}

/**
 * @summary You can modify the name of an ApsaraMQ for Kafka instance after it is deployed. This topic describes how to call the ModifyInstanceName operation.
 *
 * @param request ModifyInstanceNameRequest
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceName(const ModifyInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceNameWithOptions(request, runtime);
}

/**
 * @summary This operation modifies the number of partitions in a topic.
 *
 * @param request ModifyPartitionNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPartitionNumResponse
 */
ModifyPartitionNumResponse Client::modifyPartitionNumWithOptions(const ModifyPartitionNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddPartitionNum()) {
    query["AddPartitionNum"] = request.getAddPartitionNum();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPartitionNum"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPartitionNumResponse>();
}

/**
 * @summary This operation modifies the number of partitions in a topic.
 *
 * @param request ModifyPartitionNumRequest
 * @return ModifyPartitionNumResponse
 */
ModifyPartitionNumResponse Client::modifyPartitionNum(const ModifyPartitionNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPartitionNumWithOptions(request, runtime);
}

/**
 * @summary After you deploy Serverless instances, you can call this API operation to modify their scheduled scaling policy.
 *
 * @description ###### This operation applies only to Serverless instances.
 *
 * @param request ModifyScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduledScalingRuleResponse
 */
ModifyScheduledScalingRuleResponse Client::modifyScheduledScalingRuleWithOptions(const ModifyScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduledScalingRuleResponse>();
}

/**
 * @summary After you deploy Serverless instances, you can call this API operation to modify their scheduled scaling policy.
 *
 * @description ###### This operation applies only to Serverless instances.
 *
 * @param request ModifyScheduledScalingRuleRequest
 * @return ModifyScheduledScalingRuleResponse
 */
ModifyScheduledScalingRuleResponse Client::modifyScheduledScalingRule(const ModifyScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduledScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the remark of a topic.
 *
 * @param request ModifyTopicRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTopicRemarkResponse
 */
ModifyTopicRemarkResponse Client::modifyTopicRemarkWithOptions(const ModifyTopicRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTopicRemark"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTopicRemarkResponse>();
}

/**
 * @summary Modifies the remark of a topic.
 *
 * @param request ModifyTopicRemarkRequest
 * @return ModifyTopicRemarkResponse
 */
ModifyTopicRemarkResponse Client::modifyTopicRemark(const ModifyTopicRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTopicRemarkWithOptions(request, runtime);
}

/**
 * @summary ModifyUserDefinedSg
 *
 * @param tmpReq ModifyUserDefinedSgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserDefinedSgResponse
 */
ModifyUserDefinedSgResponse Client::modifyUserDefinedSgWithOptions(const ModifyUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyUserDefinedSgShrinkRequest request = ModifyUserDefinedSgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSgIdList()) {
    request.setSgIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSgIdList(), "SgIdList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSgIdListShrink()) {
    query["SgIdList"] = request.getSgIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserDefinedSg"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserDefinedSgResponse>();
}

/**
 * @summary ModifyUserDefinedSg
 *
 * @param request ModifyUserDefinedSgRequest
 * @return ModifyUserDefinedSgResponse
 */
ModifyUserDefinedSgResponse Client::modifyUserDefinedSg(const ModifyUserDefinedSgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserDefinedSgWithOptions(request, runtime);
}

/**
 * @summary This operation queries messages stored in a topic by message creation time or offset.
 *
 * @param request QueryMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessageWithOptions(const QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMessage"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMessageResponse>();
}

/**
 * @summary This operation queries messages stored in a topic by message creation time or offset.
 *
 * @param request QueryMessageRequest
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessage(const QueryMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMessageWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go instance.
 *
 * @description You cannot use this operation to release subscription instances.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDeleteInstance()) {
    query["ForceDeleteInstance"] = request.getForceDeleteInstance();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases a pay-as-you-go instance.
 *
 * @description You cannot use this operation to release subscription instances.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts an instance.
 *
 * @description You can call this operation only when the instance is in the Stopped state.
 *
 * @param request ReopenInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReopenInstanceResponse
 */
ReopenInstanceResponse Client::reopenInstanceWithOptions(const ReopenInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReopenInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReopenInstanceResponse>();
}

/**
 * @summary Starts an instance.
 *
 * @description You can call this operation only when the instance is in the Stopped state.
 *
 * @param request ReopenInstanceRequest
 * @return ReopenInstanceResponse
 */
ReopenInstanceResponse Client::reopenInstance(const ReopenInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reopenInstanceWithOptions(request, runtime);
}

/**
 * @summary You must purchase and deploy an ApsaraMQ for Kafka instance before you can send and receive messages. This topic describes how to deploy an instance by calling the StartInstance operation.
 *
 * @description > The request frequency is limited to 2 queries per second (QPS) for each user.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasCrossZone()) {
    query["CrossZone"] = request.getCrossZone();
  }

  if (!!request.hasDeployModule()) {
    query["DeployModule"] = request.getDeployModule();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsEipInner()) {
    query["IsEipInner"] = request.getIsEipInner();
  }

  if (!!request.hasIsForceSelectedZones()) {
    query["IsForceSelectedZones"] = request.getIsForceSelectedZones();
  }

  if (!!request.hasIsSetUserAndPassword()) {
    query["IsSetUserAndPassword"] = request.getIsSetUserAndPassword();
  }

  if (!!request.hasKMSKeyId()) {
    query["KMSKeyId"] = request.getKMSKeyId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNotifier()) {
    query["Notifier"] = request.getNotifier();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroup()) {
    query["SecurityGroup"] = request.getSecurityGroup();
  }

  if (!!request.hasSelectedZones()) {
    query["SelectedZones"] = request.getSelectedZones();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasUserPhoneNum()) {
    query["UserPhoneNum"] = request.getUserPhoneNum();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary You must purchase and deploy an ApsaraMQ for Kafka instance before you can send and receive messages. This topic describes how to deploy an instance by calling the StartInstance operation.
 *
 * @description > The request frequency is limited to 2 queries per second (QPS) for each user.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops an instance.
 *
 * @description Stopping subscription instances is not currently supported. To stop a subscription instance, submit a ticket.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Stops an instance.
 *
 * @description Stopping subscription instances is not currently supported. To stop a subscription instance, submit a ticket.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary You can call the TagResources operation to attach tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary You can call the TagResources operation to attach tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary You can call UntagResources to detach tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary You can call UntagResources to detach tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary You can call the UpdateAllowedIp operation to edit the IP whitelist for an ApsaraMQ for Kafka instance. The whitelist specifies the IP addresses and ports that are allowed to access the instance.
 *
 * @param request UpdateAllowedIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAllowedIpResponse
 */
UpdateAllowedIpResponse Client::updateAllowedIpWithOptions(const UpdateAllowedIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowedListIp()) {
    query["AllowedListIp"] = request.getAllowedListIp();
  }

  if (!!request.hasAllowedListType()) {
    query["AllowedListType"] = request.getAllowedListType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUpdateType()) {
    query["UpdateType"] = request.getUpdateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAllowedIp"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAllowedIpResponse>();
}

/**
 * @summary You can call the UpdateAllowedIp operation to edit the IP whitelist for an ApsaraMQ for Kafka instance. The whitelist specifies the IP addresses and ports that are allowed to access the instance.
 *
 * @param request UpdateAllowedIpRequest
 * @return UpdateAllowedIpResponse
 */
UpdateAllowedIpResponse Client::updateAllowedIp(const UpdateAllowedIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAllowedIpWithOptions(request, runtime);
}

/**
 * @summary The UpdateConsumerOffset operation resets the consumer offset of a consumer group.
 *
 * @description This operation resets the consumer offset of a specified consumer group. You can reset the consumer offset by timestamp or by a specific offset value. Using different parameter combinations, you can perform the following tasks:
 * - Consume messages from the latest offset by setting the consumer offset to the latest position. This is supported for a single topic or all topics.
 * - Consume messages from the offset of a specified time point by providing a timestamp. This is supported for a single topic or all topics.
 * - Reset the consumer offset for a specific partition by providing the target partition ID and consumer offset. This is supported only for a single topic.
 *
 * @param tmpReq UpdateConsumerOffsetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConsumerOffsetResponse
 */
UpdateConsumerOffsetResponse Client::updateConsumerOffsetWithOptions(const UpdateConsumerOffsetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConsumerOffsetShrinkRequest request = UpdateConsumerOffsetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOffsets()) {
    request.setOffsetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOffsets(), "Offsets", "json"));
  }

  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOffsetsShrink()) {
    query["Offsets"] = request.getOffsetsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.getResetType();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConsumerOffset"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConsumerOffsetResponse>();
}

/**
 * @summary The UpdateConsumerOffset operation resets the consumer offset of a consumer group.
 *
 * @description This operation resets the consumer offset of a specified consumer group. You can reset the consumer offset by timestamp or by a specific offset value. Using different parameter combinations, you can perform the following tasks:
 * - Consume messages from the latest offset by setting the consumer offset to the latest position. This is supported for a single topic or all topics.
 * - Consume messages from the offset of a specified time point by providing a timestamp. This is supported for a single topic or all topics.
 * - Reset the consumer offset for a specific partition by providing the target partition ID and consumer offset. This is supported only for a single topic.
 *
 * @param request UpdateConsumerOffsetRequest
 * @return UpdateConsumerOffsetResponse
 */
UpdateConsumerOffsetResponse Client::updateConsumerOffset(const UpdateConsumerOffsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConsumerOffsetWithOptions(request, runtime);
}

/**
 * @summary After an instance is deployed, you can modify configurations such as enabling Access Control List (ACL) and SSL, the message retention period, and the maximum message size. This topic describes how to call the UpdateInstanceConfig operation to modify the configuration of an instance.
 *
 * @description ## **Permission information**
 * RAM users must obtain authorization before they can call the **UpdateInstanceConfig** operation. For more information, see [RAM access policies](https://help.aliyun.com/document_detail/185815.html).
 * | API                  | Action                   | Resource                      |
 * | -------------------- | ------------------------ | ----------------------------- |
 * | UpdateInstanceConfig | alikafka: UpdateInstance | acs:alikafka:*:*:{instanceId} |
 *
 * @param request UpdateInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceConfigResponse
 */
UpdateInstanceConfigResponse Client::updateInstanceConfigWithOptions(const UpdateInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceConfig"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceConfigResponse>();
}

/**
 * @summary After an instance is deployed, you can modify configurations such as enabling Access Control List (ACL) and SSL, the message retention period, and the maximum message size. This topic describes how to call the UpdateInstanceConfig operation to modify the configuration of an instance.
 *
 * @description ## **Permission information**
 * RAM users must obtain authorization before they can call the **UpdateInstanceConfig** operation. For more information, see [RAM access policies](https://help.aliyun.com/document_detail/185815.html).
 * | API                  | Action                   | Resource                      |
 * | -------------------- | ------------------------ | ----------------------------- |
 * | UpdateInstanceConfig | alikafka: UpdateInstance | acs:alikafka:*:*:{instanceId} |
 *
 * @param request UpdateInstanceConfigRequest
 * @return UpdateInstanceConfigResponse
 */
UpdateInstanceConfigResponse Client::updateInstanceConfig(const UpdateInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary After a topic is created, you can modify its configurations, such as the message retention period and maximum message size. This topic describes how to call this API operation to modify topic configurations.
 *
 * @param request UpdateTopicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTopicConfigResponse
 */
UpdateTopicConfigResponse Client::updateTopicConfigWithOptions(const UpdateTopicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTopicConfig"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTopicConfigResponse>();
}

/**
 * @summary After a topic is created, you can modify its configurations, such as the message retention period and maximum message size. This topic describes how to call this API operation to modify topic configurations.
 *
 * @param request UpdateTopicConfigRequest
 * @return UpdateTopicConfigResponse
 */
UpdateTopicConfigResponse Client::updateTopicConfig(const UpdateTopicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTopicConfigWithOptions(request, runtime);
}

/**
 * @summary Upgrades the version of an instance.
 *
 * @description ## **Permission description**
 * RAM users must be authorized before they can call the **UpgradeInstanceVersion** API. For more information about authorization, see [RAM access policy](https://help.aliyun.com/document_detail/185815.html).
 * | API                    | Action         | Resource                      |
 * | ---------------------- | -------------- | ----------------------------- |
 * | UpgradeInstanceVersion | UpdateInstance | acs:alikafka:*:*:{instanceId} |
 * ## **QPS limits**
 * The request frequency is limited to 2 queries per second (QPS) for a single user.
 *
 * @param request UpgradeInstanceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeInstanceVersionResponse
 */
UpgradeInstanceVersionResponse Client::upgradeInstanceVersionWithOptions(const UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeInstanceVersion"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeInstanceVersionResponse>();
}

/**
 * @summary Upgrades the version of an instance.
 *
 * @description ## **Permission description**
 * RAM users must be authorized before they can call the **UpgradeInstanceVersion** API. For more information about authorization, see [RAM access policy](https://help.aliyun.com/document_detail/185815.html).
 * | API                    | Action         | Resource                      |
 * | ---------------------- | -------------- | ----------------------------- |
 * | UpgradeInstanceVersion | UpdateInstance | acs:alikafka:*:*:{instanceId} |
 * ## **QPS limits**
 * The request frequency is limited to 2 queries per second (QPS) for a single user.
 *
 * @param request UpgradeInstanceVersionRequest
 * @return UpgradeInstanceVersionResponse
 */
UpgradeInstanceVersionResponse Client::upgradeInstanceVersion(const UpgradeInstanceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades a pay-as-you-go instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing method and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq UpgradePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePostPayOrderResponse
 */
UpgradePostPayOrderResponse Client::upgradePostPayOrderWithOptions(const UpgradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradePostPayOrderShrinkRequest request = UpgradePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.getEipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePostPayOrderResponse>();
}

/**
 * @summary Upgrades a pay-as-you-go instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing method and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request UpgradePostPayOrderRequest
 * @return UpgradePostPayOrderResponse
 */
UpgradePostPayOrderResponse Client::upgradePostPayOrder(const UpgradePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePostPayOrderWithOptions(request, runtime);
}

/**
 * @summary Upgrades a subscription instance.
 *
 * @description Before calling this operation, ensure you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq UpgradePrePayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePrePayOrderResponse
 */
UpgradePrePayOrderResponse Client::upgradePrePayOrderWithOptions(const UpgradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradePrePayOrderShrinkRequest request = UpgradePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.getConfluentConfigShrink();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.getEipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.getEipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.getIoMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.getIoMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.getPartitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.getTopicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePrePayOrderResponse>();
}

/**
 * @summary Upgrades a subscription instance.
 *
 * @description Before calling this operation, ensure you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request UpgradePrePayOrderRequest
 * @return UpgradePrePayOrderResponse
 */
UpgradePrePayOrderResponse Client::upgradePrePayOrder(const UpgradePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePrePayOrderWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Alikafka20190916