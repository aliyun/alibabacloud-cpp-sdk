#include <darabonba/Core.hpp>
#include <alibabacloud/Ess20220222.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ess20220222::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ess20220222
{

AlibabaCloud::Ess20220222::Client::Client(Config &config): OpenApiClient(config){
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
    {"us-southeast-1" , "ess.us-southeast-1.aliyuncs.com"},
    {"na-south-1" , "ess.na-south-1.aliyuncs.com"},
    {"me-east-1" , "ess.me-east-1.aliyuncs.com"},
    {"me-central-1" , "ess.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "ess.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "ess.eu-central-1.aliyuncs.com"},
    {"cn-zhongwei" , "ess.cn-zhongwei.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "ess.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "ess.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu-gic-1" , "ess.cn-wulanchabu-gic-1.aliyuncs.com"},
    {"cn-wulanchabu" , "ess.cn-wulanchabu.aliyuncs.com"},
    {"cn-wuhan-lr" , "ess.cn-wuhan-lr.aliyuncs.com"},
    {"cn-nanjing" , "ess.aliyuncs.com"},
    {"cn-huhehaote" , "ess.cn-huhehaote.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "ess.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-heyuan" , "ess.cn-heyuan.aliyuncs.com"},
    {"cn-guangzhou" , "ess.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "ess.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "ess.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "ess.aliyuncs.com"},
    {"ap-southeast-7" , "ess.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "ess.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "ess.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "ess.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "ess.ap-southeast-2.aliyuncs.com"},
    {"ap-south-1" , "ess.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "ess.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "ess.ap-northeast-1.aliyuncs.com"}
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
 * @summary Applies a scaling configuration of the Elastic Container Instance type. If you want to create and manage scaling configurations of the Elastic Container Instance type by using a configuration file, you can call the ApplyEciScalingConfiguration operation.
 *
 * @description 基于YAML配置文件管理ECI类型的伸缩配置时，您需要注意以下事项：
 * - 如果指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件更新ECI类型的伸缩配置。
 * - 如果未指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件创建对应ECI类型的伸缩配置。
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
 * @summary Applies a scaling configuration of the Elastic Container Instance type. If you want to create and manage scaling configurations of the Elastic Container Instance type by using a configuration file, you can call the ApplyEciScalingConfiguration operation.
 *
 * @description 基于YAML配置文件管理ECI类型的伸缩配置时，您需要注意以下事项：
 * - 如果指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件更新ECI类型的伸缩配置。
 * - 如果未指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件创建对应ECI类型的伸缩配置。
 *
 * @param request ApplyEciScalingConfigurationRequest
 * @return ApplyEciScalingConfigurationResponse
 */
ApplyEciScalingConfigurationResponse Client::applyEciScalingConfiguration(const ApplyEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates and manages scaling groups by using configuration files. You can call the ApplyScalingGroup operation to create and manage scaling groups by using configuration files with efficiency.
 *
 * @description You can call the ApplyScalingGroup operation to create scaling groups of the Elastic Container Instance type with ease. The resources of the scaling groups are defined in Kubernetes Deployment YAML files. You can also call this operation to extend annotations for elastic container instances in Kubernetes Deployment YAML files. For more information, see "Supported annotations" in this topic.
 * Mapping between YAML files and scaling groups: You can map the triplet of namespace, kind, and name in a YAML file to a scaling group name. A YAML file and a scaling group have a one-to-one mapping relationship in a region. For example, if you use the Kubernetes Deployment YAML file whose name is NGINX in the default namespace to create a scaling group in a region, the unique name of the mapped scaling group is k8s_default_Deployment_nginx.
 * You can use a Kubernetes Deployment YAML file to manage a scaling group based on the following logic:
 * * If an existing scaling group has a mapping relationship with your Kubernetes Deployment YAML file, you can update the scaling group by using the YAML file.
 * * If no scaling group that has a mapping relationship with your Kubernetes Deployment YAML file exists, you can create a scaling group with ease by using the YAML file.
 * 1. If you do not specify a virtual private cloud (VPC), vSwitch, security group, or annotation in your Kubernetes Deployment YAML file, the system creates a default VPC that has default vSwitches and uses the default security group ess-default-sg of Auto Scaling. By default, the security group rule allows traffic on Transmission Control Protocol (TCP)-based port 22 and port 3389 and enables Internet Control Message Protocol (ICMP) for IPv4 addresses. If you want to enable other ports or protocols, you can create custom security group rules.
 * 2. If you want to use a public image, you must enable the Internet access feature and configure the k8s.aliyun.com/eci-with-eip pod annotation to enable the elastic IP address (EIP) feature.
 * 3. After you call the ApplyScalingGroup operation to apply a Kubernetes Deployment YAML file, the scaling group immediately enters the Enabled state and the scaling configuration immediately enters the Active state. If the number of replicas that you specified in the YAML file is grater than 0, elastic container instances are automatically created.
 * ### Supported annotations
 * For more information about annotations, see [ECI Pod Annotation](https://help.aliyun.com/document_detail/186939.html).
 * |Annotation|Example|Description|
 * |---|---|---|
 * |k8s.aliyun.com/ess-scaling-group-min-size|1|The minimum size of the scaling group that you want to create. Default value: 0.|
 * |k8s.aliyun.com/ess-scaling-group-max-size|20|The maximum size of the scaling group that you want to create. Default value: maximum number of replicas or 30, whichever is greater.|
 * |k8s.aliyun.com/eci-ntp-server|100.100.*.*|The IP address of the Network Time Protocol (NTP) server.|
 * |k8s.aliyun.com/eci-use-specs|2-4Gi|The specifications of 2 vCPUs and 4 GiB of memory. For more information, see [Create pods by specifying multiple specifications](https://help.aliyun.com/document_detail/451267.html).|
 * |k8s.aliyun.com/eci-vswitch|vsw-bp1xpiowfm5vo8o3c\\*\\*\\*\\*|The ID of the vSwitch. You can specify multiple vSwitches to specify multiple zones.|
 * |k8s.aliyun.com/eci-security-group|sg-bp1dktddjsg5nktv\\*\\*\\*\\*|The ID of the security group. Before you configure this annotation, take note of the following requirements:<ul data-sourcepos="26:74-26:168"><li data-sourcepos="26:78-26:114">You can specify one or more security groups. You can specify up to five security groups for each scaling group.</li><li data-sourcepos="26:114-26:140">If you specify multiple security groups, the security groups must belong to the same VPC.</li><li data-sourcepos="26:140-26:163">If you specify multiple security groups, the security groups must be of the same type.</li></ul>|
 * |k8s.aliyun.com/eci-sls-enable|"false"|If you set the value to false, the log collection feature is disabled.
 * If you do not want to use Custom Resource Definition (CRD) for Simple Log Service to collect logs of specific pods, you can configure this annotation for the pods and set the value to false. This prevents resource wastes caused by Logtails created by the system.|
 * |k8s.aliyun.com/eci-spot-strategy|SpotAsPriceGo|The bidding policy for preemptible instances. Valid values:<ul data-sourcepos="28:69-28:204"><li data-sourcepos="28:73-28:158">SpotWithPriceLimit: The instances are created as preemptible instances with a maximum hourly price. If you set the value to SpotWithPriceLimit, you must configure the k8s.aliyun.com/eci-spot-price-limit annotation.</li><li data-sourcepos="28:158-28:199">SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is automatically used as the bid price.</li></ul>|
 * |k8s.aliyun.com/eci-spot-price-limit|"0.5"|The maximum hourly price of preemptible instances. This value can be accurate to up to three decimal places.
 * This annotation takes effect only when you set the k8s.aliyun.com/eci-spot-strategy annotation to SpotWithPriceLimit.|
 * |k8s.aliyun.com/eci-with-eip|"true"|If you set the value to true, an elastic IP address (EIP) is automatically created and bound to each elastic container instance.|
 * |k8s.aliyun.com/eci-data-cache-bucket|default|The bucket of data caches. If you want to create a pod based on data caches, you must configure this annotation.|
 * |k8s.aliyun.com/eci-data-cache-pl|PL1|The performance level (PL) of the cloud disk that you want to create based on data caches.
 * By default, enterprise SSDs (ESSDs) are created. Default value: PL1.|
 * |k8s.aliyun.com/eci-data-cache-provisionedIops|"40000"|The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
 * If you configure this annotation, the cloud disk that is created based on data caches is of the ESSD AutoPL type.|
 * |k8s.aliyun.com/eci-data-cache-burstingEnabled|"true"|Specifies whether the Burst feature is enabled for the ESSD AutoPL disk. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
 * If you configure this annotation, the cloud disk that is created based on data caches is of the ESSD AutoPL type.|
 * |k8s.aliyun.com/eci-custom-tags|"env:test,name:alice"|The tags that you want to add to each elastic container instance. You can add up to three tags for each elastic container instance. Separate a tag key and a tag value with a colon (:). Separate multiple tags with commas (,).|
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
 * @summary Creates and manages scaling groups by using configuration files. You can call the ApplyScalingGroup operation to create and manage scaling groups by using configuration files with efficiency.
 *
 * @description You can call the ApplyScalingGroup operation to create scaling groups of the Elastic Container Instance type with ease. The resources of the scaling groups are defined in Kubernetes Deployment YAML files. You can also call this operation to extend annotations for elastic container instances in Kubernetes Deployment YAML files. For more information, see "Supported annotations" in this topic.
 * Mapping between YAML files and scaling groups: You can map the triplet of namespace, kind, and name in a YAML file to a scaling group name. A YAML file and a scaling group have a one-to-one mapping relationship in a region. For example, if you use the Kubernetes Deployment YAML file whose name is NGINX in the default namespace to create a scaling group in a region, the unique name of the mapped scaling group is k8s_default_Deployment_nginx.
 * You can use a Kubernetes Deployment YAML file to manage a scaling group based on the following logic:
 * * If an existing scaling group has a mapping relationship with your Kubernetes Deployment YAML file, you can update the scaling group by using the YAML file.
 * * If no scaling group that has a mapping relationship with your Kubernetes Deployment YAML file exists, you can create a scaling group with ease by using the YAML file.
 * 1. If you do not specify a virtual private cloud (VPC), vSwitch, security group, or annotation in your Kubernetes Deployment YAML file, the system creates a default VPC that has default vSwitches and uses the default security group ess-default-sg of Auto Scaling. By default, the security group rule allows traffic on Transmission Control Protocol (TCP)-based port 22 and port 3389 and enables Internet Control Message Protocol (ICMP) for IPv4 addresses. If you want to enable other ports or protocols, you can create custom security group rules.
 * 2. If you want to use a public image, you must enable the Internet access feature and configure the k8s.aliyun.com/eci-with-eip pod annotation to enable the elastic IP address (EIP) feature.
 * 3. After you call the ApplyScalingGroup operation to apply a Kubernetes Deployment YAML file, the scaling group immediately enters the Enabled state and the scaling configuration immediately enters the Active state. If the number of replicas that you specified in the YAML file is grater than 0, elastic container instances are automatically created.
 * ### Supported annotations
 * For more information about annotations, see [ECI Pod Annotation](https://help.aliyun.com/document_detail/186939.html).
 * |Annotation|Example|Description|
 * |---|---|---|
 * |k8s.aliyun.com/ess-scaling-group-min-size|1|The minimum size of the scaling group that you want to create. Default value: 0.|
 * |k8s.aliyun.com/ess-scaling-group-max-size|20|The maximum size of the scaling group that you want to create. Default value: maximum number of replicas or 30, whichever is greater.|
 * |k8s.aliyun.com/eci-ntp-server|100.100.*.*|The IP address of the Network Time Protocol (NTP) server.|
 * |k8s.aliyun.com/eci-use-specs|2-4Gi|The specifications of 2 vCPUs and 4 GiB of memory. For more information, see [Create pods by specifying multiple specifications](https://help.aliyun.com/document_detail/451267.html).|
 * |k8s.aliyun.com/eci-vswitch|vsw-bp1xpiowfm5vo8o3c\\*\\*\\*\\*|The ID of the vSwitch. You can specify multiple vSwitches to specify multiple zones.|
 * |k8s.aliyun.com/eci-security-group|sg-bp1dktddjsg5nktv\\*\\*\\*\\*|The ID of the security group. Before you configure this annotation, take note of the following requirements:<ul data-sourcepos="26:74-26:168"><li data-sourcepos="26:78-26:114">You can specify one or more security groups. You can specify up to five security groups for each scaling group.</li><li data-sourcepos="26:114-26:140">If you specify multiple security groups, the security groups must belong to the same VPC.</li><li data-sourcepos="26:140-26:163">If you specify multiple security groups, the security groups must be of the same type.</li></ul>|
 * |k8s.aliyun.com/eci-sls-enable|"false"|If you set the value to false, the log collection feature is disabled.
 * If you do not want to use Custom Resource Definition (CRD) for Simple Log Service to collect logs of specific pods, you can configure this annotation for the pods and set the value to false. This prevents resource wastes caused by Logtails created by the system.|
 * |k8s.aliyun.com/eci-spot-strategy|SpotAsPriceGo|The bidding policy for preemptible instances. Valid values:<ul data-sourcepos="28:69-28:204"><li data-sourcepos="28:73-28:158">SpotWithPriceLimit: The instances are created as preemptible instances with a maximum hourly price. If you set the value to SpotWithPriceLimit, you must configure the k8s.aliyun.com/eci-spot-price-limit annotation.</li><li data-sourcepos="28:158-28:199">SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is automatically used as the bid price.</li></ul>|
 * |k8s.aliyun.com/eci-spot-price-limit|"0.5"|The maximum hourly price of preemptible instances. This value can be accurate to up to three decimal places.
 * This annotation takes effect only when you set the k8s.aliyun.com/eci-spot-strategy annotation to SpotWithPriceLimit.|
 * |k8s.aliyun.com/eci-with-eip|"true"|If you set the value to true, an elastic IP address (EIP) is automatically created and bound to each elastic container instance.|
 * |k8s.aliyun.com/eci-data-cache-bucket|default|The bucket of data caches. If you want to create a pod based on data caches, you must configure this annotation.|
 * |k8s.aliyun.com/eci-data-cache-pl|PL1|The performance level (PL) of the cloud disk that you want to create based on data caches.
 * By default, enterprise SSDs (ESSDs) are created. Default value: PL1.|
 * |k8s.aliyun.com/eci-data-cache-provisionedIops|"40000"|The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
 * If you configure this annotation, the cloud disk that is created based on data caches is of the ESSD AutoPL type.|
 * |k8s.aliyun.com/eci-data-cache-burstingEnabled|"true"|Specifies whether the Burst feature is enabled for the ESSD AutoPL disk. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
 * If you configure this annotation, the cloud disk that is created based on data caches is of the ESSD AutoPL type.|
 * |k8s.aliyun.com/eci-custom-tags|"env:test,name:alice"|The tags that you want to add to each elastic container instance. You can add up to three tags for each elastic container instance. Separate a tag key and a tag value with a colon (:). Separate multiple tags with commas (,).|
 *
 * @param request ApplyScalingGroupRequest
 * @return ApplyScalingGroupResponse
 */
ApplyScalingGroupResponse Client::applyScalingGroup(const ApplyScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Attaches Application Load Balancer (ALB) server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachAlbServerGroups operation. By attaching ALB server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
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
 * @summary Attaches Application Load Balancer (ALB) server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachAlbServerGroups operation. By attaching ALB server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
 *
 * @param request AttachAlbServerGroupsRequest
 * @return AttachAlbServerGroupsResponse
 */
AttachAlbServerGroupsResponse Client::attachAlbServerGroups(const AttachAlbServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAlbServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
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
 * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
 *
 * @param request AttachDBInstancesRequest
 * @return AttachDBInstancesResponse
 */
AttachDBInstancesResponse Client::attachDBInstances(const AttachDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
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
 * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
 *
 * @param request AttachInstancesRequest
 * @return AttachInstancesResponse
 */
AttachInstancesResponse Client::attachInstances(const AttachInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachInstancesWithOptions(request, runtime);
}

/**
 * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
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
 * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
 *
 * @param request AttachLoadBalancersRequest
 * @return AttachLoadBalancersResponse
 */
AttachLoadBalancersResponse Client::attachLoadBalancers(const AttachLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
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
 * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
 *
 * @param request AttachServerGroupsRequest
 * @return AttachServerGroupsResponse
 */
AttachServerGroupsResponse Client::attachServerGroups(const AttachServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
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
 * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
 *
 * @param request AttachVServerGroupsRequest
 * @return AttachVServerGroupsResponse
 */
AttachVServerGroupsResponse Client::attachVServerGroups(const AttachVServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Cancels an instance refresh task. Take note that instances whose configurations were already updated by running an instance refresh task remain intact even after you cancel the task.
 *
 * @description *   You cannot call this operation to cancel instance refresh tasks that are being rolled back.
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
 * @summary Cancels an instance refresh task. Take note that instances whose configurations were already updated by running an instance refresh task remain intact even after you cancel the task.
 *
 * @description *   You cannot call this operation to cancel instance refresh tasks that are being rolled back.
 *
 * @param request CancelInstanceRefreshRequest
 * @return CancelInstanceRefreshResponse
 */
CancelInstanceRefreshResponse Client::cancelInstanceRefresh(const CancelInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Changes a resource group. Resource groups are a means to categorize and manage cloud resources, such as scaling groups, based on specific objectives, permissions, or ownership. In large, multifaceted organizations that manage numerous projects and users, this feature adopts a tiered management approach, simplifying management tasks and improving the effectiveness and oversight of resource allocation. You can call the ChangeResourceGroup operation to move your scaling groups from one resource group to another resource group, which facilitates streamlined monitoring and management within the context of the new group. This operation eliminates the need for repetitive and time-consuming cross-service resource queries, thereby enhancing operational efficiency.
 *
 * @description *   A resource is an entity of cloud services that you create on Alibaba Cloud. For example, a scaling group is a resource.
 * *   A resource group serves as a powerful organizational tool within your Alibaba Cloud account, enabling you to manage and monitor multiple resources collectively. It effectively addresses complexities surrounding resource categorization and permission control under a single Alibaba Cloud account, thereby enhancing management efficiency and control. For more information, see [What is resource management?](https://help.aliyun.com/document_detail/94475.html)
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
 * @summary Changes a resource group. Resource groups are a means to categorize and manage cloud resources, such as scaling groups, based on specific objectives, permissions, or ownership. In large, multifaceted organizations that manage numerous projects and users, this feature adopts a tiered management approach, simplifying management tasks and improving the effectiveness and oversight of resource allocation. You can call the ChangeResourceGroup operation to move your scaling groups from one resource group to another resource group, which facilitates streamlined monitoring and management within the context of the new group. This operation eliminates the need for repetitive and time-consuming cross-service resource queries, thereby enhancing operational efficiency.
 *
 * @description *   A resource is an entity of cloud services that you create on Alibaba Cloud. For example, a scaling group is a resource.
 * *   A resource group serves as a powerful organizational tool within your Alibaba Cloud account, enabling you to manage and monitor multiple resources collectively. It effectively addresses complexities surrounding resource categorization and permission control under a single Alibaba Cloud account, thereby enhancing management efficiency and control. For more information, see [What is resource management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Ends the timeout period of a lifecycle hook ahead of schedule. If you have created a lifecycle hook for your scaling group, you can call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule based on your business requirements.
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
 * @summary Ends the timeout period of a lifecycle hook ahead of schedule. If you have created a lifecycle hook for your scaling group, you can call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule based on your business requirements.
 *
 * @param request CompleteLifecycleActionRequest
 * @return CompleteLifecycleActionResponse
 */
CompleteLifecycleActionResponse Client::completeLifecycleAction(const CompleteLifecycleActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeLifecycleActionWithOptions(request, runtime);
}

/**
 * @summary Creates event-triggered tasks. If your business encounters unexpected traffic surges or has no specific patterns, you can call the CreateAlarm operation to create an event-triggered task and associate a CloudMonitor metric with the task. This allows you to dynamically adjust the number of Elastic Compute Service (ECS) instances or elastic container instances in your scaling group and keep updated on the real-time metric data, which facilitates cloud resource management and maintenance.
 *
 * @description *   If you set MetricType to custom, you must report your custom metrics to CloudMonitor before you can create event-triggered tasks by using the custom metrics. For more information, see [Event-triggered tasks of the custom monitoring type](https://help.aliyun.com/document_detail/74861.html).
 * *   When you create an event-triggered task, you must specify MetricName, Dimensions.DimensionKey, and Dimensions.DimensionValue to determine the range of statistics that you want to aggregate for the metrics of the scaling group. For example, you can specify user_id and scaling_group for an event-triggered task to aggregate monitoring data of all ECS instances or elastic container instances in a scaling group within an Alibaba Cloud account.
 *     *   If you create an event-triggered task of the custom monitoring type, you can specify only custom metrics in the task.
 *     *   If you create an event-triggered task of the system monitoring type, you can specify the system metrics described in [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html) in the task.
 * >  user_id and scaling_group are automatically populated. You need to only specify device and state. For more information, see `Dimensions.DimensionKey` and `Dimensions.DimensionValue` in the "Request parameters" section of this topic.
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
 * @summary Creates event-triggered tasks. If your business encounters unexpected traffic surges or has no specific patterns, you can call the CreateAlarm operation to create an event-triggered task and associate a CloudMonitor metric with the task. This allows you to dynamically adjust the number of Elastic Compute Service (ECS) instances or elastic container instances in your scaling group and keep updated on the real-time metric data, which facilitates cloud resource management and maintenance.
 *
 * @description *   If you set MetricType to custom, you must report your custom metrics to CloudMonitor before you can create event-triggered tasks by using the custom metrics. For more information, see [Event-triggered tasks of the custom monitoring type](https://help.aliyun.com/document_detail/74861.html).
 * *   When you create an event-triggered task, you must specify MetricName, Dimensions.DimensionKey, and Dimensions.DimensionValue to determine the range of statistics that you want to aggregate for the metrics of the scaling group. For example, you can specify user_id and scaling_group for an event-triggered task to aggregate monitoring data of all ECS instances or elastic container instances in a scaling group within an Alibaba Cloud account.
 *     *   If you create an event-triggered task of the custom monitoring type, you can specify only custom metrics in the task.
 *     *   If you create an event-triggered task of the system monitoring type, you can specify the system metrics described in [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html) in the task.
 * >  user_id and scaling_group are automatically populated. You need to only specify device and state. For more information, see `Dimensions.DimensionKey` and `Dimensions.DimensionValue` in the "Request parameters" section of this topic.
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
 * @summary Creates a scaling configuration of the Elastic Container Instance type. Auto Scaling uses the scaling configuration as a template to create elastic container instances to meet your business requirements during scale-out events.
 *
 * @description 伸缩配置用来指定弹性扩张时使用的ECI实例模板。
 * 参数Cpu和Memory用于指定CPU和内存定义实例规格的范围，弹性伸缩会结合IO优化、可用区等因素确定可用实例规格集合，并根据价格排序为您创建价格最低的实例。该方式仅适用于伸缩组的扩缩容策略为成本优化策略，且伸缩配置未指定实例规格的场景。
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
 * @summary Creates a scaling configuration of the Elastic Container Instance type. Auto Scaling uses the scaling configuration as a template to create elastic container instances to meet your business requirements during scale-out events.
 *
 * @description 伸缩配置用来指定弹性扩张时使用的ECI实例模板。
 * 参数Cpu和Memory用于指定CPU和内存定义实例规格的范围，弹性伸缩会结合IO优化、可用区等因素确定可用实例规格集合，并根据价格排序为您创建价格最低的实例。该方式仅适用于伸缩组的扩缩容策略为成本优化策略，且伸缩配置未指定实例规格的场景。
 *
 * @param request CreateEciScalingConfigurationRequest
 * @return CreateEciScalingConfigurationResponse
 */
CreateEciScalingConfigurationResponse Client::createEciScalingConfiguration(const CreateEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
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
 * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
 *
 * @param request CreateLifecycleHookRequest
 * @return CreateLifecycleHookResponse
 */
CreateLifecycleHookResponse Client::createLifecycleHook(const CreateLifecycleHookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLifecycleHookWithOptions(request, runtime);
}

/**
 * @summary Creates a notification rule. You can call the CreateNotificationConfiguration operation to create a notification rule to stay informed about scaling events or resource changes. This helps you learn about the dynamic status of your scaling group in real time and further automates the management of scaling events.
 *
 * @description - You can configure message notifications to be received by CloudMonitor system events, Message Service (formerly MNS) queues, or Message Service (formerly MNS) topics. When specified scaling events or resource changes occur in a scaling group, automatic scaling notifies CloudMonitor or Message Service (formerly MNS).
 * - Different event notifications within the same scaling group cannot share the same accepter.
 *   For example, different event notifications cannot simultaneously use the same CloudMonitor configuration, the same MNS topic, or the same MNS queue.
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
 * @summary Creates a notification rule. You can call the CreateNotificationConfiguration operation to create a notification rule to stay informed about scaling events or resource changes. This helps you learn about the dynamic status of your scaling group in real time and further automates the management of scaling events.
 *
 * @description - You can configure message notifications to be received by CloudMonitor system events, Message Service (formerly MNS) queues, or Message Service (formerly MNS) topics. When specified scaling events or resource changes occur in a scaling group, automatic scaling notifies CloudMonitor or Message Service (formerly MNS).
 * - Different event notifications within the same scaling group cannot share the same accepter.
 *   For example, different event notifications cannot simultaneously use the same CloudMonitor configuration, the same MNS topic, or the same MNS queue.
 *
 * @param request CreateNotificationConfigurationRequest
 * @return CreateNotificationConfigurationResponse
 */
CreateNotificationConfigurationResponse Client::createNotificationConfiguration(const CreateNotificationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNotificationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Call the CreateScalingConfiguration operation to create an ECS scaling configuration for a scaling group. You must specify the scaling group ID, instance type, and image.
 *
 * @description A scaling configuration is a template that defines the ECS instances to be created during a scale-out event. You can configure instances in the following ways:
 * - InstancePatternInfos: Use the intelligent configuration mode. You do not need to specify an instance type. Instead, you specify the number of vCPUs, memory size, instance family level, and maximum price based on your business needs. The system automatically selects eligible instance types and prioritizes the instance type with the lowest price to create ECS instances. This mode is available only when the network type of the scaling group is VPC. It can effectively reduce the risk of instance creation failures during scale-out events due to an instance type being out of stock.
 * - InstanceType: Specify a single instance type.
 * - InstanceTypes: Specify multiple instance types.
 * - InstanceTypeOverrides: Specify multiple instance types and configure a weight for each instance type.
 * - Cpu and Memory: Specify a range of instance types by setting the number of vCPUs and memory size. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone. It then creates the instance with the lowest price. This method is applicable only if the scaling policy of the scaling group is the cost optimization policy and no instance type is specified in the scaling configuration.
 * - You can attach a primary network interface controller (NIC) in one of the following ways. Note that you can use only one method in a single call. If you use both methods, the call fails and an error message is returned.
 *   - Directly configure the primary NIC using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *   - Configure the primary and secondary NICs using the NetworkInterfaces parameter. When you use this parameter, you must configure the primary NIC. Set NetworkInterface.InstanceType to Primary to configure the primary NIC. To configure a secondary NIC, set NetworkInterface.InstanceType to Secondary or leave the parameter empty.
 * > You cannot specify \\`InstanceType\\`, \\`InstanceTypes\\`, \\`InstanceTypeOverrides\\`, and \\`Cpu\\`/\\`Memory\\` at the same time. However, you can specify \\`InstanceType\\` or \\`InstanceTypes\\` together with \\`InstancePatternInfos\\`. If you specify them together, Auto Scaling prioritizes the specified instance types during scale-outs. If the specified instance types are out of stock, Auto Scaling uses instance types that match the \\`InstancePatternInfos\\` configuration.
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
 * @summary Call the CreateScalingConfiguration operation to create an ECS scaling configuration for a scaling group. You must specify the scaling group ID, instance type, and image.
 *
 * @description A scaling configuration is a template that defines the ECS instances to be created during a scale-out event. You can configure instances in the following ways:
 * - InstancePatternInfos: Use the intelligent configuration mode. You do not need to specify an instance type. Instead, you specify the number of vCPUs, memory size, instance family level, and maximum price based on your business needs. The system automatically selects eligible instance types and prioritizes the instance type with the lowest price to create ECS instances. This mode is available only when the network type of the scaling group is VPC. It can effectively reduce the risk of instance creation failures during scale-out events due to an instance type being out of stock.
 * - InstanceType: Specify a single instance type.
 * - InstanceTypes: Specify multiple instance types.
 * - InstanceTypeOverrides: Specify multiple instance types and configure a weight for each instance type.
 * - Cpu and Memory: Specify a range of instance types by setting the number of vCPUs and memory size. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone. It then creates the instance with the lowest price. This method is applicable only if the scaling policy of the scaling group is the cost optimization policy and no instance type is specified in the scaling configuration.
 * - You can attach a primary network interface controller (NIC) in one of the following ways. Note that you can use only one method in a single call. If you use both methods, the call fails and an error message is returned.
 *   - Directly configure the primary NIC using parameters such as SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount.
 *   - Configure the primary and secondary NICs using the NetworkInterfaces parameter. When you use this parameter, you must configure the primary NIC. Set NetworkInterface.InstanceType to Primary to configure the primary NIC. To configure a secondary NIC, set NetworkInterface.InstanceType to Secondary or leave the parameter empty.
 * > You cannot specify \\`InstanceType\\`, \\`InstanceTypes\\`, \\`InstanceTypeOverrides\\`, and \\`Cpu\\`/\\`Memory\\` at the same time. However, you can specify \\`InstanceType\\` or \\`InstanceTypes\\` together with \\`InstancePatternInfos\\`. If you specify them together, Auto Scaling prioritizes the specified instance types during scale-outs. If the specified instance types are out of stock, Auto Scaling uses instance types that match the \\`InstancePatternInfos\\` configuration.
 *
 * @param request CreateScalingConfigurationRequest
 * @return CreateScalingConfigurationResponse
 */
CreateScalingConfigurationResponse Client::createScalingConfiguration(const CreateScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Call the `CreateScalingGroup` API to create a scaling group. The group automatically adjusts your computing capacity (the number of instances) by scaling instances of a specified type in or out based on your business requirements and scaling policies.
 *
 * @description A scaling group is a collection of ECS instances for the same use case.
 * The number of scaling groups that you can create in a region depends on your Auto Scaling usage. To view your quota for scaling groups, go to Quota Center.
 * A scaling group is not active immediately after creation. You must call the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable the group before it can trigger scaling activities or execute scaling rules.
 * The scaling group, as well as its associated Classic Load Balancer (CLB) (formerly SLB) and RDS instances, must be in the same region. For more information, see [Regions and availability zones](https://help.aliyun.com/document_detail/40654.html).
 * If you associate a CLB instance with a scaling group, the scaling group automatically adds new ECS instances to a backend server group of the CLB instance. You can specify which server group to use. The following types of server groups are supported:
 * - Default server group: A group of ECS instances that receive requests from the front end. If no vServer group or primary/standby server group is configured for a listener, it forwards requests to the ECS instances in the default server group.
 * - vServer group: Use a vServer group if you need to forward different requests to different backend servers, or forward requests based on domain names and URLs.
 * > If you specify both a default server group and one or more vServer groups, the scaling group adds new ECS instances to all specified server groups.
 * After an instance is added to a backend server group of a CLB instance, its default weight is 50. The CLB instance must meet the following conditions:
 * - The CLB instance must be in the active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to check the state of a CLB instance.
 * - Health checks must be enabled for all listeners configured on the CLB instance. Otherwise, the scaling group creation fails.
 * If you associate a scaling group with Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups, it automatically adds new ECS instances as backend servers to those groups to handle distributed requests. You can specify multiple such server groups, but they must all belong to the same VPC as the scaling group. For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
 * If you associate an RDS instance with a scaling group, the scaling group automatically adds the internal IP addresses of new ECS instances to the IP address whitelist of the RDS instance. The RDS instance must meet the following conditions:
 * - The RDS instance must be in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to check the state of an RDS instance.
 * - The number of IP addresses in the RDS instance\\"s IP address whitelist cannot exceed the limit. For more information, see the [Configure an IP address whitelist](https://help.aliyun.com/document_detail/43185.html) topic in the RDS documentation.
 * If the `MultiAZPolicy` of a scaling group is set to `COST_OPTIMIZED`:
 * - If you specify the `OnDemandBaseCapacity`, `OnDemandPercentageAboveBaseCapacity`, and `SpotInstancePools` parameters, you define the instance allocation strategy for the cost-optimized policy. Auto Scaling prioritizes this strategy during scaling activities.
 * - If you do not specify the `OnDemandBaseCapacity`, `OnDemandPercentageAboveBaseCapacity`, or `SpotInstancePools` parameters, the cost-optimized policy creates instances by using only the lowest-cost method. In this mode, you cannot create instances by using the Elastic Guarantee service or the Capacity Reservation service.
 * If you enable tag propagation for a scaling group by setting `Tags.Propagate` to `true`:
 * - The scaling group propagates its tags only to new instances, not to existing instances.
 * - If you specify instance tags in the scaling configuration and also choose to propagate tags from the scaling group, Auto Scaling applies both sets of tags to the new instances.
 * - If a tag from the scaling configuration and a propagated tag from the scaling group have the same tag key, the tag value from the scaling configuration takes precedence.
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
 * @summary Call the `CreateScalingGroup` API to create a scaling group. The group automatically adjusts your computing capacity (the number of instances) by scaling instances of a specified type in or out based on your business requirements and scaling policies.
 *
 * @description A scaling group is a collection of ECS instances for the same use case.
 * The number of scaling groups that you can create in a region depends on your Auto Scaling usage. To view your quota for scaling groups, go to Quota Center.
 * A scaling group is not active immediately after creation. You must call the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable the group before it can trigger scaling activities or execute scaling rules.
 * The scaling group, as well as its associated Classic Load Balancer (CLB) (formerly SLB) and RDS instances, must be in the same region. For more information, see [Regions and availability zones](https://help.aliyun.com/document_detail/40654.html).
 * If you associate a CLB instance with a scaling group, the scaling group automatically adds new ECS instances to a backend server group of the CLB instance. You can specify which server group to use. The following types of server groups are supported:
 * - Default server group: A group of ECS instances that receive requests from the front end. If no vServer group or primary/standby server group is configured for a listener, it forwards requests to the ECS instances in the default server group.
 * - vServer group: Use a vServer group if you need to forward different requests to different backend servers, or forward requests based on domain names and URLs.
 * > If you specify both a default server group and one or more vServer groups, the scaling group adds new ECS instances to all specified server groups.
 * After an instance is added to a backend server group of a CLB instance, its default weight is 50. The CLB instance must meet the following conditions:
 * - The CLB instance must be in the active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to check the state of a CLB instance.
 * - Health checks must be enabled for all listeners configured on the CLB instance. Otherwise, the scaling group creation fails.
 * If you associate a scaling group with Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups, it automatically adds new ECS instances as backend servers to those groups to handle distributed requests. You can specify multiple such server groups, but they must all belong to the same VPC as the scaling group. For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
 * If you associate an RDS instance with a scaling group, the scaling group automatically adds the internal IP addresses of new ECS instances to the IP address whitelist of the RDS instance. The RDS instance must meet the following conditions:
 * - The RDS instance must be in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to check the state of an RDS instance.
 * - The number of IP addresses in the RDS instance\\"s IP address whitelist cannot exceed the limit. For more information, see the [Configure an IP address whitelist](https://help.aliyun.com/document_detail/43185.html) topic in the RDS documentation.
 * If the `MultiAZPolicy` of a scaling group is set to `COST_OPTIMIZED`:
 * - If you specify the `OnDemandBaseCapacity`, `OnDemandPercentageAboveBaseCapacity`, and `SpotInstancePools` parameters, you define the instance allocation strategy for the cost-optimized policy. Auto Scaling prioritizes this strategy during scaling activities.
 * - If you do not specify the `OnDemandBaseCapacity`, `OnDemandPercentageAboveBaseCapacity`, or `SpotInstancePools` parameters, the cost-optimized policy creates instances by using only the lowest-cost method. In this mode, you cannot create instances by using the Elastic Guarantee service or the Capacity Reservation service.
 * If you enable tag propagation for a scaling group by setting `Tags.Propagate` to `true`:
 * - The scaling group propagates its tags only to new instances, not to existing instances.
 * - If you specify instance tags in the scaling configuration and also choose to propagate tags from the scaling group, Auto Scaling applies both sets of tags to the new instances.
 * - If a tag from the scaling configuration and a propagated tag from the scaling group have the same tag key, the tag value from the scaling configuration takes precedence.
 *
 * @param request CreateScalingGroupRequest
 * @return CreateScalingGroupResponse
 */
CreateScalingGroupResponse Client::createScalingGroup(const CreateScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingGroupWithOptions(request, runtime);
}

/**
 * @summary The function of a scaling rule is determined by its type, which can be used to trigger a scaling activity or intelligently set the boundary values of a scaling group. Depending on your business requirements, you can invoke the CreateScalingRule API to create different types of scaling rules. For example, if your business only requires setting the boundary values of a scaling group, we recommend that you select the predictive rule type.
 *
 * @description A scaling rule defines specific scale-out or scale-in operations, such as adding or removing N instances. If executing a scaling rule would cause the number of ECS or ECI instances in the scaling group to fall below MinSize or exceed MaxSize, automatic scaling automatically adjusts the number of ECS or ECI instances to be added or removed so that the actual instance count reaches MinSize or MaxSize. However, the configured value of the scaling rule remains unchanged. Examples are as follows:
 * - For a scaling group with MaxSize=3 and a current Total Capacity of 2, if the scaling rule specifies adding 3 ECS instances, only 1 ECS instance will actually be added during execution, but the configured value of the scaling rule remains 3.
 * - For a scaling group with MinSize=2 and a current Total Capacity of 3, if the scaling rule specifies removing 5 ECS instances, only 1 ECS instance will actually be removed during execution, but the configured value of the scaling rule remains 5.
 * Please note the following parameter-related descriptions:
 * - When AdjustmentType is TotalCapacity, it means adjusting the current number of ECS or ECI instances in the scaling group to the specified quantity. The corresponding AdjustmentValue must be greater than or equal to 0.
 * - When AdjustmentType is QuantityChangeInCapacity or PercentChangeInCapacity, a positive AdjustmentValue indicates adding instances, while a negative value indicates removing instances.
 * - When AdjustmentType is PercentChangeInCapacity, the automatic scaling service calculates the number of ECS or ECI instances to add or remove by multiplying the current instance count (Total Capacity) by AdjustmentValue/100 and then applying rounding.
 * - If a cooldown time (Cooldown) is specified in the scaling rule, the scaling group enters a cooldown period for the specified duration after the scaling activity triggered by this rule completes. If no cooldown time is specified in the scaling rule, the default cooldown time (DefaultCooldown) of the scaling group is used.
 * - There is a limit on the number of scaling rules that can be created within a single scaling group. For details, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - The returned Unique Identifier (ScalingRuleAri) of the scaling rule can be used with the following APIs:
 *     - Specify it in the ScalingRuleAri parameter when invoking ExecuteScalingRule to manually execute the scaling rule.
 *     - Specify it in the ScheduledAction parameter when creating a scheduled task (CreateScheduledTask) to execute the scaling rule at a scheduled time.
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
 * @summary The function of a scaling rule is determined by its type, which can be used to trigger a scaling activity or intelligently set the boundary values of a scaling group. Depending on your business requirements, you can invoke the CreateScalingRule API to create different types of scaling rules. For example, if your business only requires setting the boundary values of a scaling group, we recommend that you select the predictive rule type.
 *
 * @description A scaling rule defines specific scale-out or scale-in operations, such as adding or removing N instances. If executing a scaling rule would cause the number of ECS or ECI instances in the scaling group to fall below MinSize or exceed MaxSize, automatic scaling automatically adjusts the number of ECS or ECI instances to be added or removed so that the actual instance count reaches MinSize or MaxSize. However, the configured value of the scaling rule remains unchanged. Examples are as follows:
 * - For a scaling group with MaxSize=3 and a current Total Capacity of 2, if the scaling rule specifies adding 3 ECS instances, only 1 ECS instance will actually be added during execution, but the configured value of the scaling rule remains 3.
 * - For a scaling group with MinSize=2 and a current Total Capacity of 3, if the scaling rule specifies removing 5 ECS instances, only 1 ECS instance will actually be removed during execution, but the configured value of the scaling rule remains 5.
 * Please note the following parameter-related descriptions:
 * - When AdjustmentType is TotalCapacity, it means adjusting the current number of ECS or ECI instances in the scaling group to the specified quantity. The corresponding AdjustmentValue must be greater than or equal to 0.
 * - When AdjustmentType is QuantityChangeInCapacity or PercentChangeInCapacity, a positive AdjustmentValue indicates adding instances, while a negative value indicates removing instances.
 * - When AdjustmentType is PercentChangeInCapacity, the automatic scaling service calculates the number of ECS or ECI instances to add or remove by multiplying the current instance count (Total Capacity) by AdjustmentValue/100 and then applying rounding.
 * - If a cooldown time (Cooldown) is specified in the scaling rule, the scaling group enters a cooldown period for the specified duration after the scaling activity triggered by this rule completes. If no cooldown time is specified in the scaling rule, the default cooldown time (DefaultCooldown) of the scaling group is used.
 * - There is a limit on the number of scaling rules that can be created within a single scaling group. For details, see [Limits](https://help.aliyun.com/document_detail/25863.html).
 * - The returned Unique Identifier (ScalingRuleAri) of the scaling rule can be used with the following APIs:
 *     - Specify it in the ScalingRuleAri parameter when invoking ExecuteScalingRule to manually execute the scaling rule.
 *     - Specify it in the ScheduledAction parameter when creating a scheduled task (CreateScheduledTask) to execute the scaling rule at a scheduled time.
 *
 * @param request CreateScalingRuleRequest
 * @return CreateScalingRuleResponse
 */
CreateScalingRuleResponse Client::createScalingRule(const CreateScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
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
 * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
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
 * @summary Queries event-triggered tasks. You can call the DescribeAlarms operation to learn about the configurations of event-triggered tasks and keep updated on monitoring data changes. This helps you troubleshoot system resource issues at the earliest opportunity and ensures system stability and reliability.
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
 * @summary Queries event-triggered tasks. You can call the DescribeAlarms operation to learn about the configurations of event-triggered tasks and keep updated on monitoring data changes. This helps you troubleshoot system resource issues at the earliest opportunity and ensures system stability and reliability.
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
 * @summary DescribeDiagnoseReports
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
 * @summary DescribeDiagnoseReports
 *
 * @param request DescribeDiagnoseReportsRequest
 * @return DescribeDiagnoseReportsResponse
 */
DescribeDiagnoseReportsResponse Client::describeDiagnoseReports(const DescribeDiagnoseReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnoseReportsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a scaling configuration. You can query a scaling configuration by its ID to learn about its details such as the temporary storage size, number of IPv6 addresses, and bandwidth of the elastic IP address (EIP). The scaling configuration details can be obtained as a YAML file.
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
 * @summary Queries the details of a scaling configuration. You can query a scaling configuration by its ID to learn about its details such as the temporary storage size, number of IPv6 addresses, and bandwidth of the elastic IP address (EIP). The scaling configuration details can be obtained as a YAML file.
 *
 * @param request DescribeEciScalingConfigurationDetailRequest
 * @return DescribeEciScalingConfigurationDetailResponse
 */
DescribeEciScalingConfigurationDetailResponse Client::describeEciScalingConfigurationDetail(const DescribeEciScalingConfigurationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEciScalingConfigurationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries scaling configurations of the Elastic Container Instance type. When you call the DescribeEciScalingConfigurations operation, you can specify ScalingGroupId, ScalingConfigurationIds, or ScalingConfigurationNames to query details about the desired scaling configurations, such as the instance bidding policy, instance type, image pulling policy, and load balancing weight of each elastic container instance. This can help you select a suitable template for creating elastic container instances or reference existing scaling configurations before you modify the automatic scaling policy for elastic container instances.
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
 * @summary Queries scaling configurations of the Elastic Container Instance type. When you call the DescribeEciScalingConfigurations operation, you can specify ScalingGroupId, ScalingConfigurationIds, or ScalingConfigurationNames to query details about the desired scaling configurations, such as the instance bidding policy, instance type, image pulling policy, and load balancing weight of each elastic container instance. This can help you select a suitable template for creating elastic container instances or reference existing scaling configurations before you modify the automatic scaling policy for elastic container instances.
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
 * @summary Queries instance refresh tasks for a scaling group. You can call this operation to view basic information and progress of instance refresh tasks.
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
 * @summary Queries instance refresh tasks for a scaling group. You can call this operation to view basic information and progress of instance refresh tasks.
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
 * @param request DescribeLifecycleActionsRequest
 * @return DescribeLifecycleActionsResponse
 */
DescribeLifecycleActionsResponse Client::describeLifecycleActions(const DescribeLifecycleActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecycleActionsWithOptions(request, runtime);
}

/**
 * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
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
 * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
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
 * @summary Queries instance types. When you call the DescribePatternTypes operation, you can specify attributes such as the vSwitch ID, number of vCPUs, memory size, instance family, and maximum acceptable price to filer instance types that meet your business requirements.
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
 * @summary Queries instance types. When you call the DescribePatternTypes operation, you can specify attributes such as the vSwitch ID, number of vCPUs, memory size, instance family, and maximum acceptable price to filer instance types that meet your business requirements.
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
 * @summary Queries scaling activities. You can call the DescribeScalingActivities operation to query the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can query the status and cause of a scaling activity. You can also query the total number of instances after a scaling activity is complete.
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
 * @summary Queries scaling activities. You can call the DescribeScalingActivities operation to query the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can query the status and cause of a scaling activity. You can also query the total number of instances after a scaling activity is complete.
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
 * @summary You can call the DescribeScalingConfigurations API to query information about ECS-type scaling configurations, including instance type and image details. This helps you understand the ECS instance template used during scale-out operations.
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
 * @summary You can call the DescribeScalingConfigurations API to query information about ECS-type scaling configurations, including instance type and image details. This helps you understand the ECS instance template used during scale-out operations.
 *
 * @param request DescribeScalingConfigurationsRequest
 * @return DescribeScalingConfigurationsResponse
 */
DescribeScalingConfigurationsResponse Client::describeScalingConfigurations(const DescribeScalingConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries a scaling group. You can call the DescribeScalingGroupDetail operation to query the basic information, instances, and scaling configurations of a scaling group. If you set OutputFormat to YAML for a scaling group of the Elastic Container Instance type, the output is a Kubernetes Deployment file in the YAML format.
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
 * @summary Queries a scaling group. You can call the DescribeScalingGroupDetail operation to query the basic information, instances, and scaling configurations of a scaling group. If you set OutputFormat to YAML for a scaling group of the Elastic Container Instance type, the output is a Kubernetes Deployment file in the YAML format.
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
 * @summary Queries information about scaling groups, such as the basic information, instances, and scaling configurations.
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
 * @summary Queries information about scaling groups, such as the basic information, instances, and scaling configurations.
 *
 * @param request DescribeScalingGroupsRequest
 * @return DescribeScalingGroupsResponse
 */
DescribeScalingGroupsResponse Client::describeScalingGroups(const DescribeScalingGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingGroupsWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeScalingInstances to query the list and information of ECS instances in a scaling group by scaling group ID, including the total number of running spot instances, the total number of ECS instances, the warmup state of ECS instances, and the lifecycle state in the current scaling group. You can also filter ECS instances by health check status, lifecycle state, or creation type.
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
 * @summary Calls DescribeScalingInstances to query the list and information of ECS instances in a scaling group by scaling group ID, including the total number of running spot instances, the total number of ECS instances, the warmup state of ECS instances, and the lifecycle state in the current scaling group. You can also filter ECS instances by health check status, lifecycle state, or creation type.
 *
 * @param request DescribeScalingInstancesRequest
 * @return DescribeScalingInstancesResponse
 */
DescribeScalingInstancesResponse Client::describeScalingInstances(const DescribeScalingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
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
 * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
 *
 * @param request DescribeScalingRulesRequest
 * @return DescribeScalingRulesResponse
 */
DescribeScalingRulesResponse Client::describeScalingRules(const DescribeScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScalingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
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
 * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
 *
 * @param request DescribeScheduledTasksRequest
 * @return DescribeScheduledTasksResponse
 */
DescribeScheduledTasksResponse Client::describeScheduledTasks(const DescribeScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScheduledTasksWithOptions(request, runtime);
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
 * @summary Detaches one or more ApsaraDB RDS instances from a scaling group. If you want to decrease the number of ApsaraDB RDS instances attached to your scaling group, you can call the DetachDBInstance operation. This operation liberates ApsaraDB RDS instances from your scaling group, thereby significantly boosting the agility and efficiency in managing and allocating your resources.
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
 * @summary Detaches one or more ApsaraDB RDS instances from a scaling group. If you want to decrease the number of ApsaraDB RDS instances attached to your scaling group, you can call the DetachDBInstance operation. This operation liberates ApsaraDB RDS instances from your scaling group, thereby significantly boosting the agility and efficiency in managing and allocating your resources.
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
 * @description - 如果您创建自定义监控类型的报警任务（MetricType=custom），您需要先将自定义监控项指标上报到云监控。具体操作，请参见[自定义监控报警任务](https://help.aliyun.com/document_detail/74861.html)。
 * - 创建报警任务时，您需要指定监控项（MetricName），并配合维度信息（Dimension.N.DimensionKey和Dimension.N.DimensionValue），来确定伸缩组中该监控项数据的聚合范围。例如，指定user_id和scaling_group来确定聚合该用户、该伸缩组下所有ECS实例或ECI实例的监控项数据。
 *     - 自定义监控报警任务（MetricType=custom）的监控项取决于您自有的监控指标。
 *     - 系统监控报警任务（MetricType=system）支持的监控项的更多信息，请参见[系统监控报警任务](https://help.aliyun.com/document_detail/74854.html)。
 * > 维度信息中，user_id和scaling_group由系统自动填充，device、state需要您手动指定。更多信息，请参见参数`Dimension.N.DimensionKey`和`Dimension.N.DimensionValue`。
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
 * @description - 如果您创建自定义监控类型的报警任务（MetricType=custom），您需要先将自定义监控项指标上报到云监控。具体操作，请参见[自定义监控报警任务](https://help.aliyun.com/document_detail/74861.html)。
 * - 创建报警任务时，您需要指定监控项（MetricName），并配合维度信息（Dimension.N.DimensionKey和Dimension.N.DimensionValue），来确定伸缩组中该监控项数据的聚合范围。例如，指定user_id和scaling_group来确定聚合该用户、该伸缩组下所有ECS实例或ECI实例的监控项数据。
 *     - 自定义监控报警任务（MetricType=custom）的监控项取决于您自有的监控指标。
 *     - 系统监控报警任务（MetricType=system）支持的监控项的更多信息，请参见[系统监控报警任务](https://help.aliyun.com/document_detail/74854.html)。
 * > 维度信息中，user_id和scaling_group由系统自动填充，device、state需要您手动指定。更多信息，请参见参数`Dimension.N.DimensionKey`和`Dimension.N.DimensionValue`。
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
 * @summary Modifies a scaling configuration of the Elastic Container Instance type. When you call the ModifyEciScalingConfiguration operation, you can specify the ID, name, and instance properties of the scaling configuration whose information you want to modify. You can modify the instance restart policy, instance bidding policy, and elastic IP address (EIP) bandwidth.
 *
 * @description - 如果修改伸缩配置的名称，请注意同一伸缩组下不能存在名称相同的伸缩配置。
 * - 可以调用[DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html)查询并验证修改结果。
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
 * @summary Modifies a scaling configuration of the Elastic Container Instance type. When you call the ModifyEciScalingConfiguration operation, you can specify the ID, name, and instance properties of the scaling configuration whose information you want to modify. You can modify the instance restart policy, instance bidding policy, and elastic IP address (EIP) bandwidth.
 *
 * @description - 如果修改伸缩配置的名称，请注意同一伸缩组下不能存在名称相同的伸缩配置。
 * - 可以调用[DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html)查询并验证修改结果。
 *
 * @param request ModifyEciScalingConfigurationRequest
 * @return ModifyEciScalingConfigurationResponse
 */
ModifyEciScalingConfigurationResponse Client::modifyEciScalingConfiguration(const ModifyEciScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEciScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of an Elastic Compute Service (ECS) instance. When you call the ModifyInstanceAttribute operation, you can specify attributes such as the instance ID, scaling group ID, and region ID to modify the attributes of an ECS instance in a scaling group. You can modify only the hosting attributes of instances that are manually added to scaling groups.
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
 * @summary Modifies the information of an Elastic Compute Service (ECS) instance. When you call the ModifyInstanceAttribute operation, you can specify attributes such as the instance ID, scaling group ID, and region ID to modify the attributes of an ECS instance in a scaling group. You can modify only the hosting attributes of instances that are manually added to scaling groups.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies a lifecycle hook. If an existing lifecycle hook does not meet your business requirements anymore, you can call the ModifyLifecycleHook operation to modify the information such as the scaling event, timeout period, and default action of the lifecycle hook. Before you modify a lifecycle hook, you can locate the lifecycle hook by its ID, name, or scaling group.
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
 * @summary Modifies a lifecycle hook. If an existing lifecycle hook does not meet your business requirements anymore, you can call the ModifyLifecycleHook operation to modify the information such as the scaling event, timeout period, and default action of the lifecycle hook. Before you modify a lifecycle hook, you can locate the lifecycle hook by its ID, name, or scaling group.
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
 * @summary If a scaling configuration does not meet your business needs, you can call the ModifyScalingConfiguration operation to modify the scaling configuration. A scaling configuration is a template for creating ECS instances during scale-out events.
 *
 * @description - Scaling configurations in the same scaling group cannot have the same name.
 * - You can configure the primary elastic network interface (ENI) in one of the following ways. You can use only one method in a single API call. If you use both methods, the call fails and an error message is returned. When you modify the ENI configuration, using one method clears any configuration set by the other method.
 *   - Directly set the configuration of the primary ENI using parameters such as \\`SecurityGroupId\\`, \\`SecurityGroupIds\\`, and \\`Ipv6AddressCount\\`.
 *   - Set the configuration of the primary and secondary ENIs using the \\`NetworkInterfaces\\` parameter. When you use this parameter, you must configure the primary ENI. To specify the primary ENI, set \\`NetworkInterface.InstanceType\\` to \\`Primary\\`. To specify a secondary ENI, set \\`NetworkInterface.InstanceType\\` to \\`Secondary\\` or leave the parameter empty.
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
 * @summary If a scaling configuration does not meet your business needs, you can call the ModifyScalingConfiguration operation to modify the scaling configuration. A scaling configuration is a template for creating ECS instances during scale-out events.
 *
 * @description - Scaling configurations in the same scaling group cannot have the same name.
 * - You can configure the primary elastic network interface (ENI) in one of the following ways. You can use only one method in a single API call. If you use both methods, the call fails and an error message is returned. When you modify the ENI configuration, using one method clears any configuration set by the other method.
 *   - Directly set the configuration of the primary ENI using parameters such as \\`SecurityGroupId\\`, \\`SecurityGroupIds\\`, and \\`Ipv6AddressCount\\`.
 *   - Set the configuration of the primary and secondary ENIs using the \\`NetworkInterfaces\\` parameter. When you use this parameter, you must configure the primary ENI. To specify the primary ENI, set \\`NetworkInterface.InstanceType\\` to \\`Primary\\`. To specify a secondary ENI, set \\`NetworkInterface.InstanceType\\` to \\`Secondary\\` or leave the parameter empty.
 *
 * @param request ModifyScalingConfigurationRequest
 * @return ModifyScalingConfigurationResponse
 */
ModifyScalingConfigurationResponse Client::modifyScalingConfiguration(const ModifyScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can modify scaling groups to adjust your computing power with ease. The computing power refers to the instances that provide the computing capability. When your scaling group cannot meet your business requirements, you can call the ModifyScalingGroup operation to modify scaling group attributes such as the maximum, minimum, and expected numbers of instances. This prevents repeated creation and configuration of scaling groups, which saves you a lot of time and resource costs.
 *
 * @description - The following parameters cannot be modified:
 *      - RegionId
 *     - LoadBalancerId
 *     > To modify an SLB instance, use the AttachLoadBalancers and DetachLoadBalancers APIs.
 *     - DBInstanceId
 *     > To modify an RDS instance, use the AttachDBInstances and DetachDBInstances APIs.
 * - You can invoke this API only when the scaling group status is `Active` or `Inactive`.
 * - Enabling a new scaling configuration does not affect ECS instances or ECI instances that were created using an earlier scaling configuration and are currently running.
 * - If MaxSize is modified such that the current number of ECS or ECI instances in the scaling group exceeds MaxSize, the scaling group automatically removes ECS or ECI instances until the instance count equals MaxSize.
 * - If MinSize is modified such that the current number of ECS or ECI instances in the scaling group falls below MinSize, the scaling group automatically adds ECS or ECI instances until the instance count equals MinSize.
 * - If DesiredCapacity is set for the scaling group and then modified such that the current number of ECS or ECI instances differs from the new DesiredCapacity, the scaling group automatically adds or removes ECS or ECI instances until the instance count equals DesiredCapacity.
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
 * @summary Modifies a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can modify scaling groups to adjust your computing power with ease. The computing power refers to the instances that provide the computing capability. When your scaling group cannot meet your business requirements, you can call the ModifyScalingGroup operation to modify scaling group attributes such as the maximum, minimum, and expected numbers of instances. This prevents repeated creation and configuration of scaling groups, which saves you a lot of time and resource costs.
 *
 * @description - The following parameters cannot be modified:
 *      - RegionId
 *     - LoadBalancerId
 *     > To modify an SLB instance, use the AttachLoadBalancers and DetachLoadBalancers APIs.
 *     - DBInstanceId
 *     > To modify an RDS instance, use the AttachDBInstances and DetachDBInstances APIs.
 * - You can invoke this API only when the scaling group status is `Active` or `Inactive`.
 * - Enabling a new scaling configuration does not affect ECS instances or ECI instances that were created using an earlier scaling configuration and are currently running.
 * - If MaxSize is modified such that the current number of ECS or ECI instances in the scaling group exceeds MaxSize, the scaling group automatically removes ECS or ECI instances until the instance count equals MaxSize.
 * - If MinSize is modified such that the current number of ECS or ECI instances in the scaling group falls below MinSize, the scaling group automatically adds ECS or ECI instances until the instance count equals MinSize.
 * - If DesiredCapacity is set for the scaling group and then modified such that the current number of ECS or ECI instances differs from the new DesiredCapacity, the scaling group automatically adds or removes ECS or ECI instances until the instance count equals DesiredCapacity.
 *
 * @param request ModifyScalingGroupRequest
 * @return ModifyScalingGroupResponse
 */
ModifyScalingGroupResponse Client::modifyScalingGroup(const ModifyScalingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a scaling rule. If an existing scaling rule cannot meet your business requirements, you can call the ModifyScalingRule operation to modify the scaling rule, without the need to create a new one. This streamlines your workflow, enhancing operational efficiency while also contributing to cost optimization by avoiding redundant steps.
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
 * @summary Modifies a scaling rule. If an existing scaling rule cannot meet your business requirements, you can call the ModifyScalingRule operation to modify the scaling rule, without the need to create a new one. This streamlines your workflow, enhancing operational efficiency while also contributing to cost optimization by avoiding redundant steps.
 *
 * @param request ModifyScalingRuleRequest
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRule(const ModifyScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a scheduled task. If an existing scheduled task cannot meet your business requirements, you can call the ModifyScheduledTask operation to adjust its parameter settings including the scaling rule to execute and the boundary values of your scaling group, without the need to create a new scheduled task. This operation provides a flexible way to optimize scheduled tasks.
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
 * @summary Modifies a scheduled task. If an existing scheduled task cannot meet your business requirements, you can call the ModifyScheduledTask operation to adjust its parameter settings including the scaling rule to execute and the boundary values of your scaling group, without the need to create a new scheduled task. This operation provides a flexible way to optimize scheduled tasks.
 *
 * @param request ModifyScheduledTaskRequest
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTask(const ModifyScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduledTaskWithOptions(request, runtime);
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
 * @summary Queries predicted monitoring data.
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
 * @summary Queries predicted monitoring data.
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
 * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
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
 * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
 *
 * @param request RebalanceInstancesRequest
 * @return RebalanceInstancesResponse
 */
RebalanceInstancesResponse Client::rebalanceInstances(const RebalanceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebalanceInstancesWithOptions(request, runtime);
}

/**
 * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
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
 * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
 *
 * @param request RecordLifecycleActionHeartbeatRequest
 * @return RecordLifecycleActionHeartbeatResponse
 */
RecordLifecycleActionHeartbeatResponse Client::recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordLifecycleActionHeartbeatWithOptions(request, runtime);
}

/**
 * @summary If a scaling group is enabled and has no ongoing scaling activities, you can call the RemoveInstances API to remove one or more instances from the group.
 *
 * @description - Ensure the following conditions are met before you call this API:
 *   - The scaling group is in the Active state.
 *   - The scaling group has no scaling activities in progress.
 * > This API can bypass the cooldown (`DefaultCooldown`) if the scaling group has no ongoing scaling activities.
 * - If an ECS instance is automatically created by Auto Scaling, or is manually added and managed by the scaling group, removing the instance from the scaling group places it in Economical Mode or releases it.
 * - If an ECS instance is manually added and not managed by the scaling group, removing the instance from the group does not stop or release it.
 * - The call fails if the number of remaining instances would fall below the minimum number of instances (`MinSize`).
 * A successful response confirms the Auto Scaling service has accepted the request, but does not guarantee the scaling activity will succeed. You must use the returned `ScalingActivityId` to check the execution status of the scaling activity.
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
 * @summary If a scaling group is enabled and has no ongoing scaling activities, you can call the RemoveInstances API to remove one or more instances from the group.
 *
 * @description - Ensure the following conditions are met before you call this API:
 *   - The scaling group is in the Active state.
 *   - The scaling group has no scaling activities in progress.
 * > This API can bypass the cooldown (`DefaultCooldown`) if the scaling group has no ongoing scaling activities.
 * - If an ECS instance is automatically created by Auto Scaling, or is manually added and managed by the scaling group, removing the instance from the scaling group places it in Economical Mode or releases it.
 * - If an ECS instance is manually added and not managed by the scaling group, removing the instance from the group does not stop or release it.
 * - The call fails if the number of remaining instances would fall below the minimum number of instances (`MinSize`).
 * A successful response confirms the Auto Scaling service has accepted the request, but does not guarantee the scaling activity will succeed. You must use the returned `ScalingActivityId` to check the execution status of the scaling activity.
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
 * @summary Resumes suspended processes in a scaling group. This operation allows Auto Scaling to proceed with executing these processes according to their predefined rules and logic. For example, if you resume the health check process in your scaling group, Auto Scaling automatically detects and removes any instances deemed unhealthy from the scaling group.
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
 * @summary Resumes suspended processes in a scaling group. This operation allows Auto Scaling to proceed with executing these processes according to their predefined rules and logic. For example, if you resume the health check process in your scaling group, Auto Scaling automatically detects and removes any instances deemed unhealthy from the scaling group.
 *
 * @param request ResumeProcessesRequest
 * @return ResumeProcessesResponse
 */
ResumeProcessesResponse Client::resumeProcesses(const ResumeProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeProcessesWithOptions(request, runtime);
}

/**
 * @summary Rolls back an instance refresh task. If an instance refresh task cannot meet your business requirements, you can call the RollbackInstanceRefresh operation. When you roll back an instance refresh task, Auto Scaling creates new instances based on the active scaling configuration to replace the instances whose configurations are already updated by running the task.
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
 * @summary Rolls back an instance refresh task. If an instance refresh task cannot meet your business requirements, you can call the RollbackInstanceRefresh operation. When you roll back an instance refresh task, Auto Scaling creates new instances based on the active scaling configuration to replace the instances whose configurations are already updated by running the task.
 *
 * @param request RollbackInstanceRefreshRequest
 * @return RollbackInstanceRefreshResponse
 */
RollbackInstanceRefreshResponse Client::rollbackInstanceRefresh(const RollbackInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackInstanceRefreshWithOptions(request, runtime);
}

/**
 * @summary Unlike the ExecuteScalingRule API, you can use the ScaleWithAdjustment API to trigger elastic scaling based on a specified adjustment rule, without first creating a scaling rule.
 *
 * @description - Ensure the following conditions are met before calling this operation:
 *   - The scaling group is in the Active state.
 *   - No scaling activities are in progress in the scaling group.
 * - This operation bypasses the cooldown to immediately execute a scaling activity, provided no other scaling activities are in progress.
 * - If adding the specified ECS instances would cause the total capacity to exceed the maximum size, Auto Scaling sets the total capacity to the maximum size.
 * - If removing the specified ECS instances would reduce the total capacity below the minimum size, Auto Scaling sets the total capacity to the minimum size.
 * A successful response indicates that the API request was accepted, but this does not guarantee that the scaling activity will succeed. You must use the returned `ScalingActivityId` to check the status of the scaling activity.
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
 * @summary Unlike the ExecuteScalingRule API, you can use the ScaleWithAdjustment API to trigger elastic scaling based on a specified adjustment rule, without first creating a scaling rule.
 *
 * @description - Ensure the following conditions are met before calling this operation:
 *   - The scaling group is in the Active state.
 *   - No scaling activities are in progress in the scaling group.
 * - This operation bypasses the cooldown to immediately execute a scaling activity, provided no other scaling activities are in progress.
 * - If adding the specified ECS instances would cause the total capacity to exceed the maximum size, Auto Scaling sets the total capacity to the maximum size.
 * - If removing the specified ECS instances would reduce the total capacity below the minimum size, Auto Scaling sets the total capacity to the minimum size.
 * A successful response indicates that the API request was accepted, but this does not guarantee that the scaling activity will succeed. You must use the returned `ScalingActivityId` to check the status of the scaling activity.
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
 * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\\\\\&M hurdles efficiently.
 *
 * @description 伸缩组会检测并移出处于不健康状态的ECS实例或ECI实例，如果您需要保留指定的ECS实例或ECI实例，请将ECS实例或ECI实例转入备用或者保护状态，更多信息，请参见[EnterStandby](https://help.aliyun.com/document_detail/459345.html)和[SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html)。
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
 * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\\\\\&M hurdles efficiently.
 *
 * @description 伸缩组会检测并移出处于不健康状态的ECS实例或ECI实例，如果您需要保留指定的ECS实例或ECI实例，请将ECS实例或ECI实例转入备用或者保护状态，更多信息，请参见[EnterStandby](https://help.aliyun.com/document_detail/459345.html)和[SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html)。
 *
 * @param request SetInstanceHealthRequest
 * @return SetInstanceHealthResponse
 */
SetInstanceHealthResponse Client::setInstanceHealth(const SetInstanceHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstanceHealthWithOptions(request, runtime);
}

/**
 * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
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
 * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
 *
 * @param request SetInstancesProtectionRequest
 * @return SetInstancesProtectionResponse
 */
SetInstancesProtectionResponse Client::setInstancesProtection(const SetInstancesProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstancesProtectionWithOptions(request, runtime);
}

/**
 * @summary Refreshes instances in a scaling group when you need to apply a new scaling configuration or update the image used by instances in the scaling group.
 *
 * @description - Only one instance refresh node can run in a scaling group at a time.
 * - This feature is supported only for ECS scaling groups whose scale-out policy is set to **Priority Policy**. Scaling groups that use **vCPU-based capacity calculation** and scaling groups whose instance revoke pattern is set to **Shutdown and Revoke Pattern** or **Forced Shutdown and Revoke Pattern** do not support this feature.
 * - During an instance refresh, normal scale-out and scale-in operations can proceed. However, scale-out operations use the desired configuration specified in the instance refresh node.
 * - Instances that are manually added to the scaling group, or instances in the standby state or protection status, are ignored by the instance refresh node and do not participate in the refresh.
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
 * @summary Refreshes instances in a scaling group when you need to apply a new scaling configuration or update the image used by instances in the scaling group.
 *
 * @description - Only one instance refresh node can run in a scaling group at a time.
 * - This feature is supported only for ECS scaling groups whose scale-out policy is set to **Priority Policy**. Scaling groups that use **vCPU-based capacity calculation** and scaling groups whose instance revoke pattern is set to **Shutdown and Revoke Pattern** or **Forced Shutdown and Revoke Pattern** do not support this feature.
 * - During an instance refresh, normal scale-out and scale-in operations can proceed. However, scale-out operations use the desired configuration specified in the instance refresh node.
 * - Instances that are manually added to the scaling group, or instances in the standby state or protection status, are ignored by the instance refresh node and do not participate in the refresh.
 *
 * @param request StartInstanceRefreshRequest
 * @return StartInstanceRefreshResponse
 */
StartInstanceRefreshResponse Client::startInstanceRefresh(const StartInstanceRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceRefreshWithOptions(request, runtime);
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
 * @summary Checks whether the specified Alibaba Cloud account assumes the AliyunServiceRoleForAutoScaling service-linked role. An account can be used to operate Elastic Compute Service (ECS) instances and elastic container instances only after it assumes the service-linked role.
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
 * @summary Checks whether the specified Alibaba Cloud account assumes the AliyunServiceRoleForAutoScaling service-linked role. An account can be used to operate Elastic Compute Service (ECS) instances and elastic container instances only after it assumes the service-linked role.
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