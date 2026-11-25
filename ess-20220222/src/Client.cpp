#include <darabonba/Core.hpp>
#include <alibabacloud/Ess20220222.hpp>
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
using namespace AlibabaCloud::Ess20220222::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ess20220222
{

AlibabaCloud::Ess20220222::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Ess";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "ess.aliyuncs.com"},
    {"cn-beijing" , "ess.aliyuncs.com"},
    {"cn-hangzhou" , "ess.aliyuncs.com"},
    {"cn-shanghai" , "ess.aliyuncs.com"},
    {"cn-shenzhen" , "ess.aliyuncs.com"},
    {"cn-hongkong" , "ess.aliyuncs.com"},
    {"ap-southeast-1" , "ess.aliyuncs.com"},
    {"us-east-1" , "ess.aliyuncs.com"},
    {"us-west-1" , "ess.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ess.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "ess.aliyuncs.com"},
    {"cn-north-2-gov-1" , "ess.aliyuncs.com"},
    {"ap-northeast-2-pop" , "ess.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "ess.aliyuncs.com"},
    {"cn-beijing-gov-1" , "ess.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "ess.aliyuncs.com"},
    {"cn-edge-1" , "ess.aliyuncs.com"},
    {"cn-fujian" , "ess.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "ess.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "ess.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "ess.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "ess.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "ess.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "ess.aliyuncs.com"},
    {"cn-qingdao-nebula" , "ess.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "ess.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "ess.aliyuncs.com"},
    {"cn-shanghai-inner" , "ess.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "ess.aliyuncs.com"},
    {"cn-shenzhen-inner" , "ess.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "ess.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "ess.aliyuncs.com"},
    {"cn-wuhan" , "ess.aliyuncs.com"},
    {"cn-yushanfang" , "ess.aliyuncs.com"},
    {"cn-zhangbei" , "ess.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "ess.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "ess.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "ess.aliyuncs.com"},
    {"eu-west-1-oxs" , "ess.aliyuncs.com"},
    {"rus-west-1-pop" , "ess.aliyuncs.com"},
    {"cn-nanjing" , "ess.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ess", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates or updates an Elastic Container Instance (ECI) scaling configuration by using a configuration file.
 *
 * @description When you manage ECI scaling configurations by using YAML configuration files, take note of the following items:
 * - If you specify the ID of an ECI scaling configuration, the system updates the ECI scaling configuration based on the YAML configuration file.
 * - If you do not specify the ID of an ECI scaling configuration, the system creates an ECI scaling configuration based on the YAML configuration file.
 *
 * @param request ApplyEciScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyEciScalingConfigurationResponse
 */
ApplyEciScalingConfigurationResponse Client::applyEciScalingConfigurationWithOptions(const ApplyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasFormat()) {
    query["Format"] = request.getFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyEciScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyEciScalingConfigurationResponse>();
}

/**
 * @summary Creates or updates an Elastic Container Instance (ECI) scaling configuration by using a configuration file.
 *
 * @description When you manage ECI scaling configurations by using YAML configuration files, take note of the following items:
 * - If you specify the ID of an ECI scaling configuration, the system updates the ECI scaling configuration based on the YAML configuration file.
 * - If you do not specify the ID of an ECI scaling configuration, the system creates an ECI scaling configuration based on the YAML configuration file.
 *
 * @param request ApplyEciScalingConfigurationRequest
 * @return ApplyEciScalingConfigurationResponse
 */
ApplyEciScalingConfigurationResponse Client::applyEciScalingConfiguration(const ApplyEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates and manages a scaling group by using a configuration file.
 *
 * @description The ApplyScalingGroup operation supports the Kubernetes Deployment resource definition format to quickly create Elastic Container Instance (ECI) scaling groups. It also supports ECI extended annotations for Kubernetes YAML. For more information, see the "Supported annotations" section.
 * Mapping between YAML configurations and scaling groups: A scaling group name is mapped by the namespace, kind, and name tuple in the YAML definition. In the same region, the same YAML configuration can only be mapped to the same scaling group. Example: If you use a Deployment YAML configuration with the name nginx in the default namespace, it is mapped to a scaling group named k8s_default_Deployment_nginx in the same region.
 * Logic for managing scaling groups based on YAML configurations:
 * - If the scaling group mapped to the YAML configuration exists, the scaling group is updated based on the YAML configuration.
 * - If the scaling group mapped to the YAML configuration does not exist, a corresponding scaling group is created based on the YAML configuration.
 * ### Precautions 
 * 1. If the YAML configuration does not specify the VPC, vSwitch, and security group annotations, the system performs automatic creation of a default VPC, creates a default vSwitch in the VPC, and creates the default Auto Scaling security group ess-default-sg. By default, the security group policy allows traffic on TCP ports 22 and 3389, and the ICMP (IPv4) protocol. If you have other port and protocol requirements, you can modify the security group policy.
 * 2. When you use a public image, you must enable public network access and configure the Settings for the k8s.aliyun.com/eci-with-eip pod annotation to enable the elastic IP address (EIP).
 * 3. After the ApplyScalingGroup operation applies the YAML configuration, the scaling group and scaling configuration take effect immediately. If replicas is set to a value greater than 0, automatic creation of resources is triggered.
 * ### Supported annotations
 * The annotations are referenced from [ECI Pod Annotation](https://help.aliyun.com/document_detail/186939.html).
 * |Parameter|Example|Description|
 * |-----|-----|-----|
 * |k8s.aliyun.com/ess-scaling-group-min-size|1|The minimum number of instances in the scaling group. Default value: 0.
 * |k8s.aliyun.com/ess-scaling-group-max-size|20|The maximum number of instances in the scaling group. Default value: max(replicas, 30).
 * |k8s.aliyun.com/eci-ntp-server|100.100.*.*|The NTP server.
 * |k8s.aliyun.com/eci-use-specs|2-4Gi|The instance specifications, such as 2 vCPUs and 4 GiB of memory. For more information, see [Create a pod by using multiple instance types](https://help.aliyun.com/document_detail/451267.html).
 * |k8s.aliyun.com/eci-vswitch|vsw-bp1xpiowfm5vo8o3c****|The ID of the vSwitch. You can specify multiple vSwitches to implement the multi-active zone feature.
 * |k8s.aliyun.com/eci-security-group|sg-bp1dktddjsg5nktv****|The ID of the security group. Requirements: <ul><li>You can specify one or more security groups. A maximum of five security groups can be specified.</li><li>The specified security groups must belong to the same VPC.</li><li>The specified security groups must be of the same type.</li></ul>
 * |k8s.aliyun.com/eci-sls-enable|"false"|Specifies whether to shutdown log collection. A value of false indicates that log collection is shutdown. <p>When you collect logs by using Simple Log Service CRDs, if you do not need to collect logs for specific pods, you can configure this annotation to shutdown the log collection feature. This prevents the system from performing automatic creation of Logtail and wasting resources.</p> 
 * |k8s.aliyun.com/eci-spot-strategy|SpotAsPriceGo|The bidding policy for the spot instance. Valid values: <ul><li>SpotWithPriceLimit: You use custom Settings for the maximum hourly price of the spot instance. In this case, you must set k8s.aliyun.com/eci-spot-price-limit.</li><li>SpotAsPriceGo: The system automatically places bids based on the actual price of the current marketplace.</li></ul>
 * |k8s.aliyun.com/eci-spot-price-limit|"0.5"|The maximum hourly price for the spot instance. The value is accurate to three decimal places. <p>This parameter takes effect only when the Settings of k8s.aliyun.com/eci-spot-strategy are SpotWithPriceLimit.</p>
 * |k8s.aliyun.com/eci-with-eip|"true"|Specifies whether to perform automatic creation and attach an EIP. A value of true indicates that an EIP is automatically created and attached.
 * |k8s.aliyun.com/eci-data-cache-bucket|default|The bucket of DataCache. This parameter is required when you use DataCache to create a pod.
 * |k8s.aliyun.com/eci-data-cache-pl|PL1|The performance level (PL) of the cloud disk created based on DataCache. <p>By default, an ESSD standard SSD is used, and the default PL is PL1.</p>
 * |k8s.aliyun.com/eci-data-cache-provisionedIops|"40000"|The provisioned read and write IOPS of the ESSD AutoPL cloud disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline performance}. Baseline performance = min{1800 + 50 × Capacity, 50000}. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html). <p>If this annotation is added, the cloud disk created based on DataCache is an ESSD AutoPL cloud disk.</p>
 * |k8s.aliyun.com/eci-data-cache-burstingEnabled|"true"|Specifies whether to enable the burst feature for the ESSD AutoPL cloud disk. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html). <p>If this annotation is added, the cloud disk created based on DataCache is an ESSD AutoPL cloud disk.</p>
 * |k8s.aliyun.com/eci-custom-tags|"env:test,name:alice"|The label string attached to the pod. You can attach up to three labels. Separate the label key and label value with a half-width colon character, and separate multiple labels with a half-width comma character.
 *
 * @param request ApplyScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyScalingGroupResponse
 */
ApplyScalingGroupResponse Client::applyScalingGroupWithOptions(const ApplyScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasFormat()) {
    query["Format"] = request.getFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyScalingGroupResponse>();
}

/**
 * @summary Creates and manages a scaling group by using a configuration file.
 *
 * @description The ApplyScalingGroup operation supports the Kubernetes Deployment resource definition format to quickly create Elastic Container Instance (ECI) scaling groups. It also supports ECI extended annotations for Kubernetes YAML. For more information, see the "Supported annotations" section.
 * Mapping between YAML configurations and scaling groups: A scaling group name is mapped by the namespace, kind, and name tuple in the YAML definition. In the same region, the same YAML configuration can only be mapped to the same scaling group. Example: If you use a Deployment YAML configuration with the name nginx in the default namespace, it is mapped to a scaling group named k8s_default_Deployment_nginx in the same region.
 * Logic for managing scaling groups based on YAML configurations:
 * - If the scaling group mapped to the YAML configuration exists, the scaling group is updated based on the YAML configuration.
 * - If the scaling group mapped to the YAML configuration does not exist, a corresponding scaling group is created based on the YAML configuration.
 * ### Precautions 
 * 1. If the YAML configuration does not specify the VPC, vSwitch, and security group annotations, the system performs automatic creation of a default VPC, creates a default vSwitch in the VPC, and creates the default Auto Scaling security group ess-default-sg. By default, the security group policy allows traffic on TCP ports 22 and 3389, and the ICMP (IPv4) protocol. If you have other port and protocol requirements, you can modify the security group policy.
 * 2. When you use a public image, you must enable public network access and configure the Settings for the k8s.aliyun.com/eci-with-eip pod annotation to enable the elastic IP address (EIP).
 * 3. After the ApplyScalingGroup operation applies the YAML configuration, the scaling group and scaling configuration take effect immediately. If replicas is set to a value greater than 0, automatic creation of resources is triggered.
 * ### Supported annotations
 * The annotations are referenced from [ECI Pod Annotation](https://help.aliyun.com/document_detail/186939.html).
 * |Parameter|Example|Description|
 * |-----|-----|-----|
 * |k8s.aliyun.com/ess-scaling-group-min-size|1|The minimum number of instances in the scaling group. Default value: 0.
 * |k8s.aliyun.com/ess-scaling-group-max-size|20|The maximum number of instances in the scaling group. Default value: max(replicas, 30).
 * |k8s.aliyun.com/eci-ntp-server|100.100.*.*|The NTP server.
 * |k8s.aliyun.com/eci-use-specs|2-4Gi|The instance specifications, such as 2 vCPUs and 4 GiB of memory. For more information, see [Create a pod by using multiple instance types](https://help.aliyun.com/document_detail/451267.html).
 * |k8s.aliyun.com/eci-vswitch|vsw-bp1xpiowfm5vo8o3c****|The ID of the vSwitch. You can specify multiple vSwitches to implement the multi-active zone feature.
 * |k8s.aliyun.com/eci-security-group|sg-bp1dktddjsg5nktv****|The ID of the security group. Requirements: <ul><li>You can specify one or more security groups. A maximum of five security groups can be specified.</li><li>The specified security groups must belong to the same VPC.</li><li>The specified security groups must be of the same type.</li></ul>
 * |k8s.aliyun.com/eci-sls-enable|"false"|Specifies whether to shutdown log collection. A value of false indicates that log collection is shutdown. <p>When you collect logs by using Simple Log Service CRDs, if you do not need to collect logs for specific pods, you can configure this annotation to shutdown the log collection feature. This prevents the system from performing automatic creation of Logtail and wasting resources.</p> 
 * |k8s.aliyun.com/eci-spot-strategy|SpotAsPriceGo|The bidding policy for the spot instance. Valid values: <ul><li>SpotWithPriceLimit: You use custom Settings for the maximum hourly price of the spot instance. In this case, you must set k8s.aliyun.com/eci-spot-price-limit.</li><li>SpotAsPriceGo: The system automatically places bids based on the actual price of the current marketplace.</li></ul>
 * |k8s.aliyun.com/eci-spot-price-limit|"0.5"|The maximum hourly price for the spot instance. The value is accurate to three decimal places. <p>This parameter takes effect only when the Settings of k8s.aliyun.com/eci-spot-strategy are SpotWithPriceLimit.</p>
 * |k8s.aliyun.com/eci-with-eip|"true"|Specifies whether to perform automatic creation and attach an EIP. A value of true indicates that an EIP is automatically created and attached.
 * |k8s.aliyun.com/eci-data-cache-bucket|default|The bucket of DataCache. This parameter is required when you use DataCache to create a pod.
 * |k8s.aliyun.com/eci-data-cache-pl|PL1|The performance level (PL) of the cloud disk created based on DataCache. <p>By default, an ESSD standard SSD is used, and the default PL is PL1.</p>
 * |k8s.aliyun.com/eci-data-cache-provisionedIops|"40000"|The provisioned read and write IOPS of the ESSD AutoPL cloud disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline performance}. Baseline performance = min{1800 + 50 × Capacity, 50000}. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html). <p>If this annotation is added, the cloud disk created based on DataCache is an ESSD AutoPL cloud disk.</p>
 * |k8s.aliyun.com/eci-data-cache-burstingEnabled|"true"|Specifies whether to enable the burst feature for the ESSD AutoPL cloud disk. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html). <p>If this annotation is added, the cloud disk created based on DataCache is an ESSD AutoPL cloud disk.</p>
 * |k8s.aliyun.com/eci-custom-tags|"env:test,name:alice"|The label string attached to the pod. You can attach up to three labels. Separate the label key and label value with a half-width colon character, and separate multiple labels with a half-width comma character.
 *
 * @param request ApplyScalingGroupRequest
 * @return ApplyScalingGroupResponse
 */
ApplyScalingGroupResponse Client::applyScalingGroup(const ApplyScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Adds one or more Application Load Balancer (ALB) server groups to a scaling group. This operation is applicable to scenarios where you need to dynamically adjust the number of instances to handle fluctuating workloads and ensure high availability of applications. It enables automatic elastic scaling during business fluctuations, dynamically distributes traffic based on loads, and improves application stability.
 *
 * @description When you add ALB server groups to a scaling group, the following conditions must be met:
 * - The network type of the scaling group must be VPC, and the scaling group must be in the same VPC as the ALB server groups.
 * - The ALB server groups must be in the Available state.
 *
 * @param request AttachAlbServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachAlbServerGroupsResponse
 */
AttachAlbServerGroupsResponse Client::attachAlbServerGroupsWithOptions(const AttachAlbServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbServerGroups()) {
    query["AlbServerGroups"] = request.getAlbServerGroups();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceAttach()) {
    query["ForceAttach"] = request.getForceAttach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachAlbServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachAlbServerGroupsResponse>();
}

/**
 * @summary Adds one or more Application Load Balancer (ALB) server groups to a scaling group. This operation is applicable to scenarios where you need to dynamically adjust the number of instances to handle fluctuating workloads and ensure high availability of applications. It enables automatic elastic scaling during business fluctuations, dynamically distributes traffic based on loads, and improves application stability.
 *
 * @description When you add ALB server groups to a scaling group, the following conditions must be met:
 * - The network type of the scaling group must be VPC, and the scaling group must be in the same VPC as the ALB server groups.
 * - The ALB server groups must be in the Available state.
 *
 * @param request AttachAlbServerGroupsRequest
 * @return AttachAlbServerGroupsResponse
 */
AttachAlbServerGroupsResponse Client::attachAlbServerGroups(const AttachAlbServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAlbServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Attaches one or more RDS instances to a scaling group, which allows you to adjust the number of RDS instances in the scaling group at any time to increase flexibility and usability.
 *
 * @description The following conditions must be met when you attach RDS instances to a scaling group:
 * - The RDS instances and the scaling group must belong to the same account.
 * - The RDS instances must not be locked. For more information about the locking policy, see [Usage notes for ApsaraDB RDS](https://help.aliyun.com/document_detail/41872.html).
 * - The RDS instances must be in the Running state.
 * - The RDS instances must be owned by your current account and must not be deleted.
 * - If you attach an RDS instance that already exists in the scaling group to the scaling group again, the number of RDS instances in the scaling group does not change. However, the system attempts to add the private IP addresses of all ECS instances in the current scaling group to the IP address whitelist of the RDS instance.
 * > After you attach RDS instances, the default whitelist group of the RDS instances can contain a maximum of 1,000 IP addresses. For more information about IP address whitelists, see [Configure an IP address whitelist](https://help.aliyun.com/document_detail/96118.html).
 *
 * @param request AttachDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDBInstancesResponse
 */
AttachDBInstancesResponse Client::attachDBInstancesWithOptions(const AttachDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachMode()) {
    query["AttachMode"] = request.getAttachMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstances()) {
    query["DBInstances"] = request.getDBInstances();
  }

  if (!!request.hasForceAttach()) {
    query["ForceAttach"] = request.getForceAttach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDBInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDBInstancesResponse>();
}

/**
 * @summary Attaches one or more RDS instances to a scaling group, which allows you to adjust the number of RDS instances in the scaling group at any time to increase flexibility and usability.
 *
 * @description The following conditions must be met when you attach RDS instances to a scaling group:
 * - The RDS instances and the scaling group must belong to the same account.
 * - The RDS instances must not be locked. For more information about the locking policy, see [Usage notes for ApsaraDB RDS](https://help.aliyun.com/document_detail/41872.html).
 * - The RDS instances must be in the Running state.
 * - The RDS instances must be owned by your current account and must not be deleted.
 * - If you attach an RDS instance that already exists in the scaling group to the scaling group again, the number of RDS instances in the scaling group does not change. However, the system attempts to add the private IP addresses of all ECS instances in the current scaling group to the IP address whitelist of the RDS instance.
 * > After you attach RDS instances, the default whitelist group of the RDS instances can contain a maximum of 1,000 IP addresses. For more information about IP address whitelists, see [Configure an IP address whitelist](https://help.aliyun.com/document_detail/96118.html).
 *
 * @param request AttachDBInstancesRequest
 * @return AttachDBInstancesResponse
 */
AttachDBInstancesResponse Client::attachDBInstances(const AttachDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Manually adds instances to a scaling group. You can add ECS instances, Elastic Container Instance (ECI) instances, or managed instances outside the scaling group to the scaling group and put them into service. You can also restart ECS instances in the scaling group that are in the Economical Mode to the Running state and put them into service.
 *
 * @description - Before you invoke this operation, make sure that the following conditions are met:
 *     - The scaling group is in the Active state.
 *     - No scaling activities are in progress in the scaling group.
 * - Limits on ECS instances or ECI instances to be added to the scaling group:
 *     - The instances must be in the same region as the scaling group.
 *     - The instances must be in the Running state.
 *     - The instances must not be added to other scaling groups.
 *     - The billing method of the instances must be subscription, pay-as-you-go, or spot instance.
 *     - If a vSwitch ID is specified for the scaling group, classic network-connected ECS instances or ECI instances, or ECS instances or ECI instances in other VPCs cannot be added to the scaling group.
 *     - If no vSwitch ID is specified for the scaling group, VPC-connected ECS instances or ECI instances cannot be added to the scaling group.
 * - Limits on managed instances to be added to the scaling group:
 *     - The instances must be in the same region as the scaling group.
 *     - Only managed instances that are not added to any scaling group can be added to an ECS scaling group.
 *     - Managed instances do not support lifecycle hooks, association with load balancing, or the health check feature.
 *     - After managed instances are added to an ECS scaling group, the scaling group does not manage the lifecycle of the managed instances.
 *     - Managed instances can only be manually added to or removed from the scaling group. Removed managed instances are not released.
 * - Precautions for using this operation:
 *     - If no scaling activities are in progress in the scaling group, this operation can bypass the cooldown time and be executed directly.
 *     - A successful response only indicates that Auto Scaling accepted the request of the operation invocation and the scaling activity can be executed. It does not mean that the scaling activity will be executed successfully. You must use the returned ScalingActivityId to check the execution status of the scaling activity.
 *     - If the sum of the number of instances specified in this operation and the current number of instances in the scaling group (Total Capacity) is greater than the maximum number of instances (MaxSize), the operation invocation fails.
 *     - ECS instances, ECI instances, or managed instances manually added by using this operation are not associated with the active scaling configuration of the scaling group.
 *
 * @param request AttachInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachInstancesResponse
 */
AttachInstancesResponse Client::attachInstancesWithOptions(const AttachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEntrusted()) {
    query["Entrusted"] = request.getEntrusted();
  }

  if (!!request.hasIgnoreInvalidInstance()) {
    query["IgnoreInvalidInstance"] = request.getIgnoreInvalidInstance();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLifecycleHook()) {
    query["LifecycleHook"] = request.getLifecycleHook();
  }

  if (!!request.hasLoadBalancerWeights()) {
    query["LoadBalancerWeights"] = request.getLoadBalancerWeights();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachInstancesResponse>();
}

/**
 * @summary Manually adds instances to a scaling group. You can add ECS instances, Elastic Container Instance (ECI) instances, or managed instances outside the scaling group to the scaling group and put them into service. You can also restart ECS instances in the scaling group that are in the Economical Mode to the Running state and put them into service.
 *
 * @description - Before you invoke this operation, make sure that the following conditions are met:
 *     - The scaling group is in the Active state.
 *     - No scaling activities are in progress in the scaling group.
 * - Limits on ECS instances or ECI instances to be added to the scaling group:
 *     - The instances must be in the same region as the scaling group.
 *     - The instances must be in the Running state.
 *     - The instances must not be added to other scaling groups.
 *     - The billing method of the instances must be subscription, pay-as-you-go, or spot instance.
 *     - If a vSwitch ID is specified for the scaling group, classic network-connected ECS instances or ECI instances, or ECS instances or ECI instances in other VPCs cannot be added to the scaling group.
 *     - If no vSwitch ID is specified for the scaling group, VPC-connected ECS instances or ECI instances cannot be added to the scaling group.
 * - Limits on managed instances to be added to the scaling group:
 *     - The instances must be in the same region as the scaling group.
 *     - Only managed instances that are not added to any scaling group can be added to an ECS scaling group.
 *     - Managed instances do not support lifecycle hooks, association with load balancing, or the health check feature.
 *     - After managed instances are added to an ECS scaling group, the scaling group does not manage the lifecycle of the managed instances.
 *     - Managed instances can only be manually added to or removed from the scaling group. Removed managed instances are not released.
 * - Precautions for using this operation:
 *     - If no scaling activities are in progress in the scaling group, this operation can bypass the cooldown time and be executed directly.
 *     - A successful response only indicates that Auto Scaling accepted the request of the operation invocation and the scaling activity can be executed. It does not mean that the scaling activity will be executed successfully. You must use the returned ScalingActivityId to check the execution status of the scaling activity.
 *     - If the sum of the number of instances specified in this operation and the current number of instances in the scaling group (Total Capacity) is greater than the maximum number of instances (MaxSize), the operation invocation fails.
 *     - ECS instances, ECI instances, or managed instances manually added by using this operation are not associated with the active scaling configuration of the scaling group.
 *
 * @param request AttachInstancesRequest
 * @return AttachInstancesResponse
 */
AttachInstancesResponse Client::attachInstances(const AttachInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachInstancesWithOptions(request, runtime);
}

/**
 * @summary Associates one or more load balancing instances with a scaling group to distribute access traffic to multiple instances in the scaling group and enhance the service capability of the scaling group. You can call the AttachLoadBalancers API operation to add one or more load balancing instances.
 *
 * @description The following conditions must be met when adding load balancing instances to a scaling group:
 * - The load balancing instances and the scaling group must belong to the same account and region.
 * - The load balancing instances must be in the `Running` state.
 * - Each load balancing instance must be configured with at least one listener and have health checks enabled.
 * - If the network type of both the load balancing instances and the scaling group is VPC, they must be in the same VPC.
 * - If the network type of the scaling group is VPC and the network type of the load balancing instances is classic network, and the backend servers of the load balancing instances include VPC-connected instances, the VPC-connected instances must be in the same VPC as the scaling group.
 * - The number of load balancing instances associated with the scaling group does not exceed the quota. For more information about the quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 *
 * @param request AttachLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachLoadBalancersResponse
 */
AttachLoadBalancersResponse Client::attachLoadBalancersWithOptions(const AttachLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.getAsync();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceAttach()) {
    query["ForceAttach"] = request.getForceAttach();
  }

  if (!!request.hasLoadBalancerConfigs()) {
    query["LoadBalancerConfigs"] = request.getLoadBalancerConfigs();
  }

  if (!!request.hasLoadBalancers()) {
    query["LoadBalancers"] = request.getLoadBalancers();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachLoadBalancers"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachLoadBalancersResponse>();
}

/**
 * @summary Associates one or more load balancing instances with a scaling group to distribute access traffic to multiple instances in the scaling group and enhance the service capability of the scaling group. You can call the AttachLoadBalancers API operation to add one or more load balancing instances.
 *
 * @description The following conditions must be met when adding load balancing instances to a scaling group:
 * - The load balancing instances and the scaling group must belong to the same account and region.
 * - The load balancing instances must be in the `Running` state.
 * - Each load balancing instance must be configured with at least one listener and have health checks enabled.
 * - If the network type of both the load balancing instances and the scaling group is VPC, they must be in the same VPC.
 * - If the network type of the scaling group is VPC and the network type of the load balancing instances is classic network, and the backend servers of the load balancing instances include VPC-connected instances, the VPC-connected instances must be in the same VPC as the scaling group.
 * - The number of load balancing instances associated with the scaling group does not exceed the quota. For more information about the quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 *
 * @param request AttachLoadBalancersRequest
 * @return AttachLoadBalancersResponse
 */
AttachLoadBalancersResponse Client::attachLoadBalancers(const AttachLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Invokes the AttachServerGroups API to attach one or more load balancing server groups to a scaling group. This applies to scenarios that require dynamic instance scaling to handle fluctuating workloads and ensure application programs remain active with high availability. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB). This enables automatic elastic extension, allows you to dynamically allocate traffic based on load conditions, and improves the stability of application programs.
 *
 * @param request AttachServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachServerGroupsResponse
 */
AttachServerGroupsResponse Client::attachServerGroupsWithOptions(const AttachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceAttach()) {
    query["ForceAttach"] = request.getForceAttach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasServerGroups()) {
    query["ServerGroups"] = request.getServerGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachServerGroupsResponse>();
}

/**
 * @summary Invokes the AttachServerGroups API to attach one or more load balancing server groups to a scaling group. This applies to scenarios that require dynamic instance scaling to handle fluctuating workloads and ensure application programs remain active with high availability. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB). This enables automatic elastic extension, allows you to dynamically allocate traffic based on load conditions, and improves the stability of application programs.
 *
 * @param request AttachServerGroupsRequest
 * @return AttachServerGroupsResponse
 */
AttachServerGroupsResponse Client::attachServerGroups(const AttachServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Adds one or more vServer groups of a Classic Load Balancer (CLB) instance to a scaling group. After a scaling group is associated with a CLB instance, instances added to the scaling group are automatically added as backend servers of the CLB instance to process access requests forwarded by the CLB instance. To forward different requests to different backend servers or forward requests based on domain names and URLs, you can call the AttachVServerGroups API operation to add one or more vServer groups of the CLB instance and manage different backend servers by using the vServer groups.
 *
 * @description - To add vServer groups to a scaling group, the following conditions must be met:
 *     - The CLB instance and the scaling group must belong to the same account.
 *     - The CLB instance and the scaling group must be in the same region.
 *     - The CLB instance must be in the Running state.
 *     - The CLB instance must be configured with at least one listener and health checks must be enabled.
 *     - If the network types of both the CLB instance and the scaling group are VPC, they must be in the same VPC.
 *     - If the network type of the scaling group is VPC and the network type of the CLB instance is classic network, and the vServer group contains VPC-connected instances, the instances must be in the same VPC as the scaling group.
 *     - The vServer groups to be added must belong to the corresponding CLB instance.
 *     - The number of vServer groups in the scaling group does not exceed the quota. For more information about the quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - When you add vServer groups to a scaling group, you must specify the following properties:
 *     - CLB instance ID (LoadBalancerId)
 *     - vServer group ID (VServerGroupId)
 *     - vServer group port number (Port)
 *     >If you add the same vServer group to a scaling group by using different port numbers, the system considers that multiple vServer groups are added to the scaling group. If both the vServer group ID and the port number in the request parameters are duplicated, the system uses the first configured group by default and ignores the other vServer groups.
 *
 * @param request AttachVServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachVServerGroupsResponse
 */
AttachVServerGroupsResponse Client::attachVServerGroupsWithOptions(const AttachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceAttach()) {
    query["ForceAttach"] = request.getForceAttach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasVServerGroups()) {
    query["VServerGroups"] = request.getVServerGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachVServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachVServerGroupsResponse>();
}

/**
 * @summary Adds one or more vServer groups of a Classic Load Balancer (CLB) instance to a scaling group. After a scaling group is associated with a CLB instance, instances added to the scaling group are automatically added as backend servers of the CLB instance to process access requests forwarded by the CLB instance. To forward different requests to different backend servers or forward requests based on domain names and URLs, you can call the AttachVServerGroups API operation to add one or more vServer groups of the CLB instance and manage different backend servers by using the vServer groups.
 *
 * @description - To add vServer groups to a scaling group, the following conditions must be met:
 *     - The CLB instance and the scaling group must belong to the same account.
 *     - The CLB instance and the scaling group must be in the same region.
 *     - The CLB instance must be in the Running state.
 *     - The CLB instance must be configured with at least one listener and health checks must be enabled.
 *     - If the network types of both the CLB instance and the scaling group are VPC, they must be in the same VPC.
 *     - If the network type of the scaling group is VPC and the network type of the CLB instance is classic network, and the vServer group contains VPC-connected instances, the instances must be in the same VPC as the scaling group.
 *     - The vServer groups to be added must belong to the corresponding CLB instance.
 *     - The number of vServer groups in the scaling group does not exceed the quota. For more information about the quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - When you add vServer groups to a scaling group, you must specify the following properties:
 *     - CLB instance ID (LoadBalancerId)
 *     - vServer group ID (VServerGroupId)
 *     - vServer group port number (Port)
 *     >If you add the same vServer group to a scaling group by using different port numbers, the system considers that multiple vServer groups are added to the scaling group. If both the vServer group ID and the port number in the request parameters are duplicated, the system uses the first configured group by default and ignores the other vServer groups.
 *
 * @param request AttachVServerGroupsRequest
 * @return AttachVServerGroupsResponse
 */
AttachVServerGroupsResponse Client::attachVServerGroups(const AttachVServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Cancels an instance refresh task and retains new instances that have been replaced and scaled out.
 *
 * @description - You cannot cancel an instance refresh task that is being rolled back.
 *
 * @param request CancelInstanceRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelInstanceRefreshResponse
 */
CancelInstanceRefreshResponse Client::cancelInstanceRefreshWithOptions(const CancelInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskId()) {
    query["InstanceRefreshTaskId"] = request.getInstanceRefreshTaskId();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelInstanceRefresh"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelInstanceRefreshResponse>();
}

/**
 * @summary Cancels an instance refresh task and retains new instances that have been replaced and scaled out.
 *
 * @description - You cannot cancel an instance refresh task that is being rolled back.
 *
 * @param request CancelInstanceRefreshRequest
 * @return CancelInstanceRefreshResponse
 */
CancelInstanceRefreshResponse Client::cancelInstanceRefresh(const CancelInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Cancels the zone fault degradation for a scaling group.
 *
 * @param request CancelScalingGroupZoneShiftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelScalingGroupZoneShiftResponse
 */
CancelScalingGroupZoneShiftResponse Client::cancelScalingGroupZoneShiftWithOptions(const CancelScalingGroupZoneShiftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelScalingGroupZoneShift"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelScalingGroupZoneShiftResponse>();
}

/**
 * @summary Cancels the zone fault degradation for a scaling group.
 *
 * @param request CancelScalingGroupZoneShiftRequest
 * @return CancelScalingGroupZoneShiftResponse
 */
CancelScalingGroupZoneShiftResponse Client::cancelScalingGroupZoneShift(const CancelScalingGroupZoneShiftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelScalingGroupZoneShiftWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a scaling group belongs. Resource groups allow you to group your cloud resources, such as scaling groups, by purpose, permissions, and ownership to implement hierarchical resource management for multiple users and projects within an enterprise. You can call the ChangeResourceGroup operation to move a scaling group from one resource group to another. This allows you to centrally monitor and manage the scaling group in the new resource group, eliminating the need to check resources across multiple Alibaba Cloud services.
 *
 * @description - A resource is a cloud service entity that you create in Alibaba Cloud. For example, a scaling group is a resource.
 * - A resource group is a mechanism for grouping and managing resources within an Alibaba Cloud account. It helps you resolve the complexities of resource grouping and authorization management within a single cloud account. For more information, see [What is Resource Management](https://help.aliyun.com/document_detail/94475.html).
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2022-02-22"},
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
 * @summary Changes the resource group to which a scaling group belongs. Resource groups allow you to group your cloud resources, such as scaling groups, by purpose, permissions, and ownership to implement hierarchical resource management for multiple users and projects within an enterprise. You can call the ChangeResourceGroup operation to move a scaling group from one resource group to another. This allows you to centrally monitor and manage the scaling group in the new resource group, eliminating the need to check resources across multiple Alibaba Cloud services.
 *
 * @description - A resource is a cloud service entity that you create in Alibaba Cloud. For example, a scaling group is a resource.
 * - A resource group is a mechanism for grouping and managing resources within an Alibaba Cloud account. It helps you resolve the complexities of resource grouping and authorization management within a single cloud account. For more information, see [What is Resource Management](https://help.aliyun.com/document_detail/94475.html).
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Ends the wait state of a scaling activity in advance to execute the next action if a lifecycle hook is configured for a scaling group.
 *
 * @description Allows you to specify the next action after the wait state ends: continue the scaling activity (CONTINUE), abandon the scaling activity (ABANDON), or perform a rollback (ROLLBACK).
 *
 * @param request CompleteLifecycleActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteLifecycleActionResponse
 */
CompleteLifecycleActionResponse Client::completeLifecycleActionWithOptions(const CompleteLifecycleActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLifecycleActionResult()) {
    query["LifecycleActionResult"] = request.getLifecycleActionResult();
  }

  if (!!request.hasLifecycleActionToken()) {
    query["LifecycleActionToken"] = request.getLifecycleActionToken();
  }

  if (!!request.hasLifecycleHookId()) {
    query["LifecycleHookId"] = request.getLifecycleHookId();
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
    {"action" , "CompleteLifecycleAction"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteLifecycleActionResponse>();
}

/**
 * @summary Ends the wait state of a scaling activity in advance to execute the next action if a lifecycle hook is configured for a scaling group.
 *
 * @description Allows you to specify the next action after the wait state ends: continue the scaling activity (CONTINUE), abandon the scaling activity (ABANDON), or perform a rollback (ROLLBACK).
 *
 * @param request CompleteLifecycleActionRequest
 * @return CompleteLifecycleActionResponse
 */
CompleteLifecycleActionResponse Client::completeLifecycleAction(const CompleteLifecycleActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeLifecycleActionWithOptions(request, runtime);
}

/**
 * @summary For workloads with bursty or unpredictable traffic patterns, call the CreateAlarm operation to create an event-triggered task. After the task is associated with CloudMonitor metrics, you can dynamically adjust the number of ECS or ECI instances in a scaling group and monitor instance metrics in real time to help you better manage and maintain cloud resources.
 *
 * @description - If you create an event-triggered task of the custom monitoring type (MetricType=custom), you must first report custom metric data to CloudMonitor. For more information, see [Custom monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74861.html).
 * - When you create an event-triggered task, you must specify a metric (MetricName) and configure dimension information (Dimensions.DimensionKey and Dimensions.DimensionValue) to determine the aggregation scope of the metric data in the scaling group. For example, you can specify user_id and scaling_group to aggregate the metric data of all ECS or ECI instances for a specific user in a specific scaling group.
 *     - The metrics for custom monitoring event-triggered tasks (MetricType=custom) depend on your custom metrics.
 *     - For more information about the metrics supported by system monitoring event-triggered tasks (MetricType=system), see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
 * > In the dimension information, user_id and scaling_group are automatically populated by the system, while device and state must be manually specified. For more information, see the Dimensions.DimensionKey and Dimensions.DimensionValue parameters.
 *
 * @param request CreateAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlarmResponse
 */
CreateAlarmResponse Client::createAlarmWithOptions(const CreateAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmActions()) {
    query["AlarmActions"] = request.getAlarmActions();
  }

  if (!!request.hasComparisonOperator()) {
    query["ComparisonOperator"] = request.getComparisonOperator();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffective()) {
    query["Effective"] = request.getEffective();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasExpressions()) {
    query["Expressions"] = request.getExpressions();
  }

  if (!!request.hasExpressionsLogicOperator()) {
    query["ExpressionsLogicOperator"] = request.getExpressionsLogicOperator();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStatistics()) {
    query["Statistics"] = request.getStatistics();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlarm"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlarmResponse>();
}

/**
 * @summary For workloads with bursty or unpredictable traffic patterns, call the CreateAlarm operation to create an event-triggered task. After the task is associated with CloudMonitor metrics, you can dynamically adjust the number of ECS or ECI instances in a scaling group and monitor instance metrics in real time to help you better manage and maintain cloud resources.
 *
 * @description - If you create an event-triggered task of the custom monitoring type (MetricType=custom), you must first report custom metric data to CloudMonitor. For more information, see [Custom monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74861.html).
 * - When you create an event-triggered task, you must specify a metric (MetricName) and configure dimension information (Dimensions.DimensionKey and Dimensions.DimensionValue) to determine the aggregation scope of the metric data in the scaling group. For example, you can specify user_id and scaling_group to aggregate the metric data of all ECS or ECI instances for a specific user in a specific scaling group.
 *     - The metrics for custom monitoring event-triggered tasks (MetricType=custom) depend on your custom metrics.
 *     - For more information about the metrics supported by system monitoring event-triggered tasks (MetricType=system), see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
 * > In the dimension information, user_id and scaling_group are automatically populated by the system, while device and state must be manually specified. For more information, see the Dimensions.DimensionKey and Dimensions.DimensionValue parameters.
 *
 * @param request CreateAlarmRequest
 * @return CreateAlarmResponse
 */
CreateAlarmResponse Client::createAlarm(const CreateAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlarmWithOptions(request, runtime);
}

/**
 * @summary Creates a diagnostic report.
 *
 * @param request CreateDiagnoseReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnoseReportResponse
 */
CreateDiagnoseReportResponse Client::createDiagnoseReportWithOptions(const CreateDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiagnoseReport"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiagnoseReportResponse>();
}

/**
 * @summary Creates a diagnostic report.
 *
 * @param request CreateDiagnoseReportRequest
 * @return CreateDiagnoseReportResponse
 */
CreateDiagnoseReportResponse Client::createDiagnoseReport(const CreateDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiagnoseReportWithOptions(request, runtime);
}

/**
 * @summary Creates an Elastic Container Instance (ECI) scaling configuration. Auto Scaling uses this scaling configuration as a template for ECI instances and performs automatic creation of ECI instances to meet your business needs when a scale-out activity is triggered.
 *
 * @description The scaling configuration specifies the template for ECI instances used during scale-out activities.
 * The Cpu and Memory parameters specify the range of vCPUs and memory to define the instance type. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates the most cost-effective instance based on price sorting. This method applies only when the scaling policy of the scaling group is set to cost optimization and no instance type is specified in the scaling configuration.
 *
 * @param request CreateEciScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEciScalingConfigurationResponse
 */
CreateEciScalingConfigurationResponse Client::createEciScalingConfigurationWithOptions(const CreateEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrRegistryInfos()) {
    query["AcrRegistryInfos"] = request.getAcrRegistryInfos();
  }

  if (!!request.hasActiveDeadlineSeconds()) {
    query["ActiveDeadlineSeconds"] = request.getActiveDeadlineSeconds();
  }

  if (!!request.hasAutoCreateEip()) {
    query["AutoCreateEip"] = request.getAutoCreateEip();
  }

  if (!!request.hasAutoMatchImageCache()) {
    query["AutoMatchImageCache"] = request.getAutoMatchImageCache();
  }

  if (!!request.hasContainerGroupName()) {
    query["ContainerGroupName"] = request.getContainerGroupName();
  }

  if (!!request.hasContainers()) {
    query["Containers"] = request.getContainers();
  }

  if (!!request.hasCostOptimization()) {
    query["CostOptimization"] = request.getCostOptimization();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasCpuOptionsCore()) {
    query["CpuOptionsCore"] = request.getCpuOptionsCore();
  }

  if (!!request.hasCpuOptionsThreadsPerCore()) {
    query["CpuOptionsThreadsPerCore"] = request.getCpuOptionsThreadsPerCore();
  }

  if (!!request.hasDataCacheBucket()) {
    query["DataCacheBucket"] = request.getDataCacheBucket();
  }

  if (!!request.hasDataCacheBurstingEnabled()) {
    query["DataCacheBurstingEnabled"] = request.getDataCacheBurstingEnabled();
  }

  if (!!request.hasDataCachePL()) {
    query["DataCachePL"] = request.getDataCachePL();
  }

  if (!!request.hasDataCacheProvisionedIops()) {
    query["DataCacheProvisionedIops"] = request.getDataCacheProvisionedIops();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDnsConfigNameServers()) {
    query["DnsConfigNameServers"] = request.getDnsConfigNameServers();
  }

  if (!!request.hasDnsConfigOptions()) {
    query["DnsConfigOptions"] = request.getDnsConfigOptions();
  }

  if (!!request.hasDnsConfigSearchs()) {
    query["DnsConfigSearchs"] = request.getDnsConfigSearchs();
  }

  if (!!request.hasDnsPolicy()) {
    query["DnsPolicy"] = request.getDnsPolicy();
  }

  if (!!request.hasEgressBandwidth()) {
    query["EgressBandwidth"] = request.getEgressBandwidth();
  }

  if (!!request.hasEipBandwidth()) {
    query["EipBandwidth"] = request.getEipBandwidth();
  }

  if (!!request.hasEnableSls()) {
    query["EnableSls"] = request.getEnableSls();
  }

  if (!!request.hasEphemeralStorage()) {
    query["EphemeralStorage"] = request.getEphemeralStorage();
  }

  if (!!request.hasGpuDriverVersion()) {
    query["GpuDriverVersion"] = request.getGpuDriverVersion();
  }

  if (!!request.hasHostAliases()) {
    query["HostAliases"] = request.getHostAliases();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageRegistryCredentials()) {
    query["ImageRegistryCredentials"] = request.getImageRegistryCredentials();
  }

  if (!!request.hasImageSnapshotId()) {
    query["ImageSnapshotId"] = request.getImageSnapshotId();
  }

  if (!!request.hasIngressBandwidth()) {
    query["IngressBandwidth"] = request.getIngressBandwidth();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.getInitContainers();
  }

  if (!!request.hasInstanceFamilyLevel()) {
    query["InstanceFamilyLevel"] = request.getInstanceFamilyLevel();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasLoadBalancerWeight()) {
    query["LoadBalancerWeight"] = request.getLoadBalancerWeight();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNtpServers()) {
    query["NtpServers"] = request.getNtpServers();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.getRamRoleName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasRestartPolicy()) {
    query["RestartPolicy"] = request.getRestartPolicy();
  }

  if (!!request.hasScalingConfigurationName()) {
    query["ScalingConfigurationName"] = request.getScalingConfigurationName();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasSecurityContextSysctls()) {
    query["SecurityContextSysctls"] = request.getSecurityContextSysctls();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSpotPriceLimit()) {
    query["SpotPriceLimit"] = request.getSpotPriceLimit();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.getTerminationGracePeriodSeconds();
  }

  if (!!request.hasVolumes()) {
    query["Volumes"] = request.getVolumes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEciScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEciScalingConfigurationResponse>();
}

/**
 * @summary Creates an Elastic Container Instance (ECI) scaling configuration. Auto Scaling uses this scaling configuration as a template for ECI instances and performs automatic creation of ECI instances to meet your business needs when a scale-out activity is triggered.
 *
 * @description The scaling configuration specifies the template for ECI instances used during scale-out activities.
 * The Cpu and Memory parameters specify the range of vCPUs and memory to define the instance type. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates the most cost-effective instance based on price sorting. This method applies only when the scaling policy of the scaling group is set to cost optimization and no instance type is specified in the scaling configuration.
 *
 * @param request CreateEciScalingConfigurationRequest
 * @return CreateEciScalingConfigurationResponse
 */
CreateEciScalingConfigurationResponse Client::createEciScalingConfiguration(const CreateEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary The CreateLifecycleHook API creates one or more lifecycle hooks in a specified scaling group. These hooks intervene at critical stages of the instance lifecycle, such as before startup or termination, and allow you to perform custom operations, such as sending notifications or executing automation scripts. This feature enables finer-grained control and management. For example, you can perform validation, configuration, or data backup tasks before and after instances are affected by scaling activities, which enhances the flexibility and reliability of application deployments.
 *
 * @description You can create up to 10 lifecycle hooks in a scaling group. When a scaling activity occurs in a scaling group that has lifecycle hooks, the lifecycle hooks suspend the scaling activity for a period of time. You can specify the wait time by using the HeartbeatTimeout parameter. During the wait time, you can perform operations such as initializing the configurations of ECS instances and obtaining ECS instance data.
 * During a scale-out activity, ECS instances enter the wait state after they are added to the whitelist of an ApsaraDB RDS instance, and are added to the backend server group of a Server Load Balancer (SLB) instance after the wait state ends. During a scale-in activity, ECS instances enter the wait state after they are removed from the backend server group of the SLB instance, and are removed from the whitelist of the ApsaraDB RDS instance after the wait state ends.
 * You can configure notification methods for lifecycle hooks. Supported notification methods include Message Service (MNS) topics, MNS queues, and Operation Orchestration Service (OOS) templates. If you configure an OOS template, you must create a Resource Access Management (RAM) role for OOS. For more information, see [Grant RAM permissions to OOS](https://help.aliyun.com/document_detail/120810.html).
 * > If the scaling group contains existing ECS instances and the configured OOS template is used to add or remove instances from the whitelist of a cloud database other than ApsaraDB RDS, you must manually add the existing ECS instances to the whitelist of the cloud database.
 *
 * @param request CreateLifecycleHookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLifecycleHookResponse
 */
CreateLifecycleHookResponse Client::createLifecycleHookWithOptions(const CreateLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultResult()) {
    query["DefaultResult"] = request.getDefaultResult();
  }

  if (!!request.hasHeartbeatTimeout()) {
    query["HeartbeatTimeout"] = request.getHeartbeatTimeout();
  }

  if (!!request.hasLifecycleActionSources()) {
    query["LifecycleActionSources"] = request.getLifecycleActionSources();
  }

  if (!!request.hasLifecycleHookName()) {
    query["LifecycleHookName"] = request.getLifecycleHookName();
  }

  if (!!request.hasLifecycleTransition()) {
    query["LifecycleTransition"] = request.getLifecycleTransition();
  }

  if (!!request.hasNotificationArn()) {
    query["NotificationArn"] = request.getNotificationArn();
  }

  if (!!request.hasNotificationMetadata()) {
    query["NotificationMetadata"] = request.getNotificationMetadata();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLifecycleHook"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLifecycleHookResponse>();
}

/**
 * @summary The CreateLifecycleHook API creates one or more lifecycle hooks in a specified scaling group. These hooks intervene at critical stages of the instance lifecycle, such as before startup or termination, and allow you to perform custom operations, such as sending notifications or executing automation scripts. This feature enables finer-grained control and management. For example, you can perform validation, configuration, or data backup tasks before and after instances are affected by scaling activities, which enhances the flexibility and reliability of application deployments.
 *
 * @description You can create up to 10 lifecycle hooks in a scaling group. When a scaling activity occurs in a scaling group that has lifecycle hooks, the lifecycle hooks suspend the scaling activity for a period of time. You can specify the wait time by using the HeartbeatTimeout parameter. During the wait time, you can perform operations such as initializing the configurations of ECS instances and obtaining ECS instance data.
 * During a scale-out activity, ECS instances enter the wait state after they are added to the whitelist of an ApsaraDB RDS instance, and are added to the backend server group of a Server Load Balancer (SLB) instance after the wait state ends. During a scale-in activity, ECS instances enter the wait state after they are removed from the backend server group of the SLB instance, and are removed from the whitelist of the ApsaraDB RDS instance after the wait state ends.
 * You can configure notification methods for lifecycle hooks. Supported notification methods include Message Service (MNS) topics, MNS queues, and Operation Orchestration Service (OOS) templates. If you configure an OOS template, you must create a Resource Access Management (RAM) role for OOS. For more information, see [Grant RAM permissions to OOS](https://help.aliyun.com/document_detail/120810.html).
 * > If the scaling group contains existing ECS instances and the configured OOS template is used to add or remove instances from the whitelist of a cloud database other than ApsaraDB RDS, you must manually add the existing ECS instances to the whitelist of the cloud database.
 *
 * @param request CreateLifecycleHookRequest
 * @return CreateLifecycleHookResponse
 */
CreateLifecycleHookResponse Client::createLifecycleHook(const CreateLifecycleHookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLifecycleHookWithOptions(request, runtime);
}

/**
 * @summary Creates a notification configuration for Auto Scaling events and resource changes to help you track scaling group dynamics and automate the management of Auto Scaling events.
 *
 * @description - You can configure the notification Settings to receive messages from cloud monitoring system events, Simple Message Queue (formerly MNS) queues, or Simple Message Queue (formerly MNS) topics. When a scaling event or resource change of a specified type occurs in a scaling group, Auto Scaling notifies cloud monitoring or Simple Message Queue (formerly MNS).
 * - Different event notifications within the same scaling group cannot use the same destination.
 *   For example, different event notifications cannot use the same cloud monitoring system event, the same MNS topic, or the same MNS queue at the same time.
 *
 * @param request CreateNotificationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNotificationConfigurationResponse
 */
CreateNotificationConfigurationResponse Client::createNotificationConfigurationWithOptions(const CreateNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessageEncoding()) {
    query["MessageEncoding"] = request.getMessageEncoding();
  }

  if (!!request.hasNotificationArn()) {
    query["NotificationArn"] = request.getNotificationArn();
  }

  if (!!request.hasNotificationTypes()) {
    query["NotificationTypes"] = request.getNotificationTypes();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNotificationConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNotificationConfigurationResponse>();
}

/**
 * @summary Creates a notification configuration for Auto Scaling events and resource changes to help you track scaling group dynamics and automate the management of Auto Scaling events.
 *
 * @description - You can configure the notification Settings to receive messages from cloud monitoring system events, Simple Message Queue (formerly MNS) queues, or Simple Message Queue (formerly MNS) topics. When a scaling event or resource change of a specified type occurs in a scaling group, Auto Scaling notifies cloud monitoring or Simple Message Queue (formerly MNS).
 * - Different event notifications within the same scaling group cannot use the same destination.
 *   For example, different event notifications cannot use the same cloud monitoring system event, the same MNS topic, or the same MNS queue at the same time.
 *
 * @param request CreateNotificationConfigurationRequest
 * @return CreateNotificationConfigurationResponse
 */
CreateNotificationConfigurationResponse Client::createNotificationConfiguration(const CreateNotificationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNotificationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates an ECS scaling configuration for a scaling group.
 *
 * @description A scaling configuration specifies the ECS instance template used during scale-out. The following instance configuration methods are supported:
 * - InstancePatternInfos: the intelligent configuration mode. You do not need to specify exact network types. You only need to specify the number of vCPUs, memory size, instance family level, and maximum price based on your business requirements. The system automatically filters network types that meet the requirements and preferentially selects the network type with the lowest price to create ECS instances. This mode applies only to scaling groups in a VPC and effectively reduces the chance of insufficient network type inventory during scale-out.
 * - InstanceType: specifies a single instance type.
 * - InstanceTypes: specifies multiple instance types.
 * - InstanceTypeOverrides: specifies multiple instance types and configures weights for different instance types.
 * - Cpu and Memory: specifies the range of instance types by defining the number of vCPUs and memory size. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates instances with the lowest price. This method applies only when the scaling policy of the scaling group is set to cost optimization and no instance type is specified in the scaling configuration.
 * - You can use one of the following methods to bind the primary ENI. Note that you can use only one method to configure the primary ENI in a single call. Using both methods at the same time causes the call to fail and returns an error message.
 *     - Directly set the configuration information of the primary ENI by using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *     - Set the configuration information of the primary ENI and secondary ENIs by using NetworkInterfaces. When you use the NetworkInterface parameter, you must set the primary ENI information. If NetworkInterface.InstanceType is set to Primary, it indicates the primary ENI. If NetworkInterface.InstanceType is set to Secondary or left empty, it indicates a secondary ENI.
 * > You cannot specify InstanceType, InstanceTypes, InstanceTypeOverrides, and Cpu and Memory at the same time. However, you can specify InstanceType or InstanceTypes together with InstancePatternInfos. When InstanceType or InstanceTypes is specified together with InstancePatternInfos, Auto Scaling preferentially uses the specified instance types for scale-out. If the specified instance types are out of stock, Auto Scaling uses the instance types that match the InstancePatternInfos configuration.
 *
 * @param tmpReq CreateScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScalingConfigurationResponse
 */
CreateScalingConfigurationResponse Client::createScalingConfigurationWithOptions(const CreateScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScalingConfigurationShrinkRequest request = CreateScalingConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSchedulerOptions()) {
    request.setSchedulerOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedulerOptions(), "SchedulerOptions", "json"));
  }

  json query = {};
  if (!!request.hasAffinity()) {
    query["Affinity"] = request.getAffinity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasCreditSpecification()) {
    query["CreditSpecification"] = request.getCreditSpecification();
  }

  if (!!request.hasCustomPriorities()) {
    query["CustomPriorities"] = request.getCustomPriorities();
  }

  if (!!request.hasDataDisks()) {
    query["DataDisks"] = request.getDataDisks();
  }

  if (!!request.hasDedicatedHostClusterId()) {
    query["DedicatedHostClusterId"] = request.getDedicatedHostClusterId();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHpcClusterId()) {
    query["HpcClusterId"] = request.getHpcClusterId();
  }

  if (!!request.hasHttpEndpoint()) {
    query["HttpEndpoint"] = request.getHttpEndpoint();
  }

  if (!!request.hasHttpTokens()) {
    query["HttpTokens"] = request.getHttpTokens();
  }

  if (!!request.hasImageFamily()) {
    query["ImageFamily"] = request.getImageFamily();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstancePatternInfos()) {
    query["InstancePatternInfos"] = request.getInstancePatternInfos();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInstanceTypeCandidateOptions()) {
    query["InstanceTypeCandidateOptions"] = request.getInstanceTypeCandidateOptions();
  }

  if (!!request.hasInstanceTypeOverrides()) {
    query["InstanceTypeOverrides"] = request.getInstanceTypeOverrides();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthIn()) {
    query["InternetMaxBandwidthIn"] = request.getInternetMaxBandwidthIn();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasIoOptimized()) {
    query["IoOptimized"] = request.getIoOptimized();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasLoadBalancerWeight()) {
    query["LoadBalancerWeight"] = request.getLoadBalancerWeight();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNetworkInterfaces()) {
    query["NetworkInterfaces"] = request.getNetworkInterfaces();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInherit()) {
    query["PasswordInherit"] = request.getPasswordInherit();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.getRamRoleName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourcePoolOptions()) {
    query["ResourcePoolOptions"] = request.getResourcePoolOptions();
  }

  if (!!request.hasScalingConfigurationName()) {
    query["ScalingConfigurationName"] = request.getScalingConfigurationName();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasSchedulerOptionsShrink()) {
    query["SchedulerOptions"] = request.getSchedulerOptionsShrink();
  }

  if (!!request.hasSecondaryEniVSwitchConstraint()) {
    query["SecondaryEniVSwitchConstraint"] = request.getSecondaryEniVSwitchConstraint();
  }

  if (!!request.hasSecurityEnhancementStrategy()) {
    query["SecurityEnhancementStrategy"] = request.getSecurityEnhancementStrategy();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  if (!!request.hasSecurityOptions()) {
    query["SecurityOptions"] = request.getSecurityOptions();
  }

  if (!!request.hasSpotDuration()) {
    query["SpotDuration"] = request.getSpotDuration();
  }

  if (!!request.hasSpotInterruptionBehavior()) {
    query["SpotInterruptionBehavior"] = request.getSpotInterruptionBehavior();
  }

  if (!!request.hasSpotPriceLimits()) {
    query["SpotPriceLimits"] = request.getSpotPriceLimits();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasStorageSetId()) {
    query["StorageSetId"] = request.getStorageSetId();
  }

  if (!!request.hasStorageSetPartitionNumber()) {
    query["StorageSetPartitionNumber"] = request.getStorageSetPartitionNumber();
  }

  if (!!request.hasSystemDiskCategories()) {
    query["SystemDiskCategories"] = request.getSystemDiskCategories();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTenancy()) {
    query["Tenancy"] = request.getTenancy();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasImageOptions()) {
    query["ImageOptions"] = request.getImageOptions();
  }

  if (!!request.hasPrivatePoolOptions()) {
    query["PrivatePoolOptions"] = request.getPrivatePoolOptions();
  }

  if (!!request.hasSystemDisk()) {
    query["SystemDisk"] = request.getSystemDisk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScalingConfigurationResponse>();
}

/**
 * @summary Creates an ECS scaling configuration for a scaling group.
 *
 * @description A scaling configuration specifies the ECS instance template used during scale-out. The following instance configuration methods are supported:
 * - InstancePatternInfos: the intelligent configuration mode. You do not need to specify exact network types. You only need to specify the number of vCPUs, memory size, instance family level, and maximum price based on your business requirements. The system automatically filters network types that meet the requirements and preferentially selects the network type with the lowest price to create ECS instances. This mode applies only to scaling groups in a VPC and effectively reduces the chance of insufficient network type inventory during scale-out.
 * - InstanceType: specifies a single instance type.
 * - InstanceTypes: specifies multiple instance types.
 * - InstanceTypeOverrides: specifies multiple instance types and configures weights for different instance types.
 * - Cpu and Memory: specifies the range of instance types by defining the number of vCPUs and memory size. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates instances with the lowest price. This method applies only when the scaling policy of the scaling group is set to cost optimization and no instance type is specified in the scaling configuration.
 * - You can use one of the following methods to bind the primary ENI. Note that you can use only one method to configure the primary ENI in a single call. Using both methods at the same time causes the call to fail and returns an error message.
 *     - Directly set the configuration information of the primary ENI by using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *     - Set the configuration information of the primary ENI and secondary ENIs by using NetworkInterfaces. When you use the NetworkInterface parameter, you must set the primary ENI information. If NetworkInterface.InstanceType is set to Primary, it indicates the primary ENI. If NetworkInterface.InstanceType is set to Secondary or left empty, it indicates a secondary ENI.
 * > You cannot specify InstanceType, InstanceTypes, InstanceTypeOverrides, and Cpu and Memory at the same time. However, you can specify InstanceType or InstanceTypes together with InstancePatternInfos. When InstanceType or InstanceTypes is specified together with InstancePatternInfos, Auto Scaling preferentially uses the specified instance types for scale-out. If the specified instance types are out of stock, Auto Scaling uses the instance types that match the InstancePatternInfos configuration.
 *
 * @param request CreateScalingConfigurationRequest
 * @return CreateScalingConfigurationResponse
 */
CreateScalingConfigurationResponse Client::createScalingConfiguration(const CreateScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates a scaling group to automatically adjust your computing capacity by adding or removing instances based on business demands and policies.
 *
 * @description A scaling group is a collection of ECS instances that share the same application scenarios.
 * The number of scaling groups that you can create in a region depends on your Auto Scaling usage. Go to Quota Center to check the quota for the total number of scaling groups.
 * A scaling group does not take effect immediately after it is created. You must invoke the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable the scaling group before it can trigger scaling activities and execute scaling rules.
 * The scaling group, the associated Classic Load Balancer (CLB) instances, and the associated ApsaraDB RDS instances must reside in the same region. For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
 * If you associate CLB instances with the scaling group, Auto Scaling automatically adds the ECS instances in the scaling group to the backend server groups of the CLB instances. You can specify the server groups to which the ECS instances are added. The following types of server groups are supported:
 * - Default server group: contains ECS instances that accept frontend requests. If a listener is not configured with a virtual server group or a primary/secondary server group, requests are forwarded to the ECS instances in the default server group by default.
 * - Virtual server group: used when you need to forward different requests to different backend servers, or forward requests based on domain names and URLs.
 * > If you specify both the default server group and multiple virtual server groups, the ECS instances are added to all these server groups.
 * After an instance is added to a backend server group of a CLB instance, the default weight of the instance is 50. The CLB instance must meet the following conditions:
 * - The CLB instance must be in the Active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to check the status of the CLB instance.
 * - Health checks must be enabled for all listeners configured on the CLB instance. Otherwise, the scaling group fails to be created.
 * If you associate Application Load Balancer (ALB) server groups, Network Load Balancer (NLB) server groups, or Gateway Load Balancer (GWLB) server groups with the scaling group, Auto Scaling automatically adds the ECS instances in the scaling group as backend servers to the ALB, NLB, or GWLB server groups to process access requests distributed by the ALB, NLB, or GWLB instances. You can specify multiple ALB, NLB, or GWLB server groups, but the server groups must belong to the same VPC as the scaling group. For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
 * If you associate ApsaraDB RDS instances with the scaling group, Auto Scaling automatically adds the internal IP addresses of the ECS instances in the scaling group to the whitelists of the ApsaraDB RDS instances. The ApsaraDB RDS instances must meet the following conditions:
 * - The ApsaraDB RDS instance must be in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to check the status of the ApsaraDB RDS instance.
 * - The number of IP addresses in the whitelist of the ApsaraDB RDS instance cannot exceed the upper limit. For more information, see [Configure a whitelist](https://help.aliyun.com/document_detail/43185.html) in the ApsaraDB RDS documentation.
 * If the MultiAZPolicy parameter of the scaling group is set to COST_OPTIMIZED:
 * - If the OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, and SpotInstancePools parameters are specified, the instance allocation method under the cost optimization policy is specified. This allocation method is prioritized during scale-out and scale-in.
 * - If the OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, or SpotInstancePools parameter is not specified, instances are created based on the lowest cost under the cost optimization policy. In this mode, you cannot create instances by using elasticity assurances or capacity reservations, and you cannot specify the vSwitch to which secondary elastic network interfaces (ENIs) belong.
 * If you configure propagatable tags for the scaling group, which means `Tags.Propagate` is set to true:
 * - Tags on the scaling group are propagated only to newly created instances, not to existing instances in the scaling group.
 * - If you specify instance tags in the scaling configuration and choose to propagate the tags of the scaling group to the instances, all tags coexist.
 * - If a tag in the scaling configuration and a propagatable tag in the scaling group have the same tag key, the tag value in the scaling configuration takes precedence.
 *
 * @param request CreateScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScalingGroupResponse
 */
CreateScalingGroupResponse Client::createScalingGroupWithOptions(const CreateScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbServerGroups()) {
    query["AlbServerGroups"] = request.getAlbServerGroups();
  }

  if (!!request.hasAllocationStrategy()) {
    query["AllocationStrategy"] = request.getAllocationStrategy();
  }

  if (!!request.hasAutoRebalance()) {
    query["AutoRebalance"] = request.getAutoRebalance();
  }

  if (!!request.hasAzBalance()) {
    query["AzBalance"] = request.getAzBalance();
  }

  if (!!request.hasBalanceMode()) {
    query["BalanceMode"] = request.getBalanceMode();
  }

  if (!!request.hasCapacityOptions()) {
    query["CapacityOptions"] = request.getCapacityOptions();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompensateWithOnDemand()) {
    query["CompensateWithOnDemand"] = request.getCompensateWithOnDemand();
  }

  if (!!request.hasContainerGroupId()) {
    query["ContainerGroupId"] = request.getContainerGroupId();
  }

  if (!!request.hasCustomPolicyARN()) {
    query["CustomPolicyARN"] = request.getCustomPolicyARN();
  }

  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.getDBInstanceIds();
  }

  if (!!request.hasDBInstances()) {
    query["DBInstances"] = request.getDBInstances();
  }

  if (!!request.hasDefaultCooldown()) {
    query["DefaultCooldown"] = request.getDefaultCooldown();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.getDesiredCapacity();
  }

  if (!!request.hasGroupDeletionProtection()) {
    query["GroupDeletionProtection"] = request.getGroupDeletionProtection();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckTypes()) {
    query["HealthCheckTypes"] = request.getHealthCheckTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.getLaunchTemplateId();
  }

  if (!!request.hasLaunchTemplateOverrides()) {
    query["LaunchTemplateOverrides"] = request.getLaunchTemplateOverrides();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.getLaunchTemplateVersion();
  }

  if (!!request.hasLifecycleHooks()) {
    query["LifecycleHooks"] = request.getLifecycleHooks();
  }

  if (!!request.hasLoadBalancerConfigs()) {
    query["LoadBalancerConfigs"] = request.getLoadBalancerConfigs();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.getLoadBalancerIds();
  }

  if (!!request.hasMaxInstanceLifetime()) {
    query["MaxInstanceLifetime"] = request.getMaxInstanceLifetime();
  }

  if (!!request.hasMaxSize()) {
    query["MaxSize"] = request.getMaxSize();
  }

  if (!!request.hasMinSize()) {
    query["MinSize"] = request.getMinSize();
  }

  if (!!request.hasMultiAZPolicy()) {
    query["MultiAZPolicy"] = request.getMultiAZPolicy();
  }

  if (!!request.hasOnDemandBaseCapacity()) {
    query["OnDemandBaseCapacity"] = request.getOnDemandBaseCapacity();
  }

  if (!!request.hasOnDemandPercentageAboveBaseCapacity()) {
    query["OnDemandPercentageAboveBaseCapacity"] = request.getOnDemandPercentageAboveBaseCapacity();
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

  if (!!request.hasRemovalPolicies()) {
    query["RemovalPolicies"] = request.getRemovalPolicies();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupName()) {
    query["ScalingGroupName"] = request.getScalingGroupName();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.getScalingPolicy();
  }

  if (!!request.hasServerGroups()) {
    query["ServerGroups"] = request.getServerGroups();
  }

  if (!!request.hasSpotAllocationStrategy()) {
    query["SpotAllocationStrategy"] = request.getSpotAllocationStrategy();
  }

  if (!!request.hasSpotInstancePools()) {
    query["SpotInstancePools"] = request.getSpotInstancePools();
  }

  if (!!request.hasSpotInstanceRemedy()) {
    query["SpotInstanceRemedy"] = request.getSpotInstanceRemedy();
  }

  if (!!request.hasStopInstanceTimeout()) {
    query["StopInstanceTimeout"] = request.getStopInstanceTimeout();
  }

  if (!!request.hasSyncAlarmRuleToCms()) {
    query["SyncAlarmRuleToCms"] = request.getSyncAlarmRuleToCms();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasVServerGroups()) {
    query["VServerGroups"] = request.getVServerGroups();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasZoneShiftPolicy()) {
    query["ZoneShiftPolicy"] = request.getZoneShiftPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScalingGroupResponse>();
}

/**
 * @summary Creates a scaling group to automatically adjust your computing capacity by adding or removing instances based on business demands and policies.
 *
 * @description A scaling group is a collection of ECS instances that share the same application scenarios.
 * The number of scaling groups that you can create in a region depends on your Auto Scaling usage. Go to Quota Center to check the quota for the total number of scaling groups.
 * A scaling group does not take effect immediately after it is created. You must invoke the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable the scaling group before it can trigger scaling activities and execute scaling rules.
 * The scaling group, the associated Classic Load Balancer (CLB) instances, and the associated ApsaraDB RDS instances must reside in the same region. For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
 * If you associate CLB instances with the scaling group, Auto Scaling automatically adds the ECS instances in the scaling group to the backend server groups of the CLB instances. You can specify the server groups to which the ECS instances are added. The following types of server groups are supported:
 * - Default server group: contains ECS instances that accept frontend requests. If a listener is not configured with a virtual server group or a primary/secondary server group, requests are forwarded to the ECS instances in the default server group by default.
 * - Virtual server group: used when you need to forward different requests to different backend servers, or forward requests based on domain names and URLs.
 * > If you specify both the default server group and multiple virtual server groups, the ECS instances are added to all these server groups.
 * After an instance is added to a backend server group of a CLB instance, the default weight of the instance is 50. The CLB instance must meet the following conditions:
 * - The CLB instance must be in the Active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to check the status of the CLB instance.
 * - Health checks must be enabled for all listeners configured on the CLB instance. Otherwise, the scaling group fails to be created.
 * If you associate Application Load Balancer (ALB) server groups, Network Load Balancer (NLB) server groups, or Gateway Load Balancer (GWLB) server groups with the scaling group, Auto Scaling automatically adds the ECS instances in the scaling group as backend servers to the ALB, NLB, or GWLB server groups to process access requests distributed by the ALB, NLB, or GWLB instances. You can specify multiple ALB, NLB, or GWLB server groups, but the server groups must belong to the same VPC as the scaling group. For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
 * If you associate ApsaraDB RDS instances with the scaling group, Auto Scaling automatically adds the internal IP addresses of the ECS instances in the scaling group to the whitelists of the ApsaraDB RDS instances. The ApsaraDB RDS instances must meet the following conditions:
 * - The ApsaraDB RDS instance must be in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to check the status of the ApsaraDB RDS instance.
 * - The number of IP addresses in the whitelist of the ApsaraDB RDS instance cannot exceed the upper limit. For more information, see [Configure a whitelist](https://help.aliyun.com/document_detail/43185.html) in the ApsaraDB RDS documentation.
 * If the MultiAZPolicy parameter of the scaling group is set to COST_OPTIMIZED:
 * - If the OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, and SpotInstancePools parameters are specified, the instance allocation method under the cost optimization policy is specified. This allocation method is prioritized during scale-out and scale-in.
 * - If the OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, or SpotInstancePools parameter is not specified, instances are created based on the lowest cost under the cost optimization policy. In this mode, you cannot create instances by using elasticity assurances or capacity reservations, and you cannot specify the vSwitch to which secondary elastic network interfaces (ENIs) belong.
 * If you configure propagatable tags for the scaling group, which means `Tags.Propagate` is set to true:
 * - Tags on the scaling group are propagated only to newly created instances, not to existing instances in the scaling group.
 * - If you specify instance tags in the scaling configuration and choose to propagate the tags of the scaling group to the instances, all tags coexist.
 * - If a tag in the scaling configuration and a propagatable tag in the scaling group have the same tag key, the tag value in the scaling configuration takes precedence.
 *
 * @param request CreateScalingGroupRequest
 * @return CreateScalingGroupResponse
 */
CreateScalingGroupResponse Client::createScalingGroup(const CreateScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a scaling rule. The purpose of a scaling rule is determined by its type and can be used to trigger a scaling activity or intelligently configure the boundary values of a scaling group. You can create different types of scaling rules based on your business requirements. For example, if you only need to configure the boundary values of a scaling group, select the predictive scaling rule type.
 *
 * @description A scaling rule defines specific scale-out or scale-in operations, such as adding or removing N instances. If executing a scaling rule causes the number of ECS or ECI instances in the scaling group to fall below MinSize or exceed MaxSize, Auto Scaling automatically adjusts the number of ECS or ECI instances to be added or removed so that the total number of instances reaches MinSize or MaxSize. However, the configured value of the scaling rule remains unchanged. Examples:
 * - For a scaling group with MaxSize set to 3 and a current total capacity of 2, if the scaling rule specifies adding 3 ECS instances, only 1 ECS instance is added during actual execution, but the configured value of the scaling rule remains 3.
 * - For a scaling group with MinSize set to 2 and a current total capacity of 3, if the scaling rule specifies removing 5 ECS instances, only 1 ECS instance is removed during actual execution, but the configured value of the scaling rule remains 5.
 * Note the following parameter descriptions:
 * - If AdjustmentType is set to TotalCapacity, the number of ECS or ECI instances in the scaling group is adjusted to the specified number. The corresponding AdjustmentValue must be greater than or equal to 0.
 * - If AdjustmentType is set to QuantityChangeInCapacity or PercentChangeInCapacity, a positive AdjustmentValue indicates to increase instances, and a negative value indicates to decrease instances.
 * - If AdjustmentType is set to PercentChangeInCapacity, Auto Scaling calculates the number of ECS instances or ECI instances to be added or removed by using the formula: Current total capacity × AdjustmentValue / 100, and uses the rounding principle to confirm the number of ECS instances or ECI instances to increase or decrease.
 * - If a cooldown time (Cooldown) is specified for the scaling rule, the scaling group enters the cooldown state for the specified duration after the scaling activity triggered by the rule is completed. If no cooldown time is specified for the scaling rule, the default cooldown time (DefaultCooldown) of the scaling group is used.
 * - The number of scaling rules that can be created in a scaling group is limited. For more information, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - The returned unique identifier of the scaling rule (ScalingRuleAri) can be used in the following API operations:
 *     - Specify it in the ScalingRuleAri parameter of the ExecuteScalingRule operation to manually execute the scaling rule.
 *     - Specify it in the ScheduledAction parameter of the CreateScheduledTask operation to execute the scaling rule on a schedule.
 *
 * @param request CreateScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScalingRuleResponse
 */
CreateScalingRuleResponse Client::createScalingRuleWithOptions(const CreateScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjustmentType()) {
    query["AdjustmentType"] = request.getAdjustmentType();
  }

  if (!!request.hasAdjustmentValue()) {
    query["AdjustmentValue"] = request.getAdjustmentValue();
  }

  if (!!request.hasAlarmDimensions()) {
    query["AlarmDimensions"] = request.getAlarmDimensions();
  }

  if (!!request.hasAlarmOptions()) {
    query["AlarmOptions"] = request.getAlarmOptions();
  }

  if (!!request.hasCooldown()) {
    query["Cooldown"] = request.getCooldown();
  }

  if (!!request.hasDisableScaleIn()) {
    query["DisableScaleIn"] = request.getDisableScaleIn();
  }

  if (!!request.hasEstimatedInstanceWarmup()) {
    query["EstimatedInstanceWarmup"] = request.getEstimatedInstanceWarmup();
  }

  if (!!request.hasHybridMetrics()) {
    query["HybridMetrics"] = request.getHybridMetrics();
  }

  if (!!request.hasHybridMonitorNamespace()) {
    query["HybridMonitorNamespace"] = request.getHybridMonitorNamespace();
  }

  if (!!request.hasInitialMaxSize()) {
    query["InitialMaxSize"] = request.getInitialMaxSize();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasMinAdjustmentMagnitude()) {
    query["MinAdjustmentMagnitude"] = request.getMinAdjustmentMagnitude();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPredictiveScalingMode()) {
    query["PredictiveScalingMode"] = request.getPredictiveScalingMode();
  }

  if (!!request.hasPredictiveTaskBufferTime()) {
    query["PredictiveTaskBufferTime"] = request.getPredictiveTaskBufferTime();
  }

  if (!!request.hasPredictiveValueBehavior()) {
    query["PredictiveValueBehavior"] = request.getPredictiveValueBehavior();
  }

  if (!!request.hasPredictiveValueBuffer()) {
    query["PredictiveValueBuffer"] = request.getPredictiveValueBuffer();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScaleInEvaluationCount()) {
    query["ScaleInEvaluationCount"] = request.getScaleInEvaluationCount();
  }

  if (!!request.hasScaleOutEvaluationCount()) {
    query["ScaleOutEvaluationCount"] = request.getScaleOutEvaluationCount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.getScalingRuleType();
  }

  if (!!request.hasStepAdjustments()) {
    query["StepAdjustments"] = request.getStepAdjustments();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScalingRule"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScalingRuleResponse>();
}

/**
 * @summary Creates a scaling rule. The purpose of a scaling rule is determined by its type and can be used to trigger a scaling activity or intelligently configure the boundary values of a scaling group. You can create different types of scaling rules based on your business requirements. For example, if you only need to configure the boundary values of a scaling group, select the predictive scaling rule type.
 *
 * @description A scaling rule defines specific scale-out or scale-in operations, such as adding or removing N instances. If executing a scaling rule causes the number of ECS or ECI instances in the scaling group to fall below MinSize or exceed MaxSize, Auto Scaling automatically adjusts the number of ECS or ECI instances to be added or removed so that the total number of instances reaches MinSize or MaxSize. However, the configured value of the scaling rule remains unchanged. Examples:
 * - For a scaling group with MaxSize set to 3 and a current total capacity of 2, if the scaling rule specifies adding 3 ECS instances, only 1 ECS instance is added during actual execution, but the configured value of the scaling rule remains 3.
 * - For a scaling group with MinSize set to 2 and a current total capacity of 3, if the scaling rule specifies removing 5 ECS instances, only 1 ECS instance is removed during actual execution, but the configured value of the scaling rule remains 5.
 * Note the following parameter descriptions:
 * - If AdjustmentType is set to TotalCapacity, the number of ECS or ECI instances in the scaling group is adjusted to the specified number. The corresponding AdjustmentValue must be greater than or equal to 0.
 * - If AdjustmentType is set to QuantityChangeInCapacity or PercentChangeInCapacity, a positive AdjustmentValue indicates to increase instances, and a negative value indicates to decrease instances.
 * - If AdjustmentType is set to PercentChangeInCapacity, Auto Scaling calculates the number of ECS instances or ECI instances to be added or removed by using the formula: Current total capacity × AdjustmentValue / 100, and uses the rounding principle to confirm the number of ECS instances or ECI instances to increase or decrease.
 * - If a cooldown time (Cooldown) is specified for the scaling rule, the scaling group enters the cooldown state for the specified duration after the scaling activity triggered by the rule is completed. If no cooldown time is specified for the scaling rule, the default cooldown time (DefaultCooldown) of the scaling group is used.
 * - The number of scaling rules that can be created in a scaling group is limited. For more information, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - The returned unique identifier of the scaling rule (ScalingRuleAri) can be used in the following API operations:
 *     - Specify it in the ScalingRuleAri parameter of the ExecuteScalingRule operation to manually execute the scaling rule.
 *     - Specify it in the ScheduledAction parameter of the CreateScheduledTask operation to execute the scaling rule on a schedule.
 *
 * @param request CreateScalingRuleRequest
 * @return CreateScalingRuleResponse
 */
CreateScalingRuleResponse Client::createScalingRule(const CreateScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled task. A scheduled task is a preset node. You can invoke the CreateScheduledTask API to create a scheduled task that executes a specified scaling rule at a specified time to automatically scale the compute resource, meeting business requirements while controlling costs.
 *
 * @description - If a scheduled node has failed to trigger the execution of the scaling rule because a scaling activity is in progress or the scaling group is disabled, the scheduled node automatically retries within the `LaunchExpirationTime` period. Otherwise, the scheduled trigger is canceled.
 * - If multiple scheduled nodes trigger scaling rules for the same scaling group at approximately the same time, the details of the triggered scaling activities are as follows:
 *     - **Scaling groups with Settings for the expected number of instances**: Scaling activities triggered by multiple scheduled nodes are of the parallel scaling activity type. For example, if multiple scheduled nodes are executed at approximately the same time, the scaling group can trigger multiple parallel scaling activity executions simultaneously.
 *     - **Scaling groups without Settings for the expected number of instances**: The earliest triggered scheduled node executes the scaling activity first. Because a scaling group can run only one scaling activity at a time, subsequent scheduled nodes automatically retry within the `LaunchExpirationTime` period. If a subsequent scheduled node is still retrying within the `LaunchExpirationTime` period after the previous scaling activity is completed, the scaling rule of the scheduled node is executed and the corresponding scaling activity is triggered.
 * - Scheduled nodes support the following two scaling methods:
 *     - Specify the scaling rule to be executed by using the ScheduledAction parameter.
 *     - Specify the number of instances in the scaling group by using the ScalingGroupId parameter.
 *   > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
 *
 * @param request CreateScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTaskWithOptions(const CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.getDesiredCapacity();
  }

  if (!!request.hasLaunchExpirationTime()) {
    query["LaunchExpirationTime"] = request.getLaunchExpirationTime();
  }

  if (!!request.hasLaunchTime()) {
    query["LaunchTime"] = request.getLaunchTime();
  }

  if (!!request.hasMaxValue()) {
    query["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    query["MinValue"] = request.getMinValue();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRecurrenceEndTime()) {
    query["RecurrenceEndTime"] = request.getRecurrenceEndTime();
  }

  if (!!request.hasRecurrenceType()) {
    query["RecurrenceType"] = request.getRecurrenceType();
  }

  if (!!request.hasRecurrenceValue()) {
    query["RecurrenceValue"] = request.getRecurrenceValue();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScheduledAction()) {
    query["ScheduledAction"] = request.getScheduledAction();
  }

  if (!!request.hasScheduledTaskName()) {
    query["ScheduledTaskName"] = request.getScheduledTaskName();
  }

  if (!!request.hasTaskEnabled()) {
    query["TaskEnabled"] = request.getTaskEnabled();
  }

  if (!!request.hasWarmPoolCapacityOptions()) {
    query["WarmPoolCapacityOptions"] = request.getWarmPoolCapacityOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScheduledTask"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledTaskResponse>();
}

/**
 * @summary Creates a scheduled task. A scheduled task is a preset node. You can invoke the CreateScheduledTask API to create a scheduled task that executes a specified scaling rule at a specified time to automatically scale the compute resource, meeting business requirements while controlling costs.
 *
 * @description - If a scheduled node has failed to trigger the execution of the scaling rule because a scaling activity is in progress or the scaling group is disabled, the scheduled node automatically retries within the `LaunchExpirationTime` period. Otherwise, the scheduled trigger is canceled.
 * - If multiple scheduled nodes trigger scaling rules for the same scaling group at approximately the same time, the details of the triggered scaling activities are as follows:
 *     - **Scaling groups with Settings for the expected number of instances**: Scaling activities triggered by multiple scheduled nodes are of the parallel scaling activity type. For example, if multiple scheduled nodes are executed at approximately the same time, the scaling group can trigger multiple parallel scaling activity executions simultaneously.
 *     - **Scaling groups without Settings for the expected number of instances**: The earliest triggered scheduled node executes the scaling activity first. Because a scaling group can run only one scaling activity at a time, subsequent scheduled nodes automatically retry within the `LaunchExpirationTime` period. If a subsequent scheduled node is still retrying within the `LaunchExpirationTime` period after the previous scaling activity is completed, the scaling rule of the scheduled node is executed and the corresponding scaling activity is triggered.
 * - Scheduled nodes support the following two scaling methods:
 *     - Specify the scaling rule to be executed by using the ScheduledAction parameter.
 *     - Specify the number of instances in the scaling group by using the ScalingGroupId parameter.
 *   > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
 *
 * @param request CreateScheduledTaskRequest
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTask(const CreateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary 使指定伸缩配置进入失效状态
 *
 * @param request DeactivateScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateScalingConfigurationResponse
 */
DeactivateScalingConfigurationResponse Client::deactivateScalingConfigurationWithOptions(const DeactivateScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeactivateScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateScalingConfigurationResponse>();
}

/**
 * @summary 使指定伸缩配置进入失效状态
 *
 * @param request DeactivateScalingConfigurationRequest
 * @return DeactivateScalingConfigurationResponse
 */
DeactivateScalingConfigurationResponse Client::deactivateScalingConfiguration(const DeactivateScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactivateScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you no longer need an event-triggered task, you can call the DeleteAlarm operation to delete it.
 *
 * @param request DeleteAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlarmResponse
 */
DeleteAlarmResponse Client::deleteAlarmWithOptions(const DeleteAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmTaskId()) {
    query["AlarmTaskId"] = request.getAlarmTaskId();
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
    {"action" , "DeleteAlarm"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlarmResponse>();
}

/**
 * @summary Deletes an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you no longer need an event-triggered task, you can call the DeleteAlarm operation to delete it.
 *
 * @param request DeleteAlarmRequest
 * @return DeleteAlarmResponse
 */
DeleteAlarmResponse Client::deleteAlarm(const DeleteAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlarmWithOptions(request, runtime);
}

/**
 * @summary Deletes a health diagnosis report for a scaling group.
 *
 * @param request DeleteDiagnoseReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDiagnoseReportResponse
 */
DeleteDiagnoseReportResponse Client::deleteDiagnoseReportWithOptions(const DeleteDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDiagnoseReport"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDiagnoseReportResponse>();
}

/**
 * @summary Deletes a health diagnosis report for a scaling group.
 *
 * @param request DeleteDiagnoseReportRequest
 * @return DeleteDiagnoseReportResponse
 */
DeleteDiagnoseReportResponse Client::deleteDiagnoseReport(const DeleteDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDiagnoseReportWithOptions(request, runtime);
}

/**
 * @summary Deletes a scaling configuration of the Elastic Container Instance type. If the scaling configuration of a scaling group is in the Inactive state and the scaling group contains no elastic container instances created from the scaling configuration, you can call the DeleteEciScalingConfiguration operation to delete the scaling configuration to free up the scaling configuration quota.
 *
 * @description You cannot call this operation to delete a scaling configuration in the following scenarios:
 * *   The scaling configuration is in the Active state.
 * *   The scaling group contains elastic container instances created from the scaling configuration.
 *
 * @param request DeleteEciScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEciScalingConfigurationResponse
 */
DeleteEciScalingConfigurationResponse Client::deleteEciScalingConfigurationWithOptions(const DeleteEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEciScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEciScalingConfigurationResponse>();
}

/**
 * @summary Deletes a scaling configuration of the Elastic Container Instance type. If the scaling configuration of a scaling group is in the Inactive state and the scaling group contains no elastic container instances created from the scaling configuration, you can call the DeleteEciScalingConfiguration operation to delete the scaling configuration to free up the scaling configuration quota.
 *
 * @description You cannot call this operation to delete a scaling configuration in the following scenarios:
 * *   The scaling configuration is in the Active state.
 * *   The scaling group contains elastic container instances created from the scaling configuration.
 *
 * @param request DeleteEciScalingConfigurationRequest
 * @return DeleteEciScalingConfigurationResponse
 */
DeleteEciScalingConfigurationResponse Client::deleteEciScalingConfiguration(const DeleteEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a lifecycle hook. If you no longer require a lifecycle hook, you can call the DeleteLifecycleHook operation to delete it, which frees up the lifecycle hook quota.
 *
 * @description If you delete an effective lifecycle hook before its timeout period ends, the instances on which the lifecycle hook takes effect exits the Pending state ahead of schedule. You can use the following methods to delete a lifecycle hook:
 * *   Include `LifecycleHookId` within your request to specify the lifecycle hook that you want to delete. In this case, `ScalingGroupId` and `LifecycleHookName` are ignored.
 * *   Include `ScalingGroupId` and `LifecycleHookName` within your request to specify the lifecycle hook that you want to delete.
 *
 * @param request DeleteLifecycleHookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLifecycleHookResponse
 */
DeleteLifecycleHookResponse Client::deleteLifecycleHookWithOptions(const DeleteLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLifecycleHookId()) {
    query["LifecycleHookId"] = request.getLifecycleHookId();
  }

  if (!!request.hasLifecycleHookName()) {
    query["LifecycleHookName"] = request.getLifecycleHookName();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLifecycleHook"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLifecycleHookResponse>();
}

/**
 * @summary Deletes a lifecycle hook. If you no longer require a lifecycle hook, you can call the DeleteLifecycleHook operation to delete it, which frees up the lifecycle hook quota.
 *
 * @description If you delete an effective lifecycle hook before its timeout period ends, the instances on which the lifecycle hook takes effect exits the Pending state ahead of schedule. You can use the following methods to delete a lifecycle hook:
 * *   Include `LifecycleHookId` within your request to specify the lifecycle hook that you want to delete. In this case, `ScalingGroupId` and `LifecycleHookName` are ignored.
 * *   Include `ScalingGroupId` and `LifecycleHookName` within your request to specify the lifecycle hook that you want to delete.
 *
 * @param request DeleteLifecycleHookRequest
 * @return DeleteLifecycleHookResponse
 */
DeleteLifecycleHookResponse Client::deleteLifecycleHook(const DeleteLifecycleHookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLifecycleHookWithOptions(request, runtime);
}

/**
 * @summary Deletes event notification rules. The event notification feature facilitates efficient issue identification and event management by automatically forwarding notifications from Auto Scaling to designated endpoints such as CloudMonitor or Message Service (MNS) topics and queues. If you no longer require an event notification rule, you can call the DeleteNotificationConfiguration operation to delete it.
 *
 * @param request DeleteNotificationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNotificationConfigurationResponse
 */
DeleteNotificationConfigurationResponse Client::deleteNotificationConfigurationWithOptions(const DeleteNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNotificationArn()) {
    query["NotificationArn"] = request.getNotificationArn();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNotificationConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNotificationConfigurationResponse>();
}

/**
 * @summary Deletes event notification rules. The event notification feature facilitates efficient issue identification and event management by automatically forwarding notifications from Auto Scaling to designated endpoints such as CloudMonitor or Message Service (MNS) topics and queues. If you no longer require an event notification rule, you can call the DeleteNotificationConfiguration operation to delete it.
 *
 * @param request DeleteNotificationConfigurationRequest
 * @return DeleteNotificationConfigurationResponse
 */
DeleteNotificationConfigurationResponse Client::deleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNotificationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a scaling configuration that is used to create Elastic Compute Service (ECS) instances.
 *
 * @description You cannot delete a scaling configuration in one of the following scenarios:
 * *   The scaling configuration in your scaling group is in the Active state.
 * *   The scaling group contains ECS instances that were created based on the scaling configuration.
 *
 * @param request DeleteScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScalingConfigurationResponse
 */
DeleteScalingConfigurationResponse Client::deleteScalingConfigurationWithOptions(const DeleteScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScalingConfigurationResponse>();
}

/**
 * @summary Deletes a scaling configuration that is used to create Elastic Compute Service (ECS) instances.
 *
 * @description You cannot delete a scaling configuration in one of the following scenarios:
 * *   The scaling configuration in your scaling group is in the Active state.
 * *   The scaling group contains ECS instances that were created based on the scaling configuration.
 *
 * @param request DeleteScalingConfigurationRequest
 * @return DeleteScalingConfigurationResponse
 */
DeleteScalingConfigurationResponse Client::deleteScalingConfiguration(const DeleteScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can create scaling groups to manage your computing power with ease. The computing power refers to the instances that provide the computing capability. If you no longer require a scaling group, you can call the DeleteScalingGroup operation to delete it to free up the scaling group quota.
 *
 * @description Before you call the DeleteScalingGroup operation, take note of the following items:
 * *   If you delete a scaling group, the scaling configurations, scaling rules, scaling activities, and scaling requests related to the scaling group are also deleted.
 * *   If you delete a scaling group, the scheduled tasks and event-triggered tasks of the scaling group are not deleted. The Server Load Balancer (SLB) instances and ApsaraDB RDS instances that are attached to the scaling group are also not deleted.
 * *   If the scaling group that you want to delete contains ECS instances or elastic container instances that are in the In Service state, Auto Scaling stops the instances and then removes all manually added instances from the scaling group or releases all automatically created instances in the scaling group before the scaling group is deleted.
 *     **
 *     **Note** Before you delete a scaling group, make sure that the Deletion Protection feature is disabled. If you have enabled the Deletion Protection feature for a scaling group, disable the feature on the Modify Scaling Group page before you delete the scaling group.
 * *   If you do not disable the Deletion Protection feature for a scaling group, you cannot delete the scaling group by using the Auto Scaling console or calling this operation. The Deletion Protection feature is an effective measure to safeguard scaling groups against unintended deletion.
 * *   Prior to deleting a scaling group, make sure that your ECS instances within the scaling group are safeguarded against unintended release. Even if you have already enabled the Release Protection feature for the ECS instances, you must manually put these ECS instances into the Protected state. Doing so guarantees that the ECS instances will not be forcibly released during the deletion process of the scaling group, providing an extra layer of security.
 *     **
 *     **Note** Before you delete a scaling group, we recommend that you enable the Deletion Protection feature for ECS instances that you want to retain. This action guarantees that the ECS instances are not forcibly released after you delete the scaling group. For more information, see [SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html).
 *
 * @param request DeleteScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScalingGroupResponse
 */
DeleteScalingGroupResponse Client::deleteScalingGroupWithOptions(const DeleteScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDelete()) {
    query["ForceDelete"] = request.getForceDelete();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScalingGroupResponse>();
}

/**
 * @summary Deletes a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can create scaling groups to manage your computing power with ease. The computing power refers to the instances that provide the computing capability. If you no longer require a scaling group, you can call the DeleteScalingGroup operation to delete it to free up the scaling group quota.
 *
 * @description Before you call the DeleteScalingGroup operation, take note of the following items:
 * *   If you delete a scaling group, the scaling configurations, scaling rules, scaling activities, and scaling requests related to the scaling group are also deleted.
 * *   If you delete a scaling group, the scheduled tasks and event-triggered tasks of the scaling group are not deleted. The Server Load Balancer (SLB) instances and ApsaraDB RDS instances that are attached to the scaling group are also not deleted.
 * *   If the scaling group that you want to delete contains ECS instances or elastic container instances that are in the In Service state, Auto Scaling stops the instances and then removes all manually added instances from the scaling group or releases all automatically created instances in the scaling group before the scaling group is deleted.
 *     **
 *     **Note** Before you delete a scaling group, make sure that the Deletion Protection feature is disabled. If you have enabled the Deletion Protection feature for a scaling group, disable the feature on the Modify Scaling Group page before you delete the scaling group.
 * *   If you do not disable the Deletion Protection feature for a scaling group, you cannot delete the scaling group by using the Auto Scaling console or calling this operation. The Deletion Protection feature is an effective measure to safeguard scaling groups against unintended deletion.
 * *   Prior to deleting a scaling group, make sure that your ECS instances within the scaling group are safeguarded against unintended release. Even if you have already enabled the Release Protection feature for the ECS instances, you must manually put these ECS instances into the Protected state. Doing so guarantees that the ECS instances will not be forcibly released during the deletion process of the scaling group, providing an extra layer of security.
 *     **
 *     **Note** Before you delete a scaling group, we recommend that you enable the Deletion Protection feature for ECS instances that you want to retain. This action guarantees that the ECS instances are not forcibly released after you delete the scaling group. For more information, see [SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html).
 *
 * @param request DeleteScalingGroupRequest
 * @return DeleteScalingGroupResponse
 */
DeleteScalingGroupResponse Client::deleteScalingGroup(const DeleteScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a scaling rule.
 *
 * @param request DeleteScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScalingRuleResponse
 */
DeleteScalingRuleResponse Client::deleteScalingRuleWithOptions(const DeleteScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScalingRuleId()) {
    query["ScalingRuleId"] = request.getScalingRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScalingRule"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScalingRuleResponse>();
}

/**
 * @summary Deletes a scaling rule.
 *
 * @param request DeleteScalingRuleRequest
 * @return DeleteScalingRuleResponse
 */
DeleteScalingRuleResponse Client::deleteScalingRule(const DeleteScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes scheduled tasks. For workloads with predictable patterns, you can create scheduled tasks to align with your business requirements and optimize resource utilization for cost savings. These tasks automatically ensure that sufficient computing resources are provisioned in anticipation of peak hours and efficiently release unused resources during off-peak hours, thereby streamlining operational efficiency and reducing expenses. If you no longer require a scheduled task, you can call the DeleteScheduledTask operation to delete it.
 *
 * @param request DeleteScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledTaskResponse
 */
DeleteScheduledTaskResponse Client::deleteScheduledTaskWithOptions(const DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScheduledTaskId()) {
    query["ScheduledTaskId"] = request.getScheduledTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledTask"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledTaskResponse>();
}

/**
 * @summary Deletes scheduled tasks. For workloads with predictable patterns, you can create scheduled tasks to align with your business requirements and optimize resource utilization for cost savings. These tasks automatically ensure that sufficient computing resources are provisioned in anticipation of peak hours and efficiently release unused resources during off-peak hours, thereby streamlining operational efficiency and reducing expenses. If you no longer require a scheduled task, you can call the DeleteScheduledTask operation to delete it.
 *
 * @param request DeleteScheduledTaskRequest
 * @return DeleteScheduledTaskResponse
 */
DeleteScheduledTaskResponse Client::deleteScheduledTask(const DeleteScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes the warmup pool of a scaling group and releases the instances in the warmup pool.
 *
 * @param request DeleteWarmPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWarmPoolResponse
 */
DeleteWarmPoolResponse Client::deleteWarmPoolWithOptions(const DeleteWarmPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWarmPool"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWarmPoolResponse>();
}

/**
 * @summary Deletes the warmup pool of a scaling group and releases the instances in the warmup pool.
 *
 * @param request DeleteWarmPoolRequest
 * @return DeleteWarmPoolResponse
 */
DeleteWarmPoolResponse Client::deleteWarmPool(const DeleteWarmPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWarmPoolWithOptions(request, runtime);
}

/**
 * @summary Queries the information about event-triggered tasks. This helps you track the configurations and metric data trends of existing event-triggered tasks, detect system resource anomalies in real time, and ensure system stability and reliability.
 *
 * @param request DescribeAlarmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlarmsResponse
 */
DescribeAlarmsResponse Client::describeAlarmsWithOptions(const DescribeAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmTaskId()) {
    query["AlarmTaskId"] = request.getAlarmTaskId();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlarms"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlarmsResponse>();
}

/**
 * @summary Queries the information about event-triggered tasks. This helps you track the configurations and metric data trends of existing event-triggered tasks, detect system resource anomalies in real time, and ensure system stability and reliability.
 *
 * @param request DescribeAlarmsRequest
 * @return DescribeAlarmsResponse
 */
DescribeAlarmsResponse Client::describeAlarms(const DescribeAlarmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlarmsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of scaling activities that trigger text message, internal message, or email-based notifications. When you call the DescribeAlertConfiguration operation, you must specify the scaling group ID and region ID to query the status of the desired scaling activities. A scaling activity can be in one of the following states: Successful, Failed, and Rejected.
 *
 * @param request DescribeAlertConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertConfigurationResponse
 */
DescribeAlertConfigurationResponse Client::describeAlertConfigurationWithOptions(const DescribeAlertConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertConfigurationResponse>();
}

/**
 * @summary Queries the status of scaling activities that trigger text message, internal message, or email-based notifications. When you call the DescribeAlertConfiguration operation, you must specify the scaling group ID and region ID to query the status of the desired scaling activities. A scaling activity can be in one of the following states: Successful, Failed, and Rejected.
 *
 * @param request DescribeAlertConfigurationRequest
 * @return DescribeAlertConfigurationResponse
 */
DescribeAlertConfigurationResponse Client::describeAlertConfiguration(const DescribeAlertConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertConfigurationWithOptions(request, runtime);
}

/**
 * @summary Lists candidate instance types.
 *
 * @param request DescribeCandidateInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCandidateInstanceTypeResponse
 */
DescribeCandidateInstanceTypeResponse Client::describeCandidateInstanceTypeWithOptions(const DescribeCandidateInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowCrossAz()) {
    query["AllowCrossAz"] = request.getAllowCrossAz();
  }

  if (!!request.hasAllowDifferentGeneration()) {
    query["AllowDifferentGeneration"] = request.getAllowDifferentGeneration();
  }

  if (!!request.hasDataDiskCategories()) {
    query["DataDiskCategories"] = request.getDataDiskCategories();
  }

  if (!!request.hasImageFamily()) {
    query["ImageFamily"] = request.getImageFamily();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasMaxPrice()) {
    query["MaxPrice"] = request.getMaxPrice();
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

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasSystemDiskCategories()) {
    query["SystemDiskCategories"] = request.getSystemDiskCategories();
  }

  if (!!request.hasZoneIds()) {
    query["ZoneIds"] = request.getZoneIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCandidateInstanceType"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCandidateInstanceTypeResponse>();
}

/**
 * @summary Lists candidate instance types.
 *
 * @param request DescribeCandidateInstanceTypeRequest
 * @return DescribeCandidateInstanceTypeResponse
 */
DescribeCandidateInstanceTypeResponse Client::describeCandidateInstanceType(const DescribeCandidateInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCandidateInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries health diagnostic reports.
 *
 * @param request DescribeDiagnoseReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnoseReportsResponse
 */
DescribeDiagnoseReportsResponse Client::describeDiagnoseReportsWithOptions(const DescribeDiagnoseReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnoseReports"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnoseReportsResponse>();
}

/**
 * @summary Queries health diagnostic reports.
 *
 * @param request DescribeDiagnoseReportsRequest
 * @return DescribeDiagnoseReportsResponse
 */
DescribeDiagnoseReportsResponse Client::describeDiagnoseReports(const DescribeDiagnoseReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnoseReportsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Elastic Container Instance (ECI) scaling configuration based on the scaling configuration ID. The details include the temporary storage size, the number of IPv6 addresses, and the elastic IP address (EIP) bandwidth. The output supports the YAML format.
 *
 * @param request DescribeEciScalingConfigurationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEciScalingConfigurationDetailResponse
 */
DescribeEciScalingConfigurationDetailResponse Client::describeEciScalingConfigurationDetailWithOptions(const DescribeEciScalingConfigurationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputFormat()) {
    query["OutputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEciScalingConfigurationDetail"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEciScalingConfigurationDetailResponse>();
}

/**
 * @summary Queries the details of an Elastic Container Instance (ECI) scaling configuration based on the scaling configuration ID. The details include the temporary storage size, the number of IPv6 addresses, and the elastic IP address (EIP) bandwidth. The output supports the YAML format.
 *
 * @param request DescribeEciScalingConfigurationDetailRequest
 * @return DescribeEciScalingConfigurationDetailResponse
 */
DescribeEciScalingConfigurationDetailResponse Client::describeEciScalingConfigurationDetail(const DescribeEciScalingConfigurationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEciScalingConfigurationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries ECI scaling configurations. You can invoke DescribeEciScalingConfigurations and specify parameters such as the scaling group ID, and the scaling configuration IDs or names. This parameter query retrieves information such as the instance preemption policy, container group instance types, container image pull policy, and the weight of ECI instances as backend servers.
 *
 * @param request DescribeEciScalingConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEciScalingConfigurationsResponse
 */
DescribeEciScalingConfigurationsResponse Client::describeEciScalingConfigurationsWithOptions(const DescribeEciScalingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingConfigurationIds()) {
    query["ScalingConfigurationIds"] = request.getScalingConfigurationIds();
  }

  if (!!request.hasScalingConfigurationNames()) {
    query["ScalingConfigurationNames"] = request.getScalingConfigurationNames();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEciScalingConfigurations"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEciScalingConfigurationsResponse>();
}

/**
 * @summary Queries ECI scaling configurations. You can invoke DescribeEciScalingConfigurations and specify parameters such as the scaling group ID, and the scaling configuration IDs or names. This parameter query retrieves information such as the instance preemption policy, container group instance types, container image pull policy, and the weight of ECI instances as backend servers.
 *
 * @param request DescribeEciScalingConfigurationsRequest
 * @return DescribeEciScalingConfigurationsResponse
 */
DescribeEciScalingConfigurationsResponse Client::describeEciScalingConfigurations(const DescribeEciScalingConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEciScalingConfigurationsWithOptions(request, runtime);
}

/**
 * @summary A scaling group\\"s configuration is key to successful scale-outs. Auto Scaling uses elasticity strength to quantify the effectiveness of a Scaling Configuration, helping you make targeted optimizations.
 *
 * @param request DescribeElasticStrengthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticStrengthResponse
 */
DescribeElasticStrengthResponse Client::describeElasticStrengthWithOptions(const DescribeElasticStrengthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticStrength"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticStrengthResponse>();
}

/**
 * @summary A scaling group\\"s configuration is key to successful scale-outs. Auto Scaling uses elasticity strength to quantify the effectiveness of a Scaling Configuration, helping you make targeted optimizations.
 *
 * @param request DescribeElasticStrengthRequest
 * @return DescribeElasticStrengthResponse
 */
DescribeElasticStrengthResponse Client::describeElasticStrength(const DescribeElasticStrengthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticStrengthWithOptions(request, runtime);
}

/**
 * @summary Instance creation and deletion statistics.
 *
 * @param request DescribeInstanceCreateAndDeleteStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceCreateAndDeleteStatisticsResponse
 */
DescribeInstanceCreateAndDeleteStatisticsResponse Client::describeInstanceCreateAndDeleteStatisticsWithOptions(const DescribeInstanceCreateAndDeleteStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceCreateAndDeleteStatistics"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceCreateAndDeleteStatisticsResponse>();
}

/**
 * @summary Instance creation and deletion statistics.
 *
 * @param request DescribeInstanceCreateAndDeleteStatisticsRequest
 * @return DescribeInstanceCreateAndDeleteStatisticsResponse
 */
DescribeInstanceCreateAndDeleteStatisticsResponse Client::describeInstanceCreateAndDeleteStatistics(const DescribeInstanceCreateAndDeleteStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceCreateAndDeleteStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the instance refresh tasks of a scaling group to view basic information and task progress.
 *
 * @param request DescribeInstanceRefreshesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRefreshesResponse
 */
DescribeInstanceRefreshesResponse Client::describeInstanceRefreshesWithOptions(const DescribeInstanceRefreshesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskIds()) {
    query["InstanceRefreshTaskIds"] = request.getInstanceRefreshTaskIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
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

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceRefreshes"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceRefreshesResponse>();
}

/**
 * @summary Queries the instance refresh tasks of a scaling group to view basic information and task progress.
 *
 * @param request DescribeInstanceRefreshesRequest
 * @return DescribeInstanceRefreshesResponse
 */
DescribeInstanceRefreshesResponse Client::describeInstanceRefreshes(const DescribeInstanceRefreshesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRefreshesWithOptions(request, runtime);
}

/**
 * @summary Queries lifecycle hook actions. When you call the DescribeLifecycleActions operation, you can specify parameters such as ScalingActivityId, NextToken, and MaxResults to query the details such as the action status and ID of a lifecycle hook. You can also call this operation to query the IDs of Elastic Compute Service (ECS) instances on which the lifecycle hook takes effect.
 *
 * @description If a scaling activity is executed and a lifecycle hook is created for the scaling activity, the lifecycle hook triggers a lifecycle action. A lifecycle action can be in one of the following states:
 * *   If a lifecycle action is in the Pending state, Elastic Compute Service (ECS) instances are waiting to be added to a scaling group or waiting to be removed from a scaling group.
 * *   If a lifecycle action is in the Timeout state, the lifecycle hook that triggers the lifecycle action expires and ECS instances are added to or removed from a scaling group.
 * *   If a lifecycle action is in the Completed state, you manually end the lifecycle hook that triggers the lifecycle action ahead of schedule.
 * If you do not specify the action to perform, such as execute a specific OOS template, after a lifecycle hook ends, you can call this operation to obtain the token of the lifecycle action that corresponds to the lifecycle hook. Then, you can specify a custom action to perform after the lifecycle hook ends.
 *
 * @param request DescribeLifecycleActionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLifecycleActionsResponse
 */
DescribeLifecycleActionsResponse Client::describeLifecycleActionsWithOptions(const DescribeLifecycleActionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLifecycleActionStatus()) {
    query["LifecycleActionStatus"] = request.getLifecycleActionStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasScalingActivityId()) {
    query["ScalingActivityId"] = request.getScalingActivityId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLifecycleActions"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLifecycleActionsResponse>();
}

/**
 * @summary Queries lifecycle hook actions. When you call the DescribeLifecycleActions operation, you can specify parameters such as ScalingActivityId, NextToken, and MaxResults to query the details such as the action status and ID of a lifecycle hook. You can also call this operation to query the IDs of Elastic Compute Service (ECS) instances on which the lifecycle hook takes effect.
 *
 * @description If a scaling activity is executed and a lifecycle hook is created for the scaling activity, the lifecycle hook triggers a lifecycle action. A lifecycle action can be in one of the following states:
 * *   If a lifecycle action is in the Pending state, Elastic Compute Service (ECS) instances are waiting to be added to a scaling group or waiting to be removed from a scaling group.
 * *   If a lifecycle action is in the Timeout state, the lifecycle hook that triggers the lifecycle action expires and ECS instances are added to or removed from a scaling group.
 * *   If a lifecycle action is in the Completed state, you manually end the lifecycle hook that triggers the lifecycle action ahead of schedule.
 * If you do not specify the action to perform, such as execute a specific OOS template, after a lifecycle hook ends, you can call this operation to obtain the token of the lifecycle action that corresponds to the lifecycle hook. Then, you can specify a custom action to perform after the lifecycle hook ends.
 *
 * @param request DescribeLifecycleActionsRequest
 * @return DescribeLifecycleActionsResponse
 */
DescribeLifecycleActionsResponse Client::describeLifecycleActions(const DescribeLifecycleActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecycleActionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information of lifecycle hooks by specifying lifecycle hook IDs or scaling group IDs. The information includes the next action to perform after the wait state ends, the scaling activity type associated with the lifecycle hook, the notification recipient identifier, and the suspension wait time.
 *
 * @description You can query lifecycle hooks in the following three ways:
 * - Specify a list of lifecycle hook IDs (LifecycleHookIds). In this case, the ScalingGroupId and LifecycleHookName parameters are ignored.
 * - Specify a scaling group ID (ScalingGroupId).
 * - Specify both a scaling group ID (ScalingGroupId) and a lifecycle hook name (LifecycleHookName).
 *
 * @param request DescribeLifecycleHooksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLifecycleHooksResponse
 */
DescribeLifecycleHooksResponse Client::describeLifecycleHooksWithOptions(const DescribeLifecycleHooksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLifecycleHookIds()) {
    query["LifecycleHookIds"] = request.getLifecycleHookIds();
  }

  if (!!request.hasLifecycleHookName()) {
    query["LifecycleHookName"] = request.getLifecycleHookName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLifecycleHooks"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLifecycleHooksResponse>();
}

/**
 * @summary Queries the information of lifecycle hooks by specifying lifecycle hook IDs or scaling group IDs. The information includes the next action to perform after the wait state ends, the scaling activity type associated with the lifecycle hook, the notification recipient identifier, and the suspension wait time.
 *
 * @description You can query lifecycle hooks in the following three ways:
 * - Specify a list of lifecycle hook IDs (LifecycleHookIds). In this case, the ScalingGroupId and LifecycleHookName parameters are ignored.
 * - Specify a scaling group ID (ScalingGroupId).
 * - Specify both a scaling group ID (ScalingGroupId) and a lifecycle hook name (LifecycleHookName).
 *
 * @param request DescribeLifecycleHooksRequest
 * @return DescribeLifecycleHooksResponse
 */
DescribeLifecycleHooksResponse Client::describeLifecycleHooks(const DescribeLifecycleHooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecycleHooksWithOptions(request, runtime);
}

/**
 * @summary Queries resource quotas. For example, you can call the DescribeLimitation operation to query the maximum numbers of scheduled tasks that you can create in a scaling group, load balancers that you can attach to a scaling group, instances that you can add to a scaling group, and scaling configurations that you can create in a scaling group.
 *
 * @param request DescribeLimitationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLimitationResponse
 */
DescribeLimitationResponse Client::describeLimitationWithOptions(const DescribeLimitationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLimitation"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLimitationResponse>();
}

/**
 * @summary Queries resource quotas. For example, you can call the DescribeLimitation operation to query the maximum numbers of scheduled tasks that you can create in a scaling group, load balancers that you can attach to a scaling group, instances that you can add to a scaling group, and scaling configurations that you can create in a scaling group.
 *
 * @param request DescribeLimitationRequest
 * @return DescribeLimitationResponse
 */
DescribeLimitationResponse Client::describeLimitation(const DescribeLimitationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLimitationWithOptions(request, runtime);
}

/**
 * @summary Queries notification settings. You can call the DescribeNotificationConfiguration operation to query notification settings of scaling events or resource changes, including the notification types and methods.
 *
 * @param request DescribeNotificationConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNotificationConfigurationsResponse
 */
DescribeNotificationConfigurationsResponse Client::describeNotificationConfigurationsWithOptions(const DescribeNotificationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNotificationConfigurations"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNotificationConfigurationsResponse>();
}

/**
 * @summary Queries notification settings. You can call the DescribeNotificationConfiguration operation to query notification settings of scaling events or resource changes, including the notification types and methods.
 *
 * @param request DescribeNotificationConfigurationsRequest
 * @return DescribeNotificationConfigurationsResponse
 */
DescribeNotificationConfigurationsResponse Client::describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNotificationConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries notification types. You can call the DescribeNotificationTypes operation to query the types of notifications on scaling events or resource changes occurred in your scaling groups. Notifications are triggered in scenarios such as successful scale-out events, successful scale-in events, expiration of scheduled tasks, and partially successful scale-out events.
 *
 * @param request DescribeNotificationTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNotificationTypesResponse
 */
DescribeNotificationTypesResponse Client::describeNotificationTypesWithOptions(const DescribeNotificationTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNotificationTypes"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNotificationTypesResponse>();
}

/**
 * @summary Queries notification types. You can call the DescribeNotificationTypes operation to query the types of notifications on scaling events or resource changes occurred in your scaling groups. Notifications are triggered in scenarios such as successful scale-out events, successful scale-in events, expiration of scheduled tasks, and partially successful scale-out events.
 *
 * @param request DescribeNotificationTypesRequest
 * @return DescribeNotificationTypesResponse
 */
DescribeNotificationTypesResponse Client::describeNotificationTypes(const DescribeNotificationTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNotificationTypesWithOptions(request, runtime);
}

/**
 * @summary Queries instance types that meet specified requirements by filtering based on parameters such as the vSwitch ID, number of vCPUs, memory size, instance family level, and maximum acceptable price.
 *
 * @param request DescribePatternTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePatternTypesResponse
 */
DescribePatternTypesResponse Client::describePatternTypesWithOptions(const DescribePatternTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePatternTypes"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePatternTypesResponse>();
}

/**
 * @summary Queries instance types that meet specified requirements by filtering based on parameters such as the vSwitch ID, number of vCPUs, memory size, instance family level, and maximum acceptable price.
 *
 * @param request DescribePatternTypesRequest
 * @return DescribePatternTypesResponse
 */
DescribePatternTypesResponse Client::describePatternTypes(const DescribePatternTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePatternTypesWithOptions(request, runtime);
}

/**
 * @summary Queries regions. Before you activate Auto Scaling, you can call the DescribeRegions operation to query the regions where Auto Scaling is officially launched. This preliminary step facilitates the strategic selection of both the optimal region and availability zones for activating Auto Scaling, thereby guaranteeing the finest access speeds and operational efficiency within your chosen geographical area.
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
    {"version" , "2022-02-22"},
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
 * @summary Queries regions. Before you activate Auto Scaling, you can call the DescribeRegions operation to query the regions where Auto Scaling is officially launched. This preliminary step facilitates the strategic selection of both the optimal region and availability zones for activating Auto Scaling, thereby guaranteeing the finest access speeds and operational efficiency within your chosen geographical area.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of scaling activities to check the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can view the status, cause, and total number of instances after the scaling activity on the scaling activity details page.
 *
 * @description - You can specify a scaling group ID to query all scaling activity records in the scaling group.
 * - You can filter query results by the status of the scaling activity.
 * - You can query the scaling activity that occurred within the last 30 days.
 *
 * @param request DescribeScalingActivitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingActivitiesResponse
 */
DescribeScalingActivitiesResponse Client::describeScalingActivitiesWithOptions(const DescribeScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskId()) {
    query["InstanceRefreshTaskId"] = request.getInstanceRefreshTaskId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingActivityIds()) {
    query["ScalingActivityIds"] = request.getScalingActivityIds();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.getStatusCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingActivities"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingActivitiesResponse>();
}

/**
 * @summary Queries the details of scaling activities to check the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can view the status, cause, and total number of instances after the scaling activity on the scaling activity details page.
 *
 * @description - You can specify a scaling group ID to query all scaling activity records in the scaling group.
 * - You can filter query results by the status of the scaling activity.
 * - You can query the scaling activity that occurred within the last 30 days.
 *
 * @param request DescribeScalingActivitiesRequest
 * @return DescribeScalingActivitiesResponse
 */
DescribeScalingActivitiesResponse Client::describeScalingActivities(const DescribeScalingActivitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingActivitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a scaling activity. You can query a scaling activity by its ID. The scaling activity details include the scaling activity status, error code, and error message. You can efficiently troubleshoot issues and analyze service performance based on the error message.
 *
 * @param request DescribeScalingActivityDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingActivityDetailResponse
 */
DescribeScalingActivityDetailResponse Client::describeScalingActivityDetailWithOptions(const DescribeScalingActivityDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingActivityId()) {
    query["ScalingActivityId"] = request.getScalingActivityId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingActivityDetail"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingActivityDetailResponse>();
}

/**
 * @summary Queries the details of a scaling activity. You can query a scaling activity by its ID. The scaling activity details include the scaling activity status, error code, and error message. You can efficiently troubleshoot issues and analyze service performance based on the error message.
 *
 * @param request DescribeScalingActivityDetailRequest
 * @return DescribeScalingActivityDetailResponse
 */
DescribeScalingActivityDetailResponse Client::describeScalingActivityDetail(const DescribeScalingActivityDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingActivityDetailWithOptions(request, runtime);
}

/**
 * @summary The distribution of scaling activities in different states over a period of time.
 *
 * @param request DescribeScalingActivityStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingActivityStatisticsResponse
 */
DescribeScalingActivityStatisticsResponse Client::describeScalingActivityStatisticsWithOptions(const DescribeScalingActivityStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingActivityStatistics"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingActivityStatisticsResponse>();
}

/**
 * @summary The distribution of scaling activities in different states over a period of time.
 *
 * @param request DescribeScalingActivityStatisticsRequest
 * @return DescribeScalingActivityStatisticsResponse
 */
DescribeScalingActivityStatisticsResponse Client::describeScalingActivityStatistics(const DescribeScalingActivityStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingActivityStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about ECS-type scaling configurations, including instance types and images, to help you understand the details of ECS instance templates used during scale-out.
 *
 * @param request DescribeScalingConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingConfigurationsResponse
 */
DescribeScalingConfigurationsResponse Client::describeScalingConfigurationsWithOptions(const DescribeScalingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingConfigurationIds()) {
    query["ScalingConfigurationIds"] = request.getScalingConfigurationIds();
  }

  if (!!request.hasScalingConfigurationNames()) {
    query["ScalingConfigurationNames"] = request.getScalingConfigurationNames();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingConfigurations"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingConfigurationsResponse>();
}

/**
 * @summary Queries the information about ECS-type scaling configurations, including instance types and images, to help you understand the details of ECS instance templates used during scale-out.
 *
 * @param request DescribeScalingConfigurationsRequest
 * @return DescribeScalingConfigurationsResponse
 */
DescribeScalingConfigurationsResponse Client::describeScalingConfigurations(const DescribeScalingConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified scaling group, such as the basic information, instances in the scaling group, and scaling configurations. If the OutputFormat parameter is set to YAML for an Elastic Container Instance (ECI) scaling group, the content in the Kubernetes Deployment YAML format is returned.
 *
 * @param request DescribeScalingGroupDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingGroupDetailResponse
 */
DescribeScalingGroupDetailResponse Client::describeScalingGroupDetailWithOptions(const DescribeScalingGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputFormat()) {
    query["OutputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingGroupDetail"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingGroupDetailResponse>();
}

/**
 * @summary Queries the details of a specified scaling group, such as the basic information, instances in the scaling group, and scaling configurations. If the OutputFormat parameter is set to YAML for an Elastic Container Instance (ECI) scaling group, the content in the Kubernetes Deployment YAML format is returned.
 *
 * @param request DescribeScalingGroupDetailRequest
 * @return DescribeScalingGroupDetailResponse
 */
DescribeScalingGroupDetailResponse Client::describeScalingGroupDetail(const DescribeScalingGroupDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingGroupDetailWithOptions(request, runtime);
}

/**
 * @summary DescribeScalingGroupDiagnoseDetails
 *
 * @param request DescribeScalingGroupDiagnoseDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingGroupDiagnoseDetailsResponse
 */
DescribeScalingGroupDiagnoseDetailsResponse Client::describeScalingGroupDiagnoseDetailsWithOptions(const DescribeScalingGroupDiagnoseDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingGroupDiagnoseDetails"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingGroupDiagnoseDetailsResponse>();
}

/**
 * @summary DescribeScalingGroupDiagnoseDetails
 *
 * @param request DescribeScalingGroupDiagnoseDetailsRequest
 * @return DescribeScalingGroupDiagnoseDetailsResponse
 */
DescribeScalingGroupDiagnoseDetailsResponse Client::describeScalingGroupDiagnoseDetails(const DescribeScalingGroupDiagnoseDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingGroupDiagnoseDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of scaling groups, including basic information, instances in the scaling groups, and scaling configurations.
 *
 * @param request DescribeScalingGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingGroupsResponse
 */
DescribeScalingGroupsResponse Client::describeScalingGroupsWithOptions(const DescribeScalingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupIds()) {
    query["ScalingGroupIds"] = request.getScalingGroupIds();
  }

  if (!!request.hasScalingGroupName()) {
    query["ScalingGroupName"] = request.getScalingGroupName();
  }

  if (!!request.hasScalingGroupNames()) {
    query["ScalingGroupNames"] = request.getScalingGroupNames();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingGroupsResponse>();
}

/**
 * @summary Queries the details of scaling groups, including basic information, instances in the scaling groups, and scaling configurations.
 *
 * @param request DescribeScalingGroupsRequest
 * @return DescribeScalingGroupsResponse
 */
DescribeScalingGroupsResponse Client::describeScalingGroups(const DescribeScalingGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ECS instances and their details in a scaling group by scaling group ID. The details include the total number of running spot instances, the total number of ECS instances, the warmup status, and the lifecycle status of the ECS instances in the scaling group. This operation also allows you to filter ECS instances by health status, lifecycle status, and creation type.
 *
 * @param request DescribeScalingInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingInstancesResponse
 */
DescribeScalingInstancesResponse Client::describeScalingInstancesWithOptions(const DescribeScalingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationType()) {
    query["CreationType"] = request.getCreationType();
  }

  if (!!request.hasCreationTypes()) {
    query["CreationTypes"] = request.getCreationTypes();
  }

  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLifecycleState()) {
    query["LifecycleState"] = request.getLifecycleState();
  }

  if (!!request.hasLifecycleStates()) {
    query["LifecycleStates"] = request.getLifecycleStates();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingActivityId()) {
    query["ScalingActivityId"] = request.getScalingActivityId();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingInstancesResponse>();
}

/**
 * @summary Queries a list of ECS instances and their details in a scaling group by scaling group ID. The details include the total number of running spot instances, the total number of ECS instances, the warmup status, and the lifecycle status of the ECS instances in the scaling group. This operation also allows you to filter ECS instances by health status, lifecycle status, and creation type.
 *
 * @param request DescribeScalingInstancesRequest
 * @return DescribeScalingInstancesResponse
 */
DescribeScalingInstancesResponse Client::describeScalingInstances(const DescribeScalingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries scaling rules and their details by specifying parameters such as the scaling rule ID, scaling rule name, and unique identifier of the scaling rule. The details include the adjustment type, instance warmup time, and event-triggered tasks associated with the scaling rules.
 *
 * @param request DescribeScalingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScalingRulesResponse
 */
DescribeScalingRulesResponse Client::describeScalingRulesWithOptions(const DescribeScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScalingRuleAris()) {
    query["ScalingRuleAris"] = request.getScalingRuleAris();
  }

  if (!!request.hasScalingRuleIds()) {
    query["ScalingRuleIds"] = request.getScalingRuleIds();
  }

  if (!!request.hasScalingRuleNames()) {
    query["ScalingRuleNames"] = request.getScalingRuleNames();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.getScalingRuleType();
  }

  if (!!request.hasShowAlarmRules()) {
    query["ShowAlarmRules"] = request.getShowAlarmRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScalingRules"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScalingRulesResponse>();
}

/**
 * @summary Queries scaling rules and their details by specifying parameters such as the scaling rule ID, scaling rule name, and unique identifier of the scaling rule. The details include the adjustment type, instance warmup time, and event-triggered tasks associated with the scaling rules.
 *
 * @param request DescribeScalingRulesRequest
 * @return DescribeScalingRulesResponse
 */
DescribeScalingRulesResponse Client::describeScalingRules(const DescribeScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of scheduled tasks. A scheduled task is a preset task that executes a specified scaling rule at a specified time to implement automatic scale-out and scale-in of compute resources. After you create a scheduled task, you can call the DescribeScheduledTasks API to query the details of the scheduled task, such as the trigger time, the total number of scheduled tasks, and the ID of the scaling group that executes the scheduled task.
 *
 * @description You can query scheduled tasks by scheduled task ID, scheduled task name, or the scaling rule executed by the scheduled task.
 *
 * @param request DescribeScheduledTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScheduledTasksResponse
 */
DescribeScheduledTasksResponse Client::describeScheduledTasksWithOptions(const DescribeScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecurrenceType()) {
    query["RecurrenceType"] = request.getRecurrenceType();
  }

  if (!!request.hasRecurrenceValue()) {
    query["RecurrenceValue"] = request.getRecurrenceValue();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScheduledActions()) {
    query["ScheduledActions"] = request.getScheduledActions();
  }

  if (!!request.hasScheduledTaskIds()) {
    query["ScheduledTaskIds"] = request.getScheduledTaskIds();
  }

  if (!!request.hasScheduledTaskNames()) {
    query["ScheduledTaskNames"] = request.getScheduledTaskNames();
  }

  if (!!request.hasTaskEnabled()) {
    query["TaskEnabled"] = request.getTaskEnabled();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScheduledTasks"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScheduledTasksResponse>();
}

/**
 * @summary Queries the details of scheduled tasks. A scheduled task is a preset task that executes a specified scaling rule at a specified time to implement automatic scale-out and scale-in of compute resources. After you create a scheduled task, you can call the DescribeScheduledTasks API to query the details of the scheduled task, such as the trigger time, the total number of scheduled tasks, and the ID of the scaling group that executes the scheduled task.
 *
 * @description You can query scheduled tasks by scheduled task ID, scheduled task name, or the scaling rule executed by the scheduled task.
 *
 * @param request DescribeScheduledTasksRequest
 * @return DescribeScheduledTasksResponse
 */
DescribeScheduledTasksResponse Client::describeScheduledTasks(const DescribeScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScheduledTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the list of ECS instances in the warm pool of a scaling group.
 *
 * @param request DescribeWarmPoolInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWarmPoolInstancesResponse
 */
DescribeWarmPoolInstancesResponse Client::describeWarmPoolInstancesWithOptions(const DescribeWarmPoolInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWarmPoolInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWarmPoolInstancesResponse>();
}

/**
 * @summary Queries the list of ECS instances in the warm pool of a scaling group.
 *
 * @param request DescribeWarmPoolInstancesRequest
 * @return DescribeWarmPoolInstancesResponse
 */
DescribeWarmPoolInstancesResponse Client::describeWarmPoolInstances(const DescribeWarmPoolInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWarmPoolInstancesWithOptions(request, runtime);
}

/**
 * @summary Detaches Application Load Balancer (ALB) server groups from a scaling group. When you call the DetachAlbServerGroups operation, you can specify the scaling group ID, ALB server group ID, and port used by Elastic Compute Service (ECS) instances in the desired ALB server group to detach one or more ALB server groups from your scaling group.
 *
 * @param request DetachAlbServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachAlbServerGroupsResponse
 */
DetachAlbServerGroupsResponse Client::detachAlbServerGroupsWithOptions(const DetachAlbServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbServerGroups()) {
    query["AlbServerGroups"] = request.getAlbServerGroups();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceDetach()) {
    query["ForceDetach"] = request.getForceDetach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachAlbServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachAlbServerGroupsResponse>();
}

/**
 * @summary Detaches Application Load Balancer (ALB) server groups from a scaling group. When you call the DetachAlbServerGroups operation, you can specify the scaling group ID, ALB server group ID, and port used by Elastic Compute Service (ECS) instances in the desired ALB server group to detach one or more ALB server groups from your scaling group.
 *
 * @param request DetachAlbServerGroupsRequest
 * @return DetachAlbServerGroupsResponse
 */
DetachAlbServerGroupsResponse Client::detachAlbServerGroups(const DetachAlbServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachAlbServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Detaches one or more ApsaraDB RDS instances from a scaling group to remove the mandatory association between the scaling group and the RDS instances and improve flexibility.
 *
 * @param request DetachDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDBInstancesResponse
 */
DetachDBInstancesResponse Client::detachDBInstancesWithOptions(const DetachDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstances()) {
    query["DBInstances"] = request.getDBInstances();
  }

  if (!!request.hasForceDetach()) {
    query["ForceDetach"] = request.getForceDetach();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoveSecurityGroup()) {
    query["RemoveSecurityGroup"] = request.getRemoveSecurityGroup();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDBInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDBInstancesResponse>();
}

/**
 * @summary Detaches one or more ApsaraDB RDS instances from a scaling group to remove the mandatory association between the scaling group and the RDS instances and improve flexibility.
 *
 * @param request DetachDBInstancesRequest
 * @return DetachDBInstancesResponse
 */
DetachDBInstancesResponse Client::detachDBInstances(const DetachDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Removes instances from a scaling group. If an enabled scaling group has no ongoing scaling activities, you can call the DetachInstances operation to remove one or more Elastic Compute Service (ECS) instances, elastic container instances, or Alibaba Cloud-hosted third-party instances from the scaling group.
 *
 * @description *   Before you call the DetachInstances operation, make sure that the following conditions are met:
 *     *   The specified scaling group is enabled.
 *     *   The specified scaling group does not have any ongoing scaling activities.
 *     **
 *     **Note** If the specified scaling group does not have any ongoing scaling activities, the operation can bypass the cooldown period of the scaling group and immediately trigger scaling activities.
 * *   Before you call this operation, take note of the following items:
 *     *   The ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances that are removed from a scaling group by using this operation can run independently. If needed, you can call the [AttachInstances](https://help.aliyun.com/document_detail/25954.html) operation to re-add these instances to a scaling group.
 *     *   The ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances that are removed from a scaling group by using this operation are not stopped or released.
 *     *   A successful call only means that Auto Scaling accepts your request. Scaling activities can be triggered as expected, but their successful execution is not guaranteed. You can query the status of a scaling activity based on the ScalingActivityId response parameter.
 *     *   The removal of ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances must not result in the overall number of instances within the specified scaling group falling below the minimum capacity threshold (MinSize); otherwise, an error will be reported.
 *
 * @param request DetachInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachInstancesResponse
 */
DetachInstancesResponse Client::detachInstancesWithOptions(const DetachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDecreaseDesiredCapacity()) {
    query["DecreaseDesiredCapacity"] = request.getDecreaseDesiredCapacity();
  }

  if (!!request.hasDetachOption()) {
    query["DetachOption"] = request.getDetachOption();
  }

  if (!!request.hasIgnoreInvalidInstance()) {
    query["IgnoreInvalidInstance"] = request.getIgnoreInvalidInstance();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLifecycleHook()) {
    query["LifecycleHook"] = request.getLifecycleHook();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachInstancesResponse>();
}

/**
 * @summary Removes instances from a scaling group. If an enabled scaling group has no ongoing scaling activities, you can call the DetachInstances operation to remove one or more Elastic Compute Service (ECS) instances, elastic container instances, or Alibaba Cloud-hosted third-party instances from the scaling group.
 *
 * @description *   Before you call the DetachInstances operation, make sure that the following conditions are met:
 *     *   The specified scaling group is enabled.
 *     *   The specified scaling group does not have any ongoing scaling activities.
 *     **
 *     **Note** If the specified scaling group does not have any ongoing scaling activities, the operation can bypass the cooldown period of the scaling group and immediately trigger scaling activities.
 * *   Before you call this operation, take note of the following items:
 *     *   The ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances that are removed from a scaling group by using this operation can run independently. If needed, you can call the [AttachInstances](https://help.aliyun.com/document_detail/25954.html) operation to re-add these instances to a scaling group.
 *     *   The ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances that are removed from a scaling group by using this operation are not stopped or released.
 *     *   A successful call only means that Auto Scaling accepts your request. Scaling activities can be triggered as expected, but their successful execution is not guaranteed. You can query the status of a scaling activity based on the ScalingActivityId response parameter.
 *     *   The removal of ECS instances, elastic container instances, or Alibaba Cloud-hosted third-party instances must not result in the overall number of instances within the specified scaling group falling below the minimum capacity threshold (MinSize); otherwise, an error will be reported.
 *
 * @param request DetachInstancesRequest
 * @return DetachInstancesResponse
 */
DetachInstancesResponse Client::detachInstances(const DetachInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachInstancesWithOptions(request, runtime);
}

/**
 * @summary Detaches Classic Load Balancer (CLB, formerly known as Server Load Balancer or SLB) instances from a scaling group. If the current CLB instance no longer meets your business requirements, you can call the DetachLoadBalancers operation to detach it from your scaling group. When you call this operation, you can use ScalingGroupId, LoadBalancer.N, and ForceDetach to specify one or more CLB instances to detach. You can also determine whether to call this operation asynchronously and whether to remove the Elastic Compute Service (ECS) instances acting as backend servers from the backend server groups of the CLB instance. You can call this operation to detach only CLB instances from a scaling group.
 *
 * @param request DetachLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachLoadBalancersResponse
 */
DetachLoadBalancersResponse Client::detachLoadBalancersWithOptions(const DetachLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.getAsync();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceDetach()) {
    query["ForceDetach"] = request.getForceDetach();
  }

  if (!!request.hasLoadBalancers()) {
    query["LoadBalancers"] = request.getLoadBalancers();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachLoadBalancers"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachLoadBalancersResponse>();
}

/**
 * @summary Detaches Classic Load Balancer (CLB, formerly known as Server Load Balancer or SLB) instances from a scaling group. If the current CLB instance no longer meets your business requirements, you can call the DetachLoadBalancers operation to detach it from your scaling group. When you call this operation, you can use ScalingGroupId, LoadBalancer.N, and ForceDetach to specify one or more CLB instances to detach. You can also determine whether to call this operation asynchronously and whether to remove the Elastic Compute Service (ECS) instances acting as backend servers from the backend server groups of the CLB instance. You can call this operation to detach only CLB instances from a scaling group.
 *
 * @param request DetachLoadBalancersRequest
 * @return DetachLoadBalancersResponse
 */
DetachLoadBalancersResponse Client::detachLoadBalancers(const DetachLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Remove one or more SLB server groups from a scaling group. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB), which can dynamically adjust SLB policies and help improve high availability of the system.
 *
 * @param request DetachServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachServerGroupsResponse
 */
DetachServerGroupsResponse Client::detachServerGroupsWithOptions(const DetachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceDetach()) {
    query["ForceDetach"] = request.getForceDetach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasServerGroups()) {
    query["ServerGroups"] = request.getServerGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachServerGroupsResponse>();
}

/**
 * @summary Remove one or more SLB server groups from a scaling group. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB), which can dynamically adjust SLB policies and help improve high availability of the system.
 *
 * @param request DetachServerGroupsRequest
 * @return DetachServerGroupsResponse
 */
DetachServerGroupsResponse Client::detachServerGroups(const DetachServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Detaches vServer groups from a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups to improve service performance. If the load balancer currently attached to your scaling group is no longer needed to distribute the access traffic to the instances in your scaling group, you can call the DetachVServerGroups operation to detach one or more vServer groups of this load balancer from the scaling group.
 *
 * @description *   When you call the DetachVServerGroups operation, you must use the following parameters to specify the vServer groups that you want to detach from your scaling group:
 *     *   LoadBalancerId: the ID of the load balancer
 *     *   VServerGroupId: the ID of the vServer group
 *     *   Port: the port number of the vServer group
 * *   When the vServer group specified by the request parameters matches that attached to your scaling group, this operation yields a favorable result. Otherwise, the request is ignored and no error is reported.
 * *   Before you call this operation, you must make sure that the load balancer has ceased routing the access traffic to the instances in the scaling group. Failure to do so may lead to service requests being dropped or lost during the detachment process.
 *
 * @param request DetachVServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachVServerGroupsResponse
 */
DetachVServerGroupsResponse Client::detachVServerGroupsWithOptions(const DetachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForceDetach()) {
    query["ForceDetach"] = request.getForceDetach();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasVServerGroups()) {
    query["VServerGroups"] = request.getVServerGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachVServerGroups"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachVServerGroupsResponse>();
}

/**
 * @summary Detaches vServer groups from a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups to improve service performance. If the load balancer currently attached to your scaling group is no longer needed to distribute the access traffic to the instances in your scaling group, you can call the DetachVServerGroups operation to detach one or more vServer groups of this load balancer from the scaling group.
 *
 * @description *   When you call the DetachVServerGroups operation, you must use the following parameters to specify the vServer groups that you want to detach from your scaling group:
 *     *   LoadBalancerId: the ID of the load balancer
 *     *   VServerGroupId: the ID of the vServer group
 *     *   Port: the port number of the vServer group
 * *   When the vServer group specified by the request parameters matches that attached to your scaling group, this operation yields a favorable result. Otherwise, the request is ignored and no error is reported.
 * *   Before you call this operation, you must make sure that the load balancer has ceased routing the access traffic to the instances in the scaling group. Failure to do so may lead to service requests being dropped or lost during the detachment process.
 *
 * @param request DetachVServerGroupsRequest
 * @return DetachVServerGroupsResponse
 */
DetachVServerGroupsResponse Client::detachVServerGroups(const DetachVServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachVServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
 *
 * @description Before you disable an event-triggered task, make sure that the task is in the `Normal`, `Alert`, or `Insufficient Data` state.
 *
 * @param request DisableAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAlarmResponse
 */
DisableAlarmResponse Client::disableAlarmWithOptions(const DisableAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmTaskId()) {
    query["AlarmTaskId"] = request.getAlarmTaskId();
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
    {"action" , "DisableAlarm"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAlarmResponse>();
}

/**
 * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
 *
 * @description Before you disable an event-triggered task, make sure that the task is in the `Normal`, `Alert`, or `Insufficient Data` state.
 *
 * @param request DisableAlarmRequest
 * @return DisableAlarmResponse
 */
DisableAlarmResponse Client::disableAlarm(const DisableAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAlarmWithOptions(request, runtime);
}

/**
 * @summary Disables a scaling group. If you temporarily do not require a scaling group that is in the Enabled state, you can call the DisableScalingGroup operation to disable it.
 *
 * @description Before you call this operation to disable a scaling group, take note of the following items:
 * *   If scaling activities are being executed in the specified scaling group when you call this operation, these activities will continue until they are complete. However, scaling activities that are triggered after this operation is called will be rejected.
 * *   This operation can be called only when the scaling group is in the Active state.
 *
 * @param request DisableScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableScalingGroupResponse
 */
DisableScalingGroupResponse Client::disableScalingGroupWithOptions(const DisableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableScalingGroupResponse>();
}

/**
 * @summary Disables a scaling group. If you temporarily do not require a scaling group that is in the Enabled state, you can call the DisableScalingGroup operation to disable it.
 *
 * @description Before you call this operation to disable a scaling group, take note of the following items:
 * *   If scaling activities are being executed in the specified scaling group when you call this operation, these activities will continue until they are complete. However, scaling activities that are triggered after this operation is called will be rejected.
 * *   This operation can be called only when the scaling group is in the Active state.
 *
 * @param request DisableScalingGroupRequest
 * @return DisableScalingGroupResponse
 */
DisableScalingGroupResponse Client::disableScalingGroup(const DisableScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Enables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you want to reuse an event-triggered task that is in the Disabled state, you can call the EnableAlarm operation to enable it.
 *
 * @param request EnableAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAlarmResponse
 */
EnableAlarmResponse Client::enableAlarmWithOptions(const EnableAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmTaskId()) {
    query["AlarmTaskId"] = request.getAlarmTaskId();
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
    {"action" , "EnableAlarm"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAlarmResponse>();
}

/**
 * @summary Enables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you want to reuse an event-triggered task that is in the Disabled state, you can call the EnableAlarm operation to enable it.
 *
 * @param request EnableAlarmRequest
 * @return EnableAlarmResponse
 */
EnableAlarmResponse Client::enableAlarm(const EnableAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAlarmWithOptions(request, runtime);
}

/**
 * @summary Enables a scaling group. If a scaling group is in the Disabled state and contains an instance configuration source such as a launch template or a scaling configuration, you can call the EnableScalingGroup operation to enable the scaling group. This operation permits Auto Scaling to dynamically adjust the computing power (also known as the number of instances) in the scaling group based on your business requirements.
 *
 * @description *   You can call this operation to enable a scaling group only if the scaling group is in the Inactive state and contains an instance configuration source such as a launch temple or a scaling configuration. The instance configuration source can also be the Elastic Compute Service (ECS) instance that you specified when you created the scaling group. If the preceding requirements are not met, the operation will fail.
 *     **
 *     **Note** A scaling group can have only one active instance configuration source at a time. When you call this operation to enable a scaling group, you can specify a scaling configuration or a launch template for the scaling group. If the scaling group already have an instance configuration source defined prior to your calling, the scaling configuration or launch template specified within your request will supersede the existing scaling configuration or launch template.
 * *   If you specify InstanceId.N to add to the scaling group within your request, Auto Scaling will check whether the addition of InstanceId.N will cause the total number of ECS instances in the scaling group to fall outside the boundaries specified by MinSize and MaxSize after you call this operation.
 *     *   If the call results in the total number of ECS instances dropping below the value of MinSize, Auto Scaling proactively creates pay-as-you-go ECS instances to ensure that the total number reaches the minimum threshold. For example, if you set MinSize to 5 when you created a scaling group and include InstanceId.N within your request to add two ECS instances when you attempt to enable the scaling group, Auto Scaling creates three more ECS instances in the scaling group after the two ECS instances are added.
 *     *   If the call results in the total number of ECS instances exceeding the value of MaxSize, the operation fails.
 *
 * @param request EnableScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableScalingGroupResponse
 */
EnableScalingGroupResponse Client::enableScalingGroupWithOptions(const EnableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveScalingConfigurationId()) {
    query["ActiveScalingConfigurationId"] = request.getActiveScalingConfigurationId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.getLaunchTemplateId();
  }

  if (!!request.hasLaunchTemplateOverrides()) {
    query["LaunchTemplateOverrides"] = request.getLaunchTemplateOverrides();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.getLaunchTemplateVersion();
  }

  if (!!request.hasLoadBalancerWeights()) {
    query["LoadBalancerWeights"] = request.getLoadBalancerWeights();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableScalingGroupResponse>();
}

/**
 * @summary Enables a scaling group. If a scaling group is in the Disabled state and contains an instance configuration source such as a launch template or a scaling configuration, you can call the EnableScalingGroup operation to enable the scaling group. This operation permits Auto Scaling to dynamically adjust the computing power (also known as the number of instances) in the scaling group based on your business requirements.
 *
 * @description *   You can call this operation to enable a scaling group only if the scaling group is in the Inactive state and contains an instance configuration source such as a launch temple or a scaling configuration. The instance configuration source can also be the Elastic Compute Service (ECS) instance that you specified when you created the scaling group. If the preceding requirements are not met, the operation will fail.
 *     **
 *     **Note** A scaling group can have only one active instance configuration source at a time. When you call this operation to enable a scaling group, you can specify a scaling configuration or a launch template for the scaling group. If the scaling group already have an instance configuration source defined prior to your calling, the scaling configuration or launch template specified within your request will supersede the existing scaling configuration or launch template.
 * *   If you specify InstanceId.N to add to the scaling group within your request, Auto Scaling will check whether the addition of InstanceId.N will cause the total number of ECS instances in the scaling group to fall outside the boundaries specified by MinSize and MaxSize after you call this operation.
 *     *   If the call results in the total number of ECS instances dropping below the value of MinSize, Auto Scaling proactively creates pay-as-you-go ECS instances to ensure that the total number reaches the minimum threshold. For example, if you set MinSize to 5 when you created a scaling group and include InstanceId.N within your request to add two ECS instances when you attempt to enable the scaling group, Auto Scaling creates three more ECS instances in the scaling group after the two ECS instances are added.
 *     *   If the call results in the total number of ECS instances exceeding the value of MaxSize, the operation fails.
 *
 * @param request EnableScalingGroupRequest
 * @return EnableScalingGroupResponse
 */
EnableScalingGroupResponse Client::enableScalingGroup(const EnableScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Puts an Elastic Compute Service (ECS) instance into the Standby state.
 *
 * @description ## Description
 * *   If you call the operation to put an ECS instance in a scaling group that is associated with a Classic Load Balancer (CLB) instance into the Standby state, the weight of the ECS instance as a backend server of the CLB instance is set to 0.
 * *   You can remove an instance that is in the Standby state from a scaling group, and then release the instance.
 * *   ECS instances that are in the Standby state are not removed from the scaling group during scale-in activities triggered by event-triggered tasks.
 * *   If Auto Scaling considers an ECS instance that is in the Standby state unhealthy, for example, the ECS instance is being stopped or being restarted, Auto Scaling does not update the health status of the ECS instance or trigger scale-in activities to remove the ECS instance from the scaling group. Auto Scaling updates the health status of the ECS instance only when the ECS instance is no longer in the Standby state.
 *
 * @param request EnterStandbyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterStandbyResponse
 */
EnterStandbyResponse Client::enterStandbyWithOptions(const EnterStandbyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.getAsync();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnterStandby"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterStandbyResponse>();
}

/**
 * @summary Puts an Elastic Compute Service (ECS) instance into the Standby state.
 *
 * @description ## Description
 * *   If you call the operation to put an ECS instance in a scaling group that is associated with a Classic Load Balancer (CLB) instance into the Standby state, the weight of the ECS instance as a backend server of the CLB instance is set to 0.
 * *   You can remove an instance that is in the Standby state from a scaling group, and then release the instance.
 * *   ECS instances that are in the Standby state are not removed from the scaling group during scale-in activities triggered by event-triggered tasks.
 * *   If Auto Scaling considers an ECS instance that is in the Standby state unhealthy, for example, the ECS instance is being stopped or being restarted, Auto Scaling does not update the health status of the ECS instance or trigger scale-in activities to remove the ECS instance from the scaling group. Auto Scaling updates the health status of the ECS instance only when the ECS instance is no longer in the Standby state.
 *
 * @param request EnterStandbyRequest
 * @return EnterStandbyResponse
 */
EnterStandbyResponse Client::enterStandby(const EnterStandbyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterStandbyWithOptions(request, runtime);
}

/**
 * @summary Executes a scaling rule. To adjust the number of Elastic Compute Service (ECS) instances or elastic container instances, you can manually execute a scaling rule or enable Auto Scaling to execute a scaling rule. You can call the ExecuteScalingRule operation to execute simple scaling rules or step scaling rules. Auto Scaling automatically executes target tracking scaling rules and predictive scaling rules on your behalf without requiring explicit execution calls.
 *
 * @description Before you call this operation, take note of the following items:
 * *   The scaling group is in the Active state.
 * *   No scaling activities in the scaling group are in progress.
 * If no scaling activities in the scaling group are in progress, the operation can trigger scaling activities even before the cooldown time expires.
 * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity by using the value of the ScalingActivityId parameter in the response.
 * If the addition of a specified number of Elastic Compute Service (ECS) instances to a scaling group causes the total number of ECS instances in the scaling group to exceed the maximum number of instances allowed, Auto Scaling adds only a specific number of ECS instances to ensure that the total number of instances is equal to the maximum number of instances.
 * If the removal of a specified number of ECS instances from a scaling group causes the total number of ECS instances in the scaling group to drop below the minimum number of instances allowed, Auto Scaling removes only a specific number of ECS instances to ensure that the total number of instances is equal to the minimum number of instances.
 * You can specify only a limited number of ECS instances in each adjustment. For more information, see the description of the AdjustmentValue parameter in the CreateScalingRule topic.
 *
 * @param request ExecuteScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteScalingRuleResponse
 */
ExecuteScalingRuleResponse Client::executeScalingRuleWithOptions(const ExecuteScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBreachThreshold()) {
    query["BreachThreshold"] = request.getBreachThreshold();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMetricValue()) {
    query["MetricValue"] = request.getMetricValue();
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

  if (!!request.hasScalingRuleAri()) {
    query["ScalingRuleAri"] = request.getScalingRuleAri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteScalingRule"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteScalingRuleResponse>();
}

/**
 * @summary Executes a scaling rule. To adjust the number of Elastic Compute Service (ECS) instances or elastic container instances, you can manually execute a scaling rule or enable Auto Scaling to execute a scaling rule. You can call the ExecuteScalingRule operation to execute simple scaling rules or step scaling rules. Auto Scaling automatically executes target tracking scaling rules and predictive scaling rules on your behalf without requiring explicit execution calls.
 *
 * @description Before you call this operation, take note of the following items:
 * *   The scaling group is in the Active state.
 * *   No scaling activities in the scaling group are in progress.
 * If no scaling activities in the scaling group are in progress, the operation can trigger scaling activities even before the cooldown time expires.
 * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity by using the value of the ScalingActivityId parameter in the response.
 * If the addition of a specified number of Elastic Compute Service (ECS) instances to a scaling group causes the total number of ECS instances in the scaling group to exceed the maximum number of instances allowed, Auto Scaling adds only a specific number of ECS instances to ensure that the total number of instances is equal to the maximum number of instances.
 * If the removal of a specified number of ECS instances from a scaling group causes the total number of ECS instances in the scaling group to drop below the minimum number of instances allowed, Auto Scaling removes only a specific number of ECS instances to ensure that the total number of instances is equal to the minimum number of instances.
 * You can specify only a limited number of ECS instances in each adjustment. For more information, see the description of the AdjustmentValue parameter in the CreateScalingRule topic.
 *
 * @param request ExecuteScalingRuleRequest
 * @return ExecuteScalingRuleResponse
 */
ExecuteScalingRuleResponse Client::executeScalingRule(const ExecuteScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Removes an instance from the Standby state. When a scale-in event is triggered in a scaling group, Auto Scaling does not remove Elastic Compute Service (ECS) instances or elastic container instances that are in the Standby state from the scaling group. If you want to restart the instances that are in the Standby state, you can call the ExitStandby operation to remove the instances from the Standby state and put them into the In Service state.
 *
 * @description After ECS instances or elastic container instances are removed from the Standby state, the following rules apply:
 * *   The ECS instances or elastic container instances enter the In Service state.
 * *   The default weight of each ECS instance or elastic container instance as a backend server of the attached load balancer is 50.
 * *   If you stop or restart the ECS instances or elastic container instances, the health check status of the instances will be updated.
 * *   When a scale-in event is triggered, Auto Scaling may remove the ECS instances or elastic container instances from the scaling group.
 *
 * @param request ExitStandbyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExitStandbyResponse
 */
ExitStandbyResponse Client::exitStandbyWithOptions(const ExitStandbyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.getAsync();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExitStandby"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExitStandbyResponse>();
}

/**
 * @summary Removes an instance from the Standby state. When a scale-in event is triggered in a scaling group, Auto Scaling does not remove Elastic Compute Service (ECS) instances or elastic container instances that are in the Standby state from the scaling group. If you want to restart the instances that are in the Standby state, you can call the ExitStandby operation to remove the instances from the Standby state and put them into the In Service state.
 *
 * @description After ECS instances or elastic container instances are removed from the Standby state, the following rules apply:
 * *   The ECS instances or elastic container instances enter the In Service state.
 * *   The default weight of each ECS instance or elastic container instance as a backend server of the attached load balancer is 50.
 * *   If you stop or restart the ECS instances or elastic container instances, the health check status of the instances will be updated.
 * *   When a scale-in event is triggered, Auto Scaling may remove the ECS instances or elastic container instances from the scaling group.
 *
 * @param request ExitStandbyRequest
 * @return ExitStandbyResponse
 */
ExitStandbyResponse Client::exitStandby(const ExitStandbyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exitStandbyWithOptions(request, runtime);
}

/**
 * @summary Queries the tag keys added to Auto Scaling resources. Querying tag keys facilitates easier classification, identification, and monitoring of your Auto Scaling resources, thereby enhancing the flexibility and convenience of your resource management processes.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2022-02-22"},
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
 * @summary Queries the tag keys added to Auto Scaling resources. Querying tag keys facilitates easier classification, identification, and monitoring of your Auto Scaling resources, thereby enhancing the flexibility and convenience of your resource management processes.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries tags. You can call the ListTagResources operation to query tags that are added to Auto Scaling resources, thereby clarifying resource utilization and facilitating efficient resource management. This operation aids in the automation of resource categorization and permission management processes.
 *
 * @description *   Specify at least one of the following request parameters: `ResourceIds` and `Tags`. `Tags.Key` and `Tags.Value` are used to specify the query objects.
 * *   If you provide both `ResourceIds` and `Tags` in your request, the response will exclusively include Auto Scaling resources that satisfy the criteria set by these parameters, ensuring targeted and precise information retrieval.
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2022-02-22"},
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
 * @summary Queries tags. You can call the ListTagResources operation to query tags that are added to Auto Scaling resources, thereby clarifying resource utilization and facilitating efficient resource management. This operation aids in the automation of resource categorization and permission management processes.
 *
 * @description *   Specify at least one of the following request parameters: `ResourceIds` and `Tags`. `Tags.Key` and `Tags.Value` are used to specify the query objects.
 * *   If you provide both `ResourceIds` and `Tags` in your request, the response will exclusively include Auto Scaling resources that satisfy the criteria set by these parameters, ensuring targeted and precise information retrieval.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag keys associated with Auto Scaling resources to facilitate a deeper comprehension of those resources. By doing so, you can categorize and manage your Auto Scaling resources more efficiently.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2022-02-22"},
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
 * @summary Queries the tag keys associated with Auto Scaling resources to facilitate a deeper comprehension of those resources. By doing so, you can categorize and manage your Auto Scaling resources more efficiently.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Modifies an event-triggered task.
 *
 * @description - If you create an event-triggered task of the custom monitoring type (MetricType=custom), you must first report custom monitoring metrics to CloudMonitor. For more information, see [Event-triggered tasks for custom monitoring](https://help.aliyun.com/document_detail/74861.html).
 * - When you create an event-triggered task, you must specify a metric (MetricName) and configure dimension information (Dimension.N.DimensionKey and Dimension.N.DimensionValue) to determine the aggregation scope of the metric data in the scaling group. For example, you can specify user_id and scaling_group to aggregate the metric data of all ECS instances or elastic container instances in the scaling group of the specified user.
 *     - The metrics of a custom monitoring event-triggered task (MetricType=custom) depend on your custom monitoring metrics.
 *     - For more information about the metrics supported by system monitoring event-triggered tasks (MetricType=system), see [Event-triggered tasks for system monitoring](https://help.aliyun.com/document_detail/74854.html).
 * > In the dimension information, user_id and scaling_group are automatically populated by the system. You must manually specify device and state. For more information, see the Dimension.N.DimensionKey and Dimension.N.DimensionValue parameters.
 *
 * @param request ModifyAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAlarmResponse
 */
ModifyAlarmResponse Client::modifyAlarmWithOptions(const ModifyAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmActions()) {
    query["AlarmActions"] = request.getAlarmActions();
  }

  if (!!request.hasAlarmTaskId()) {
    query["AlarmTaskId"] = request.getAlarmTaskId();
  }

  if (!!request.hasComparisonOperator()) {
    query["ComparisonOperator"] = request.getComparisonOperator();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffective()) {
    query["Effective"] = request.getEffective();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasExpressions()) {
    query["Expressions"] = request.getExpressions();
  }

  if (!!request.hasExpressionsLogicOperator()) {
    query["ExpressionsLogicOperator"] = request.getExpressionsLogicOperator();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasStatistics()) {
    query["Statistics"] = request.getStatistics();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAlarm"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAlarmResponse>();
}

/**
 * @summary Modifies an event-triggered task.
 *
 * @description - If you create an event-triggered task of the custom monitoring type (MetricType=custom), you must first report custom monitoring metrics to CloudMonitor. For more information, see [Event-triggered tasks for custom monitoring](https://help.aliyun.com/document_detail/74861.html).
 * - When you create an event-triggered task, you must specify a metric (MetricName) and configure dimension information (Dimension.N.DimensionKey and Dimension.N.DimensionValue) to determine the aggregation scope of the metric data in the scaling group. For example, you can specify user_id and scaling_group to aggregate the metric data of all ECS instances or elastic container instances in the scaling group of the specified user.
 *     - The metrics of a custom monitoring event-triggered task (MetricType=custom) depend on your custom monitoring metrics.
 *     - For more information about the metrics supported by system monitoring event-triggered tasks (MetricType=system), see [Event-triggered tasks for system monitoring](https://help.aliyun.com/document_detail/74854.html).
 * > In the dimension information, user_id and scaling_group are automatically populated by the system. You must manually specify device and state. For more information, see the Dimension.N.DimensionKey and Dimension.N.DimensionValue parameters.
 *
 * @param request ModifyAlarmRequest
 * @return ModifyAlarmResponse
 */
ModifyAlarmResponse Client::modifyAlarm(const ModifyAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAlarmWithOptions(request, runtime);
}

/**
 * @summary Sets the status of scaling activities that prompt text message or email notifications.
 *
 * @param request ModifyAlertConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAlertConfigurationResponse
 */
ModifyAlertConfigurationResponse Client::modifyAlertConfigurationWithOptions(const ModifyAlertConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScaleStatuses()) {
    query["ScaleStatuses"] = request.getScaleStatuses();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAlertConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAlertConfigurationResponse>();
}

/**
 * @summary Sets the status of scaling activities that prompt text message or email notifications.
 *
 * @param request ModifyAlertConfigurationRequest
 * @return ModifyAlertConfigurationResponse
 */
ModifyAlertConfigurationResponse Client::modifyAlertConfiguration(const ModifyAlertConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAlertConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies a scaling configuration by specifying parameters such as the ID of the scaling configuration to be modified, the name of the scaling configuration, and the attributes of the Elastic Container Instance (ECI), such as the instance restart policy, the preemption policy, and the bandwidth of the elastic IP address (EIP).
 *
 * @description - If you modify the name of the scaling configuration, ensure that no other scaling configuration in the same scaling group has the same name.
 * - You can call the [DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html) operation to query and verify the modification result.
 *
 * @param request ModifyEciScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEciScalingConfigurationResponse
 */
ModifyEciScalingConfigurationResponse Client::modifyEciScalingConfigurationWithOptions(const ModifyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrRegistryInfos()) {
    query["AcrRegistryInfos"] = request.getAcrRegistryInfos();
  }

  if (!!request.hasActiveDeadlineSeconds()) {
    query["ActiveDeadlineSeconds"] = request.getActiveDeadlineSeconds();
  }

  if (!!request.hasAutoCreateEip()) {
    query["AutoCreateEip"] = request.getAutoCreateEip();
  }

  if (!!request.hasAutoMatchImageCache()) {
    query["AutoMatchImageCache"] = request.getAutoMatchImageCache();
  }

  if (!!request.hasContainerGroupName()) {
    query["ContainerGroupName"] = request.getContainerGroupName();
  }

  if (!!request.hasContainers()) {
    query["Containers"] = request.getContainers();
  }

  if (!!request.hasContainersUpdateType()) {
    query["ContainersUpdateType"] = request.getContainersUpdateType();
  }

  if (!!request.hasCostOptimization()) {
    query["CostOptimization"] = request.getCostOptimization();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasCpuOptionsCore()) {
    query["CpuOptionsCore"] = request.getCpuOptionsCore();
  }

  if (!!request.hasCpuOptionsThreadsPerCore()) {
    query["CpuOptionsThreadsPerCore"] = request.getCpuOptionsThreadsPerCore();
  }

  if (!!request.hasDataCacheBucket()) {
    query["DataCacheBucket"] = request.getDataCacheBucket();
  }

  if (!!request.hasDataCacheBurstingEnabled()) {
    query["DataCacheBurstingEnabled"] = request.getDataCacheBurstingEnabled();
  }

  if (!!request.hasDataCachePL()) {
    query["DataCachePL"] = request.getDataCachePL();
  }

  if (!!request.hasDataCacheProvisionedIops()) {
    query["DataCacheProvisionedIops"] = request.getDataCacheProvisionedIops();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDnsConfigNameServers()) {
    query["DnsConfigNameServers"] = request.getDnsConfigNameServers();
  }

  if (!!request.hasDnsConfigOptions()) {
    query["DnsConfigOptions"] = request.getDnsConfigOptions();
  }

  if (!!request.hasDnsConfigSearchs()) {
    query["DnsConfigSearchs"] = request.getDnsConfigSearchs();
  }

  if (!!request.hasDnsPolicy()) {
    query["DnsPolicy"] = request.getDnsPolicy();
  }

  if (!!request.hasEgressBandwidth()) {
    query["EgressBandwidth"] = request.getEgressBandwidth();
  }

  if (!!request.hasEipBandwidth()) {
    query["EipBandwidth"] = request.getEipBandwidth();
  }

  if (!!request.hasEnableSls()) {
    query["EnableSls"] = request.getEnableSls();
  }

  if (!!request.hasEphemeralStorage()) {
    query["EphemeralStorage"] = request.getEphemeralStorage();
  }

  if (!!request.hasGpuDriverVersion()) {
    query["GpuDriverVersion"] = request.getGpuDriverVersion();
  }

  if (!!request.hasHostAliases()) {
    query["HostAliases"] = request.getHostAliases();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageRegistryCredentials()) {
    query["ImageRegistryCredentials"] = request.getImageRegistryCredentials();
  }

  if (!!request.hasImageSnapshotId()) {
    query["ImageSnapshotId"] = request.getImageSnapshotId();
  }

  if (!!request.hasIngressBandwidth()) {
    query["IngressBandwidth"] = request.getIngressBandwidth();
  }

  if (!!request.hasInitContainers()) {
    query["InitContainers"] = request.getInitContainers();
  }

  if (!!request.hasInstanceFamilyLevel()) {
    query["InstanceFamilyLevel"] = request.getInstanceFamilyLevel();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasLoadBalancerWeight()) {
    query["LoadBalancerWeight"] = request.getLoadBalancerWeight();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNtpServers()) {
    query["NtpServers"] = request.getNtpServers();
  }

  if (!!request.hasOverride()) {
    query["Override"] = request.getOverride();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.getRamRoleName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasRestartPolicy()) {
    query["RestartPolicy"] = request.getRestartPolicy();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  if (!!request.hasScalingConfigurationName()) {
    query["ScalingConfigurationName"] = request.getScalingConfigurationName();
  }

  if (!!request.hasSecurityContextSysCtls()) {
    query["SecurityContextSysCtls"] = request.getSecurityContextSysCtls();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSpotPriceLimit()) {
    query["SpotPriceLimit"] = request.getSpotPriceLimit();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.getTerminationGracePeriodSeconds();
  }

  if (!!request.hasVolumes()) {
    query["Volumes"] = request.getVolumes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEciScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEciScalingConfigurationResponse>();
}

/**
 * @summary Modifies a scaling configuration by specifying parameters such as the ID of the scaling configuration to be modified, the name of the scaling configuration, and the attributes of the Elastic Container Instance (ECI), such as the instance restart policy, the preemption policy, and the bandwidth of the elastic IP address (EIP).
 *
 * @description - If you modify the name of the scaling configuration, ensure that no other scaling configuration in the same scaling group has the same name.
 * - You can call the [DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html) operation to query and verify the modification result.
 *
 * @param request ModifyEciScalingConfigurationRequest
 * @return ModifyEciScalingConfigurationResponse
 */
ModifyEciScalingConfigurationResponse Client::modifyEciScalingConfiguration(const ModifyEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an ECS instance in a scaling group. Currently, only the lifecycle management attribute of instances manually added to the scaling group can be modified.
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntrusted()) {
    query["Entrusted"] = request.getEntrusted();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an ECS instance in a scaling group. Currently, only the lifecycle management attribute of instances manually added to the scaling group can be modified.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a lifecycle hook, such as the applicable scaling activity type, the wait time for the scaling activity, and the subsequent action after the wait state ends. You can specify the lifecycle hook by its ID or name and the scaling group ID without the need to delete the lifecycle hook if it no longer meets your business requirements.
 *
 * @description You can specify the lifecycle hook to be modified in one of the following ways:
 * - Specify only the lifecycle hook ID (LifecycleHookId). In this case, the ScalingGroupId and LifecycleHookName parameters are ignored.
 * - Specify both the scaling group ID (ScalingGroupId) and the lifecycle hook name (LifecycleHookName). The lifecycle hook name is unique within a scaling group.
 *
 * @param request ModifyLifecycleHookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLifecycleHookResponse
 */
ModifyLifecycleHookResponse Client::modifyLifecycleHookWithOptions(const ModifyLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultResult()) {
    query["DefaultResult"] = request.getDefaultResult();
  }

  if (!!request.hasHeartbeatTimeout()) {
    query["HeartbeatTimeout"] = request.getHeartbeatTimeout();
  }

  if (!!request.hasLifecycleActionSources()) {
    query["LifecycleActionSources"] = request.getLifecycleActionSources();
  }

  if (!!request.hasLifecycleHookId()) {
    query["LifecycleHookId"] = request.getLifecycleHookId();
  }

  if (!!request.hasLifecycleHookName()) {
    query["LifecycleHookName"] = request.getLifecycleHookName();
  }

  if (!!request.hasLifecycleHookStatus()) {
    query["LifecycleHookStatus"] = request.getLifecycleHookStatus();
  }

  if (!!request.hasLifecycleTransition()) {
    query["LifecycleTransition"] = request.getLifecycleTransition();
  }

  if (!!request.hasNotificationArn()) {
    query["NotificationArn"] = request.getNotificationArn();
  }

  if (!!request.hasNotificationMetadata()) {
    query["NotificationMetadata"] = request.getNotificationMetadata();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLifecycleHook"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLifecycleHookResponse>();
}

/**
 * @summary Modifies the configurations of a lifecycle hook, such as the applicable scaling activity type, the wait time for the scaling activity, and the subsequent action after the wait state ends. You can specify the lifecycle hook by its ID or name and the scaling group ID without the need to delete the lifecycle hook if it no longer meets your business requirements.
 *
 * @description You can specify the lifecycle hook to be modified in one of the following ways:
 * - Specify only the lifecycle hook ID (LifecycleHookId). In this case, the ScalingGroupId and LifecycleHookName parameters are ignored.
 * - Specify both the scaling group ID (ScalingGroupId) and the lifecycle hook name (LifecycleHookName). The lifecycle hook name is unique within a scaling group.
 *
 * @param request ModifyLifecycleHookRequest
 * @return ModifyLifecycleHookResponse
 */
ModifyLifecycleHookResponse Client::modifyLifecycleHook(const ModifyLifecycleHookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLifecycleHookWithOptions(request, runtime);
}

/**
 * @summary Modifies event notification rules. Event notification rules support automatic sending of notifications to CloudMonitor, Message Service (MNS) topics, or MNS queues when a specified type of events occur. This helps you learn about the dynamics of your scaling group at the earliest opportunity and further automate resource management. If an existing event notification rule does not meet your business requirements, you can call the ModifyNotificationConfiguration operation to modify the event notification rule, without the need to create a new rule. Take not that you cannot modify the notification method of an event notification rule by calling this operation.
 *
 * @param request ModifyNotificationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNotificationConfigurationResponse
 */
ModifyNotificationConfigurationResponse Client::modifyNotificationConfigurationWithOptions(const ModifyNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessageEncoding()) {
    query["MessageEncoding"] = request.getMessageEncoding();
  }

  if (!!request.hasNotificationArn()) {
    query["NotificationArn"] = request.getNotificationArn();
  }

  if (!!request.hasNotificationTypes()) {
    query["NotificationTypes"] = request.getNotificationTypes();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNotificationConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNotificationConfigurationResponse>();
}

/**
 * @summary Modifies event notification rules. Event notification rules support automatic sending of notifications to CloudMonitor, Message Service (MNS) topics, or MNS queues when a specified type of events occur. This helps you learn about the dynamics of your scaling group at the earliest opportunity and further automate resource management. If an existing event notification rule does not meet your business requirements, you can call the ModifyNotificationConfiguration operation to modify the event notification rule, without the need to create a new rule. Take not that you cannot modify the notification method of an event notification rule by calling this operation.
 *
 * @param request ModifyNotificationConfigurationRequest
 * @return ModifyNotificationConfigurationResponse
 */
ModifyNotificationConfigurationResponse Client::modifyNotificationConfiguration(const ModifyNotificationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNotificationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies an ECS-type scaling configuration (the ECS instance template for scale-out) if the current scaling configuration does not meet your business requirements.
 *
 * @description - If you modify the name of a scaling configuration, ensure that no other scaling configuration in the same scaling group has the same name.
 * - You can bind a primary network interface card (NIC) by using one of the following methods. However, you can use only one method in a single request. If you use both methods, the request fails and an error message is returned. When you modify the scaling configuration by using one method, the NIC configuration set by the other method is cleared.
 *     - Directly configure the primary NIC by using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *     - Configure the primary NIC and secondary NICs by using the NetworkInterfaces parameter. When you use the NetworkInterfaces parameter, you must configure the primary NIC. If NetworkInterface.InstanceType is set to Primary, the primary NIC is configured. If NetworkInterface.InstanceType is set to Secondary or left empty, a secondary NIC is configured.
 *
 * @param tmpReq ModifyScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScalingConfigurationResponse
 */
ModifyScalingConfigurationResponse Client::modifyScalingConfigurationWithOptions(const ModifyScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyScalingConfigurationShrinkRequest request = ModifyScalingConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSchedulerOptions()) {
    request.setSchedulerOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedulerOptions(), "SchedulerOptions", "json"));
  }

  json query = {};
  if (!!request.hasAffinity()) {
    query["Affinity"] = request.getAffinity();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasCreditSpecification()) {
    query["CreditSpecification"] = request.getCreditSpecification();
  }

  if (!!request.hasCustomPriorities()) {
    query["CustomPriorities"] = request.getCustomPriorities();
  }

  if (!!request.hasDataDisks()) {
    query["DataDisks"] = request.getDataDisks();
  }

  if (!!request.hasDedicatedHostClusterId()) {
    query["DedicatedHostClusterId"] = request.getDedicatedHostClusterId();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHpcClusterId()) {
    query["HpcClusterId"] = request.getHpcClusterId();
  }

  if (!!request.hasHttpEndpoint()) {
    query["HttpEndpoint"] = request.getHttpEndpoint();
  }

  if (!!request.hasHttpTokens()) {
    query["HttpTokens"] = request.getHttpTokens();
  }

  if (!!request.hasImageFamily()) {
    query["ImageFamily"] = request.getImageFamily();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstancePatternInfos()) {
    query["InstancePatternInfos"] = request.getInstancePatternInfos();
  }

  if (!!request.hasInstanceTypeCandidateOptions()) {
    query["InstanceTypeCandidateOptions"] = request.getInstanceTypeCandidateOptions();
  }

  if (!!request.hasInstanceTypeOverrides()) {
    query["InstanceTypeOverrides"] = request.getInstanceTypeOverrides();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthIn()) {
    query["InternetMaxBandwidthIn"] = request.getInternetMaxBandwidthIn();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasIoOptimized()) {
    query["IoOptimized"] = request.getIoOptimized();
  }

  if (!!request.hasIpv6AddressCount()) {
    query["Ipv6AddressCount"] = request.getIpv6AddressCount();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasLoadBalancerWeight()) {
    query["LoadBalancerWeight"] = request.getLoadBalancerWeight();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNetworkInterfaces()) {
    query["NetworkInterfaces"] = request.getNetworkInterfaces();
  }

  if (!!request.hasOverride()) {
    query["Override"] = request.getOverride();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInherit()) {
    query["PasswordInherit"] = request.getPasswordInherit();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.getRamRoleName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourcePoolOptions()) {
    query["ResourcePoolOptions"] = request.getResourcePoolOptions();
  }

  if (!!request.hasScalingConfigurationId()) {
    query["ScalingConfigurationId"] = request.getScalingConfigurationId();
  }

  if (!!request.hasScalingConfigurationName()) {
    query["ScalingConfigurationName"] = request.getScalingConfigurationName();
  }

  if (!!request.hasSchedulerOptionsShrink()) {
    query["SchedulerOptions"] = request.getSchedulerOptionsShrink();
  }

  if (!!request.hasSecondaryEniVSwitchConstraint()) {
    query["SecondaryEniVSwitchConstraint"] = request.getSecondaryEniVSwitchConstraint();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  if (!!request.hasSecurityOptions()) {
    query["SecurityOptions"] = request.getSecurityOptions();
  }

  if (!!request.hasSpotDuration()) {
    query["SpotDuration"] = request.getSpotDuration();
  }

  if (!!request.hasSpotInterruptionBehavior()) {
    query["SpotInterruptionBehavior"] = request.getSpotInterruptionBehavior();
  }

  if (!!request.hasSpotPriceLimits()) {
    query["SpotPriceLimits"] = request.getSpotPriceLimits();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasStorageSetId()) {
    query["StorageSetId"] = request.getStorageSetId();
  }

  if (!!request.hasStorageSetPartitionNumber()) {
    query["StorageSetPartitionNumber"] = request.getStorageSetPartitionNumber();
  }

  if (!!request.hasSystemDiskCategories()) {
    query["SystemDiskCategories"] = request.getSystemDiskCategories();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTenancy()) {
    query["Tenancy"] = request.getTenancy();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasImageOptions()) {
    query["ImageOptions"] = request.getImageOptions();
  }

  if (!!request.hasPrivatePoolOptions()) {
    query["PrivatePoolOptions"] = request.getPrivatePoolOptions();
  }

  if (!!request.hasSystemDisk()) {
    query["SystemDisk"] = request.getSystemDisk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScalingConfiguration"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScalingConfigurationResponse>();
}

/**
 * @summary Modifies an ECS-type scaling configuration (the ECS instance template for scale-out) if the current scaling configuration does not meet your business requirements.
 *
 * @description - If you modify the name of a scaling configuration, ensure that no other scaling configuration in the same scaling group has the same name.
 * - You can bind a primary network interface card (NIC) by using one of the following methods. However, you can use only one method in a single request. If you use both methods, the request fails and an error message is returned. When you modify the scaling configuration by using one method, the NIC configuration set by the other method is cleared.
 *     - Directly configure the primary NIC by using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *     - Configure the primary NIC and secondary NICs by using the NetworkInterfaces parameter. When you use the NetworkInterfaces parameter, you must configure the primary NIC. If NetworkInterface.InstanceType is set to Primary, the primary NIC is configured. If NetworkInterface.InstanceType is set to Secondary or left empty, a secondary NIC is configured.
 *
 * @param request ModifyScalingConfigurationRequest
 * @return ModifyScalingConfigurationResponse
 */
ModifyScalingConfigurationResponse Client::modifyScalingConfiguration(const ModifyScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a scaling group. You can configure a scaling group to automatically adjust your computing capacity by increasing or decreasing the number of instances based on business demands and policies. If the current attributes of the scaling group no longer meet your business requirements, you can call this operation to modify attributes such as the maximum number of instances, minimum number of instances, or expected number of instances. This eliminates the need to recreate the scaling group and reconfigure related attributes, saving time and resource costs.
 *
 * @description - The following parameters cannot be modified:
 *      - RegionId.
 *     - LoadBalancerId.
 *     > To modify load balancing instances, use the AttachLoadBalancers and DetachLoadBalancers operations.
 *     - DBInstanceId.
 *     > To modify ApsaraDB RDS instances, use the AttachDBInstances and DetachDBInstances operations.
 * - You can call this operation only when the scaling group is in the Active or Inactive state.
 * - Activating a new scaling configuration does not affect the running ECS instances or elastic container instances that were created by using earlier scaling configurations.
 * - If you modify the MaxSize parameter and the number of ECS instances or elastic container instances in the scaling group exceeds the value of MaxSize, Auto Scaling automatically removes ECS instances or elastic container instances from the scaling group until the number of instances equals the value of MaxSize.
 * - If you modify the MinSize parameter and the number of ECS instances or elastic container instances in the scaling group is less than the value of MinSize, Auto Scaling automatically adds ECS instances or elastic container instances to the scaling group until the number of instances equals the value of MinSize.
 * - If the DesiredCapacity parameter is configured for the scaling group and you modify the value of DesiredCapacity, and the current number of ECS instances or elastic container instances in the scaling group is different from the value of DesiredCapacity, Auto Scaling automatically adds or removes ECS instances or elastic container instances until the number of instances equals the value of DesiredCapacity.
 *
 * @param request ModifyScalingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScalingGroupResponse
 */
ModifyScalingGroupResponse Client::modifyScalingGroupWithOptions(const ModifyScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveScalingConfigurationId()) {
    query["ActiveScalingConfigurationId"] = request.getActiveScalingConfigurationId();
  }

  if (!!request.hasAllocationStrategy()) {
    query["AllocationStrategy"] = request.getAllocationStrategy();
  }

  if (!!request.hasAutoRebalance()) {
    query["AutoRebalance"] = request.getAutoRebalance();
  }

  if (!!request.hasAzBalance()) {
    query["AzBalance"] = request.getAzBalance();
  }

  if (!!request.hasBalanceMode()) {
    query["BalanceMode"] = request.getBalanceMode();
  }

  if (!!request.hasCapacityOptions()) {
    query["CapacityOptions"] = request.getCapacityOptions();
  }

  if (!!request.hasCompensateWithOnDemand()) {
    query["CompensateWithOnDemand"] = request.getCompensateWithOnDemand();
  }

  if (!!request.hasCustomPolicyARN()) {
    query["CustomPolicyARN"] = request.getCustomPolicyARN();
  }

  if (!!request.hasDefaultCooldown()) {
    query["DefaultCooldown"] = request.getDefaultCooldown();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.getDesiredCapacity();
  }

  if (!!request.hasDisableDesiredCapacity()) {
    query["DisableDesiredCapacity"] = request.getDisableDesiredCapacity();
  }

  if (!!request.hasGroupDeletionProtection()) {
    query["GroupDeletionProtection"] = request.getGroupDeletionProtection();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckTypes()) {
    query["HealthCheckTypes"] = request.getHealthCheckTypes();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.getLaunchTemplateId();
  }

  if (!!request.hasLaunchTemplateOverrides()) {
    query["LaunchTemplateOverrides"] = request.getLaunchTemplateOverrides();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.getLaunchTemplateVersion();
  }

  if (!!request.hasMaxInstanceLifetime()) {
    query["MaxInstanceLifetime"] = request.getMaxInstanceLifetime();
  }

  if (!!request.hasMaxSize()) {
    query["MaxSize"] = request.getMaxSize();
  }

  if (!!request.hasMinSize()) {
    query["MinSize"] = request.getMinSize();
  }

  if (!!request.hasMultiAZPolicy()) {
    query["MultiAZPolicy"] = request.getMultiAZPolicy();
  }

  if (!!request.hasOnDemandBaseCapacity()) {
    query["OnDemandBaseCapacity"] = request.getOnDemandBaseCapacity();
  }

  if (!!request.hasOnDemandPercentageAboveBaseCapacity()) {
    query["OnDemandPercentageAboveBaseCapacity"] = request.getOnDemandPercentageAboveBaseCapacity();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemovalPolicies()) {
    query["RemovalPolicies"] = request.getRemovalPolicies();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScalingGroupName()) {
    query["ScalingGroupName"] = request.getScalingGroupName();
  }

  if (!!request.hasScalingPolicy()) {
    query["ScalingPolicy"] = request.getScalingPolicy();
  }

  if (!!request.hasSpotAllocationStrategy()) {
    query["SpotAllocationStrategy"] = request.getSpotAllocationStrategy();
  }

  if (!!request.hasSpotInstancePools()) {
    query["SpotInstancePools"] = request.getSpotInstancePools();
  }

  if (!!request.hasSpotInstanceRemedy()) {
    query["SpotInstanceRemedy"] = request.getSpotInstanceRemedy();
  }

  if (!!request.hasStopInstanceTimeout()) {
    query["StopInstanceTimeout"] = request.getStopInstanceTimeout();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasZoneShiftPolicy()) {
    query["ZoneShiftPolicy"] = request.getZoneShiftPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScalingGroup"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScalingGroupResponse>();
}

/**
 * @summary Modifies the attributes of a scaling group. You can configure a scaling group to automatically adjust your computing capacity by increasing or decreasing the number of instances based on business demands and policies. If the current attributes of the scaling group no longer meet your business requirements, you can call this operation to modify attributes such as the maximum number of instances, minimum number of instances, or expected number of instances. This eliminates the need to recreate the scaling group and reconfigure related attributes, saving time and resource costs.
 *
 * @description - The following parameters cannot be modified:
 *      - RegionId.
 *     - LoadBalancerId.
 *     > To modify load balancing instances, use the AttachLoadBalancers and DetachLoadBalancers operations.
 *     - DBInstanceId.
 *     > To modify ApsaraDB RDS instances, use the AttachDBInstances and DetachDBInstances operations.
 * - You can call this operation only when the scaling group is in the Active or Inactive state.
 * - Activating a new scaling configuration does not affect the running ECS instances or elastic container instances that were created by using earlier scaling configurations.
 * - If you modify the MaxSize parameter and the number of ECS instances or elastic container instances in the scaling group exceeds the value of MaxSize, Auto Scaling automatically removes ECS instances or elastic container instances from the scaling group until the number of instances equals the value of MaxSize.
 * - If you modify the MinSize parameter and the number of ECS instances or elastic container instances in the scaling group is less than the value of MinSize, Auto Scaling automatically adds ECS instances or elastic container instances to the scaling group until the number of instances equals the value of MinSize.
 * - If the DesiredCapacity parameter is configured for the scaling group and you modify the value of DesiredCapacity, and the current number of ECS instances or elastic container instances in the scaling group is different from the value of DesiredCapacity, Auto Scaling automatically adds or removes ECS instances or elastic container instances until the number of instances equals the value of DesiredCapacity.
 *
 * @param request ModifyScalingGroupRequest
 * @return ModifyScalingGroupResponse
 */
ModifyScalingGroupResponse Client::modifyScalingGroup(const ModifyScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies one or more attributes of a scaling rule. If an existing scaling rule no longer meets your requirements, you can call this operation to modify its attributes instead of creating a new one. This avoids unnecessary repetitive operations and saves time and resources.
 *
 * @param request ModifyScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRuleWithOptions(const ModifyScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjustmentType()) {
    query["AdjustmentType"] = request.getAdjustmentType();
  }

  if (!!request.hasAdjustmentValue()) {
    query["AdjustmentValue"] = request.getAdjustmentValue();
  }

  if (!!request.hasAlarmDimensions()) {
    query["AlarmDimensions"] = request.getAlarmDimensions();
  }

  if (!!request.hasAlarmOptions()) {
    query["AlarmOptions"] = request.getAlarmOptions();
  }

  if (!!request.hasCooldown()) {
    query["Cooldown"] = request.getCooldown();
  }

  if (!!request.hasDisableScaleIn()) {
    query["DisableScaleIn"] = request.getDisableScaleIn();
  }

  if (!!request.hasEstimatedInstanceWarmup()) {
    query["EstimatedInstanceWarmup"] = request.getEstimatedInstanceWarmup();
  }

  if (!!request.hasHybridMetrics()) {
    query["HybridMetrics"] = request.getHybridMetrics();
  }

  if (!!request.hasHybridMonitorNamespace()) {
    query["HybridMonitorNamespace"] = request.getHybridMonitorNamespace();
  }

  if (!!request.hasInitialMaxSize()) {
    query["InitialMaxSize"] = request.getInitialMaxSize();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasMinAdjustmentMagnitude()) {
    query["MinAdjustmentMagnitude"] = request.getMinAdjustmentMagnitude();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPredictiveScalingMode()) {
    query["PredictiveScalingMode"] = request.getPredictiveScalingMode();
  }

  if (!!request.hasPredictiveTaskBufferTime()) {
    query["PredictiveTaskBufferTime"] = request.getPredictiveTaskBufferTime();
  }

  if (!!request.hasPredictiveValueBehavior()) {
    query["PredictiveValueBehavior"] = request.getPredictiveValueBehavior();
  }

  if (!!request.hasPredictiveValueBuffer()) {
    query["PredictiveValueBuffer"] = request.getPredictiveValueBuffer();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleInEvaluationCount()) {
    query["ScaleInEvaluationCount"] = request.getScaleInEvaluationCount();
  }

  if (!!request.hasScaleOutEvaluationCount()) {
    query["ScaleOutEvaluationCount"] = request.getScaleOutEvaluationCount();
  }

  if (!!request.hasScalingRuleId()) {
    query["ScalingRuleId"] = request.getScalingRuleId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  if (!!request.hasStepAdjustments()) {
    query["StepAdjustments"] = request.getStepAdjustments();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScalingRule"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScalingRuleResponse>();
}

/**
 * @summary Modifies one or more attributes of a scaling rule. If an existing scaling rule no longer meets your requirements, you can call this operation to modify its attributes instead of creating a new one. This avoids unnecessary repetitive operations and saves time and resources.
 *
 * @param request ModifyScalingRuleRequest
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRule(const ModifyScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration parameters of an existing scheduled task, such as the scaling rule to execute, the number of instances in the scaling group, the task execution frequency, and the retry policy.
 *
 * @description Scheduled tasks support two scaling methods:
 * - Specify the scaling rule to execute by using the ScheduledAction parameter.
 * - Specify the number of instances in the scaling group by using the ScalingGroupId parameter.
 * > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
 *
 * @param request ModifyScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTaskWithOptions(const ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.getDesiredCapacity();
  }

  if (!!request.hasLaunchExpirationTime()) {
    query["LaunchExpirationTime"] = request.getLaunchExpirationTime();
  }

  if (!!request.hasLaunchTime()) {
    query["LaunchTime"] = request.getLaunchTime();
  }

  if (!!request.hasMaxValue()) {
    query["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    query["MinValue"] = request.getMinValue();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRecurrenceEndTime()) {
    query["RecurrenceEndTime"] = request.getRecurrenceEndTime();
  }

  if (!!request.hasRecurrenceType()) {
    query["RecurrenceType"] = request.getRecurrenceType();
  }

  if (!!request.hasRecurrenceValue()) {
    query["RecurrenceValue"] = request.getRecurrenceValue();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasScheduledAction()) {
    query["ScheduledAction"] = request.getScheduledAction();
  }

  if (!!request.hasScheduledTaskId()) {
    query["ScheduledTaskId"] = request.getScheduledTaskId();
  }

  if (!!request.hasScheduledTaskName()) {
    query["ScheduledTaskName"] = request.getScheduledTaskName();
  }

  if (!!request.hasTaskEnabled()) {
    query["TaskEnabled"] = request.getTaskEnabled();
  }

  if (!!request.hasWarmPoolCapacityOptions()) {
    query["WarmPoolCapacityOptions"] = request.getWarmPoolCapacityOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduledTask"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduledTaskResponse>();
}

/**
 * @summary Modifies the configuration parameters of an existing scheduled task, such as the scaling rule to execute, the number of instances in the scaling group, the task execution frequency, and the retry policy.
 *
 * @description Scheduled tasks support two scaling methods:
 * - Specify the scaling rule to execute by using the ScheduledAction parameter.
 * - Specify the number of instances in the scaling group by using the ScalingGroupId parameter.
 * > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
 *
 * @param request ModifyScheduledTaskRequest
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTask(const ModifyScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary Configures a warm pool for a scaling group. If the scaling group does not have a warm pool, this operation creates one. If the scaling group already has a warm pool, this operation updates the configurations of the warm pool.
 *
 * @description - Warm pools are supported only for ECS scaling groups.
 * - Warm pools are supported only when the reclaim mode of the scaling group is set to release or forcerelease.
 *
 * @param request PutWarmPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutWarmPoolResponse
 */
PutWarmPoolResponse Client::putWarmPoolWithOptions(const PutWarmPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacityOptions()) {
    query["CapacityOptions"] = request.getCapacityOptions();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceReusePolicy()) {
    query["InstanceReusePolicy"] = request.getInstanceReusePolicy();
  }

  if (!!request.hasPoolState()) {
    query["PoolState"] = request.getPoolState();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutWarmPool"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutWarmPoolResponse>();
}

/**
 * @summary Configures a warm pool for a scaling group. If the scaling group does not have a warm pool, this operation creates one. If the scaling group already has a warm pool, this operation updates the configurations of the warm pool.
 *
 * @description - Warm pools are supported only for ECS scaling groups.
 * - Warm pools are supported only when the reclaim mode of the scaling group is set to release or forcerelease.
 *
 * @param request PutWarmPoolRequest
 * @return PutWarmPoolResponse
 */
PutWarmPoolResponse Client::putWarmPool(const PutWarmPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putWarmPoolWithOptions(request, runtime);
}

/**
 * @summary Queries the historical monitoring data of a scaling group that uses predictive scaling rules.
 *
 * @param request QueryHistoricalMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHistoricalMetricResponse
 */
QueryHistoricalMetricResponse Client::queryHistoricalMetricWithOptions(const QueryHistoricalMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHistoricalMetric"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHistoricalMetricResponse>();
}

/**
 * @summary Queries the historical monitoring data of a scaling group that uses predictive scaling rules.
 *
 * @param request QueryHistoricalMetricRequest
 * @return QueryHistoricalMetricResponse
 */
QueryHistoricalMetricResponse Client::queryHistoricalMetric(const QueryHistoricalMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHistoricalMetricWithOptions(request, runtime);
}

/**
 * @summary Queries predictive monitoring data.
 *
 * @param request QueryPredictiveMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPredictiveMetricResponse
 */
QueryPredictiveMetricResponse Client::queryPredictiveMetricWithOptions(const QueryPredictiveMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPredictiveMetric"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPredictiveMetricResponse>();
}

/**
 * @summary Queries predictive monitoring data.
 *
 * @param request QueryPredictiveMetricRequest
 * @return QueryPredictiveMetricResponse
 */
QueryPredictiveMetricResponse Client::queryPredictiveMetric(const QueryPredictiveMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPredictiveMetricWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a prediction task.
 *
 * @param request QueryPredictiveTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPredictiveTaskInfoResponse
 */
QueryPredictiveTaskInfoResponse Client::queryPredictiveTaskInfoWithOptions(const QueryPredictiveTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasScalingRuleId()) {
    query["ScalingRuleId"] = request.getScalingRuleId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPredictiveTaskInfo"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPredictiveTaskInfoResponse>();
}

/**
 * @summary Queries the information about a prediction task.
 *
 * @param request QueryPredictiveTaskInfoRequest
 * @return QueryPredictiveTaskInfoResponse
 */
QueryPredictiveTaskInfoResponse Client::queryPredictiveTaskInfo(const QueryPredictiveTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPredictiveTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the predicted number of instances in a scaling group.
 *
 * @param request QueryPredictiveValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPredictiveValueResponse
 */
QueryPredictiveValueResponse Client::queryPredictiveValueWithOptions(const QueryPredictiveValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPredictiveValue"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPredictiveValueResponse>();
}

/**
 * @summary Queries the predicted number of instances in a scaling group.
 *
 * @param request QueryPredictiveValueRequest
 * @return QueryPredictiveValueResponse
 */
QueryPredictiveValueResponse Client::queryPredictiveValue(const QueryPredictiveValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPredictiveValueWithOptions(request, runtime);
}

/**
 * @summary Rebalances the distribution of ECS instances in a multi-zone scaling group if the number of instances across zones is unbalanced due to insufficient inventory or other reasons.
 *
 * @description ## Operation description
 * Rebalancing compensates for unbalanced zones by creating new ECS instances to replace existing ones. New ECS instances are started before existing ones are stopped. Rebalancing does not affect the performance or availability of your applications.
 * - This operation is supported only for multi-zone scaling groups whose `MultiAZPolicy` is set to `BALANCE`. It is used to balance the distribution of ECS instances across multiple zones.
 * - You can perform a rebalancing operation only when the instance distribution in the scaling group is severely unbalanced. A single rebalancing activity can replace up to 20 ECS instances.
 * - During a rebalancing activity, if the number of instances in the scaling group approaches or reaches the specified maximum number of ECS instances (MaxSize) but the distribution still needs to be balanced, Auto Scaling allows the number of ECS instances to temporarily exceed MaxSize by 10%. This temporary excess lasts until the distribution is balanced, typically for 1 to 6 minutes. 
 *    > If 10% of the maximum number of instances in the scaling group is not an integer, the decimal part is rounded up to allow an excess of 1 instance. For example, if the maximum number of instances in the scaling group is 15, 10% is 1.5, and the temporary excess allowed is 2 instances.
 *
 * @param request RebalanceInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebalanceInstancesResponse
 */
RebalanceInstancesResponse Client::rebalanceInstancesWithOptions(const RebalanceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebalanceInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebalanceInstancesResponse>();
}

/**
 * @summary Rebalances the distribution of ECS instances in a multi-zone scaling group if the number of instances across zones is unbalanced due to insufficient inventory or other reasons.
 *
 * @description ## Operation description
 * Rebalancing compensates for unbalanced zones by creating new ECS instances to replace existing ones. New ECS instances are started before existing ones are stopped. Rebalancing does not affect the performance or availability of your applications.
 * - This operation is supported only for multi-zone scaling groups whose `MultiAZPolicy` is set to `BALANCE`. It is used to balance the distribution of ECS instances across multiple zones.
 * - You can perform a rebalancing operation only when the instance distribution in the scaling group is severely unbalanced. A single rebalancing activity can replace up to 20 ECS instances.
 * - During a rebalancing activity, if the number of instances in the scaling group approaches or reaches the specified maximum number of ECS instances (MaxSize) but the distribution still needs to be balanced, Auto Scaling allows the number of ECS instances to temporarily exceed MaxSize by 10%. This temporary excess lasts until the distribution is balanced, typically for 1 to 6 minutes. 
 *    > If 10% of the maximum number of instances in the scaling group is not an integer, the decimal part is rounded up to allow an excess of 1 instance. For example, if the maximum number of instances in the scaling group is 15, 10% is 1.5, and the temporary excess allowed is 2 instances.
 *
 * @param request RebalanceInstancesRequest
 * @return RebalanceInstancesResponse
 */
RebalanceInstancesResponse Client::rebalanceInstances(const RebalanceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebalanceInstancesWithOptions(request, runtime);
}

/**
 * @summary Extends the suspension period of an ECS instance that is suspended after a lifecycle hook is triggered in a scaling group. If the default wait time of the suspended ECS instance is insufficient for your custom operations, you can call this operation to extend the suspension period by specifying the lifecycle hook ID, the wait state token of the scaling activity, and the new wait time.
 *
 * @description You can call this operation to extend the wait time only when the ECS instance is suspended.
 * The wait time of an ECS instance cannot exceed 6 hours, and each wait state can be extended up to 20 times.
 *
 * @param request RecordLifecycleActionHeartbeatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordLifecycleActionHeartbeatResponse
 */
RecordLifecycleActionHeartbeatResponse Client::recordLifecycleActionHeartbeatWithOptions(const RecordLifecycleActionHeartbeatRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasHeartbeatTimeout()) {
    query["heartbeatTimeout"] = request.getHeartbeatTimeout();
  }

  if (!!request.hasLifecycleActionToken()) {
    query["lifecycleActionToken"] = request.getLifecycleActionToken();
  }

  if (!!request.hasLifecycleHookId()) {
    query["lifecycleHookId"] = request.getLifecycleHookId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecordLifecycleActionHeartbeat"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecordLifecycleActionHeartbeatResponse>();
}

/**
 * @summary Extends the suspension period of an ECS instance that is suspended after a lifecycle hook is triggered in a scaling group. If the default wait time of the suspended ECS instance is insufficient for your custom operations, you can call this operation to extend the suspension period by specifying the lifecycle hook ID, the wait state token of the scaling activity, and the new wait time.
 *
 * @description You can call this operation to extend the wait time only when the ECS instance is suspended.
 * The wait time of an ECS instance cannot exceed 6 hours, and each wait state can be extended up to 20 times.
 *
 * @param request RecordLifecycleActionHeartbeatRequest
 * @return RecordLifecycleActionHeartbeatResponse
 */
RecordLifecycleActionHeartbeatResponse Client::recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordLifecycleActionHeartbeatWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more unnecessary instances from a scaling group. You can invoke the RemoveInstances API to delete instances if the scaling group is enabled and no scaling activity is being executed.
 *
 * @description - Before you invoke this operation, ensure that the following conditions are met:
 *     - The scaling group is enabled (Active).
 *     - No scaling activity is being executed in the scaling group.
 * > If no scaling activity is being executed in the scaling group, this operation can bypass the cooldown time (DefaultCooldown) and be executed directly.
 * - If an ECS instance is created through automatic creation by Auto Scaling, or was manually added and managed by the scaling group, the ECS instance triggers the economical mode or is released when you delete it from the scaling group.
 * - If an ECS instance was manually added and is not managed by the scaling group, the ECS instance is not stopped or released when you delete it from the scaling group.
 * - If the number of instances in the scaling group (TotalCapacity) minus the number of instances specified in this operation is less than the minimum number of instances (MinSize) in the scaling group, the request to invoke this operation fails.
 * A successful response only indicates that the Auto Scaling service has accepted the request and the scaling activity can be executed. It does not mean that the scaling activity will be executed successfully. You must check the execution status of the scaling activity by using the returned ScalingActivityId.
 *
 * @param tmpReq RemoveInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInstancesResponse
 */
RemoveInstancesResponse Client::removeInstancesWithOptions(const RemoveInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveInstancesShrinkRequest request = RemoveInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLifecycleHookContext()) {
    request.setLifecycleHookContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLifecycleHookContext(), "LifecycleHookContext", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDecreaseDesiredCapacity()) {
    query["DecreaseDesiredCapacity"] = request.getDecreaseDesiredCapacity();
  }

  if (!!request.hasIgnoreInvalidInstance()) {
    query["IgnoreInvalidInstance"] = request.getIgnoreInvalidInstance();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLifecycleHookContextShrink()) {
    query["LifecycleHookContext"] = request.getLifecycleHookContextShrink();
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

  if (!!request.hasRemovePolicy()) {
    query["RemovePolicy"] = request.getRemovePolicy();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasStopInstanceTimeout()) {
    query["StopInstanceTimeout"] = request.getStopInstanceTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInstances"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInstancesResponse>();
}

/**
 * @summary Deletes one or more unnecessary instances from a scaling group. You can invoke the RemoveInstances API to delete instances if the scaling group is enabled and no scaling activity is being executed.
 *
 * @description - Before you invoke this operation, ensure that the following conditions are met:
 *     - The scaling group is enabled (Active).
 *     - No scaling activity is being executed in the scaling group.
 * > If no scaling activity is being executed in the scaling group, this operation can bypass the cooldown time (DefaultCooldown) and be executed directly.
 * - If an ECS instance is created through automatic creation by Auto Scaling, or was manually added and managed by the scaling group, the ECS instance triggers the economical mode or is released when you delete it from the scaling group.
 * - If an ECS instance was manually added and is not managed by the scaling group, the ECS instance is not stopped or released when you delete it from the scaling group.
 * - If the number of instances in the scaling group (TotalCapacity) minus the number of instances specified in this operation is less than the minimum number of instances (MinSize) in the scaling group, the request to invoke this operation fails.
 * A successful response only indicates that the Auto Scaling service has accepted the request and the scaling activity can be executed. It does not mean that the scaling activity will be executed successfully. You must check the execution status of the scaling activity by using the returned ScalingActivityId.
 *
 * @param request RemoveInstancesRequest
 * @return RemoveInstancesResponse
 */
RemoveInstancesResponse Client::removeInstances(const RemoveInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeInstancesWithOptions(request, runtime);
}

/**
 * @summary Resumes an instance refresh task.
 *
 * @param request ResumeInstanceRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeInstanceRefreshResponse
 */
ResumeInstanceRefreshResponse Client::resumeInstanceRefreshWithOptions(const ResumeInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskId()) {
    query["InstanceRefreshTaskId"] = request.getInstanceRefreshTaskId();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeInstanceRefresh"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceRefreshResponse>();
}

/**
 * @summary Resumes an instance refresh task.
 *
 * @param request ResumeInstanceRefreshRequest
 * @return ResumeInstanceRefreshResponse
 */
ResumeInstanceRefreshResponse Client::resumeInstanceRefresh(const ResumeInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Resumes suspended processes in a scaling group so that the scaling group continues to execute the specified processes based on functional logic. For example, if you resume the health check process, an instance in the scaling group is automatically removed from the scaling group when it is considered unhealthy.
 *
 * @param request ResumeProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeProcessesResponse
 */
ResumeProcessesResponse Client::resumeProcessesWithOptions(const ResumeProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProcesses()) {
    query["Processes"] = request.getProcesses();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeProcesses"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeProcessesResponse>();
}

/**
 * @summary Resumes suspended processes in a scaling group so that the scaling group continues to execute the specified processes based on functional logic. For example, if you resume the health check process, an instance in the scaling group is automatically removed from the scaling group when it is considered unhealthy.
 *
 * @param request ResumeProcessesRequest
 * @return ResumeProcessesResponse
 */
ResumeProcessesResponse Client::resumeProcesses(const ResumeProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeProcessesWithOptions(request, runtime);
}

/**
 * @summary Rolls back an instance refresh task if the desired configuration does not meet your requirements during task execution. During the rollback, the system uses the active configuration of the scaling group to create new instances to replace those created based on the desired configuration.
 *
 * @description ## 前提条件
 * 被回滚的实例刷新任务必须在启动时（调用 StartInstanceRefresh）设置了 `DesiredConfiguration` 参数。未设置 `DesiredConfiguration` 的实例刷新任务不支持回滚，调用本接口会返回 `UnsupportedOperation.DesiredConfiguration` 错误；如需回滚此类任务，请先取消该任务，再以 `DesiredConfiguration` 重新启动实例刷新后执行回滚。
 *
 * @param request RollbackInstanceRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackInstanceRefreshResponse
 */
RollbackInstanceRefreshResponse Client::rollbackInstanceRefreshWithOptions(const RollbackInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskId()) {
    query["InstanceRefreshTaskId"] = request.getInstanceRefreshTaskId();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackInstanceRefresh"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackInstanceRefreshResponse>();
}

/**
 * @summary Rolls back an instance refresh task if the desired configuration does not meet your requirements during task execution. During the rollback, the system uses the active configuration of the scaling group to create new instances to replace those created based on the desired configuration.
 *
 * @description ## 前提条件
 * 被回滚的实例刷新任务必须在启动时（调用 StartInstanceRefresh）设置了 `DesiredConfiguration` 参数。未设置 `DesiredConfiguration` 的实例刷新任务不支持回滚，调用本接口会返回 `UnsupportedOperation.DesiredConfiguration` 错误；如需回滚此类任务，请先取消该任务，再以 `DesiredConfiguration` 重新启动实例刷新后执行回滚。
 *
 * @param request RollbackInstanceRefreshRequest
 * @return RollbackInstanceRefreshResponse
 */
RollbackInstanceRefreshResponse Client::rollbackInstanceRefresh(const RollbackInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Triggers auto scaling based on a specified adjustment rule by calling the ScaleWithAdjustment API, eliminating the need to create a scaling rule in advance as required by the ExecuteScalingRule API.
 *
 * @description - Before you call this operation, ensure that the following conditions are met:
 *     - The scaling group is in the Active state.
 *     - No scaling activities are in progress in the scaling group.
 * - If no scaling activities are in progress in the scaling group, this operation can bypass the cooldown time and directly execute a scaling activity.
 * - If the number of ECS instances to be added specified in the scaling rule plus the current number of instances in the scaling group (Total Capacity) exceeds the maximum number of instances (MaxSize), the scaling activity is executed with Total Capacity set to MaxSize.
 * - If the current number of instances in the scaling group (Total Capacity) minus the number of ECS instances to be removed specified in the scaling rule is less than the minimum number of instances (MinSize), the scaling activity is executed with Total Capacity set to MinSize.
 * A successful response only indicates that Auto Scaling accepted the request and can execute the scaling activity. It does not guarantee that the scaling activity will be successfully executed. You must use the returned `ScalingActivityId` to check the execution status of the scaling activity.
 *
 * @param tmpReq ScaleWithAdjustmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleWithAdjustmentResponse
 */
ScaleWithAdjustmentResponse Client::scaleWithAdjustmentWithOptions(const ScaleWithAdjustmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ScaleWithAdjustmentShrinkRequest request = ScaleWithAdjustmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLifecycleHookContext()) {
    request.setLifecycleHookContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLifecycleHookContext(), "LifecycleHookContext", "json"));
  }

  if (!!tmpReq.hasOverrides()) {
    request.setOverridesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOverrides(), "Overrides", "json"));
  }

  json query = {};
  if (!!request.hasActivityMetadata()) {
    query["ActivityMetadata"] = request.getActivityMetadata();
  }

  if (!!request.hasAdjustmentType()) {
    query["AdjustmentType"] = request.getAdjustmentType();
  }

  if (!!request.hasAdjustmentValue()) {
    query["AdjustmentValue"] = request.getAdjustmentValue();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasExecutionMode()) {
    query["ExecutionMode"] = request.getExecutionMode();
  }

  if (!!request.hasLifecycleHookContextShrink()) {
    query["LifecycleHookContext"] = request.getLifecycleHookContextShrink();
  }

  if (!!request.hasMinAdjustmentMagnitude()) {
    query["MinAdjustmentMagnitude"] = request.getMinAdjustmentMagnitude();
  }

  if (!!request.hasOverridesShrink()) {
    query["Overrides"] = request.getOverridesShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParallelTask()) {
    query["ParallelTask"] = request.getParallelTask();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasSyncActivity()) {
    query["SyncActivity"] = request.getSyncActivity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScaleWithAdjustment"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleWithAdjustmentResponse>();
}

/**
 * @summary Triggers auto scaling based on a specified adjustment rule by calling the ScaleWithAdjustment API, eliminating the need to create a scaling rule in advance as required by the ExecuteScalingRule API.
 *
 * @description - Before you call this operation, ensure that the following conditions are met:
 *     - The scaling group is in the Active state.
 *     - No scaling activities are in progress in the scaling group.
 * - If no scaling activities are in progress in the scaling group, this operation can bypass the cooldown time and directly execute a scaling activity.
 * - If the number of ECS instances to be added specified in the scaling rule plus the current number of instances in the scaling group (Total Capacity) exceeds the maximum number of instances (MaxSize), the scaling activity is executed with Total Capacity set to MaxSize.
 * - If the current number of instances in the scaling group (Total Capacity) minus the number of ECS instances to be removed specified in the scaling rule is less than the minimum number of instances (MinSize), the scaling activity is executed with Total Capacity set to MinSize.
 * A successful response only indicates that Auto Scaling accepted the request and can execute the scaling activity. It does not guarantee that the scaling activity will be successfully executed. You must use the returned `ScalingActivityId` to check the execution status of the scaling activity.
 *
 * @param request ScaleWithAdjustmentRequest
 * @return ScaleWithAdjustmentResponse
 */
ScaleWithAdjustmentResponse Client::scaleWithAdjustment(const ScaleWithAdjustmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scaleWithAdjustmentWithOptions(request, runtime);
}

/**
 * @summary Sets deletion protection for a scaling group. If you enable deletion protection for a scaling group, you cannot delete the scaling group. If you disable deletion protection for a scaling group, you can directly delete the scaling group. You can call the SetGroupDeletionProtection operation to enable or disable deletion protection.
 *
 * @param request SetGroupDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetGroupDeletionProtectionResponse
 */
SetGroupDeletionProtectionResponse Client::setGroupDeletionProtectionWithOptions(const SetGroupDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupDeletionProtection()) {
    query["GroupDeletionProtection"] = request.getGroupDeletionProtection();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetGroupDeletionProtection"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetGroupDeletionProtectionResponse>();
}

/**
 * @summary Sets deletion protection for a scaling group. If you enable deletion protection for a scaling group, you cannot delete the scaling group. If you disable deletion protection for a scaling group, you can directly delete the scaling group. You can call the SetGroupDeletionProtection operation to enable or disable deletion protection.
 *
 * @param request SetGroupDeletionProtectionRequest
 * @return SetGroupDeletionProtectionResponse
 */
SetGroupDeletionProtectionResponse Client::setGroupDeletionProtection(const SetGroupDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setGroupDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary Sets the health status of an ECS instance or an Elastic Container Instance (ECI) in a scaling group. In some cases, automatic health checks may not accurately detect the health status of ECS or ECI instances. Manually setting the health status enables quick identification and handling of faulty instances to better meet actual business and O&M requirements.
 *
 * @description A scaling group detects and removes ECS instances or ECI instances that are in the unhealthy state. To retain specific ECS or ECI instances, put the instances into the standby state or protection status. For more information, see [EnterStandby](https://help.aliyun.com/document_detail/459345.html) and [SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html).
 *
 * @param request SetInstanceHealthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetInstanceHealthResponse
 */
SetInstanceHealthResponse Client::setInstanceHealthWithOptions(const SetInstanceHealthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetInstanceHealth"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetInstanceHealthResponse>();
}

/**
 * @summary Sets the health status of an ECS instance or an Elastic Container Instance (ECI) in a scaling group. In some cases, automatic health checks may not accurately detect the health status of ECS or ECI instances. Manually setting the health status enables quick identification and handling of faulty instances to better meet actual business and O&M requirements.
 *
 * @description A scaling group detects and removes ECS instances or ECI instances that are in the unhealthy state. To retain specific ECS or ECI instances, put the instances into the standby state or protection status. For more information, see [EnterStandby](https://help.aliyun.com/document_detail/459345.html) and [SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html).
 *
 * @param request SetInstanceHealthRequest
 * @return SetInstanceHealthResponse
 */
SetInstanceHealthResponse Client::setInstanceHealth(const SetInstanceHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstanceHealthWithOptions(request, runtime);
}

/**
 * @summary Sets or removes the protection status for one or more ECS instances in a scaling group. After the protection feature is enabled for an ECS instance, the instance is not terminated or released during automatic scale-in of the scaling group. The instance can only be manually removed from the console or by calling the RemoveInstances operation.
 *
 * @description After the protection status is enabled for an ECS instance:
 * - The instance remains in this state until you disable the protection status.
 * - The protected ECS instance is not removed even if changes in the number of instances in the scaling group or monitoring tasks trigger a scaling activity for automatic scale-in. You must remove the ECS instance before you can release it. For more information, see [Remove ECS instances](https://help.aliyun.com/document_detail/459393.html).
 * - The health check status of the ECS instance is not updated when the instance is stopped or restarted.
 *
 * @param request SetInstancesProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetInstancesProtectionResponse
 */
SetInstancesProtectionResponse Client::setInstancesProtectionWithOptions(const SetInstancesProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProtectedFromScaleIn()) {
    query["ProtectedFromScaleIn"] = request.getProtectedFromScaleIn();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetInstancesProtection"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetInstancesProtectionResponse>();
}

/**
 * @summary Sets or removes the protection status for one or more ECS instances in a scaling group. After the protection feature is enabled for an ECS instance, the instance is not terminated or released during automatic scale-in of the scaling group. The instance can only be manually removed from the console or by calling the RemoveInstances operation.
 *
 * @description After the protection status is enabled for an ECS instance:
 * - The instance remains in this state until you disable the protection status.
 * - The protected ECS instance is not removed even if changes in the number of instances in the scaling group or monitoring tasks trigger a scaling activity for automatic scale-in. You must remove the ECS instance before you can release it. For more information, see [Remove ECS instances](https://help.aliyun.com/document_detail/459393.html).
 * - The health check status of the ECS instance is not updated when the instance is stopped or restarted.
 *
 * @param request SetInstancesProtectionRequest
 * @return SetInstancesProtectionResponse
 */
SetInstancesProtectionResponse Client::setInstancesProtection(const SetInstancesProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstancesProtectionWithOptions(request, runtime);
}

/**
 * @summary Refreshes the instances in a scaling group to apply a new scaling configuration or update the images of the instances.
 *
 * @description - A scaling group can have only one running instance refresh node at a time.
 * - This feature is supported only for ECS scaling groups that use the **priority policy** as the scale-out policy. Scaling groups that use the **number of vCPUs to calculate the capacity of the scaling group** and scaling groups whose instance revoke pattern is set to **shutdown revoke pattern** or **forced shutdown revoke pattern** do not support this feature.
 * - During an instance refresh, normal scale-out and scale-in activities can be performed. However, scale-out activities use the desired configuration specified for the instance refresh.
 * - Instances that are manually added to the scaling group, or are in the standby state or protection status are ignored by the instance refresh node and are not refreshed.
 *
 * @param request StartInstanceRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceRefreshResponse
 */
StartInstanceRefreshResponse Client::startInstanceRefreshWithOptions(const StartInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckpointPauseTime()) {
    query["CheckpointPauseTime"] = request.getCheckpointPauseTime();
  }

  if (!!request.hasCheckpoints()) {
    query["Checkpoints"] = request.getCheckpoints();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDesiredConfiguration()) {
    query["DesiredConfiguration"] = request.getDesiredConfiguration();
  }

  if (!!request.hasMaxHealthyPercentage()) {
    query["MaxHealthyPercentage"] = request.getMaxHealthyPercentage();
  }

  if (!!request.hasMinHealthyPercentage()) {
    query["MinHealthyPercentage"] = request.getMinHealthyPercentage();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  if (!!request.hasSkipMatching()) {
    query["SkipMatching"] = request.getSkipMatching();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstanceRefresh"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceRefreshResponse>();
}

/**
 * @summary Refreshes the instances in a scaling group to apply a new scaling configuration or update the images of the instances.
 *
 * @description - A scaling group can have only one running instance refresh node at a time.
 * - This feature is supported only for ECS scaling groups that use the **priority policy** as the scale-out policy. Scaling groups that use the **number of vCPUs to calculate the capacity of the scaling group** and scaling groups whose instance revoke pattern is set to **shutdown revoke pattern** or **forced shutdown revoke pattern** do not support this feature.
 * - During an instance refresh, normal scale-out and scale-in activities can be performed. However, scale-out activities use the desired configuration specified for the instance refresh.
 * - Instances that are manually added to the scaling group, or are in the standby state or protection status are ignored by the instance refresh node and are not refreshed.
 *
 * @param request StartInstanceRefreshRequest
 * @return StartInstanceRefreshResponse
 */
StartInstanceRefreshResponse Client::startInstanceRefresh(const StartInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Enables zone fault degradation for a scaling group.
 *
 * @param request StartScalingGroupZoneShiftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartScalingGroupZoneShiftResponse
 */
StartScalingGroupZoneShiftResponse Client::startScalingGroupZoneShiftWithOptions(const StartScalingGroupZoneShiftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasExpiryTime()) {
    query["ExpiryTime"] = request.getExpiryTime();
  }

  if (!!request.hasImpairedZoneIds()) {
    query["ImpairedZoneIds"] = request.getImpairedZoneIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartScalingGroupZoneShift"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartScalingGroupZoneShiftResponse>();
}

/**
 * @summary Enables zone fault degradation for a scaling group.
 *
 * @param request StartScalingGroupZoneShiftRequest
 * @return StartScalingGroupZoneShiftResponse
 */
StartScalingGroupZoneShiftResponse Client::startScalingGroupZoneShift(const StartScalingGroupZoneShiftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startScalingGroupZoneShiftWithOptions(request, runtime);
}

/**
 * @summary Suspends an instance refresh task. If you are not sure that you want to roll back an ongoing instance refresh task whose configurations you think has an issue, you can call the SuspendInstanceRefresh operation to suspend the task.
 *
 * @description *   You cannot call this operation to suspend an instance refresh task that is being rolled back.
 *
 * @param request SuspendInstanceRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendInstanceRefreshResponse
 */
SuspendInstanceRefreshResponse Client::suspendInstanceRefreshWithOptions(const SuspendInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceRefreshTaskId()) {
    query["InstanceRefreshTaskId"] = request.getInstanceRefreshTaskId();
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

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendInstanceRefresh"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendInstanceRefreshResponse>();
}

/**
 * @summary Suspends an instance refresh task. If you are not sure that you want to roll back an ongoing instance refresh task whose configurations you think has an issue, you can call the SuspendInstanceRefresh operation to suspend the task.
 *
 * @description *   You cannot call this operation to suspend an instance refresh task that is being rolled back.
 *
 * @param request SuspendInstanceRefreshRequest
 * @return SuspendInstanceRefreshResponse
 */
SuspendInstanceRefreshResponse Client::suspendInstanceRefresh(const SuspendInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Suspends scaling processes. This operation empowers you to selectively pause distinct scaling processes within a particular scaling group, enabling you to carry out alternative tasks and achieve more granular management over your scaling operations.
 *
 * @param request SuspendProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendProcessesResponse
 */
SuspendProcessesResponse Client::suspendProcessesWithOptions(const SuspendProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProcesses()) {
    query["Processes"] = request.getProcesses();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScalingGroupId()) {
    query["ScalingGroupId"] = request.getScalingGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendProcesses"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendProcessesResponse>();
}

/**
 * @summary Suspends scaling processes. This operation empowers you to selectively pause distinct scaling processes within a particular scaling group, enabling you to carry out alternative tasks and achieve more granular management over your scaling operations.
 *
 * @param request SuspendProcessesRequest
 * @return SuspendProcessesResponse
 */
SuspendProcessesResponse Client::suspendProcesses(const SuspendProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendProcessesWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags. You can call the TagResources operation to uniformly create and attach tags to your Auto Scaling resources, streamlining resource management. This capability empowers you to categorize resources based on tags, thereby enhancing the overall efficiency of resource allocation and utilization.
 *
 * @description *   You can attach up to 20 tags to a scaling group.
 *     **
 *     **Note** Before you attach tags to a specific Auto Scaling resource, Alibaba Cloud automatically verifies the current number of tags attached to that resource. In the event the proposed addition would exceed the maximum allowed number of tags, an error message will be promptly returned after you call this operation.
 * *   If you set `Tags.Propagate` to `true`, any tags attached to your scaling group will be automatically propagated to new instances that are subsequently created in the scaling group, without affecting existing instances.
 * *   If both the scaling configuration and the scaling group have tags attached, and tag propagation from the scaling group is enabled, the tags of newly created instances comply with the following rules:
 *     *   Instances set to join the scaling group will inherit the following tags: tags attached to the scaling configuration that initiates the instance creation and tags attached to the scaling group that are allowed to propagate to these instances upon instance creation.
 *     *   If the tag keys of the scaling configuration and those attached to the scaling group and propagated to the instances are identical, the tags attached to the scaling group and propagated to the instances will be overwritten by the tags of the scaling configuration.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-02-22"},
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
 * @summary Creates and adds tags. You can call the TagResources operation to uniformly create and attach tags to your Auto Scaling resources, streamlining resource management. This capability empowers you to categorize resources based on tags, thereby enhancing the overall efficiency of resource allocation and utilization.
 *
 * @description *   You can attach up to 20 tags to a scaling group.
 *     **
 *     **Note** Before you attach tags to a specific Auto Scaling resource, Alibaba Cloud automatically verifies the current number of tags attached to that resource. In the event the proposed addition would exceed the maximum allowed number of tags, an error message will be promptly returned after you call this operation.
 * *   If you set `Tags.Propagate` to `true`, any tags attached to your scaling group will be automatically propagated to new instances that are subsequently created in the scaling group, without affecting existing instances.
 * *   If both the scaling configuration and the scaling group have tags attached, and tag propagation from the scaling group is enabled, the tags of newly created instances comply with the following rules:
 *     *   Instances set to join the scaling group will inherit the following tags: tags attached to the scaling configuration that initiates the instance creation and tags attached to the scaling group that are allowed to propagate to these instances upon instance creation.
 *     *   If the tag keys of the scaling configuration and those attached to the scaling group and propagated to the instances are identical, the tags attached to the scaling group and propagated to the instances will be overwritten by the tags of the scaling configuration.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from Auto Scaling resources simultaneously. This operation streamlines resource management activities, enhances system efficiency, and mitigates potential security vulnerabilities. Once a tag is removed from a particular resource, and if it is not re-added to any other resource, the system will automatically delete the unused tag.
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2022-02-22"},
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
 * @summary Removes tags from Auto Scaling resources simultaneously. This operation streamlines resource management activities, enhances system efficiency, and mitigates potential security vulnerabilities. Once a tag is removed from a particular resource, and if it is not re-added to any other resource, the system will automatically delete the unused tag.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Checks whether the account has the AliyunServiceRoleForAutoScaling service-linked role by calling VerifyAuthentication and specifying the Alibaba Cloud account ID. This role is used to authorize Auto Scaling to manage ECS and ECI resources.
 *
 * @param request VerifyAuthenticationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyAuthenticationResponse
 */
VerifyAuthenticationResponse Client::verifyAuthenticationWithOptions(const VerifyAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOnlyCheck()) {
    query["OnlyCheck"] = request.getOnlyCheck();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyAuthentication"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyAuthenticationResponse>();
}

/**
 * @summary Checks whether the account has the AliyunServiceRoleForAutoScaling service-linked role by calling VerifyAuthentication and specifying the Alibaba Cloud account ID. This role is used to authorize Auto Scaling to manage ECS and ECI resources.
 *
 * @param request VerifyAuthenticationRequest
 * @return VerifyAuthenticationResponse
 */
VerifyAuthenticationResponse Client::verifyAuthentication(const VerifyAuthenticationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyAuthenticationWithOptions(request, runtime);
}

/**
 * @summary Verifies whether Auto Scaling is activated. This operation guarantees that in response to shifts in business workloads or variations in incoming traffic, the system will automatically adjust resource provisioning. This auto-scaling capability enhances the overall system performance, ensuring high availability and improved flexibility to accommodate dynamic demands.
 *
 * @param request VerifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyUserResponse
 */
VerifyUserResponse Client::verifyUserWithOptions(const VerifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "VerifyUser"},
    {"version" , "2022-02-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyUserResponse>();
}

/**
 * @summary Verifies whether Auto Scaling is activated. This operation guarantees that in response to shifts in business workloads or variations in incoming traffic, the system will automatically adjust resource provisioning. This auto-scaling capability enhances the overall system performance, ensuring high availability and improved flexibility to accommodate dynamic demands.
 *
 * @param request VerifyUserRequest
 * @return VerifyUserResponse
 */
VerifyUserResponse Client::verifyUser(const VerifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ess20220222