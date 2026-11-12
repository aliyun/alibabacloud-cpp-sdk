#include <darabonba/Core.hpp>
#include <alibabacloud/SWASOPEN20200601.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::SWASOPEN20200601::Models;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{

AlibabaCloud::SWASOPEN20200601::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "SWAS-OPEN";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "swas.ap-northeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "swas.ap-northeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "swas.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "swas.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "swas.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-6" , "swas.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-7" , "swas.ap-southeast-7.aliyuncs.com"},
    {"cn-beijing" , "swas.cn-beijing.aliyuncs.com"},
    {"cn-chengdu" , "swas.cn-chengdu.aliyuncs.com"},
    {"cn-fuzhou" , "swas.cn-fuzhou.aliyuncs.com"},
    {"cn-guangzhou" , "swas.cn-guangzhou.aliyuncs.com"},
    {"cn-hangzhou" , "swas.cn-hangzhou.aliyuncs.com"},
    {"cn-heyuan" , "swas.cn-heyuan.aliyuncs.com"},
    {"cn-hongkong" , "swas.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote" , "swas.cn-huhehaote.aliyuncs.com"},
    {"cn-nanjing" , "swas.cn-nanjing.aliyuncs.com"},
    {"cn-qingdao" , "swas.cn-qingdao.aliyuncs.com"},
    {"cn-shanghai" , "swas.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "swas.cn-shenzhen.aliyuncs.com"},
    {"cn-wuhan-lr" , "swas.cn-wuhan-lr.aliyuncs.com"},
    {"cn-wulanchabu" , "swas.cn-wulanchabu.aliyuncs.com"},
    {"cn-zhangjiakou" , "swas.cn-zhangjiakou.aliyuncs.com"},
    {"us-west-1" , "swas.us-west-1.aliyuncs.com"},
    {"us-east-1" , "swas.us-east-1.aliyuncs.com"},
    {"eu-west-1" , "swas.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "swas.eu-central-1.aliyuncs.com"},
    {"me-central-1" , "swas.me-central-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("swas-open", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Shares a custom image with other Alibaba Cloud accounts in the same region to quickly deploy identical environment configurations for multiple simple application servers and improve deployment efficiency.
 *
 * @description - Before sharing a shared image, purge sensitive data and files.
 * - Obtain the Alibaba Cloud account ID. Move the mouse over the user profile picture in the upper-right corner of the console. In the pop-up user information box, if the account identity is an Alibaba Cloud account, the displayed account ID is the Alibaba Cloud account ID.
 *
 * @param request AddCustomImageShareAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomImageShareAccountResponse
 */
AddCustomImageShareAccountResponse Client::addCustomImageShareAccountWithOptions(const AddCustomImageShareAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomImageShareAccount"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomImageShareAccountResponse>();
}

/**
 * @summary Shares a custom image with other Alibaba Cloud accounts in the same region to quickly deploy identical environment configurations for multiple simple application servers and improve deployment efficiency.
 *
 * @description - Before sharing a shared image, purge sensitive data and files.
 * - Obtain the Alibaba Cloud account ID. Move the mouse over the user profile picture in the upper-right corner of the console. In the pop-up user information box, if the account identity is an Alibaba Cloud account, the displayed account ID is the Alibaba Cloud account ID.
 *
 * @param request AddCustomImageShareAccountRequest
 * @return AddCustomImageShareAccountResponse
 */
AddCustomImageShareAccountResponse Client::addCustomImageShareAccount(const AddCustomImageShareAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomImageShareAccountWithOptions(request, runtime);
}

/**
 * @summary Applies for a public network access endpoint.
 *
 * @description Lightweight database instances do not provide public endpoints by default. If you need public network access to the database through the lightweight container service or Data Management (DMS), you must apply for a public endpoint.
 *
 * @param request AllocatePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocatePublicConnectionResponse
 */
AllocatePublicConnectionResponse Client::allocatePublicConnectionWithOptions(const AllocatePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocatePublicConnection"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocatePublicConnectionResponse>();
}

/**
 * @summary Applies for a public network access endpoint.
 *
 * @description Lightweight database instances do not provide public endpoints by default. If you need public network access to the database through the lightweight container service or Data Management (DMS), you must apply for a public endpoint.
 *
 * @param request AllocatePublicConnectionRequest
 * @return AllocatePublicConnectionResponse
 */
AllocatePublicConnectionResponse Client::allocatePublicConnection(const AllocatePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocatePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Applies a firewall template to configure firewall rules for multiple Simple Application Server instances at a time to improve configuration efficiency.
 *
 * @description If the port, protocol, or IP address of a firewall rule in the firewall template duplicates an existing rule of the instance, the new rule overwrites the existing rule regardless of whether the existing rule is enabled or disabled.
 *
 * @param request ApplyFirewallTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyFirewallTemplateResponse
 */
ApplyFirewallTemplateResponse Client::applyFirewallTemplateWithOptions(const ApplyFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyFirewallTemplate"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyFirewallTemplateResponse>();
}

/**
 * @summary Applies a firewall template to configure firewall rules for multiple Simple Application Server instances at a time to improve configuration efficiency.
 *
 * @description If the port, protocol, or IP address of a firewall rule in the firewall template duplicates an existing rule of the instance, the new rule overwrites the existing rule regardless of whether the existing rule is enabled or disabled.
 *
 * @param request ApplyFirewallTemplateRequest
 * @return ApplyFirewallTemplateResponse
 */
ApplyFirewallTemplateResponse Client::applyFirewallTemplate(const ApplyFirewallTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyFirewallTemplateWithOptions(request, runtime);
}

/**
 * @summary Attaches a key pair to a simple application server.
 *
 * @description You can attach only one key pair to a simple application server in the console. If the selected simple application server is already attached to another key pair, the new key pair overwrites the existing one.
 *
 * @param request AttachKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachKeyPairResponse
 */
AttachKeyPairResponse Client::attachKeyPairWithOptions(const AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachKeyPairResponse>();
}

/**
 * @summary Attaches a key pair to a simple application server.
 *
 * @description You can attach only one key pair to a simple application server in the console. If the selected simple application server is already attached to another key pair, the new key pair overwrites the existing one.
 *
 * @param request AttachKeyPairRequest
 * @return AttachKeyPairResponse
 */
AttachKeyPairResponse Client::attachKeyPair(const AttachKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachKeyPairWithOptions(request, runtime);
}

/**
 * @summary Creates a Cloud Assistant command.
 *
 * @param request CreateCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCommandResponse
 */
CreateCommandResponse Client::createCommandWithOptions(const CreateCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableParameter()) {
    query["EnableParameter"] = request.getEnableParameter();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWorkingDir()) {
    query["WorkingDir"] = request.getWorkingDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCommand"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCommandResponse>();
}

/**
 * @summary Creates a Cloud Assistant command.
 *
 * @param request CreateCommandRequest
 * @return CreateCommandResponse
 */
CreateCommandResponse Client::createCommand(const CreateCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCommandWithOptions(request, runtime);
}

/**
 * @summary Creates a custom image from a snapshot.
 *
 * @description A custom image is an image that you create from a snapshot of a Simple Application Server. You can use a configured custom image to create more Simple Application Servers with the same configurations. You can also share the custom image to Elastic Computing Service to create ECS instances or replace operating systems by using the shared image. For more information about custom images, see [Custom image overview](https://help.aliyun.com/document_detail/199375.html).
 * Before you create a custom image, you must create a system disk snapshot for the Simple Application Server. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
 * > If you want to include data disk data in the custom image, create a data disk snapshot for the server first.
 * Before you create a custom image, take note of the following items:
 * - The custom image is created in the same region as the Simple Application Server.
 * - The maximum number of custom images that you can create is three times the number of Simple Application Servers that you have created, up to a maximum of 15.
 * - Only system disk snapshots can be directly used to create custom images. If you want to include data disk data in the custom image, you must manually select the corresponding data disk snapshot during the creation process.
 * - If a Simple Application Server is released due to expiration or refund, the custom images created from the server are also released.
 * - Resetting the system or replacing the image clears the disk data on the server. Back up your data as needed.
 *
 * @param request CreateCustomImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomImageResponse
 */
CreateCustomImageResponse Client::createCustomImageWithOptions(const CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataSnapshotId()) {
    query["DataSnapshotId"] = request.getDataSnapshotId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSystemSnapshotId()) {
    query["SystemSnapshotId"] = request.getSystemSnapshotId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomImage"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomImageResponse>();
}

/**
 * @summary Creates a custom image from a snapshot.
 *
 * @description A custom image is an image that you create from a snapshot of a Simple Application Server. You can use a configured custom image to create more Simple Application Servers with the same configurations. You can also share the custom image to Elastic Computing Service to create ECS instances or replace operating systems by using the shared image. For more information about custom images, see [Custom image overview](https://help.aliyun.com/document_detail/199375.html).
 * Before you create a custom image, you must create a system disk snapshot for the Simple Application Server. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
 * > If you want to include data disk data in the custom image, create a data disk snapshot for the server first.
 * Before you create a custom image, take note of the following items:
 * - The custom image is created in the same region as the Simple Application Server.
 * - The maximum number of custom images that you can create is three times the number of Simple Application Servers that you have created, up to a maximum of 15.
 * - Only system disk snapshots can be directly used to create custom images. If you want to include data disk data in the custom image, you must manually select the corresponding data disk snapshot during the creation process.
 * - If a Simple Application Server is released due to expiration or refund, the custom images created from the server are also released.
 * - Resetting the system or replacing the image clears the disk data on the server. Back up your data as needed.
 *
 * @param request CreateCustomImageRequest
 * @return CreateCustomImageResponse
 */
CreateCustomImageResponse Client::createCustomImage(const CreateCustomImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomImageWithOptions(request, runtime);
}

/**
 * @summary Creates a firewall rule for a specified simple application server.
 *
 * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
 *
 * @param request CreateFirewallRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFirewallRuleResponse
 */
CreateFirewallRuleResponse Client::createFirewallRuleWithOptions(const CreateFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasRuleProtocol()) {
    query["RuleProtocol"] = request.getRuleProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFirewallRule"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFirewallRuleResponse>();
}

/**
 * @summary Creates a firewall rule for a specified simple application server.
 *
 * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
 *
 * @param request CreateFirewallRuleRequest
 * @return CreateFirewallRuleResponse
 */
CreateFirewallRuleResponse Client::createFirewallRule(const CreateFirewallRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFirewallRuleWithOptions(request, runtime);
}

/**
 * @summary Creates multiple firewall rules for a specified simple application server.
 *
 * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
 *
 * @param tmpReq CreateFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFirewallRulesResponse
 */
CreateFirewallRulesResponse Client::createFirewallRulesWithOptions(const CreateFirewallRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFirewallRulesShrinkRequest request = CreateFirewallRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFirewallRules()) {
    request.setFirewallRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFirewallRules(), "FirewallRules", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallRulesShrink()) {
    query["FirewallRules"] = request.getFirewallRulesShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFirewallRules"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFirewallRulesResponse>();
}

/**
 * @summary Creates multiple firewall rules for a specified simple application server.
 *
 * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
 *
 * @param request CreateFirewallRulesRequest
 * @return CreateFirewallRulesResponse
 */
CreateFirewallRulesResponse Client::createFirewallRules(const CreateFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a firewall template.
 *
 * @description A firewall template allows you to group multiple firewall rules. You can use a template to add a set of firewall rules to one or more instances simultaneously, improving the efficiency of configuring firewall rules.
 *
 * @param request CreateFirewallTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFirewallTemplateResponse
 */
CreateFirewallTemplateResponse Client::createFirewallTemplateWithOptions(const CreateFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFirewallRule()) {
    query["FirewallRule"] = request.getFirewallRule();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFirewallTemplate"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFirewallTemplateResponse>();
}

/**
 * @summary Creates a firewall template.
 *
 * @description A firewall template allows you to group multiple firewall rules. You can use a template to add a set of firewall rules to one or more instances simultaneously, improving the efficiency of configuring firewall rules.
 *
 * @param request CreateFirewallTemplateRequest
 * @return CreateFirewallTemplateResponse
 */
CreateFirewallTemplateResponse Client::createFirewallTemplate(const CreateFirewallTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFirewallTemplateWithOptions(request, runtime);
}

/**
 * @summary Adds firewall rules to a firewall template.
 *
 * @description Adding rules to a firewall template does not affect the rules of instances to which the template is applied.
 *
 * @param request CreateFirewallTemplateRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFirewallTemplateRulesResponse
 */
CreateFirewallTemplateRulesResponse Client::createFirewallTemplateRulesWithOptions(const CreateFirewallTemplateRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallRule()) {
    query["FirewallRule"] = request.getFirewallRule();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFirewallTemplateRules"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFirewallTemplateRulesResponse>();
}

/**
 * @summary Adds firewall rules to a firewall template.
 *
 * @description Adding rules to a firewall template does not affect the rules of instances to which the template is applied.
 *
 * @param request CreateFirewallTemplateRulesRequest
 * @return CreateFirewallTemplateRulesResponse
 */
CreateFirewallTemplateRulesResponse Client::createFirewallTemplateRules(const CreateFirewallTemplateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFirewallTemplateRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a key pair for a simple application server.
 *
 * @param request CreateInstanceKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceKeyPairResponse
 */
CreateInstanceKeyPairResponse Client::createInstanceKeyPairWithOptions(const CreateInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceKeyPairResponse>();
}

/**
 * @summary Creates a key pair for a simple application server.
 *
 * @param request CreateInstanceKeyPairRequest
 * @return CreateInstanceKeyPairResponse
 */
CreateInstanceKeyPairResponse Client::createInstanceKeyPair(const CreateInstanceKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceKeyPairWithOptions(request, runtime);
}

/**
 * @summary Creates one or more subscription Simple Application Server instances.
 *
 * @description <props="china">
 * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
 * - For each Alibaba Cloud account, the total number of Simple Application Server, Simple Application Server load balancing, Simple Container Service, and Simple Database Service instances that you can purchase in a single region is limited to 50.
 * - When you call this operation to create instances, make sure that your Alibaba Cloud account balance is sufficient. Otherwise, the creation fails.
 * <props="intl">
 * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
 * - For each Alibaba Cloud account, the maximum number of Simple Application Server instances that you can purchase in a single region is 50.
 * - When you call this operation to create instances, make sure that the default payment method of your account can cover the required fees. Otherwise, the creation fails.
 *
 * @param request CreateInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstancesResponse
 */
CreateInstancesResponse Client::createInstancesWithOptions(const CreateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstancesResponse>();
}

/**
 * @summary Creates one or more subscription Simple Application Server instances.
 *
 * @description <props="china">
 * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
 * - For each Alibaba Cloud account, the total number of Simple Application Server, Simple Application Server load balancing, Simple Container Service, and Simple Database Service instances that you can purchase in a single region is limited to 50.
 * - When you call this operation to create instances, make sure that your Alibaba Cloud account balance is sufficient. Otherwise, the creation fails.
 * <props="intl">
 * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
 * - For each Alibaba Cloud account, the maximum number of Simple Application Server instances that you can purchase in a single region is 50.
 * - When you call this operation to create instances, make sure that the default payment method of your account can cover the required fees. Otherwise, the creation fails.
 *
 * @param request CreateInstancesRequest
 * @return CreateInstancesResponse
 */
CreateInstancesResponse Client::createInstances(const CreateInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstancesWithOptions(request, runtime);
}

/**
 * @summary Creates a key pair for a simple application server.
 *
 * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and help you meet business requirements for higher security and convenience.
 * - You can configure key pair-based logon only for simple application servers that run Linux.
 * - You can create up to 10 key pairs in a region within an Alibaba Cloud account.
 * - The console supports only the creation of RSA 2048-bit key pairs.
 *
 * @param request CreateKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPairWithOptions(const CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKeyPairResponse>();
}

/**
 * @summary Creates a key pair for a simple application server.
 *
 * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and help you meet business requirements for higher security and convenience.
 * - You can configure key pair-based logon only for simple application servers that run Linux.
 * - You can create up to 10 key pairs in a region within an Alibaba Cloud account.
 * - The console supports only the creation of RSA 2048-bit key pairs.
 *
 * @param request CreateKeyPairRequest
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPair(const CreateKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKeyPairWithOptions(request, runtime);
}

/**
 * @summary Queries the pricing information of Simple Application Server.
 *
 * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and meet your business requirements for higher security and convenience.
 * - Only Simple Application Server instances that run Linux support SSH key pair logon.
 * - You can create up to 10 SSH key pairs in a region within an Alibaba Cloud account.
 * - The console supports only the creation of RSA 2048-bit key pairs.
 *
 * @param request CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderResponse>();
}

/**
 * @summary Queries the pricing information of Simple Application Server.
 *
 * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and meet your business requirements for higher security and convenience.
 * - Only Simple Application Server instances that run Linux support SSH key pair logon.
 * - You can create up to 10 SSH key pairs in a region within an Alibaba Cloud account.
 * - The console supports only the creation of RSA 2048-bit key pairs.
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a snapshot for a specified disk.
 *
 * @description A snapshot is a backup file of the disk data state at a specific point in time. Snapshots are commonly used for daily data backup, recovery from accidental data operations on servers, recovery from network attacks, and creation of custom images.
 * > Creating snapshots for Simple Application Server is free of charge.
 * ### Precautions
 * - You can create up to three snapshots for a single Simple Application Server instance.
 * - The maximum number of snapshots that an Alibaba Cloud account can create is three times the number of Simple Application Server instances created, up to a maximum of 15.
 * - If a server is released upon expiration, the snapshots associated with the server are deleted.
 * - Snapshots created before a system reset or image replacement are retained after the operation, but they cannot be used for rollback.
 *
 * @param request CreateSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Creates a snapshot for a specified disk.
 *
 * @description A snapshot is a backup file of the disk data state at a specific point in time. Snapshots are commonly used for daily data backup, recovery from accidental data operations on servers, recovery from network attacks, and creation of custom images.
 * > Creating snapshots for Simple Application Server is free of charge.
 * ### Precautions
 * - You can create up to three snapshots for a single Simple Application Server instance.
 * - The maximum number of snapshots that an Alibaba Cloud account can create is three times the number of Simple Application Server instances created, up to a maximum of 15.
 * - If a server is released upon expiration, the snapshots associated with the server are deleted.
 * - Snapshots created before a system reset or image replacement are retained after the operation, but they cannot be used for rollback.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnapshotWithOptions(request, runtime);
}

/**
 * @summary Deletes a command.
 *
 * @description You cannot delete a command that is being executed.
 *
 * @param request DeleteCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCommandResponse
 */
DeleteCommandResponse Client::deleteCommandWithOptions(const DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCommand"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCommandResponse>();
}

/**
 * @summary Deletes a command.
 *
 * @description You cannot delete a command that is being executed.
 *
 * @param request DeleteCommandRequest
 * @return DeleteCommandResponse
 */
DeleteCommandResponse Client::deleteCommand(const DeleteCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCommandWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified custom image.
 *
 * @description If you no longer need a custom image, you can delete it. After a custom image is deleted, simple application servers created from the image cannot use it to reset their systems.
 * > If the custom image is a shared image, you must unshare the shared image before you delete it. After you unshare the shared image, you can no longer query the custom image in the Elastic Compute Service (ECS) console or by calling ECS API operations. If you still need to use the image in ECS, copy the image before you delete it. For more information, see [Copy an image](https://help.aliyun.com/document_detail/199378.html).
 *
 * @param request DeleteCustomImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomImageResponse
 */
DeleteCustomImageResponse Client::deleteCustomImageWithOptions(const DeleteCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomImage"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomImageResponse>();
}

/**
 * @summary Deletes a specified custom image.
 *
 * @description If you no longer need a custom image, you can delete it. After a custom image is deleted, simple application servers created from the image cannot use it to reset their systems.
 * > If the custom image is a shared image, you must unshare the shared image before you delete it. After you unshare the shared image, you can no longer query the custom image in the Elastic Compute Service (ECS) console or by calling ECS API operations. If you still need to use the image in ECS, copy the image before you delete it. For more information, see [Copy an image](https://help.aliyun.com/document_detail/199378.html).
 *
 * @param request DeleteCustomImageRequest
 * @return DeleteCustomImageResponse
 */
DeleteCustomImageResponse Client::deleteCustomImage(const DeleteCustomImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomImageWithOptions(request, runtime);
}

/**
 * @summary Deletes custom images in batches. After a custom image is deleted, simple application servers created from the image cannot use it to reset the system.
 *
 * @description If a custom image is being shared, you must unshare the shared image before you delete the custom image. After the shared image is unshared, you cannot query the custom image in the Elastic Computing Service console or by calling Elastic Computing Service API operations. If you still need to use the image on an Elastic Computing Service server, we recommend that you perform image replication before you delete the custom image. For more information, see [Image replication](https://help.aliyun.com/document_detail/199378.html).
 *
 * @param request DeleteCustomImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomImagesResponse
 */
DeleteCustomImagesResponse Client::deleteCustomImagesWithOptions(const DeleteCustomImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomImages"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomImagesResponse>();
}

/**
 * @summary Deletes custom images in batches. After a custom image is deleted, simple application servers created from the image cannot use it to reset the system.
 *
 * @description If a custom image is being shared, you must unshare the shared image before you delete the custom image. After the shared image is unshared, you cannot query the custom image in the Elastic Computing Service console or by calling Elastic Computing Service API operations. If you still need to use the image on an Elastic Computing Service server, we recommend that you perform image replication before you delete the custom image. For more information, see [Image replication](https://help.aliyun.com/document_detail/199378.html).
 *
 * @param request DeleteCustomImagesRequest
 * @return DeleteCustomImagesResponse
 */
DeleteCustomImagesResponse Client::deleteCustomImages(const DeleteCustomImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomImagesWithOptions(request, runtime);
}

/**
 * @summary Deletes a firewall rule of a specified simple application server.
 *
 * @description After you delete a firewall rule of a specified simple application server, services may become inaccessible. Make sure that the simple application server instance no longer requires the firewall rule before you delete it.
 *
 * @param request DeleteFirewallRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallRuleResponse
 */
DeleteFirewallRuleResponse Client::deleteFirewallRuleWithOptions(const DeleteFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallRule"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallRuleResponse>();
}

/**
 * @summary Deletes a firewall rule of a specified simple application server.
 *
 * @description After you delete a firewall rule of a specified simple application server, services may become inaccessible. Make sure that the simple application server instance no longer requires the firewall rule before you delete it.
 *
 * @param request DeleteFirewallRuleRequest
 * @return DeleteFirewallRuleResponse
 */
DeleteFirewallRuleResponse Client::deleteFirewallRule(const DeleteFirewallRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple firewall rules of a simple application server.
 *
 * @description After a firewall rule is deleted, your business deployed on the simple application server may become inaccessible. Before you delete a firewall rule, make sure that the firewall rule is no longer needed by the simple application server.
 *
 * @param tmpReq DeleteFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallRulesResponse
 */
DeleteFirewallRulesResponse Client::deleteFirewallRulesWithOptions(const DeleteFirewallRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteFirewallRulesShrinkRequest request = DeleteFirewallRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRuleIds()) {
    request.setRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleIds(), "RuleIds", "simple"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleIdsShrink()) {
    query["RuleIds"] = request.getRuleIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallRules"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallRulesResponse>();
}

/**
 * @summary Deletes multiple firewall rules of a simple application server.
 *
 * @description After a firewall rule is deleted, your business deployed on the simple application server may become inaccessible. Before you delete a firewall rule, make sure that the firewall rule is no longer needed by the simple application server.
 *
 * @param request DeleteFirewallRulesRequest
 * @return DeleteFirewallRulesResponse
 */
DeleteFirewallRulesResponse Client::deleteFirewallRules(const DeleteFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes firewall rules from a firewall template based on your requirements.
 *
 * @description Deletion of firewall rules does not affect the firewall rules that have been applied to simple application servers.
 *
 * @param request DeleteFirewallTemplateRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallTemplateRulesResponse
 */
DeleteFirewallTemplateRulesResponse Client::deleteFirewallTemplateRulesWithOptions(const DeleteFirewallTemplateRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasFirewallTemplateRuleId()) {
    query["FirewallTemplateRuleId"] = request.getFirewallTemplateRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallTemplateRules"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallTemplateRulesResponse>();
}

/**
 * @summary Deletes firewall rules from a firewall template based on your requirements.
 *
 * @description Deletion of firewall rules does not affect the firewall rules that have been applied to simple application servers.
 *
 * @param request DeleteFirewallTemplateRulesRequest
 * @return DeleteFirewallTemplateRulesResponse
 */
DeleteFirewallTemplateRulesResponse Client::deleteFirewallTemplateRules(const DeleteFirewallTemplateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallTemplateRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes firewall templates from a simple application server.
 *
 * @description Deleting a firewall template does not affect the firewall rules that have been applied to simple application servers. You can delete firewall templates that you no longer need.
 *
 * @param request DeleteFirewallTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallTemplatesResponse
 */
DeleteFirewallTemplatesResponse Client::deleteFirewallTemplatesWithOptions(const DeleteFirewallTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallTemplates"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallTemplatesResponse>();
}

/**
 * @summary Deletes firewall templates from a simple application server.
 *
 * @description Deleting a firewall template does not affect the firewall rules that have been applied to simple application servers. You can delete firewall templates that you no longer need.
 *
 * @param request DeleteFirewallTemplatesRequest
 * @return DeleteFirewallTemplatesResponse
 */
DeleteFirewallTemplatesResponse Client::deleteFirewallTemplates(const DeleteFirewallTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallTemplatesWithOptions(request, runtime);
}

/**
 * @summary Deletes the key pair of a simple application server.
 *
 * @param request DeleteInstanceKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceKeyPairResponse
 */
DeleteInstanceKeyPairResponse Client::deleteInstanceKeyPairWithOptions(const DeleteInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "DeleteInstanceKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceKeyPairResponse>();
}

/**
 * @summary Deletes the key pair of a simple application server.
 *
 * @param request DeleteInstanceKeyPairRequest
 * @return DeleteInstanceKeyPairResponse
 */
DeleteInstanceKeyPairResponse Client::deleteInstanceKeyPair(const DeleteInstanceKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceKeyPairWithOptions(request, runtime);
}

/**
 * @summary Deletes the SSH key pairs of simple application servers.
 *
 * @description You must unbind SSH key pairs that you no longer use from simple application servers before you delete the SSH key pairs.
 *
 * @param request DeleteKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairsWithOptions(const DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasKeyPairNames()) {
    query["KeyPairNames"] = request.getKeyPairNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKeyPairs"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeyPairsResponse>();
}

/**
 * @summary Deletes the SSH key pairs of simple application servers.
 *
 * @description You must unbind SSH key pairs that you no longer use from simple application servers before you delete the SSH key pairs.
 *
 * @param request DeleteKeyPairsRequest
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairs(const DeleteKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeyPairsWithOptions(request, runtime);
}

/**
 * @summary Deletes a snapshot of a simple application server.
 *
 * @description You can delete a snapshot if you no longer need it.
 * > If a custom image was created from the snapshot, delete the custom image before you delete the snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Deletes a snapshot of a simple application server.
 *
 * @description You can delete a snapshot if you no longer need it.
 * > If a custom image was created from the snapshot, delete the custom image before you delete the snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary Deletes snapshots of a simple application server.
 *
 * @param request DeleteSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotsResponse
 */
DeleteSnapshotsResponse Client::deleteSnapshotsWithOptions(const DeleteSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotIds()) {
    query["SnapshotIds"] = request.getSnapshotIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshots"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotsResponse>();
}

/**
 * @summary Deletes snapshots of a simple application server.
 *
 * @param request DeleteSnapshotsRequest
 * @return DeleteSnapshotsResponse
 */
DeleteSnapshotsResponse Client::deleteSnapshots(const DeleteSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries the Cloud Assistant information of one or more instances.
 *
 * @param tmpReq DescribeCloudAssistantAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudAssistantAttributesResponse
 */
DescribeCloudAssistantAttributesResponse Client::describeCloudAssistantAttributesWithOptions(const DescribeCloudAssistantAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudAssistantAttributesShrinkRequest request = DescribeCloudAssistantAttributesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeCloudAssistantAttributes"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudAssistantAttributesResponse>();
}

/**
 * @summary Queries the Cloud Assistant information of one or more instances.
 *
 * @param request DescribeCloudAssistantAttributesRequest
 * @return DescribeCloudAssistantAttributesResponse
 */
DescribeCloudAssistantAttributesResponse Client::describeCloudAssistantAttributes(const DescribeCloudAssistantAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudAssistantAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries whether the Cloud Assistant client is installed on simple application servers.
 *
 * @description By default, the Cloud Assistant client is installed on simple application servers. If you have manually uninstalled the client, you must reinstall the client. Otherwise, you cannot run commands on the servers.
 *
 * @param tmpReq DescribeCloudAssistantStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudAssistantStatusResponse
 */
DescribeCloudAssistantStatusResponse Client::describeCloudAssistantStatusWithOptions(const DescribeCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudAssistantStatusShrinkRequest request = DescribeCloudAssistantStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeCloudAssistantStatus"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudAssistantStatusResponse>();
}

/**
 * @summary Queries whether the Cloud Assistant client is installed on simple application servers.
 *
 * @description By default, the Cloud Assistant client is installed on simple application servers. If you have manually uninstalled the client, you must reinstall the client. Otherwise, you cannot run commands on the servers.
 *
 * @param request DescribeCloudAssistantStatusRequest
 * @return DescribeCloudAssistantStatusResponse
 */
DescribeCloudAssistantStatusResponse Client::describeCloudAssistantStatus(const DescribeCloudAssistantStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudAssistantStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the CloudMonitor agent on simple application servers.
 *
 * @param request DescribeCloudMonitorAgentStatusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudMonitorAgentStatusesResponse
 */
DescribeCloudMonitorAgentStatusesResponse Client::describeCloudMonitorAgentStatusesWithOptions(const DescribeCloudMonitorAgentStatusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudMonitorAgentStatuses"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudMonitorAgentStatusesResponse>();
}

/**
 * @summary Queries the status of the CloudMonitor agent on simple application servers.
 *
 * @param request DescribeCloudMonitorAgentStatusesRequest
 * @return DescribeCloudMonitorAgentStatusesResponse
 */
DescribeCloudMonitorAgentStatusesResponse Client::describeCloudMonitorAgentStatuses(const DescribeCloudMonitorAgentStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudMonitorAgentStatusesWithOptions(request, runtime);
}

/**
 * @summary Queries the list and status of commands run by Cloud Assistant.
 *
 * @param request DescribeCommandInvocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommandInvocationsResponse
 */
DescribeCommandInvocationsResponse Client::describeCommandInvocationsWithOptions(const DescribeCommandInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasCommandName()) {
    query["CommandName"] = request.getCommandName();
  }

  if (!!request.hasCommandType()) {
    query["CommandType"] = request.getCommandType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInvocationStatus()) {
    query["InvocationStatus"] = request.getInvocationStatus();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeCommandInvocations"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommandInvocationsResponse>();
}

/**
 * @summary Queries the list and status of commands run by Cloud Assistant.
 *
 * @param request DescribeCommandInvocationsRequest
 * @return DescribeCommandInvocationsResponse
 */
DescribeCommandInvocationsResponse Client::describeCommandInvocations(const DescribeCommandInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommandInvocationsWithOptions(request, runtime);
}

/**
 * @summary Queries commands that you manually created or public commands provided by Alibaba Cloud.
 *
 * @param request DescribeCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommandsResponse
 */
DescribeCommandsResponse Client::describeCommandsWithOptions(const DescribeCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.getProvider();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommands"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommandsResponse>();
}

/**
 * @summary Queries commands that you manually created or public commands provided by Alibaba Cloud.
 *
 * @param request DescribeCommandsRequest
 * @return DescribeCommandsResponse
 */
DescribeCommandsResponse Client::describeCommands(const DescribeCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommandsWithOptions(request, runtime);
}

/**
 * @summary Queries the error logs of a lightweight database instance.
 *
 * @description Use this operation to query the error logs of a lightweight database instance to identify and troubleshoot issues.
 *
 * @param request DescribeDatabaseErrorLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseErrorLogsResponse
 */
DescribeDatabaseErrorLogsResponse Client::describeDatabaseErrorLogsWithOptions(const DescribeDatabaseErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabaseErrorLogs"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseErrorLogsResponse>();
}

/**
 * @summary Queries the error logs of a lightweight database instance.
 *
 * @description Use this operation to query the error logs of a lightweight database instance to identify and troubleshoot issues.
 *
 * @param request DescribeDatabaseErrorLogsRequest
 * @return DescribeDatabaseErrorLogsResponse
 */
DescribeDatabaseErrorLogsResponse Client::describeDatabaseErrorLogs(const DescribeDatabaseErrorLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseErrorLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves monitoring metrics for a lightweight database instance.
 *
 * @description After you create a lightweight database instance, you can retrieve its detailed monitoring metrics. These metrics include CPU and memory usage, disk space, IOPS (Input/Output Operations Per Second), and the number of connections.
 *
 * @param request DescribeDatabaseInstanceMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseInstanceMetricDataResponse
 */
DescribeDatabaseInstanceMetricDataResponse Client::describeDatabaseInstanceMetricDataWithOptions(const DescribeDatabaseInstanceMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabaseInstanceMetricData"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseInstanceMetricDataResponse>();
}

/**
 * @summary Retrieves monitoring metrics for a lightweight database instance.
 *
 * @description After you create a lightweight database instance, you can retrieve its detailed monitoring metrics. These metrics include CPU and memory usage, disk space, IOPS (Input/Output Operations Per Second), and the number of connections.
 *
 * @param request DescribeDatabaseInstanceMetricDataRequest
 * @return DescribeDatabaseInstanceMetricDataResponse
 */
DescribeDatabaseInstanceMetricDataResponse Client::describeDatabaseInstanceMetricData(const DescribeDatabaseInstanceMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseInstanceMetricDataWithOptions(request, runtime);
}

/**
 * @summary View parameters for a lightweight database instance.
 *
 * @description This operation retrieves the parameter details of a lightweight database instance.
 *
 * @param request DescribeDatabaseInstanceParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseInstanceParametersResponse
 */
DescribeDatabaseInstanceParametersResponse Client::describeDatabaseInstanceParametersWithOptions(const DescribeDatabaseInstanceParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabaseInstanceParameters"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseInstanceParametersResponse>();
}

/**
 * @summary View parameters for a lightweight database instance.
 *
 * @description This operation retrieves the parameter details of a lightweight database instance.
 *
 * @param request DescribeDatabaseInstanceParametersRequest
 * @return DescribeDatabaseInstanceParametersResponse
 */
DescribeDatabaseInstanceParametersResponse Client::describeDatabaseInstanceParameters(const DescribeDatabaseInstanceParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseInstanceParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the details of lightweight database instances.
 *
 * @description Queries the details of one or more lightweight database instances in a specified region, including the instance ID, name, plan, database version, public endpoint, internal endpoint, creation time, and expiration time.
 *
 * @param request DescribeDatabaseInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseInstancesResponse
 */
DescribeDatabaseInstancesResponse Client::describeDatabaseInstancesWithOptions(const DescribeDatabaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseInstanceIds()) {
    query["DatabaseInstanceIds"] = request.getDatabaseInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeDatabaseInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseInstancesResponse>();
}

/**
 * @summary Queries the details of lightweight database instances.
 *
 * @description Queries the details of one or more lightweight database instances in a specified region, including the instance ID, name, plan, database version, public endpoint, internal endpoint, creation time, and expiration time.
 *
 * @param request DescribeDatabaseInstancesRequest
 * @return DescribeDatabaseInstancesResponse
 */
DescribeDatabaseInstancesResponse Client::describeDatabaseInstances(const DescribeDatabaseInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves slow log details for Simple Database Service.
 *
 * @description You can query the slow logs of a Simple Database Service instance to diagnose issues.
 * > Simple Database Service retains slow logs for 7 days.
 *
 * @param request DescribeDatabaseSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseSlowLogRecordsResponse
 */
DescribeDatabaseSlowLogRecordsResponse Client::describeDatabaseSlowLogRecordsWithOptions(const DescribeDatabaseSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabaseSlowLogRecords"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseSlowLogRecordsResponse>();
}

/**
 * @summary Retrieves slow log details for Simple Database Service.
 *
 * @description You can query the slow logs of a Simple Database Service instance to diagnose issues.
 * > Simple Database Service retains slow logs for 7 days.
 *
 * @param request DescribeDatabaseSlowLogRecordsRequest
 * @return DescribeDatabaseSlowLogRecordsResponse
 */
DescribeDatabaseSlowLogRecordsResponse Client::describeDatabaseSlowLogRecords(const DescribeDatabaseSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the results of applying a firewall template to instances.
 *
 * @param request DescribeFirewallTemplateApplyResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTemplateApplyResultsResponse
 */
DescribeFirewallTemplateApplyResultsResponse Client::describeFirewallTemplateApplyResultsWithOptions(const DescribeFirewallTemplateApplyResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallTemplateApplyResults"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallTemplateApplyResultsResponse>();
}

/**
 * @summary Queries the results of applying a firewall template to instances.
 *
 * @param request DescribeFirewallTemplateApplyResultsRequest
 * @return DescribeFirewallTemplateApplyResultsResponse
 */
DescribeFirewallTemplateApplyResultsResponse Client::describeFirewallTemplateApplyResults(const DescribeFirewallTemplateApplyResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTemplateApplyResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the result of applying a firewall template rule to simple application servers.
 *
 * @param request DescribeFirewallTemplateRulesApplyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTemplateRulesApplyResultResponse
 */
DescribeFirewallTemplateRulesApplyResultResponse Client::describeFirewallTemplateRulesApplyResultWithOptions(const DescribeFirewallTemplateRulesApplyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallTemplateRulesApplyResult"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallTemplateRulesApplyResultResponse>();
}

/**
 * @summary Queries the result of applying a firewall template rule to simple application servers.
 *
 * @param request DescribeFirewallTemplateRulesApplyResultRequest
 * @return DescribeFirewallTemplateRulesApplyResultResponse
 */
DescribeFirewallTemplateRulesApplyResultResponse Client::describeFirewallTemplateRulesApplyResult(const DescribeFirewallTemplateRulesApplyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTemplateRulesApplyResultWithOptions(request, runtime);
}

/**
 * @summary Queries details about firewall templates.
 *
 * @param request DescribeFirewallTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTemplatesResponse
 */
DescribeFirewallTemplatesResponse Client::describeFirewallTemplatesWithOptions(const DescribeFirewallTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeFirewallTemplates"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallTemplatesResponse>();
}

/**
 * @summary Queries details about firewall templates.
 *
 * @param request DescribeFirewallTemplatesRequest
 * @return DescribeFirewallTemplatesResponse
 */
DescribeFirewallTemplatesResponse Client::describeFirewallTemplates(const DescribeFirewallTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries information about the key pair of a simple application server.
 *
 * @param request DescribeInstanceKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceKeyPairResponse
 */
DescribeInstanceKeyPairResponse Client::describeInstanceKeyPairWithOptions(const DescribeInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "DescribeInstanceKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceKeyPairResponse>();
}

/**
 * @summary Queries information about the key pair of a simple application server.
 *
 * @param request DescribeInstanceKeyPairRequest
 * @return DescribeInstanceKeyPairResponse
 */
DescribeInstanceKeyPairResponse Client::describeInstanceKeyPair(const DescribeInstanceKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceKeyPairWithOptions(request, runtime);
}

/**
 * @summary Checks whether a password is set for a simple application server.
 *
 * @param request DescribeInstancePasswordsSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancePasswordsSettingResponse
 */
DescribeInstancePasswordsSettingResponse Client::describeInstancePasswordsSettingWithOptions(const DescribeInstancePasswordsSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "DescribeInstancePasswordsSetting"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancePasswordsSettingResponse>();
}

/**
 * @summary Checks whether a password is set for a simple application server.
 *
 * @param request DescribeInstancePasswordsSettingRequest
 * @return DescribeInstancePasswordsSettingResponse
 */
DescribeInstancePasswordsSettingResponse Client::describeInstancePasswordsSetting(const DescribeInstancePasswordsSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancePasswordsSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the VNC connection address of a simple application server.
 *
 * @param request DescribeInstanceVncUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceVncUrlResponse
 */
DescribeInstanceVncUrlResponse Client::describeInstanceVncUrlWithOptions(const DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "DescribeInstanceVncUrl"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceVncUrlResponse>();
}

/**
 * @summary Queries the VNC connection address of a simple application server.
 *
 * @param request DescribeInstanceVncUrlRequest
 * @return DescribeInstanceVncUrlResponse
 */
DescribeInstanceVncUrlResponse Client::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceVncUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the execution result of a single command.
 *
 * @description - After you run a command, the command is not necessarily run successfully or achieves the expected results. Call this operation to view the actual execution result based on the actual output.
 * - You can query execution information from the last two weeks. A maximum of 100,000 entries of execution information can be retained.
 *
 * @param request DescribeInvocationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvocationResultResponse
 */
DescribeInvocationResultResponse Client::describeInvocationResultWithOptions(const DescribeInvocationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvocationResult"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvocationResultResponse>();
}

/**
 * @summary Queries the execution result of a single command.
 *
 * @description - After you run a command, the command is not necessarily run successfully or achieves the expected results. Call this operation to view the actual execution result based on the actual output.
 * - You can query execution information from the last two weeks. A maximum of 100,000 entries of execution information can be retained.
 *
 * @param request DescribeInvocationResultRequest
 * @return DescribeInvocationResultResponse
 */
DescribeInvocationResultResponse Client::describeInvocationResult(const DescribeInvocationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationResultWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a command.
 *
 * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the return values of this operation.
 * - You can query execution information from the last two weeks. A maximum of 100,000 execution records can be retained.
 *
 * @param request DescribeInvocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocationsWithOptions(const DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInvokeStatus()) {
    query["InvokeStatus"] = request.getInvokeStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "DescribeInvocations"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvocationsResponse>();
}

/**
 * @summary Queries the details of a command.
 *
 * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the return values of this operation.
 * - You can query execution information from the last two weeks. A maximum of 100,000 execution records can be retained.
 *
 * @param request DescribeInvocationsRequest
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocations(const DescribeInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationsWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring information about vCPUs, memory, disk IOPS, and traffic of a simple application server.
 *
 * @param request DescribeMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorDataResponse
 */
DescribeMonitorDataResponse Client::describeMonitorDataWithOptions(const DescribeMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorData"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorDataResponse>();
}

/**
 * @summary Queries the monitoring information about vCPUs, memory, disk IOPS, and traffic of a simple application server.
 *
 * @param request DescribeMonitorDataRequest
 * @return DescribeMonitorDataResponse
 */
DescribeMonitorDataResponse Client::describeMonitorData(const DescribeMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the pricing information of Simple Application Server.
 *
 * @description - After you run a command, it does not mean that the command is successfully run or produces the expected results. You must check the actual execution results based on the API response. The actual output prevails.
 * - You can query the execution information of the last two weeks. The maximum number of retained execution records is 100,000.
 *
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasCommodityType()) {
    query["CommodityType"] = request.getCommodityType();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasPriceUnit()) {
    query["PriceUnit"] = request.getPriceUnit();
  }

  if (!!request.hasPromotionOptions()) {
    query["PromotionOptions"] = request.getPromotionOptions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary Retrieves the pricing information of Simple Application Server.
 *
 * @description - After you run a command, it does not mean that the command is successfully run or produces the expected results. You must check the actual execution results based on the API response. The actual output prevails.
 * - You can query the execution information of the last two weeks. The maximum number of retained execution records is 100,000.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Security Center agent on a simple application server.
 *
 * @param request DescribeSecurityAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityAgentStatusResponse
 */
DescribeSecurityAgentStatusResponse Client::describeSecurityAgentStatusWithOptions(const DescribeSecurityAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "DescribeSecurityAgentStatus"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityAgentStatusResponse>();
}

/**
 * @summary Queries the status of the Security Center agent on a simple application server.
 *
 * @param request DescribeSecurityAgentStatusRequest
 * @return DescribeSecurityAgentStatusResponse
 */
DescribeSecurityAgentStatusResponse Client::describeSecurityAgentStatus(const DescribeSecurityAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityAgentStatusWithOptions(request, runtime);
}

/**
 * @summary Unbinds key pairs from simple application servers.
 *
 * @description If you want to change the SSH key pairs that are bound to your simple application servers or your end user no longer needs to access a specific simple application server, you can unbind the SSH key pairs from simple application servers to improve the security of the simple application servers or restrict access to the specific simple application server.
 *
 * @param request DetachKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachKeyPairResponse
 */
DetachKeyPairResponse Client::detachKeyPairWithOptions(const DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachKeyPairResponse>();
}

/**
 * @summary Unbinds key pairs from simple application servers.
 *
 * @description If you want to change the SSH key pairs that are bound to your simple application servers or your end user no longer needs to access a specific simple application server, you can unbind the SSH key pairs from simple application servers to improve the security of the simple application servers or restrict access to the specific simple application server.
 *
 * @param request DetachKeyPairRequest
 * @return DetachKeyPairResponse
 */
DetachKeyPairResponse Client::detachKeyPair(const DetachKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachKeyPairWithOptions(request, runtime);
}

/**
 * @summary Disables a firewall policy for a specified simple application server.
 *
 * @param request DisableFirewallRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableFirewallRuleResponse
 */
DisableFirewallRuleResponse Client::disableFirewallRuleWithOptions(const DisableFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableFirewallRule"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableFirewallRuleResponse>();
}

/**
 * @summary Disables a firewall policy for a specified simple application server.
 *
 * @param request DisableFirewallRuleRequest
 * @return DisableFirewallRuleResponse
 */
DisableFirewallRuleResponse Client::disableFirewallRule(const DisableFirewallRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableFirewallRuleWithOptions(request, runtime);
}

/**
 * @summary Enables a firewall policy for a specified simple application server.
 *
 * @param request EnableFirewallRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFirewallRuleResponse
 */
EnableFirewallRuleResponse Client::enableFirewallRuleWithOptions(const EnableFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableFirewallRule"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableFirewallRuleResponse>();
}

/**
 * @summary Enables a firewall policy for a specified simple application server.
 *
 * @param request EnableFirewallRuleRequest
 * @return EnableFirewallRuleResponse
 */
EnableFirewallRuleResponse Client::enableFirewallRule(const EnableFirewallRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableFirewallRuleWithOptions(request, runtime);
}

/**
 * @summary Imports an existing key pair.
 *
 * @description You can import an existing key pair to the console to log on to your Simple Application Server instances. The key pair must use a supported encryption method. For more information, see [Q2: What encryption methods are supported for importing an existing key pair?](https://help.aliyun.com/document_detail/59085.html).
 *
 * @param request ImportKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPairWithOptions(const ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPublicKeyBody()) {
    query["PublicKeyBody"] = request.getPublicKeyBody();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportKeyPairResponse>();
}

/**
 * @summary Imports an existing key pair.
 *
 * @description You can import an existing key pair to the console to log on to your Simple Application Server instances. The key pair must use a supported encryption method. For more information, see [Q2: What encryption methods are supported for importing an existing key pair?](https://help.aliyun.com/document_detail/59085.html).
 *
 * @param request ImportKeyPairRequest
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPair(const ImportKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importKeyPairWithOptions(request, runtime);
}

/**
 * @summary Installs the Cloud Assistant client on simple application servers at a time.
 *
 * @description To run commands on your simple application servers, you must install the Cloud Assistant client on your servers. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/439512.html) operation to check whether the Cloud Assistant client is installed on your simple application servers. If you have not installed the Cloud Assistant client, you can call the InstallCloudAssistant operation to install the client. Then, you can call the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation to restart the servers to allow the client to take effect.
 *
 * @param tmpReq InstallCloudAssistantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallCloudAssistantResponse
 */
InstallCloudAssistantResponse Client::installCloudAssistantWithOptions(const InstallCloudAssistantRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallCloudAssistantShrinkRequest request = InstallCloudAssistantShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallCloudAssistant"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallCloudAssistantResponse>();
}

/**
 * @summary Installs the Cloud Assistant client on simple application servers at a time.
 *
 * @description To run commands on your simple application servers, you must install the Cloud Assistant client on your servers. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/439512.html) operation to check whether the Cloud Assistant client is installed on your simple application servers. If you have not installed the Cloud Assistant client, you can call the InstallCloudAssistant operation to install the client. Then, you can call the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation to restart the servers to allow the client to take effect.
 *
 * @param request InstallCloudAssistantRequest
 * @return InstallCloudAssistantResponse
 */
InstallCloudAssistantResponse Client::installCloudAssistant(const InstallCloudAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installCloudAssistantWithOptions(request, runtime);
}

/**
 * @summary Installs the CloudMonitor agent for a simple application server.
 *
 * @param request InstallCloudMonitorAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallCloudMonitorAgentResponse
 */
InstallCloudMonitorAgentResponse Client::installCloudMonitorAgentWithOptions(const InstallCloudMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
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
    {"action" , "InstallCloudMonitorAgent"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallCloudMonitorAgentResponse>();
}

/**
 * @summary Installs the CloudMonitor agent for a simple application server.
 *
 * @param request InstallCloudMonitorAgentRequest
 * @return InstallCloudMonitorAgentResponse
 */
InstallCloudMonitorAgentResponse Client::installCloudMonitorAgent(const InstallCloudMonitorAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installCloudMonitorAgentWithOptions(request, runtime);
}

/**
 * @summary Runs a Command Assistant command for one or more simple application servers.
 *
 * @description *   The simple application servers for which you want to call the operation must meet the following conditions. If a simple application server cannot meet the conditions, you must call this operation again.
 *     *   The simple application servers are in the `Running` state. You can call the [ListInstances](https://help.aliyun.com/document_detail/2361065.html) operation to query the status of simple application servers.
 *     *   Cloud Assistant Agent is installed on the simple application servers. For more information, see [InstallCloudAssistant](https://help.aliyun.com/document_detail/2361030.html).
 *     *   If you run a PowerShell command, make sure that the PowerShell module is configured for the simple application servers.
 * *   The command may fail to be run due to the abnormal states of simple application servers, network exceptions, or exceptions in Cloud Assistant Agent. If the command fails to be run, no execution information is generated.
 * *   If you enable the custom parameter feature when you create a command, you must set the `Parameters` parameter to specify custom parameters when you run the command.
 * *   When you call this operation, you can select only one common command or a custom command that you have created.
 *
 * @param tmpReq InvokeCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeCommandResponse
 */
InvokeCommandResponse Client::invokeCommandWithOptions(const InvokeCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeCommandShrinkRequest request = InvokeCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
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
    {"action" , "InvokeCommand"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeCommandResponse>();
}

/**
 * @summary Runs a Command Assistant command for one or more simple application servers.
 *
 * @description *   The simple application servers for which you want to call the operation must meet the following conditions. If a simple application server cannot meet the conditions, you must call this operation again.
 *     *   The simple application servers are in the `Running` state. You can call the [ListInstances](https://help.aliyun.com/document_detail/2361065.html) operation to query the status of simple application servers.
 *     *   Cloud Assistant Agent is installed on the simple application servers. For more information, see [InstallCloudAssistant](https://help.aliyun.com/document_detail/2361030.html).
 *     *   If you run a PowerShell command, make sure that the PowerShell module is configured for the simple application servers.
 * *   The command may fail to be run due to the abnormal states of simple application servers, network exceptions, or exceptions in Cloud Assistant Agent. If the command fails to be run, no execution information is generated.
 * *   If you enable the custom parameter feature when you create a command, you must set the `Parameters` parameter to specify custom parameters when you run the command.
 * *   When you call this operation, you can select only one common command or a custom command that you have created.
 *
 * @param request InvokeCommandRequest
 * @return InvokeCommandResponse
 */
InvokeCommandResponse Client::invokeCommand(const InvokeCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invokeCommandWithOptions(request, runtime);
}

/**
 * @summary Calls the ListCustomImageShareAccounts operation to query information about cross-account shared images.
 *
 * @param request ListCustomImageShareAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomImageShareAccountsResponse
 */
ListCustomImageShareAccountsResponse Client::listCustomImageShareAccountsWithOptions(const ListCustomImageShareAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "ListCustomImageShareAccounts"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomImageShareAccountsResponse>();
}

/**
 * @summary Calls the ListCustomImageShareAccounts operation to query information about cross-account shared images.
 *
 * @param request ListCustomImageShareAccountsRequest
 * @return ListCustomImageShareAccountsResponse
 */
ListCustomImageShareAccountsResponse Client::listCustomImageShareAccounts(const ListCustomImageShareAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomImageShareAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries information about one or more custom images that have been created in a specified region.
 *
 * @param request ListCustomImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomImagesResponse
 */
ListCustomImagesResponse Client::listCustomImagesWithOptions(const ListCustomImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataSnapshotId()) {
    query["DataSnapshotId"] = request.getDataSnapshotId();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasImageNames()) {
    query["ImageNames"] = request.getImageNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasShare()) {
    query["Share"] = request.getShare();
  }

  if (!!request.hasSystemSnapshotId()) {
    query["SystemSnapshotId"] = request.getSystemSnapshotId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomImages"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomImagesResponse>();
}

/**
 * @summary Queries information about one or more custom images that have been created in a specified region.
 *
 * @param request ListCustomImagesRequest
 * @return ListCustomImagesResponse
 */
ListCustomImagesResponse Client::listCustomImages(const ListCustomImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomImagesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about disks in a region.
 *
 * @description The `InstanceId`, `DiskIds`, and `ResourceGroupId` parameters are optional. However, you can specify them as filter conditions and combine them with the logical AND operator to filter disks that you want to query.
 *
 * @param request ListDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDisksResponse
 */
ListDisksResponse Client::listDisksWithOptions(const ListDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskIds()) {
    query["DiskIds"] = request.getDiskIds();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDisks"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDisksResponse>();
}

/**
 * @summary Queries the information about disks in a region.
 *
 * @description The `InstanceId`, `DiskIds`, and `ResourceGroupId` parameters are optional. However, you can specify them as filter conditions and combine them with the logical AND operator to filter disks that you want to query.
 *
 * @param request ListDisksRequest
 * @return ListDisksResponse
 */
ListDisksResponse Client::listDisks(const ListDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDisksWithOptions(request, runtime);
}

/**
 * @summary Queries the firewall rules of a specified simple application server.
 *
 * @description You can call this API operation to query the firewall rules of a specified simple application server, including information such as the port range, firewall rule ID, and transport layer protocol.
 *
 * @param request ListFirewallRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFirewallRulesResponse
 */
ListFirewallRulesResponse Client::listFirewallRulesWithOptions(const ListFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallRuleId()) {
    query["FirewallRuleId"] = request.getFirewallRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFirewallRules"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFirewallRulesResponse>();
}

/**
 * @summary Queries the firewall rules of a specified simple application server.
 *
 * @description You can call this API operation to query the firewall rules of a specified simple application server, including information such as the port range, firewall rule ID, and transport layer protocol.
 *
 * @param request ListFirewallRulesRequest
 * @return ListFirewallRulesResponse
 */
ListFirewallRulesResponse Client::listFirewallRules(const ListFirewallRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFirewallRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about images in a region.
 *
 * @description You can query details about one or more images in a specified region, including the IDs, names, and types of the images.
 *
 * @param request ListImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.getImageType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary Queries the information about images in a region.
 *
 * @description You can query details about one or more images in a specified region, including the IDs, names, and types of the images.
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary This topic describes the list of plans to which a specified simple application server can be upgraded.
 *
 * @description As your business grows, the resources of a purchased server may no longer meet your requirements. Retrieve the list of plans to which the current server can be upgraded, then call the [UpgradeInstance](https://help.aliyun.com/document_detail/190445.html) to upgrade.
 * > We recommend that you create a snapshot of the disk of the server to back up data before you upgrade the instance. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
 * For more information about the limits on instance configuration upgrades, see [Upgrade instance configurations](https://help.aliyun.com/document_detail/61433.html).
 *
 * @param request ListInstancePlansModificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancePlansModificationResponse
 */
ListInstancePlansModificationResponse Client::listInstancePlansModificationWithOptions(const ListInstancePlansModificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListInstancePlansModification"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancePlansModificationResponse>();
}

/**
 * @summary This topic describes the list of plans to which a specified simple application server can be upgraded.
 *
 * @description As your business grows, the resources of a purchased server may no longer meet your requirements. Retrieve the list of plans to which the current server can be upgraded, then call the [UpgradeInstance](https://help.aliyun.com/document_detail/190445.html) to upgrade.
 * > We recommend that you create a snapshot of the disk of the server to back up data before you upgrade the instance. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
 * For more information about the limits on instance configuration upgrades, see [Upgrade instance configurations](https://help.aliyun.com/document_detail/61433.html).
 *
 * @param request ListInstancePlansModificationRequest
 * @return ListInstancePlansModificationResponse
 */
ListInstancePlansModificationResponse Client::listInstancePlansModification(const ListInstancePlansModificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancePlansModificationWithOptions(request, runtime);
}

/**
 * @summary Queries the status of simple application servers.
 *
 * @param request ListInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceStatusResponse
 */
ListInstanceStatusResponse Client::listInstanceStatusWithOptions(const ListInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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
    {"action" , "ListInstanceStatus"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceStatusResponse>();
}

/**
 * @summary Queries the status of simple application servers.
 *
 * @param request ListInstanceStatusRequest
 * @return ListInstanceStatusResponse
 */
ListInstanceStatusResponse Client::listInstanceStatus(const ListInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more instances in a specified region.
 *
 * @description Queries the details of one or more instances in a specified region, including the server name, public IP address, internal IP address, creation time, and expiration time.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlanType()) {
    query["PlanType"] = request.getPlanType();
  }

  if (!!request.hasPublicIpAddresses()) {
    query["PublicIpAddresses"] = request.getPublicIpAddresses();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries the details of one or more instances in a specified region.
 *
 * @description Queries the details of one or more instances in a specified region, including the server name, public IP address, internal IP address, creation time, and expiration time.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the details about data transfer plans of simple application servers.
 *
 * @description You can query the details of data transfer plans of simple application servers, including the total quota, used quota, unused quota, and excess data transfers in the current month.
 * Simple Application Server provides data transfer plans that can be used to offset data transfer fees. You are charged for excess data transfers. Take note of the following items:
 * - Only outbound data transfers of simple application servers over the Internet are calculated. Outbound data transfers include the data transfer quota and the excess data transfers beyond the quota. Inbound data transfers of simple application servers over the Internet are not calculated.
 * - Outbound data transfers from simple application servers to other Alibaba Cloud services over the Internet first consume data transfer quotas. If the quotas are exhausted, you are charged for excess data transfers.
 * - You are not charged for data transfers between simple application servers within the same virtual private cloud (VPC).
 * For more information, see [Quotas and billing of data transfers](https://help.aliyun.com/document_detail/86281.html).
 *
 * @param request ListInstancesTrafficPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesTrafficPackagesResponse
 */
ListInstancesTrafficPackagesResponse Client::listInstancesTrafficPackagesWithOptions(const ListInstancesTrafficPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancesTrafficPackages"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesTrafficPackagesResponse>();
}

/**
 * @summary Queries the details about data transfer plans of simple application servers.
 *
 * @description You can query the details of data transfer plans of simple application servers, including the total quota, used quota, unused quota, and excess data transfers in the current month.
 * Simple Application Server provides data transfer plans that can be used to offset data transfer fees. You are charged for excess data transfers. Take note of the following items:
 * - Only outbound data transfers of simple application servers over the Internet are calculated. Outbound data transfers include the data transfer quota and the excess data transfers beyond the quota. Inbound data transfers of simple application servers over the Internet are not calculated.
 * - Outbound data transfers from simple application servers to other Alibaba Cloud services over the Internet first consume data transfer quotas. If the quotas are exhausted, you are charged for excess data transfers.
 * - You are not charged for data transfers between simple application servers within the same virtual private cloud (VPC).
 * For more information, see [Quotas and billing of data transfers](https://help.aliyun.com/document_detail/86281.html).
 *
 * @param request ListInstancesTrafficPackagesRequest
 * @return ListInstancesTrafficPackagesResponse
 */
ListInstancesTrafficPackagesResponse Client::listInstancesTrafficPackages(const ListInstancesTrafficPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesTrafficPackagesWithOptions(request, runtime);
}

/**
 * @summary The list of key pairs.
 *
 * @param request ListKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKeyPairsResponse
 */
ListKeyPairsResponse Client::listKeyPairsWithOptions(const ListKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKeyPairs"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKeyPairsResponse>();
}

/**
 * @summary The list of key pairs.
 *
 * @param request ListKeyPairsRequest
 * @return ListKeyPairsResponse
 */
ListKeyPairsResponse Client::listKeyPairs(const ListKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKeyPairsWithOptions(request, runtime);
}

/**
 * @summary Queries all plan information for simple application servers in a specified region.
 *
 * @description You can query all plan information for simple application servers in a specified region, including the plan ID, disk capacity, disk type, and plan price.
 *
 * @param request ListPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPlansResponse
 */
ListPlansResponse Client::listPlansWithOptions(const ListPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPlans"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPlansResponse>();
}

/**
 * @summary Queries all plan information for simple application servers in a specified region.
 *
 * @description You can query all plan information for simple application servers in a specified region, including the plan ID, disk capacity, disk type, and plan price.
 *
 * @param request ListPlansRequest
 * @return ListPlansResponse
 */
ListPlansResponse Client::listPlans(const ListPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPlansWithOptions(request, runtime);
}

/**
 * @summary Queries all regions in which Simple Application Server is supported.
 *
 * @description The query results include all the Alibaba Cloud regions where Simple Application Server is supported on the international site (alibabacloud.com) and the China site (aliyun.com).
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries all regions in which Simple Application Server is supported.
 *
 * @description The query results include all the Alibaba Cloud regions where Simple Application Server is supported on the international site (alibabacloud.com) and the China site (aliyun.com).
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries information about one or more snapshots that have been created.
 *
 * @description InstanceId, DiskId, SnapshotIds, and ResourceGroupId are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
 *
 * @param request ListSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSnapshotIds()) {
    query["SnapshotIds"] = request.getSnapshotIds();
  }

  if (!!request.hasSourceDiskType()) {
    query["SourceDiskType"] = request.getSourceDiskType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshots"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotsResponse>();
}

/**
 * @summary Queries information about one or more snapshots that have been created.
 *
 * @description InstanceId, DiskId, SnapshotIds, and ResourceGroupId are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to simple resources, such as instances, snapshots, disks, images, commands, and firewall rules.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

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
    {"version" , "2020-06-01"},
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
 * @summary Queries the tags that are added to simple resources, such as instances, snapshots, disks, images, commands, and firewall rules.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Performs a remote logon to a simple application server by using Workbench.
 *
 * @description After you create a simple application server, you can perform a remote logon to the server to set up environments and deploy applications.
 *
 * @param request LoginInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoginInstanceResponse
 */
LoginInstanceResponse Client::loginInstanceWithOptions(const LoginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
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
    {"action" , "LoginInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoginInstanceResponse>();
}

/**
 * @summary Performs a remote logon to a simple application server by using Workbench.
 *
 * @description After you create a simple application server, you can perform a remote logon to the server to set up environments and deploy applications.
 *
 * @param request LoginInstanceRequest
 * @return LoginInstanceResponse
 */
LoginInstanceResponse Client::loginInstance(const LoginInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loginInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a lightweight database instance.
 *
 * @param request ModifyDatabaseInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseInstanceDescriptionResponse
 */
ModifyDatabaseInstanceDescriptionResponse Client::modifyDatabaseInstanceDescriptionWithOptions(const ModifyDatabaseInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceDescription()) {
    query["DatabaseInstanceDescription"] = request.getDatabaseInstanceDescription();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseInstanceDescription"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseInstanceDescriptionResponse>();
}

/**
 * @summary Modifies the description of a lightweight database instance.
 *
 * @param request ModifyDatabaseInstanceDescriptionRequest
 * @return ModifyDatabaseInstanceDescriptionResponse
 */
ModifyDatabaseInstanceDescriptionResponse Client::modifyDatabaseInstanceDescription(const ModifyDatabaseInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary After you create a Simple Application Server database service instance, you can view and modify its parameters.
 *
 * @param request ModifyDatabaseInstanceParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseInstanceParameterResponse
 */
ModifyDatabaseInstanceParameterResponse Client::modifyDatabaseInstanceParameterWithOptions(const ModifyDatabaseInstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasForceRestart()) {
    query["ForceRestart"] = request.getForceRestart();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseInstanceParameter"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseInstanceParameterResponse>();
}

/**
 * @summary After you create a Simple Application Server database service instance, you can view and modify its parameters.
 *
 * @param request ModifyDatabaseInstanceParameterRequest
 * @return ModifyDatabaseInstanceParameterResponse
 */
ModifyDatabaseInstanceParameterResponse Client::modifyDatabaseInstanceParameter(const ModifyDatabaseInstanceParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseInstanceParameterWithOptions(request, runtime);
}

/**
 * @summary Modifies a firewall rule of a specified simple application server.
 *
 * @param request ModifyFirewallRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirewallRuleResponse
 */
ModifyFirewallRuleResponse Client::modifyFirewallRuleWithOptions(const ModifyFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleProtocol()) {
    query["RuleProtocol"] = request.getRuleProtocol();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFirewallRule"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFirewallRuleResponse>();
}

/**
 * @summary Modifies a firewall rule of a specified simple application server.
 *
 * @param request ModifyFirewallRuleRequest
 * @return ModifyFirewallRuleResponse
 */
ModifyFirewallRuleResponse Client::modifyFirewallRule(const ModifyFirewallRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFirewallRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the firewall rules in an existing firewall template based on your business requirements and applies the rules to Simple Application Server instances through the firewall template.
 *
 * @description Updating a firewall template does not affect the rules of instances to which the template is already applied.
 *
 * @param request ModifyFirewallTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirewallTemplateResponse
 */
ModifyFirewallTemplateResponse Client::modifyFirewallTemplateWithOptions(const ModifyFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFirewallTemplateId()) {
    query["FirewallTemplateId"] = request.getFirewallTemplateId();
  }

  if (!!request.hasFirewallTemplateRule()) {
    query["FirewallTemplateRule"] = request.getFirewallTemplateRule();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFirewallTemplate"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFirewallTemplateResponse>();
}

/**
 * @summary Updates the firewall rules in an existing firewall template based on your business requirements and applies the rules to Simple Application Server instances through the firewall template.
 *
 * @description Updating a firewall template does not affect the rules of instances to which the template is already applied.
 *
 * @param request ModifyFirewallTemplateRequest
 * @return ModifyFirewallTemplateResponse
 */
ModifyFirewallTemplateResponse Client::modifyFirewallTemplate(const ModifyFirewallTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFirewallTemplateWithOptions(request, runtime);
}

/**
 * @summary Shares or unshares a custom image to Elastic Compute Service (ECS).
 *
 * @description Custom images can be shared to ECS. If the configurations of your simple application server cannot meet your business requirements, or you want to deploy your business on ECS instances, you can share your custom image to ECS to transfer your business from Simple Application Server to ECS.
 * > The region in which the shared image resides in ECS is the same as the region in which the custom image resides in Simple Application Server.
 * You can unshare a custom image based on your business requirements or when you want to delete the custom image. After you unshare a custom image, take note of the following items:
 * - You cannot query or use the custom image by using the ECS console or API.
 * - You cannot re-initialize the disks of the ECS instances that were created based on the shared image.
 *
 * @param request ModifyImageShareStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImageShareStatusResponse
 */
ModifyImageShareStatusResponse Client::modifyImageShareStatusWithOptions(const ModifyImageShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImageShareStatus"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImageShareStatusResponse>();
}

/**
 * @summary Shares or unshares a custom image to Elastic Compute Service (ECS).
 *
 * @description Custom images can be shared to ECS. If the configurations of your simple application server cannot meet your business requirements, or you want to deploy your business on ECS instances, you can share your custom image to ECS to transfer your business from Simple Application Server to ECS.
 * > The region in which the shared image resides in ECS is the same as the region in which the custom image resides in Simple Application Server.
 * You can unshare a custom image based on your business requirements or when you want to delete the custom image. After you unshare a custom image, take note of the following items:
 * - You cannot query or use the custom image by using the ECS console or API.
 * - You cannot re-initialize the disks of the ECS instances that were created based on the shared image.
 *
 * @param request ModifyImageShareStatusRequest
 * @return ModifyImageShareStatusResponse
 */
ModifyImageShareStatusResponse Client::modifyImageShareStatus(const ModifyImageShareStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImageShareStatusWithOptions(request, runtime);
}

/**
 * @summary Changes the VNC password of a simple application server.
 *
 * @param request ModifyInstanceVncPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceVncPasswordResponse
 */
ModifyInstanceVncPasswordResponse Client::modifyInstanceVncPasswordWithOptions(const ModifyInstanceVncPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVncPassword()) {
    query["VncPassword"] = request.getVncPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceVncPassword"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceVncPasswordResponse>();
}

/**
 * @summary Changes the VNC password of a simple application server.
 *
 * @param request ModifyInstanceVncPasswordRequest
 * @return ModifyInstanceVncPasswordResponse
 */
ModifyInstanceVncPasswordResponse Client::modifyInstanceVncPassword(const ModifyInstanceVncPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceVncPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts a simple application server.
 *
 * @description - You can restart only simple application server instances that are in the Running state.
 * - After a simple application server instance is restarted, it enters the Starting state.
 *
 * @param request RebootInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootInstanceResponse
 */
RebootInstanceResponse Client::rebootInstanceWithOptions(const RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "RebootInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootInstanceResponse>();
}

/**
 * @summary Restarts a simple application server.
 *
 * @description - You can restart only simple application server instances that are in the Running state.
 * - After a simple application server instance is restarted, it enters the Starting state.
 *
 * @param request RebootInstanceRequest
 * @return RebootInstanceResponse
 */
RebootInstanceResponse Client::rebootInstance(const RebootInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootInstanceWithOptions(request, runtime);
}

/**
 * @summary Restarts simple application servers.
 *
 * @param request RebootInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootInstancesResponse
 */
RebootInstancesResponse Client::rebootInstancesWithOptions(const RebootInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceReboot()) {
    query["ForceReboot"] = request.getForceReboot();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootInstancesResponse>();
}

/**
 * @summary Restarts simple application servers.
 *
 * @param request RebootInstancesRequest
 * @return RebootInstancesResponse
 */
RebootInstancesResponse Client::rebootInstances(const RebootInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootInstancesWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of a lightweight database instance if you no longer need to access it from the internet.
 *
 * @param request ReleasePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePublicConnectionResponse
 */
ReleasePublicConnectionResponse Client::releasePublicConnectionWithOptions(const ReleasePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePublicConnection"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of a lightweight database instance if you no longer need to access it from the internet.
 *
 * @param request ReleasePublicConnectionRequest
 * @return ReleasePublicConnectionResponse
 */
ReleasePublicConnectionResponse Client::releasePublicConnection(const ReleasePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Unshares a custom image that is shared across Alibaba Cloud accounts.
 *
 * @param request RemoveCustomImageShareAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveCustomImageShareAccountResponse
 */
RemoveCustomImageShareAccountResponse Client::removeCustomImageShareAccountWithOptions(const RemoveCustomImageShareAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveCustomImageShareAccount"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveCustomImageShareAccountResponse>();
}

/**
 * @summary Unshares a custom image that is shared across Alibaba Cloud accounts.
 *
 * @param request RemoveCustomImageShareAccountRequest
 * @return RemoveCustomImageShareAccountResponse
 */
RemoveCustomImageShareAccountResponse Client::removeCustomImageShareAccount(const RemoveCustomImageShareAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCustomImageShareAccountWithOptions(request, runtime);
}

/**
 * @summary Renews a simple application server.
 *
 * @description - Before you call this operation, we recommend that you understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * - Before you call this operation, make sure that the balance in your account is sufficient. If the balance in your account is insufficient, the renewal fails.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a simple application server.
 *
 * @description - Before you call this operation, we recommend that you understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
 * - Before you call this operation, make sure that the balance in your account is sufficient. If the balance in your account is insufficient, the renewal fails.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the password of the administrator account for a database. You can call this operation to change the password if the current password has low security. For database security, change the database password on a regular basis.
 *
 * @param request ResetDatabaseAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDatabaseAccountPasswordResponse
 */
ResetDatabaseAccountPasswordResponse Client::resetDatabaseAccountPasswordWithOptions(const ResetDatabaseAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetDatabaseAccountPassword"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDatabaseAccountPasswordResponse>();
}

/**
 * @summary Resets the password of the administrator account for a database. You can call this operation to change the password if the current password has low security. For database security, change the database password on a regular basis.
 *
 * @param request ResetDatabaseAccountPasswordRequest
 * @return ResetDatabaseAccountPasswordResponse
 */
ResetDatabaseAccountPasswordResponse Client::resetDatabaseAccountPassword(const ResetDatabaseAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDatabaseAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Rolls back a disk to a snapshot.
 *
 * @description - When you roll back a disk by using a snapshot, the corresponding simple application server must be in the Stopped state.
 * - Rolling back a disk to a snapshot causes the incremental data generated after the snapshot was created to be lost. Back up your data before the rollback if necessary.
 * ### Precautions
 * Resetting the system or replacing the image clears the disk data on the server. Snapshots created before the system reset or image replacement are retained but cannot be used for rollback operations.
 *
 * @param request ResetDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDiskResponse
 */
ResetDiskResponse Client::resetDiskWithOptions(const ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetDisk"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDiskResponse>();
}

/**
 * @summary Rolls back a disk to a snapshot.
 *
 * @description - When you roll back a disk by using a snapshot, the corresponding simple application server must be in the Stopped state.
 * - Rolling back a disk to a snapshot causes the incremental data generated after the snapshot was created to be lost. Back up your data before the rollback if necessary.
 * ### Precautions
 * Resetting the system or replacing the image clears the disk data on the server. Snapshots created before the system reset or image replacement are retained but cannot be used for rollback operations.
 *
 * @param request ResetDiskRequest
 * @return ResetDiskResponse
 */
ResetDiskResponse Client::resetDisk(const ResetDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDiskWithOptions(request, runtime);
}

/**
 * @summary Resets a simple application server.
 *
 * @description You can reset a simple application server to re-install its applications or operating system and re-initialize the server. You can reset a simple application server by resetting the current system or changing the image.
 * - Reset the current system: You can re-install the operating system without changing the image.
 * - Change the image: You can select another Alibaba Cloud image or a custom image to re-install the operating system.
 * ### [](#)Precautions
 * - Resetting the system or changing the image of a simple application server clears the disk data on the server. Back up the data as needed.
 * - After you reset a simple application server, monitoring may fail. In this case, you can use one of the following methods to install the CloudMonitor agent on the server:
 *   - Connect to the server: For more information, see [Manually install the CloudMonitor agent for C++ on an ECS instance](https://help.aliyun.com/document_detail/183482.html).
 *   - Use Command Assistant: For more information, see [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html). You can obtain the command that can be used to install CloudMonitor from the "Common commands" section of the [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html) topic.
 * ### [](#)Limits
 * - Snapshots that are created before the reset are retained, but the snapshots cannot be used to restore the disks of the server.
 * - You cannot reset simple application servers that were created from custom images that contain data of data disks.
 * - If you reset a simple application server by replacing the existing image with a custom image, the following limits apply:
 *   - The custom image must reside in the same region as the current server.
 *   - The custom image cannot be created based on the current server. If you want to restore the data on the server, you can use a snapshot of the server to restore disk data.
 *   - If your simple application server resides in a region outside the Chinese mainland, you cannot switch the operating system of the server between Windows Server and Linux. You cannot use a Windows Server custom image to reset a Linux simple application server. Similarly, you cannot use a Linux custom image to reset a Windows Server simple application server. You can switch the operating systems of simple application servers only between Windows Server versions or between Linux distributions.
 *   - The following limits apply to the disks attached to the simple application server:
 *     - If the custom image contains a system disk and a data disk but only a system disk is attached to the simple application server, you cannot use the custom image to reset the simple application server.
 *     - If the system disk size of the custom image is greater than the system disk size of the simple application server, you cannot directly use the custom image to reset the simple application server.
 *     - Only if the system disk size of the simple application server is greater than or equal to the system disk size of the custom image, you can use the custom image to reset the simple application server. To increase the system disk size of your server, you can upgrade the server configuration. For more information, see Upgrade a simple application server.
 *     - If the data disk size of the custom image is greater than the data disk size of the simple application server, you cannot use the custom image to reset the simple application server.
 *
 * @param request ResetSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSystemResponse
 */
ResetSystemResponse Client::resetSystemWithOptions(const ResetSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginCredentials()) {
    query["LoginCredentials"] = request.getLoginCredentials();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSystem"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSystemResponse>();
}

/**
 * @summary Resets a simple application server.
 *
 * @description You can reset a simple application server to re-install its applications or operating system and re-initialize the server. You can reset a simple application server by resetting the current system or changing the image.
 * - Reset the current system: You can re-install the operating system without changing the image.
 * - Change the image: You can select another Alibaba Cloud image or a custom image to re-install the operating system.
 * ### [](#)Precautions
 * - Resetting the system or changing the image of a simple application server clears the disk data on the server. Back up the data as needed.
 * - After you reset a simple application server, monitoring may fail. In this case, you can use one of the following methods to install the CloudMonitor agent on the server:
 *   - Connect to the server: For more information, see [Manually install the CloudMonitor agent for C++ on an ECS instance](https://help.aliyun.com/document_detail/183482.html).
 *   - Use Command Assistant: For more information, see [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html). You can obtain the command that can be used to install CloudMonitor from the "Common commands" section of the [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html) topic.
 * ### [](#)Limits
 * - Snapshots that are created before the reset are retained, but the snapshots cannot be used to restore the disks of the server.
 * - You cannot reset simple application servers that were created from custom images that contain data of data disks.
 * - If you reset a simple application server by replacing the existing image with a custom image, the following limits apply:
 *   - The custom image must reside in the same region as the current server.
 *   - The custom image cannot be created based on the current server. If you want to restore the data on the server, you can use a snapshot of the server to restore disk data.
 *   - If your simple application server resides in a region outside the Chinese mainland, you cannot switch the operating system of the server between Windows Server and Linux. You cannot use a Windows Server custom image to reset a Linux simple application server. Similarly, you cannot use a Linux custom image to reset a Windows Server simple application server. You can switch the operating systems of simple application servers only between Windows Server versions or between Linux distributions.
 *   - The following limits apply to the disks attached to the simple application server:
 *     - If the custom image contains a system disk and a data disk but only a system disk is attached to the simple application server, you cannot use the custom image to reset the simple application server.
 *     - If the system disk size of the custom image is greater than the system disk size of the simple application server, you cannot directly use the custom image to reset the simple application server.
 *     - Only if the system disk size of the simple application server is greater than or equal to the system disk size of the custom image, you can use the custom image to reset the simple application server. To increase the system disk size of your server, you can upgrade the server configuration. For more information, see Upgrade a simple application server.
 *     - If the data disk size of the custom image is greater than the data disk size of the simple application server, you cannot use the custom image to reset the simple application server.
 *
 * @param request ResetSystemRequest
 * @return ResetSystemResponse
 */
ResetSystemResponse Client::resetSystem(const ResetSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSystemWithOptions(request, runtime);
}

/**
 * @summary Call this operation to restart a lightweight database instance in the Running state.
 *
 * @param request RestartDatabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDatabaseInstanceResponse
 */
RestartDatabaseInstanceResponse Client::restartDatabaseInstanceWithOptions(const RestartDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDatabaseInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDatabaseInstanceResponse>();
}

/**
 * @summary Call this operation to restart a lightweight database instance in the Running state.
 *
 * @param request RestartDatabaseInstanceRequest
 * @return RestartDatabaseInstanceResponse
 */
RestartDatabaseInstanceResponse Client::restartDatabaseInstance(const RestartDatabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDatabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Runs a command on a simple application server.
 *
 * @description Command Assistant is an automated O&M tool designed for simple application servers. You can run commands (Shell, PowerShell, and Bat) on simple application server instances from the console for operations management without having to log on to the instances.
 * To use Command Assistant, the following conditions must be met:
 * - The simple application server instance must be in the Running state.
 * - Cloud Assistant Agent must be installed. Cloud Assistant Agent is installed on simple application server instances by default. If you manually uninstalled it, reinstall it. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
 *
 * @param tmpReq RunCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommandWithOptions(const RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCommandShrinkRequest request = RunCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasEnableParameter()) {
    query["EnableParameter"] = request.getEnableParameter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWindowsPasswordName()) {
    query["WindowsPasswordName"] = request.getWindowsPasswordName();
  }

  if (!!request.hasWorkingDir()) {
    query["WorkingDir"] = request.getWorkingDir();
  }

  if (!!request.hasWorkingUser()) {
    query["WorkingUser"] = request.getWorkingUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunCommand"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCommandResponse>();
}

/**
 * @summary Runs a command on a simple application server.
 *
 * @description Command Assistant is an automated O&M tool designed for simple application servers. You can run commands (Shell, PowerShell, and Bat) on simple application server instances from the console for operations management without having to log on to the instances.
 * To use Command Assistant, the following conditions must be met:
 * - The simple application server instance must be in the Running state.
 * - Cloud Assistant Agent must be installed. Cloud Assistant Agent is installed on simple application server instances by default. If you manually uninstalled it, reinstall it. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
 *
 * @param request RunCommandRequest
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommand(const RunCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommandWithOptions(request, runtime);
}

/**
 * @summary Starts a database instance.
 *
 * @description This operation starts a database instance that is in the stopped state.
 *
 * @param request StartDatabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDatabaseInstanceResponse
 */
StartDatabaseInstanceResponse Client::startDatabaseInstanceWithOptions(const StartDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDatabaseInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDatabaseInstanceResponse>();
}

/**
 * @summary Starts a database instance.
 *
 * @description This operation starts a database instance that is in the stopped state.
 *
 * @param request StartDatabaseInstanceRequest
 * @return StartDatabaseInstanceResponse
 */
StartDatabaseInstanceResponse Client::startDatabaseInstance(const StartDatabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDatabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a simple application server.
 *
 * @description You can call this operation to start a simple application server that is in the Stopped state.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "StartInstance"},
    {"version" , "2020-06-01"},
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
 * @summary Starts a simple application server.
 *
 * @description You can call this operation to start a simple application server that is in the Stopped state.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts one or more simple application servers.
 *
 * @param request StartInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstancesResponse
 */
StartInstancesResponse Client::startInstancesWithOptions(const StartInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstancesResponse>();
}

/**
 * @summary Starts one or more simple application servers.
 *
 * @param request StartInstancesRequest
 * @return StartInstancesResponse
 */
StartInstancesResponse Client::startInstances(const StartInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstancesWithOptions(request, runtime);
}

/**
 * @summary Starts a session to log on to a Simple Application Server instance.
 *
 * @param request StartTerminalSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTerminalSessionResponse
 */
StartTerminalSessionResponse Client::startTerminalSessionWithOptions(const StartTerminalSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandLine()) {
    query["CommandLine"] = request.getCommandLine();
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
    {"action" , "StartTerminalSession"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTerminalSessionResponse>();
}

/**
 * @summary Starts a session to log on to a Simple Application Server instance.
 *
 * @param request StartTerminalSessionRequest
 * @return StartTerminalSessionResponse
 */
StartTerminalSessionResponse Client::startTerminalSession(const StartTerminalSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTerminalSessionWithOptions(request, runtime);
}

/**
 * @summary Stops a lightweight database instance.
 *
 * @description This operation stops a lightweight database instance that is in the running state. After the instance is stopped, you cannot log on to or access it.
 *
 * @param request StopDatabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDatabaseInstanceResponse
 */
StopDatabaseInstanceResponse Client::stopDatabaseInstanceWithOptions(const StopDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseInstanceId()) {
    query["DatabaseInstanceId"] = request.getDatabaseInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDatabaseInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDatabaseInstanceResponse>();
}

/**
 * @summary Stops a lightweight database instance.
 *
 * @description This operation stops a lightweight database instance that is in the running state. After the instance is stopped, you cannot log on to or access it.
 *
 * @param request StopDatabaseInstanceRequest
 * @return StopDatabaseInstanceResponse
 */
StopDatabaseInstanceResponse Client::stopDatabaseInstance(const StopDatabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDatabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops a simple application server.
 *
 * @description If a simple application server is temporarily not needed, you can stop it.
 * > Stopping a simple application server instance may cause service interruptions. Perform this operation during off-peak hours.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "StopInstance"},
    {"version" , "2020-06-01"},
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
 * @summary Stops a simple application server.
 *
 * @description If a simple application server is temporarily not needed, you can stop it.
 * > Stopping a simple application server instance may cause service interruptions. Perform this operation during off-peak hours.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops one or more simple application servers.
 *
 * @param request StopInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstancesWithOptions(const StopInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstances"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstancesResponse>();
}

/**
 * @summary Stops one or more simple application servers.
 *
 * @param request StopInstancesRequest
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstances(const StopInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstancesWithOptions(request, runtime);
}

/**
 * @summary Adds tags to simple application servers, snapshots, custom images, commands, firewall rules, and disks to facilitate the viewing and management of the preceding resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"version" , "2020-06-01"},
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
 * @summary Adds tags to simple application servers, snapshots, custom images, commands, firewall rules, and disks to facilitate the viewing and management of the preceding resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds and deletes tags from specified lightweight resources, such as instances, snapshots, disks, images, commands, and firewall rules.
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"version" , "2020-06-01"},
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
 * @summary Unbinds and deletes tags from specified lightweight resources, such as instances, snapshots, disks, images, commands, and firewall rules.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifys the parameter of a command.
 *
 * @param request UpdateCommandAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCommandAttributeResponse
 */
UpdateCommandAttributeResponse Client::updateCommandAttributeWithOptions(const UpdateCommandAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasWorkingDir()) {
    query["WorkingDir"] = request.getWorkingDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCommandAttribute"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCommandAttributeResponse>();
}

/**
 * @summary Modifys the parameter of a command.
 *
 * @param request UpdateCommandAttributeRequest
 * @return UpdateCommandAttributeResponse
 */
UpdateCommandAttributeResponse Client::updateCommandAttribute(const UpdateCommandAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCommandAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the remarks for the data disk that is attached to a simple application server.
 *
 * @param request UpdateDiskAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDiskAttributeResponse
 */
UpdateDiskAttributeResponse Client::updateDiskAttributeWithOptions(const UpdateDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDiskAttribute"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDiskAttributeResponse>();
}

/**
 * @summary Modifies the remarks for the data disk that is attached to a simple application server.
 *
 * @param request UpdateDiskAttributeRequest
 * @return UpdateDiskAttributeResponse
 */
UpdateDiskAttributeResponse Client::updateDiskAttribute(const UpdateDiskAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDiskAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of an instance, including the instance name and password.
 *
 * @description ## Operation description
 * After you change the password, you must restart the server by calling the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation for the new password to take effect.
 *
 * @param request UpdateInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceAttributeResponse
 */
UpdateInstanceAttributeResponse Client::updateInstanceAttributeWithOptions(const UpdateInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceAttribute"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceAttributeResponse>();
}

/**
 * @summary Modifies the information of an instance, including the instance name and password.
 *
 * @description ## Operation description
 * After you change the password, you must restart the server by calling the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation for the new password to take effect.
 *
 * @param request UpdateInstanceAttributeRequest
 * @return UpdateInstanceAttributeResponse
 */
UpdateInstanceAttributeResponse Client::updateInstanceAttribute(const UpdateInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the remarks of a snapshot of a simple application server.
 *
 * @param request UpdateSnapshotAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSnapshotAttributeResponse
 */
UpdateSnapshotAttributeResponse Client::updateSnapshotAttributeWithOptions(const UpdateSnapshotAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSnapshotAttribute"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSnapshotAttributeResponse>();
}

/**
 * @summary Modifies the remarks of a snapshot of a simple application server.
 *
 * @param request UpdateSnapshotAttributeRequest
 * @return UpdateSnapshotAttributeResponse
 */
UpdateSnapshotAttributeResponse Client::updateSnapshotAttribute(const UpdateSnapshotAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSnapshotAttributeWithOptions(request, runtime);
}

/**
 * @summary Upgrades the plan configuration for a specified simple application server.
 *
 * @description - Only upgrades to a higher-tier plan are supported. For more information about plans, see [Billing items](https://help.aliyun.com/document_detail/58623.html).
 * - When you call this operation to upgrade a server, ensure that your Alibaba Cloud account balance is sufficient. Otherwise, the upgrade fails.
 *
 * @param request UpgradeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeInstanceResponse
 */
UpgradeInstanceResponse Client::upgradeInstanceWithOptions(const UpgradeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeInstance"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeInstanceResponse>();
}

/**
 * @summary Upgrades the plan configuration for a specified simple application server.
 *
 * @description - Only upgrades to a higher-tier plan are supported. For more information about plans, see [Billing items](https://help.aliyun.com/document_detail/58623.html).
 * - When you call this operation to upgrade a server, ensure that your Alibaba Cloud account balance is sufficient. Otherwise, the upgrade fails.
 *
 * @param request UpgradeInstanceRequest
 * @return UpgradeInstanceResponse
 */
UpgradeInstanceResponse Client::upgradeInstance(const UpgradeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeInstanceWithOptions(request, runtime);
}

/**
 * @summary Imports a key pair for a simple application server.
 *
 * @param request UploadInstanceKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadInstanceKeyPairResponse
 */
UploadInstanceKeyPairResponse Client::uploadInstanceKeyPairWithOptions(const UploadInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadInstanceKeyPair"},
    {"version" , "2020-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadInstanceKeyPairResponse>();
}

/**
 * @summary Imports a key pair for a simple application server.
 *
 * @param request UploadInstanceKeyPairRequest
 * @return UploadInstanceKeyPairResponse
 */
UploadInstanceKeyPairResponse Client::uploadInstanceKeyPair(const UploadInstanceKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadInstanceKeyPairWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601