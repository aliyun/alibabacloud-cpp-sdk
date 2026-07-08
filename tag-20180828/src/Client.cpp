#include <darabonba/Core.hpp>
#include <alibabacloud/Tag20180828.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Tag20180828::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Tag20180828
{

AlibabaCloud::Tag20180828::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "tag.us-east-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "tag.aliyuncs.com"},
    {"ap-northeast-2-pop" , "tag.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "tag.aliyuncs.com"},
    {"cn-beijing-gov-1" , "tag.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-edge-1" , "tag.aliyuncs.com"},
    {"cn-fujian" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "tag.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "tag.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "tag.cn-qingdao-nebula.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "tag.aliyuncs.com"},
    {"cn-shanghai-inner" , "tag.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "tag.aliyuncs.com"},
    {"cn-shenzhen-inner" , "tag.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "tag.aliyuncs.com"},
    {"cn-wuhan" , "tag.aliyuncs.com"},
    {"cn-yushanfang" , "tag.aliyuncs.com"},
    {"cn-zhangbei" , "tag.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "tag.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "tag.cn-qingdao-nebula.aliyuncs.com"},
    {"eu-west-1-oxs" , "tag.cn-shenzhen-cloudstone.aliyuncs.com"},
    {"rus-west-1-pop" , "tag.aliyuncs.com"},
    {"us-east-1" , "tag.us-east-1.aliyuncs.com"},
    {"me-east-1" , "tag.me-east-1.aliyuncs.com"},
    {"me-central-1" , "tag.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "tag.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "tag.eu-central-1.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "tag.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "tag.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "tag.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "tag.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "tag.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "tag.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "tag.cn-qingdao.aliyuncs.com"},
    {"cn-nanjing" , "tag.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "tag.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "tag.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "tag.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou" , "tag.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "tag.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "tag.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "tag.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "tag.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "tag.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "tag.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "tag.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "tag.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "tag.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "tag.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "tag.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "tag.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("tag", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Attaches a tag policy to an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to attach a tag policy to the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to attach a tag policy to the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to attach the tag policy with an ID of `p-de62a0bf400e4b69****` to the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request AttachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicyWithOptions(const AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicyResponse>();
}

/**
 * @summary Attaches a tag policy to an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to attach a tag policy to the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to attach a tag policy to the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to attach the tag policy with an ID of `p-de62a0bf400e4b69****` to the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request AttachPolicyRequest
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicy(const AttachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyWithOptions(request, runtime);
}

/**
 * @summary Checks whether the createdby tag is enabled.
 *
 * @param request CheckCreatedByEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCreatedByEnabledResponse
 */
CheckCreatedByEnabledResponse Client::checkCreatedByEnabledWithOptions(const CheckCreatedByEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCreatedByEnabled"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCreatedByEnabledResponse>();
}

/**
 * @summary Checks whether the createdby tag is enabled.
 *
 * @param request CheckCreatedByEnabledRequest
 * @return CheckCreatedByEnabledResponse
 */
CheckCreatedByEnabledResponse Client::checkCreatedByEnabled(const CheckCreatedByEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCreatedByEnabledWithOptions(request, runtime);
}

/**
 * @summary Disables createdby tags.
 *
 * @param request CloseCreatedByRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseCreatedByResponse
 */
CloseCreatedByResponse Client::closeCreatedByWithOptions(const CloseCreatedByRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseCreatedBy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseCreatedByResponse>();
}

/**
 * @summary Disables createdby tags.
 *
 * @param request CloseCreatedByRequest
 * @return CloseCreatedByResponse
 */
CloseCreatedByResponse Client::closeCreatedBy(const CloseCreatedByRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeCreatedByWithOptions(request, runtime);
}

/**
 * @summary Creates associated resource tag rules.
 *
 * @param request CreateAssociatedResourceRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAssociatedResourceRulesResponse
 */
CreateAssociatedResourceRulesResponse Client::createAssociatedResourceRulesWithOptions(const CreateAssociatedResourceRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateRulesList()) {
    query["CreateRulesList"] = request.getCreateRulesList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAssociatedResourceRules"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAssociatedResourceRulesResponse>();
}

/**
 * @summary Creates associated resource tag rules.
 *
 * @param request CreateAssociatedResourceRulesRequest
 * @return CreateAssociatedResourceRulesResponse
 */
CreateAssociatedResourceRulesResponse Client::createAssociatedResourceRules(const CreateAssociatedResourceRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAssociatedResourceRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a tag policy.
 *
 * @description ###
 * This topic provides an example on how to call the API operation to create a tag policy named `test`. In this example, the Tag Policy feature in multi-account mode is used. The tag policy defines that resources to which the `CostCenter:Beijing` or `CostCenter:Shanghai` tag is added are compliant and other resources are not compliant.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyContent()) {
    query["PolicyContent"] = request.getPolicyContent();
  }

  if (!!request.hasPolicyDesc()) {
    query["PolicyDesc"] = request.getPolicyDesc();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Creates a tag policy.
 *
 * @description ###
 * This topic provides an example on how to call the API operation to create a tag policy named `test`. In this example, the Tag Policy feature in multi-account mode is used. The tag policy defines that resources to which the `CostCenter:Beijing` or `CostCenter:Shanghai` tag is added are compliant and other resources are not compliant.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates predefined tags.
 *
 * @description ###
 * A preset tag is a tag that you create in advance and is available for the resources in all regions. You can create preset tags in the stage of tag planning and add them to specific resources in the stage of tag implementation. When you create a preset tag, you can specify only the tag key. You can specify a tag value in the future.
 * This topic provides an example on how to call the API operation to create a preset tag whose tag key is `Environment` to indicate the business environment.
 *
 * @param request CreateTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagsResponse
 */
CreateTagsResponse Client::createTagsWithOptions(const CreateTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTagKeyValueParamList()) {
    query["TagKeyValueParamList"] = request.getTagKeyValueParamList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTags"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagsResponse>();
}

/**
 * @summary Creates predefined tags.
 *
 * @description ###
 * A preset tag is a tag that you create in advance and is available for the resources in all regions. You can create preset tags in the stage of tag planning and add them to specific resources in the stage of tag implementation. When you create a preset tag, you can specify only the tag key. You can specify a tag value in the future.
 * This topic provides an example on how to call the API operation to create a preset tag whose tag key is `Environment` to indicate the business environment.
 *
 * @param request CreateTagsRequest
 * @return CreateTagsResponse
 */
CreateTagsResponse Client::createTags(const CreateTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagsWithOptions(request, runtime);
}

/**
 * @summary Deletes an associated resource tagging rule.
 *
 * @param request DeleteAssociatedResourceRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAssociatedResourceRuleResponse
 */
DeleteAssociatedResourceRuleResponse Client::deleteAssociatedResourceRuleWithOptions(const DeleteAssociatedResourceRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasSettingName()) {
    query["SettingName"] = request.getSettingName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAssociatedResourceRule"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAssociatedResourceRuleResponse>();
}

/**
 * @summary Deletes an associated resource tagging rule.
 *
 * @param request DeleteAssociatedResourceRuleRequest
 * @return DeleteAssociatedResourceRuleResponse
 */
DeleteAssociatedResourceRuleResponse Client::deleteAssociatedResourceRule(const DeleteAssociatedResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAssociatedResourceRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a tag policy.
 *
 * @description Before you delete a tag policy, make sure that the tag policy is detached from all objects to which the tag policy is attached. For more information about how to detach a tag policy, see [DetachPolicy](https://help.aliyun.com/document_detail/429724.html).
 * This topic provides an example on how to call the API operation to delete the tag policy with an ID of `p-557cb141331f41c7****`.
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a tag policy.
 *
 * @description Before you delete a tag policy, make sure that the tag policy is detached from all objects to which the tag policy is attached. For more information about how to detach a tag policy, see [DetachPolicy](https://help.aliyun.com/document_detail/429724.html).
 * This topic provides an example on how to call the API operation to delete the tag policy with an ID of `p-557cb141331f41c7****`.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a preset tag.
 *
 * @description This topic provides an example on how to call the API operation to delete the preset tag whose tag key is `Environment` and tag value is `test`.
 *
 * @param request DeleteTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary Deletes a preset tag.
 *
 * @description This topic provides an example on how to call the API operation to delete the preset tag whose tag key is `Environment` and tag value is `test`.
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where the Tag service is available.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions where the Tag service is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Detaches a tag policy from an object.
 *
 * @description ###
 * If you use the Tag Policy feature in single-account mode, you can call this API operation to detach a tag policy from the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to detach a tag policy from the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to detach the tag policy with an ID of `p-a3381efe2fe34a75****` from the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request DetachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicyWithOptions(const DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicyResponse>();
}

/**
 * @summary Detaches a tag policy from an object.
 *
 * @description ###
 * If you use the Tag Policy feature in single-account mode, you can call this API operation to detach a tag policy from the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to detach a tag policy from the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to detach the tag policy with an ID of `p-a3381efe2fe34a75****` from the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request DetachPolicyRequest
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicy(const DetachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables a control policy.
 *
 * @description ### Usage notes
 * After you disable a tag policy, all bound tag policies are automatically unbound.
 *
 * @param request DisablePolicyTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisablePolicyTypeResponse
 */
DisablePolicyTypeResponse Client::disablePolicyTypeWithOptions(const DisablePolicyTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpenType()) {
    query["OpenType"] = request.getOpenType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisablePolicyType"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisablePolicyTypeResponse>();
}

/**
 * @summary Disables a control policy.
 *
 * @description ### Usage notes
 * After you disable a tag policy, all bound tag policies are automatically unbound.
 *
 * @param request DisablePolicyTypeRequest
 * @return DisablePolicyTypeResponse
 */
DisablePolicyTypeResponse Client::disablePolicyType(const DisablePolicyTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disablePolicyTypeWithOptions(request, runtime);
}

/**
 * @summary Enables the tag policy feature.
 *
 * @description ### Usage notes
 * You can enable the single-account mode or multi-account mode for tag policies:
 * - Single-account mode: If the current logon account is an independent Alibaba Cloud account, the single-account mode for tag policies is enabled to manage resources within the scope of the single account.
 * - Multi-account mode: If the current logon account is the management account of a resource directory, the multi-account mode for tag policies is enabled to manage resources within the scope of the resource directory.
 *   > Members of a resource directory cannot enable the tag policy feature.
 *
 * @param request EnablePolicyTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnablePolicyTypeResponse
 */
EnablePolicyTypeResponse Client::enablePolicyTypeWithOptions(const EnablePolicyTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpenType()) {
    query["OpenType"] = request.getOpenType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnablePolicyType"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnablePolicyTypeResponse>();
}

/**
 * @summary Enables the tag policy feature.
 *
 * @description ### Usage notes
 * You can enable the single-account mode or multi-account mode for tag policies:
 * - Single-account mode: If the current logon account is an independent Alibaba Cloud account, the single-account mode for tag policies is enabled to manage resources within the scope of the single account.
 * - Multi-account mode: If the current logon account is the management account of a resource directory, the multi-account mode for tag policies is enabled to manage resources within the scope of the resource directory.
 *   > Members of a resource directory cannot enable the tag policy feature.
 *
 * @param request EnablePolicyTypeRequest
 * @return EnablePolicyTypeResponse
 */
EnablePolicyTypeResponse Client::enablePolicyType(const EnablePolicyTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enablePolicyTypeWithOptions(request, runtime);
}

/**
 * @summary Generates a resource non-compliance report.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to generate a resource non-compliance report for the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to generate a resource non-compliance report for the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call this API operation to generate a resource non-compliance report for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request GenerateConfigRuleReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateConfigRuleReportResponse
 */
GenerateConfigRuleReportResponse Client::generateConfigRuleReportWithOptions(const GenerateConfigRuleReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateConfigRuleReport"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateConfigRuleReportResponse>();
}

/**
 * @summary Generates a resource non-compliance report.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to generate a resource non-compliance report for the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to generate a resource non-compliance report for the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call this API operation to generate a resource non-compliance report for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
 *
 * @param request GenerateConfigRuleReportRequest
 * @return GenerateConfigRuleReportResponse
 */
GenerateConfigRuleReportResponse Client::generateConfigRuleReport(const GenerateConfigRuleReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateConfigRuleReportWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about the latest resource non-compliance report.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the basic information of the resource non-compliance report that is last generated for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the basic information of the resource non-compliance report that is last generated for an object in the resource directory. The object can be the Root folder, a folder other than the Root folder, or a member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call this API operation to query the basic information of the resource non-compliance report that is last generated for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that the ID of the report is `crp-ao0786618088006c****`.
 *
 * @param request GetConfigRuleReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigRuleReportResponse
 */
GetConfigRuleReportResponse Client::getConfigRuleReportWithOptions(const GetConfigRuleReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfigRuleReport"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigRuleReportResponse>();
}

/**
 * @summary Queries the basic information about the latest resource non-compliance report.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the basic information of the resource non-compliance report that is last generated for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the basic information of the resource non-compliance report that is last generated for an object in the resource directory. The object can be the Root folder, a folder other than the Root folder, or a member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call this API operation to query the basic information of the resource non-compliance report that is last generated for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that the ID of the report is `crp-ao0786618088006c****`.
 *
 * @param request GetConfigRuleReportRequest
 * @return GetConfigRuleReportResponse
 */
GetConfigRuleReportResponse Client::getConfigRuleReport(const GetConfigRuleReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRuleReportWithOptions(request, runtime);
}

/**
 * @summary Retrieves the effective policy for a specified object.
 *
 * @description ### Usage notes
 * In Single-Account Mode, the current logon account can query its own effective policy. In Multi-Account Mode, the Management Account of a Resource Directory can query the effective policy for the Root Folder, a Folder, or a Member. A Member can also query its own effective policy. For more information about tag policy modes, see [Tag policy modes](https://help.aliyun.com/document_detail/417434.html).
 * Tag policy inheritance determines the effective policy. For more information, see [Tag policy inheritance and effective policy calculation](https://help.aliyun.com/document_detail/417435.html).
 * This topic provides an example of how to query the effective policy for the current logon account in Single-Account Mode.
 *
 * @param request GetEffectivePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEffectivePolicyResponse
 */
GetEffectivePolicyResponse Client::getEffectivePolicyWithOptions(const GetEffectivePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEffectivePolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEffectivePolicyResponse>();
}

/**
 * @summary Retrieves the effective policy for a specified object.
 *
 * @description ### Usage notes
 * In Single-Account Mode, the current logon account can query its own effective policy. In Multi-Account Mode, the Management Account of a Resource Directory can query the effective policy for the Root Folder, a Folder, or a Member. A Member can also query its own effective policy. For more information about tag policy modes, see [Tag policy modes](https://help.aliyun.com/document_detail/417434.html).
 * Tag policy inheritance determines the effective policy. For more information, see [Tag policy inheritance and effective policy calculation](https://help.aliyun.com/document_detail/417435.html).
 * This topic provides an example of how to query the effective policy for the current logon account in Single-Account Mode.
 *
 * @param request GetEffectivePolicyRequest
 * @return GetEffectivePolicyResponse
 */
GetEffectivePolicyResponse Client::getEffectivePolicy(const GetEffectivePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEffectivePolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a tag policy.
 *
 * @description This topic provides an example on how to call the API operation to query the details of the tag policy with an ID of `p-557cb141331f41c7****`.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary Queries the details of a tag policy.
 *
 * @description This topic provides an example on how to call the API operation to query the details of the tag policy with an ID of `p-557cb141331f41c7****`.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Tag Policy feature.
 *
 * @description This topic provides an example on how to call the API operation to query the status of the Tag Policy feature for the current logon account. The response shows that the Tag Policy feature in multi-account mode is enabled for the current logon account.
 *
 * @param request GetPolicyEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyEnableStatusResponse
 */
GetPolicyEnableStatusResponse Client::getPolicyEnableStatusWithOptions(const GetPolicyEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpenType()) {
    query["OpenType"] = request.getOpenType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyEnableStatus"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyEnableStatusResponse>();
}

/**
 * @summary Queries the status of the Tag Policy feature.
 *
 * @description This topic provides an example on how to call the API operation to query the status of the Tag Policy feature for the current logon account. The response shows that the Tag Policy feature in multi-account mode is enabled for the current logon account.
 *
 * @param request GetPolicyEnableStatusRequest
 * @return GetPolicyEnableStatusResponse
 */
GetPolicyEnableStatusResponse Client::getPolicyEnableStatus(const GetPolicyEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of associated resource rules.
 *
 * @param request ListAssociatedResourceRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssociatedResourceRulesResponse
 */
ListAssociatedResourceRulesResponse Client::listAssociatedResourceRulesWithOptions(const ListAssociatedResourceRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasSettingName()) {
    query["SettingName"] = request.getSettingName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAssociatedResourceRules"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssociatedResourceRulesResponse>();
}

/**
 * @summary Retrieves a list of associated resource rules.
 *
 * @param request ListAssociatedResourceRulesRequest
 * @return ListAssociatedResourceRulesResponse
 */
ListAssociatedResourceRulesResponse Client::listAssociatedResourceRules(const ListAssociatedResourceRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssociatedResourceRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tag detection tasks for an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag detection tasks for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag detection tasks for the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the tag detection tasks for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag detection task exists.
 *
 * @param request ListConfigRulesForTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigRulesForTargetResponse
 */
ListConfigRulesForTargetResponse Client::listConfigRulesForTargetWithOptions(const ListConfigRulesForTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigRulesForTarget"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigRulesForTargetResponse>();
}

/**
 * @summary Queries a list of tag detection tasks for an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag detection tasks for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag detection tasks for the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the tag detection tasks for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag detection task exists.
 *
 * @param request ListConfigRulesForTargetRequest
 * @return ListConfigRulesForTargetResponse
 */
ListConfigRulesForTargetResponse Client::listConfigRulesForTarget(const ListConfigRulesForTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRulesForTargetWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tag policies.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query all tag policies that are created for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query all tag policies that are created for the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query all tag policies that are created for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that two tag policies are created.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyIds()) {
    query["PolicyIds"] = request.getPolicyIds();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.getPolicyNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queries a list of tag policies.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query all tag policies that are created for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query all tag policies that are created for the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query all tag policies that are created for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that two tag policies are created.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tag policies that are attached to an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag policies that are attached to the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag policies that are attached to the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the tag policies that are attached to the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag policy is attached to the current logon account.
 *
 * @param request ListPoliciesForTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesForTargetResponse
 */
ListPoliciesForTargetResponse Client::listPoliciesForTargetWithOptions(const ListPoliciesForTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPoliciesForTarget"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesForTargetResponse>();
}

/**
 * @summary Queries a list of tag policies that are attached to an object.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag policies that are attached to the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag policies that are attached to the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the tag policies that are attached to the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag policy is attached to the current logon account.
 *
 * @param request ListPoliciesForTargetRequest
 * @return ListPoliciesForTargetResponse
 */
ListPoliciesForTargetResponse Client::listPoliciesForTarget(const ListPoliciesForTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesForTargetWithOptions(request, runtime);
}

/**
 * @summary Queries resources to which a specified tag is added or resources to which a specified tag is not added.
 *
 * @description This topic provides an example on how to call the API operation in the China (Shenzhen) region to query virtual private clouds (VPCs) to which the tag key `k1` is added. The response shows that the tag key is added to two VPCs.
 *
 * @param request ListResourcesByTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesByTagResponse
 */
ListResourcesByTagResponse Client::listResourcesByTagWithOptions(const ListResourcesByTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFuzzyType()) {
    query["FuzzyType"] = request.getFuzzyType();
  }

  if (!!request.hasIncludeAllTags()) {
    query["IncludeAllTags"] = request.getIncludeAllTags();
  }

  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.getTagFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourcesByTag"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesByTagResponse>();
}

/**
 * @summary Queries resources to which a specified tag is added or resources to which a specified tag is not added.
 *
 * @description This topic provides an example on how to call the API operation in the China (Shenzhen) region to query virtual private clouds (VPCs) to which the tag key `k1` is added. The response shows that the tag key is added to two VPCs.
 *
 * @param request ListResourcesByTagRequest
 * @return ListResourcesByTagResponse
 */
ListResourcesByTagResponse Client::listResourcesByTag(const ListResourcesByTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesByTagWithOptions(request, runtime);
}

/**
 * @summary Queries the resource types supported by tags and tag-related capability items.
 *
 * @description ### [](#)Call example
 * *   Query a list of resource types supported by TagResources or UntagResources. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22TAG_CONSOLE_SUPPORT%22%7D).
 * *   Query a list of resource types supported by ListTagResources or ListResourcesByTag. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22%7D).
 * *   Query a list of resource types that support createdby tags. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22CREATED_BY_TAG_CONSOLE_SUPPORT%22%7D).
 *
 * @param request ListSupportResourceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportResourceTypesResponse
 */
ListSupportResourceTypesResponse Client::listSupportResourceTypesWithOptions(const ListSupportResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceTye()) {
    query["ResourceTye"] = request.getResourceTye();
  }

  if (!!request.hasShowItems()) {
    query["ShowItems"] = request.getShowItems();
  }

  if (!!request.hasSupportCode()) {
    query["SupportCode"] = request.getSupportCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupportResourceTypes"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportResourceTypesResponse>();
}

/**
 * @summary Queries the resource types supported by tags and tag-related capability items.
 *
 * @description ### [](#)Call example
 * *   Query a list of resource types supported by TagResources or UntagResources. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22TAG_CONSOLE_SUPPORT%22%7D).
 * *   Query a list of resource types supported by ListTagResources or ListResourcesByTag. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22%7D).
 * *   Query a list of resource types that support createdby tags. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22CREATED_BY_TAG_CONSOLE_SUPPORT%22%7D).
 *
 * @param request ListSupportResourceTypesRequest
 * @return ListSupportResourceTypesResponse
 */
ListSupportResourceTypesResponse Client::listSupportResourceTypes(const ListSupportResourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupportResourceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries tag keys.
 *
 * @description This topic provides an example on how to call the API operation to query the tag keys in the `cn-hangzhou` region. The response shows that the following tag keys exist: `team`, `k1`, and `k2`.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasFuzzyType()) {
    query["FuzzyType"] = request.getFuzzyType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.getTagFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries tag keys.
 *
 * @description This topic provides an example on how to call the API operation to query the tag keys in the `cn-hangzhou` region. The response shows that the following tag keys exist: `team`, `k1`, and `k2`.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to the resources of various Alibaba Cloud services.
 *
 * @description For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceARN()) {
    query["ResourceARN"] = request.getResourceARN();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2018-08-28"},
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
 * @summary Queries the tags that are added to the resources of various Alibaba Cloud services.
 *
 * @description For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @description This topic provides an example on how to call the API operation to query the values of the tag key `k1` in the `cn-hangzhou` region. The response shows that the value of the tag key `k1` is `v1`.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFuzzyType()) {
    query["FuzzyType"] = request.getFuzzyType();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.getTagFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @description This topic provides an example on how to call the API operation to query the values of the tag key `k1` in the `cn-hangzhou` region. The response shows that the value of the tag key `k1` is `v1`.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries the objects to which a tag policy is attached.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the object to which a tag policy is attached. The object is the current logon account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the objects to which a tag policy is attached. The objects include the Root folder, folders other than the Root folder, and members in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the objects to which the tag policy with an ID of `p-de62a0bf400e4b69****` is attached. In this example, the Tag Policy feature in multi-account mode is used. The response shows that the tag policy is attached to two members in the related resource directory.
 *
 * @param request ListTargetsForPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTargetsForPolicyResponse
 */
ListTargetsForPolicyResponse Client::listTargetsForPolicyWithOptions(const ListTargetsForPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTargetsForPolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTargetsForPolicyResponse>();
}

/**
 * @summary Queries the objects to which a tag policy is attached.
 *
 * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the object to which a tag policy is attached. The object is the current logon account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the objects to which a tag policy is attached. The objects include the Root folder, folders other than the Root folder, and members in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
 * This topic provides an example on how to call the API operation to query the objects to which the tag policy with an ID of `p-de62a0bf400e4b69****` is attached. In this example, the Tag Policy feature in multi-account mode is used. The response shows that the tag policy is attached to two members in the related resource directory.
 *
 * @param request ListTargetsForPolicyRequest
 * @return ListTargetsForPolicyResponse
 */
ListTargetsForPolicyResponse Client::listTargetsForPolicy(const ListTargetsForPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTargetsForPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a tag policy.
 *
 * @description ### [](#)
 * This topic provides an example on how to call the API operation to change the name of a tag policy to `test`.
 *
 * @param request ModifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicyWithOptions(const ModifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPolicyContent()) {
    query["PolicyContent"] = request.getPolicyContent();
  }

  if (!!request.hasPolicyDesc()) {
    query["PolicyDesc"] = request.getPolicyDesc();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyResponse>();
}

/**
 * @summary Modifies a tag policy.
 *
 * @description ### [](#)
 * This topic provides an example on how to call the API operation to change the name of a tag policy to `test`.
 *
 * @param request ModifyPolicyRequest
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicy(const ModifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables createdby tags.
 *
 * @description createdby tags can help you analyze costs and bills and manage the costs of cloud resources in an efficient manner. You can identify the creators of resources based on the createdby tags added to the resources. createdby tags are system tags that are provided by Alibaba Cloud and automatically added to resources. The key of createdby tags is `acs:tag:createdby`.
 *
 * @param request OpenCreatedByRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenCreatedByResponse
 */
OpenCreatedByResponse Client::openCreatedByWithOptions(const OpenCreatedByRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenCreatedBy"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenCreatedByResponse>();
}

/**
 * @summary Enables createdby tags.
 *
 * @description createdby tags can help you analyze costs and bills and manage the costs of cloud resources in an efficient manner. You can identify the creators of resources based on the createdby tags added to the resources. createdby tags are system tags that are provided by Alibaba Cloud and automatically added to resources. The key of createdby tags is `acs:tag:createdby`.
 *
 * @param request OpenCreatedByRequest
 * @return OpenCreatedByResponse
 */
OpenCreatedByResponse Client::openCreatedBy(const OpenCreatedByRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openCreatedByWithOptions(request, runtime);
}

/**
 * @summary Adds tags to the resources of various Alibaba Cloud services.
 *
 * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
 * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceARN()) {
    query["ResourceARN"] = request.getResourceARN();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2018-08-28"},
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
 * @summary Adds tags to the resources of various Alibaba Cloud services.
 *
 * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
 * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from the resources of various Alibaba Cloud services.
 *
 * @description After you remove a tag, the tag is automatically deleted within 24 hours if it is not added to other resources.
 * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceARN()) {
    query["ResourceARN"] = request.getResourceARN();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2018-08-28"},
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
 * @summary Removes tags from the resources of various Alibaba Cloud services.
 *
 * @description After you remove a tag, the tag is automatically deleted within 24 hours if it is not added to other resources.
 * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates an Associated Resource Tag Rule.
 *
 * @param request UpdateAssociatedResourceRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssociatedResourceRuleResponse
 */
UpdateAssociatedResourceRuleResponse Client::updateAssociatedResourceRuleWithOptions(const UpdateAssociatedResourceRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExistingStatus()) {
    query["ExistingStatus"] = request.getExistingStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasSettingName()) {
    query["SettingName"] = request.getSettingName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAssociatedResourceRule"},
    {"version" , "2018-08-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssociatedResourceRuleResponse>();
}

/**
 * @summary Updates an Associated Resource Tag Rule.
 *
 * @param request UpdateAssociatedResourceRuleRequest
 * @return UpdateAssociatedResourceRuleResponse
 */
UpdateAssociatedResourceRuleResponse Client::updateAssociatedResourceRule(const UpdateAssociatedResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssociatedResourceRuleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Tag20180828