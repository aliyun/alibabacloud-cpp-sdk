// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ESS20220222_HPP_
#define ALIBABACLOUD_ESS20220222_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ess20220222Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ess20220222.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies a scaling configuration of the Elastic Container Instance type. If you want to create and manage scaling configurations of the Elastic Container Instance type by using a configuration file, you can call the ApplyEciScalingConfiguration operation.
       *
       * @description Before you use a YAML configuration file to manage scaling configurations of the Elastic Container Instance type, you must take note of the following items:
       * *   If you include a scaling configuration ID within your request, the system updates the scaling configuration based on the YAML configuration file.
       * *   If you do not include a scaling configuration ID within your request, the system creates a scaling configuration of the Elastic Container Instance type based on the YAML configuration file.
       *
       * @param request ApplyEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyEciScalingConfigurationResponse
       */
      Models::ApplyEciScalingConfigurationResponse applyEciScalingConfigurationWithOptions(const Models::ApplyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a scaling configuration of the Elastic Container Instance type. If you want to create and manage scaling configurations of the Elastic Container Instance type by using a configuration file, you can call the ApplyEciScalingConfiguration operation.
       *
       * @description Before you use a YAML configuration file to manage scaling configurations of the Elastic Container Instance type, you must take note of the following items:
       * *   If you include a scaling configuration ID within your request, the system updates the scaling configuration based on the YAML configuration file.
       * *   If you do not include a scaling configuration ID within your request, the system creates a scaling configuration of the Elastic Container Instance type based on the YAML configuration file.
       *
       * @param request ApplyEciScalingConfigurationRequest
       * @return ApplyEciScalingConfigurationResponse
       */
      Models::ApplyEciScalingConfigurationResponse applyEciScalingConfiguration(const Models::ApplyEciScalingConfigurationRequest &request);

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
      Models::ApplyScalingGroupResponse applyScalingGroupWithOptions(const Models::ApplyScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ApplyScalingGroupResponse applyScalingGroup(const Models::ApplyScalingGroupRequest &request);

      /**
       * @summary Attaches Application Load Balancer (ALB) server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachAlbServerGroups operation. By attaching ALB server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @description Before you call the operation to attach an ALB server group to your scaling group, make sure that the following requirements are met:
       * *   The scaling group and the ALB server group share the same virtual private cloud (VPC).
       * *   The ALB server group is in the Available state.
       *
       * @param request AttachAlbServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAlbServerGroupsResponse
       */
      Models::AttachAlbServerGroupsResponse attachAlbServerGroupsWithOptions(const Models::AttachAlbServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches Application Load Balancer (ALB) server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachAlbServerGroups operation. By attaching ALB server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @description Before you call the operation to attach an ALB server group to your scaling group, make sure that the following requirements are met:
       * *   The scaling group and the ALB server group share the same virtual private cloud (VPC).
       * *   The ALB server group is in the Available state.
       *
       * @param request AttachAlbServerGroupsRequest
       * @return AttachAlbServerGroupsResponse
       */
      Models::AttachAlbServerGroupsResponse attachAlbServerGroups(const Models::AttachAlbServerGroupsRequest &request);

      /**
       * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
       *
       * @description Before you attach an ApsaraDB RDS instance to a scaling group, make sure that the ApsaraDB RDS instance meets the following requirements:
       * *   The ApsaraDB RDS instance and the scaling group belong to the same Alibaba Cloud account.
       * *   The ApsaraDB RDS instance is unlocked. For information about the lock policy, see [ApsaraDB RDS usage notes](https://help.aliyun.com/document_detail/41872.html).
       * *   The ApsaraDB RDS instance is in the Running state.
       * *   The ApsaraDB RDS instance exists in the Alibaba Cloud account.
       * *   If you reattach an ApsaraDB RDS instance to a scaling group, the total number of attached ApsaraDB RDS instances of the scaling group remains unchanged. But Auto Scaling adds the private IP addresses of all Elastic Compute Service (ECS) instances in the scaling group to the IP address whitelist of the ApsaraDB RDS instance.
       * >  After you attach an ApsaraDB RDS instance to a scaling group, make sure that the number of IP addresses in the default whitelist of the ApsaraDB RDS instance is limited to 1,000. For information about IP address whitelists, see [Configure an IP address whitelist](https://help.aliyun.com/document_detail/96118.html).
       *
       * @param request AttachDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDBInstancesResponse
       */
      Models::AttachDBInstancesResponse attachDBInstancesWithOptions(const Models::AttachDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
       *
       * @description Before you attach an ApsaraDB RDS instance to a scaling group, make sure that the ApsaraDB RDS instance meets the following requirements:
       * *   The ApsaraDB RDS instance and the scaling group belong to the same Alibaba Cloud account.
       * *   The ApsaraDB RDS instance is unlocked. For information about the lock policy, see [ApsaraDB RDS usage notes](https://help.aliyun.com/document_detail/41872.html).
       * *   The ApsaraDB RDS instance is in the Running state.
       * *   The ApsaraDB RDS instance exists in the Alibaba Cloud account.
       * *   If you reattach an ApsaraDB RDS instance to a scaling group, the total number of attached ApsaraDB RDS instances of the scaling group remains unchanged. But Auto Scaling adds the private IP addresses of all Elastic Compute Service (ECS) instances in the scaling group to the IP address whitelist of the ApsaraDB RDS instance.
       * >  After you attach an ApsaraDB RDS instance to a scaling group, make sure that the number of IP addresses in the default whitelist of the ApsaraDB RDS instance is limited to 1,000. For information about IP address whitelists, see [Configure an IP address whitelist](https://help.aliyun.com/document_detail/96118.html).
       *
       * @param request AttachDBInstancesRequest
       * @return AttachDBInstancesResponse
       */
      Models::AttachDBInstancesResponse attachDBInstances(const Models::AttachDBInstancesRequest &request);

      /**
       * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
       *
       * @description Before you call this operation, take note of the following items:
       * *   The scaling group is in the Active state.
       * *   No scaling activities in the scaling group are in progress.
       * The ECS instances or the elastic container instances that you want to add to a scaling group must meet the following requirements:
       * *   The instances reside in the same region as the scaling group.
       * *   The instances must be in the Running state.
       * *   The instances are not added to other scaling groups.
       * *   The instances use the subscription or pay-as-you-go billing method, or are preemptible instances.
       * *   If the VswitchID parameter is specified for a scaling group, the instances that are in the classic network or those that are not in the same virtual private cloud (VPC) as the specified vSwitch cannot be added to the scaling group.
       * *   If the VswitchID parameter is not specified for a scaling group, the instances that are in VPCs cannot be added to the scaling group.
       * If no scaling activities in the specified scaling group are in progress, the operation can trigger scaling activities even before the cooldown time expires.
       * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity by using the value of the ScalingActivityId parameter in the response.
       * If the sum of the number of instances that you want to add and the number of existing instances in the scaling group is greater than the value of the MaxSize parameter, the call fails.
       * Instances that are manually added by calling the AttachInstances operation are not associated with the active scaling configuration of the scaling group.
       *
       * @param request AttachInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstancesWithOptions(const Models::AttachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
       *
       * @description Before you call this operation, take note of the following items:
       * *   The scaling group is in the Active state.
       * *   No scaling activities in the scaling group are in progress.
       * The ECS instances or the elastic container instances that you want to add to a scaling group must meet the following requirements:
       * *   The instances reside in the same region as the scaling group.
       * *   The instances must be in the Running state.
       * *   The instances are not added to other scaling groups.
       * *   The instances use the subscription or pay-as-you-go billing method, or are preemptible instances.
       * *   If the VswitchID parameter is specified for a scaling group, the instances that are in the classic network or those that are not in the same virtual private cloud (VPC) as the specified vSwitch cannot be added to the scaling group.
       * *   If the VswitchID parameter is not specified for a scaling group, the instances that are in VPCs cannot be added to the scaling group.
       * If no scaling activities in the specified scaling group are in progress, the operation can trigger scaling activities even before the cooldown time expires.
       * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity by using the value of the ScalingActivityId parameter in the response.
       * If the sum of the number of instances that you want to add and the number of existing instances in the scaling group is greater than the value of the MaxSize parameter, the call fails.
       * Instances that are manually added by calling the AttachInstances operation are not associated with the active scaling configuration of the scaling group.
       *
       * @param request AttachInstancesRequest
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstances(const Models::AttachInstancesRequest &request);

      /**
       * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The load balancer and the scaling group belong to the same Alibaba Cloud account and region.
       * *   The load balancer is in the `Running` state.
       * *   At least one listener is configured for the load balancer, and the health check feature is enabled for the load balancer.
       * *   If the network type of the load balancer and the scaling group is virtual private cloud (VPC), they use the same VPC.
       * *   If the network type of the scaling group is VPC, and that of the load balancer is classic network and a backend server of the load balancer uses a VPC, the scaling group and the backend server use the same VPC.
       * *   The attachment of load balancers ensures that the cumulative number of load balancers attached to the scaling group stays within the predefined maximum limit. For information about the load balancer quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       *
       * @param request AttachLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachLoadBalancersResponse
       */
      Models::AttachLoadBalancersResponse attachLoadBalancersWithOptions(const Models::AttachLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The load balancer and the scaling group belong to the same Alibaba Cloud account and region.
       * *   The load balancer is in the `Running` state.
       * *   At least one listener is configured for the load balancer, and the health check feature is enabled for the load balancer.
       * *   If the network type of the load balancer and the scaling group is virtual private cloud (VPC), they use the same VPC.
       * *   If the network type of the scaling group is VPC, and that of the load balancer is classic network and a backend server of the load balancer uses a VPC, the scaling group and the backend server use the same VPC.
       * *   The attachment of load balancers ensures that the cumulative number of load balancers attached to the scaling group stays within the predefined maximum limit. For information about the load balancer quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       *
       * @param request AttachLoadBalancersRequest
       * @return AttachLoadBalancersResponse
       */
      Models::AttachLoadBalancersResponse attachLoadBalancers(const Models::AttachLoadBalancersRequest &request);

      /**
       * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request AttachServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachServerGroupsResponse
       */
      Models::AttachServerGroupsResponse attachServerGroupsWithOptions(const Models::AttachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request AttachServerGroupsRequest
       * @return AttachServerGroupsResponse
       */
      Models::AttachServerGroupsResponse attachServerGroups(const Models::AttachServerGroupsRequest &request);

      /**
       * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The CLB instance and the scaling group belong to the same Alibaba Cloud account.
       *     *   The CLB instance and the scaling group reside in the same region.
       *     *   The CLB instance is in the Running state.
       *     *   The CLB instance is configured with at least one listener. The health check feature is enabled for the CLB instance.
       *     *   If the network type of both the CLB instance and the scaling group is virtual private cloud (VPC), they use the same VPC.
       *     *   If the network type of the scaling group is VPC and the network type of the CLB instance is classic network, any backend server of the CLB instance within a VPC setup shares the same VPC as the scaling group.
       *     *   The vServer groups that you want to attach to the scaling group belong to the CLB instance.
       *     *   The operation to attach vServer groups does not result in the total number of vServer groups exceeding the predefined quota limit. For information about the vServer group quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       * *   When you call this operation to attach vServer groups, you must specify the following parameters:
       *     *   LoadBalancerId: the ID of the CLB instance
       *     *   VServerGroupId: the ID of the vServer group
       *     *   Port: the port number of the vServer group
       *     **
       *     **Note** If you attempt to attach the same vServer group to a scaling group multiple times over the identical port, the system regards each attempt as a separate vServer group attachment to the scaling group. In your request, if you include the same vServer group ID coupled with the same port number multiple times, only the first configuration of the vServer group and port number pairing is considered valid. Subsequent vServer group and port number parings are disregarded.
       *
       * @param request AttachVServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVServerGroupsResponse
       */
      Models::AttachVServerGroupsResponse attachVServerGroupsWithOptions(const Models::AttachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The CLB instance and the scaling group belong to the same Alibaba Cloud account.
       *     *   The CLB instance and the scaling group reside in the same region.
       *     *   The CLB instance is in the Running state.
       *     *   The CLB instance is configured with at least one listener. The health check feature is enabled for the CLB instance.
       *     *   If the network type of both the CLB instance and the scaling group is virtual private cloud (VPC), they use the same VPC.
       *     *   If the network type of the scaling group is VPC and the network type of the CLB instance is classic network, any backend server of the CLB instance within a VPC setup shares the same VPC as the scaling group.
       *     *   The vServer groups that you want to attach to the scaling group belong to the CLB instance.
       *     *   The operation to attach vServer groups does not result in the total number of vServer groups exceeding the predefined quota limit. For information about the vServer group quota, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       * *   When you call this operation to attach vServer groups, you must specify the following parameters:
       *     *   LoadBalancerId: the ID of the CLB instance
       *     *   VServerGroupId: the ID of the vServer group
       *     *   Port: the port number of the vServer group
       *     **
       *     **Note** If you attempt to attach the same vServer group to a scaling group multiple times over the identical port, the system regards each attempt as a separate vServer group attachment to the scaling group. In your request, if you include the same vServer group ID coupled with the same port number multiple times, only the first configuration of the vServer group and port number pairing is considered valid. Subsequent vServer group and port number parings are disregarded.
       *
       * @param request AttachVServerGroupsRequest
       * @return AttachVServerGroupsResponse
       */
      Models::AttachVServerGroupsResponse attachVServerGroups(const Models::AttachVServerGroupsRequest &request);

      /**
       * @summary Cancels an instance refresh task. Take note that instances whose configurations were already updated by running an instance refresh task remain intact even after you cancel the task.
       *
       * @description *   You cannot call this operation to cancel instance refresh tasks that are being rolled back.
       *
       * @param request CancelInstanceRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelInstanceRefreshResponse
       */
      Models::CancelInstanceRefreshResponse cancelInstanceRefreshWithOptions(const Models::CancelInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an instance refresh task. Take note that instances whose configurations were already updated by running an instance refresh task remain intact even after you cancel the task.
       *
       * @description *   You cannot call this operation to cancel instance refresh tasks that are being rolled back.
       *
       * @param request CancelInstanceRefreshRequest
       * @return CancelInstanceRefreshResponse
       */
      Models::CancelInstanceRefreshResponse cancelInstanceRefresh(const Models::CancelInstanceRefreshRequest &request);

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
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes a resource group. Resource groups are a means to categorize and manage cloud resources, such as scaling groups, based on specific objectives, permissions, or ownership. In large, multifaceted organizations that manage numerous projects and users, this feature adopts a tiered management approach, simplifying management tasks and improving the effectiveness and oversight of resource allocation. You can call the ChangeResourceGroup operation to move your scaling groups from one resource group to another resource group, which facilitates streamlined monitoring and management within the context of the new group. This operation eliminates the need for repetitive and time-consuming cross-service resource queries, thereby enhancing operational efficiency.
       *
       * @description *   A resource is an entity of cloud services that you create on Alibaba Cloud. For example, a scaling group is a resource.
       * *   A resource group serves as a powerful organizational tool within your Alibaba Cloud account, enabling you to manage and monitor multiple resources collectively. It effectively addresses complexities surrounding resource categorization and permission control under a single Alibaba Cloud account, thereby enhancing management efficiency and control. For more information, see [What is resource management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Ends the timeout period of a lifecycle hook ahead of schedule. If you have created a lifecycle hook for your scaling group, you can call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule based on your business requirements.
       *
       * @description When you manually cut short the timeout period of a lifecycle hook, Auto Scaling proceeds with one of the following actions based on the predefined settings: responding to the scaling request, aborting the scaling request, and initiating a rollback process.
       *
       * @param request CompleteLifecycleActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteLifecycleActionResponse
       */
      Models::CompleteLifecycleActionResponse completeLifecycleActionWithOptions(const Models::CompleteLifecycleActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends the timeout period of a lifecycle hook ahead of schedule. If you have created a lifecycle hook for your scaling group, you can call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule based on your business requirements.
       *
       * @description When you manually cut short the timeout period of a lifecycle hook, Auto Scaling proceeds with one of the following actions based on the predefined settings: responding to the scaling request, aborting the scaling request, and initiating a rollback process.
       *
       * @param request CompleteLifecycleActionRequest
       * @return CompleteLifecycleActionResponse
       */
      Models::CompleteLifecycleActionResponse completeLifecycleAction(const Models::CompleteLifecycleActionRequest &request);

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
      Models::CreateAlarmResponse createAlarmWithOptions(const Models::CreateAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateAlarmResponse createAlarm(const Models::CreateAlarmRequest &request);

      /**
       * @summary Creates a diagnostic report.
       *
       * @param request CreateDiagnoseReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnoseReportResponse
       */
      Models::CreateDiagnoseReportResponse createDiagnoseReportWithOptions(const Models::CreateDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostic report.
       *
       * @param request CreateDiagnoseReportRequest
       * @return CreateDiagnoseReportResponse
       */
      Models::CreateDiagnoseReportResponse createDiagnoseReport(const Models::CreateDiagnoseReportRequest &request);

      /**
       * @summary Creates a scaling configuration of the Elastic Container Instance type. Auto Scaling uses the scaling configuration as a template to create elastic container instances to meet your business requirements during scale-out events.
       *
       * @description A scaling configuration is a template that is used to create elastic container instances during scale-out events.
       * You can specify CPU and Memory to determine the range of instance types. Then, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Auto Scaling preferentially creates elastic container instances by using the lowest-priced instance type. This method applies only if you set Scaling Policy to Cost Optimization Policy and no instance type is specified in the scaling configuration.
       *
       * @param request CreateEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEciScalingConfigurationResponse
       */
      Models::CreateEciScalingConfigurationResponse createEciScalingConfigurationWithOptions(const Models::CreateEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling configuration of the Elastic Container Instance type. Auto Scaling uses the scaling configuration as a template to create elastic container instances to meet your business requirements during scale-out events.
       *
       * @description A scaling configuration is a template that is used to create elastic container instances during scale-out events.
       * You can specify CPU and Memory to determine the range of instance types. Then, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Auto Scaling preferentially creates elastic container instances by using the lowest-priced instance type. This method applies only if you set Scaling Policy to Cost Optimization Policy and no instance type is specified in the scaling configuration.
       *
       * @param request CreateEciScalingConfigurationRequest
       * @return CreateEciScalingConfigurationResponse
       */
      Models::CreateEciScalingConfigurationResponse createEciScalingConfiguration(const Models::CreateEciScalingConfigurationRequest &request);

      /**
       * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
       *
       * @description You can create a maximum of 10 lifecycle hooks for each scaling group. When a scaling activity occurs in a scaling group with a lifecycle hook, the hook pauses the activity for a specified period. This waiting period is determined by the HeartbeatTimeout parameter. You can perform custom operations, like initializing ECS instance configurations or querying ECS instance data, before the lifecycle hook expires.
       * During a scale-out event, the private IP addresses of ECS instances are added to the IP address whitelists of the associated ApsaraDB RDS instances. The ECS instances are then added to the backend server groups of the associated Server Load Balancer (SLB) instances only after the lifecycle hook times out. During a scale-in event, the private IP addresses of ECS instances are removed from the IP address whitelists of the associated ApsaraDB RDS instances. Additionally, the ECS instances are removed from the backend server groups of the associated SLB instances only after the lifecycle hook times out.
       * For each lifecycle hook, you must specify a notification recipient. When lifecycle hooks are triggered, notifications can be delivered through Simple Message Queue (SMQ, formerly MNS) topics, SMQ queues, or CloudOps Orchestration Service (OOS) templates. If you want to configure an OOS template, you must create a Resource Access Management (RAM) role for OOS. For more information, see [Use RAM to grant permissions to OOS](https://help.aliyun.com/document_detail/120810.html).
       * >  If your scaling group contains existing ECS instances and you\\"ve configured an OOS template to manage their private IP addresses in the whitelists of non-ApsaraDB RDS databases, you must manually add or remove those IPs from the whitelists.
       *
       * @param request CreateLifecycleHookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecycleHookResponse
       */
      Models::CreateLifecycleHookResponse createLifecycleHookWithOptions(const Models::CreateLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
       *
       * @description You can create a maximum of 10 lifecycle hooks for each scaling group. When a scaling activity occurs in a scaling group with a lifecycle hook, the hook pauses the activity for a specified period. This waiting period is determined by the HeartbeatTimeout parameter. You can perform custom operations, like initializing ECS instance configurations or querying ECS instance data, before the lifecycle hook expires.
       * During a scale-out event, the private IP addresses of ECS instances are added to the IP address whitelists of the associated ApsaraDB RDS instances. The ECS instances are then added to the backend server groups of the associated Server Load Balancer (SLB) instances only after the lifecycle hook times out. During a scale-in event, the private IP addresses of ECS instances are removed from the IP address whitelists of the associated ApsaraDB RDS instances. Additionally, the ECS instances are removed from the backend server groups of the associated SLB instances only after the lifecycle hook times out.
       * For each lifecycle hook, you must specify a notification recipient. When lifecycle hooks are triggered, notifications can be delivered through Simple Message Queue (SMQ, formerly MNS) topics, SMQ queues, or CloudOps Orchestration Service (OOS) templates. If you want to configure an OOS template, you must create a Resource Access Management (RAM) role for OOS. For more information, see [Use RAM to grant permissions to OOS](https://help.aliyun.com/document_detail/120810.html).
       * >  If your scaling group contains existing ECS instances and you\\"ve configured an OOS template to manage their private IP addresses in the whitelists of non-ApsaraDB RDS databases, you must manually add or remove those IPs from the whitelists.
       *
       * @param request CreateLifecycleHookRequest
       * @return CreateLifecycleHookResponse
       */
      Models::CreateLifecycleHookResponse createLifecycleHook(const Models::CreateLifecycleHookRequest &request);

      /**
       * @summary Creates a notification rule. You can call the CreateNotificationConfiguration operation to create a notification rule to stay informed about scaling events or resource changes. This helps you learn about the dynamic status of your scaling group in real time and further automates the management of scaling events.
       *
       * @description *   You can specify CloudMonitor system events, Simple Message Queue (SMQ, formerly MNS) topics, or SMQ queues as notification recipients. When a scaling event of the specified type or resource change occurs in your scaling group, Auto Scaling automatically sends notifications to CloudMonitor or SMQ.
       * *   You cannot specify the same recipient for notifications of different event types in a scaling group.
       *     For example, you cannot enable the same CloudMonitor system event, SMQ topic, or SMQ queue to receive notifications of different event types in a scaling group.
       *
       * @param request CreateNotificationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNotificationConfigurationResponse
       */
      Models::CreateNotificationConfigurationResponse createNotificationConfigurationWithOptions(const Models::CreateNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a notification rule. You can call the CreateNotificationConfiguration operation to create a notification rule to stay informed about scaling events or resource changes. This helps you learn about the dynamic status of your scaling group in real time and further automates the management of scaling events.
       *
       * @description *   You can specify CloudMonitor system events, Simple Message Queue (SMQ, formerly MNS) topics, or SMQ queues as notification recipients. When a scaling event of the specified type or resource change occurs in your scaling group, Auto Scaling automatically sends notifications to CloudMonitor or SMQ.
       * *   You cannot specify the same recipient for notifications of different event types in a scaling group.
       *     For example, you cannot enable the same CloudMonitor system event, SMQ topic, or SMQ queue to receive notifications of different event types in a scaling group.
       *
       * @param request CreateNotificationConfigurationRequest
       * @return CreateNotificationConfigurationResponse
       */
      Models::CreateNotificationConfigurationResponse createNotificationConfiguration(const Models::CreateNotificationConfigurationRequest &request);

      /**
       * @summary Creates scaling configurations. When you call the CreateScalingConfiguration operation, you can specify the scaling group ID, instance type, and image to create a scaling configuration of the Elastic Compute Service (ECS) type.
       *
       * @description Auto Scaling automatically creates Elastic Compute Service (ECS) instances based on the specified scaling configuration. ECS instances can be created in the following modes:
       * *   InstancePatternInfos: intelligent configuration mode. In this mode, you need to only specify the number of vCPUs, memory size, instance family, and maximum price. Auto Scaling selects the instance type that has the lowest price based on the configurations to create ECS instances. This mode is available only for scaling groups that reside in virtual private clouds (VPCs). This mode reduces scale-out failures caused by insufficient inventory of instance types.
       * *   InstanceType: In this mode, you must specify one instance type.
       * *   InstanceTypes: In this mode, you can specify more than one instance type.
       * *   InstanceTypeOverrides: In this mode, you can specify multiple instance types and weights for the instance types.
       * *   Cpu and Memory: In this mode, you must specify the number of vCPUs and the memory size. Auto Scaling determines the range of available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling creates ECS instances by using the lowest-priced instance type. This mode is available only if Scaling Policy is set to Cost Optimization Policy and no instance type is specified in the scaling configuration.
       * > You cannot specify InstanceType, InstanceTypes, InstanceTypeOverrides, and Cpu and Memory at the same time. You can specify InstanceType and InstancePatternInfos or specify InstanceTypes and InstancePatternInfo at the same time. If you specify InstanceType and InstancePatternInfos or specify InstanceTypes and InstancePatternInfos at the same time, Auto Scaling preferentially uses the instance types that are specified by InstanceType or InstanceTypes for scale-outs. If the instance types that are specified by InstanceType or InstanceTypes do not have sufficient inventory, Auto Scaling uses the instance types that are specified by InstancePatternInfos for scale-outs.
       *
       * @param tmpReq CreateScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScalingConfigurationResponse
       */
      Models::CreateScalingConfigurationResponse createScalingConfigurationWithOptions(const Models::CreateScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates scaling configurations. When you call the CreateScalingConfiguration operation, you can specify the scaling group ID, instance type, and image to create a scaling configuration of the Elastic Compute Service (ECS) type.
       *
       * @description Auto Scaling automatically creates Elastic Compute Service (ECS) instances based on the specified scaling configuration. ECS instances can be created in the following modes:
       * *   InstancePatternInfos: intelligent configuration mode. In this mode, you need to only specify the number of vCPUs, memory size, instance family, and maximum price. Auto Scaling selects the instance type that has the lowest price based on the configurations to create ECS instances. This mode is available only for scaling groups that reside in virtual private clouds (VPCs). This mode reduces scale-out failures caused by insufficient inventory of instance types.
       * *   InstanceType: In this mode, you must specify one instance type.
       * *   InstanceTypes: In this mode, you can specify more than one instance type.
       * *   InstanceTypeOverrides: In this mode, you can specify multiple instance types and weights for the instance types.
       * *   Cpu and Memory: In this mode, you must specify the number of vCPUs and the memory size. Auto Scaling determines the range of available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling creates ECS instances by using the lowest-priced instance type. This mode is available only if Scaling Policy is set to Cost Optimization Policy and no instance type is specified in the scaling configuration.
       * > You cannot specify InstanceType, InstanceTypes, InstanceTypeOverrides, and Cpu and Memory at the same time. You can specify InstanceType and InstancePatternInfos or specify InstanceTypes and InstancePatternInfo at the same time. If you specify InstanceType and InstancePatternInfos or specify InstanceTypes and InstancePatternInfos at the same time, Auto Scaling preferentially uses the instance types that are specified by InstanceType or InstanceTypes for scale-outs. If the instance types that are specified by InstanceType or InstanceTypes do not have sufficient inventory, Auto Scaling uses the instance types that are specified by InstancePatternInfos for scale-outs.
       *
       * @param request CreateScalingConfigurationRequest
       * @return CreateScalingConfigurationResponse
       */
      Models::CreateScalingConfigurationResponse createScalingConfiguration(const Models::CreateScalingConfigurationRequest &request);

      /**
       * @summary Creates a scaling group. You can call the CreateScalingGroup operation to automate the adjustment of computing power of a specific type based on your business requirements and scaling polices.
       *
       * @description A scaling group is a group of Elastic Compute Service (ECS) instances that can be used for similar purposes.
       * You can create only a limited number of scaling groups in a region. To check the quota of the scaling groups, go to Quota Center.
       * A scaling group does not immediately take effect after you create the scaling group. You can call the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable a scaling group. You can trigger scaling events and execute scaling rules only in scaling groups that are in the Enabled state.
       * If you want to attach a Classic Load Balancer (CLB, formerly known as SLB) instance and an ApsaraDB RDS instance to the scaling group that you want to create, the scaling group, the CLB instance, and the ApsaraDB RDS instance must reside in the same region. For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
       * If you attach a CLB instance to the scaling group that you want to create, Auto Scaling automatically adds the ECS instances in the scaling group to the backend server groups of the CLB instance. You can specify the following types of server groups to add ECS instances:
       * *   Default server group: ECS instances in this group process frontend requests. If no listeners are configured for vServer groups or primary/secondary server groups, the frontend requests are forwarded to the ECS instances in the default server group.
       * *   vServer group: If you want to forward different requests to different backend servers, or you want to forward requests based on domain names or URLs, you can specify vServer groups.
       * >  If you specify both the default server group and multiple server groups simultaneously, Auto Scaling adds the ECS instances in your scaling group to these server groups concurrently.
       * The default weight of each ECS instance as a backend server is 50. If you want to attach a CLB instance to the scaling group that you want to create, make sure that the CLB instance meets the following requirements:
       * *   The CLB instance is in the Active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to query the status of CLB instances.
       * *   Health check must be enabled on all listener ports configured for the CLB instance. Otherwise, the scaling group will fail to be created.
       * If you attach Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups to the scaling group that you want to create, Auto Scaling adds the ECS instances in your scaling group to the ALB or NLB server groups to process the access requests forwarded by the corresponding ALB or NLB instances. You can attach multiple ALB or NLB server groups to a scaling group. Make sure that the ALB or NLB server groups belong to the same virtual private cloud (VPC). For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
       * If you attach an ApsaraDB RDS instance to the scaling group that you want to create, Auto Scaling automatically adds the private IP addresses of the ECS instances in your scaling group to the IP address whitelist of the ApsaraDB RDS instance. Before you attach an ApsaraDB RDS instance to your scaling group, make sure that the ApsaraDB RDS instance meets the following requirements:
       * *   The ApsaraDB RDS instance is in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) state to query the status of ApsaraDB RDS instances.
       * *   The number of IP addresses in the IP address whitelist of the ApsaraDB RDS instance does not reach its upper limit. For more information, see [Configure a whitelist](https://help.aliyun.com/document_detail/43185.html).
       * If you set MultiAZPolicy for the scaling group that you want to create to COST_OPTIMIZED, the following rules apply:
       * *   If you use OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, and SpotInstancePools to specify the instance allocation mode under the cost optimization policy, Auto Scaling prioritizes the implementation of the specified instance allocation mode during scale-out events.
       * *   If you do not specify OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, or SpotInstancePools, Auto Scaling preferentially creates instances of the lowest-priced instance type based on the cost optimization policy.
       * If you set `Tags.Propagate` to true, the following rules will apply:
       * *   Tags that you add to the scaling group cannot be propagated to existing instances in the scaling group. Tags that you add to the scaling group are propagated to only new instances.
       * *   If you specify instance tags in the scaling configuration that is used to create instances and propagate the tags that you add to the scaling group to the instances, all tags exist at the same time.
       * *   If the tag key that you specify in a scaling configuration and the tag key that you add to the scaling group of the scaling configuration are the same, the tag value that you specify in the scaling configuration is preferentially used.
       *
       * @param request CreateScalingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScalingGroupResponse
       */
      Models::CreateScalingGroupResponse createScalingGroupWithOptions(const Models::CreateScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling group. You can call the CreateScalingGroup operation to automate the adjustment of computing power of a specific type based on your business requirements and scaling polices.
       *
       * @description A scaling group is a group of Elastic Compute Service (ECS) instances that can be used for similar purposes.
       * You can create only a limited number of scaling groups in a region. To check the quota of the scaling groups, go to Quota Center.
       * A scaling group does not immediately take effect after you create the scaling group. You can call the [EnableScalingGroup](https://help.aliyun.com/document_detail/25939.html) operation to enable a scaling group. You can trigger scaling events and execute scaling rules only in scaling groups that are in the Enabled state.
       * If you want to attach a Classic Load Balancer (CLB, formerly known as SLB) instance and an ApsaraDB RDS instance to the scaling group that you want to create, the scaling group, the CLB instance, and the ApsaraDB RDS instance must reside in the same region. For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
       * If you attach a CLB instance to the scaling group that you want to create, Auto Scaling automatically adds the ECS instances in the scaling group to the backend server groups of the CLB instance. You can specify the following types of server groups to add ECS instances:
       * *   Default server group: ECS instances in this group process frontend requests. If no listeners are configured for vServer groups or primary/secondary server groups, the frontend requests are forwarded to the ECS instances in the default server group.
       * *   vServer group: If you want to forward different requests to different backend servers, or you want to forward requests based on domain names or URLs, you can specify vServer groups.
       * >  If you specify both the default server group and multiple server groups simultaneously, Auto Scaling adds the ECS instances in your scaling group to these server groups concurrently.
       * The default weight of each ECS instance as a backend server is 50. If you want to attach a CLB instance to the scaling group that you want to create, make sure that the CLB instance meets the following requirements:
       * *   The CLB instance is in the Active state. You can call the [DescribeLoadBalancers](https://help.aliyun.com/document_detail/2401696.html) operation to query the status of CLB instances.
       * *   Health check must be enabled on all listener ports configured for the CLB instance. Otherwise, the scaling group will fail to be created.
       * If you attach Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups to the scaling group that you want to create, Auto Scaling adds the ECS instances in your scaling group to the ALB or NLB server groups to process the access requests forwarded by the corresponding ALB or NLB instances. You can attach multiple ALB or NLB server groups to a scaling group. Make sure that the ALB or NLB server groups belong to the same virtual private cloud (VPC). For more information, see [AttachAlbServerGroups](https://help.aliyun.com/document_detail/266800.html) or [AttachServerGroups](https://help.aliyun.com/document_detail/600535.html).
       * If you attach an ApsaraDB RDS instance to the scaling group that you want to create, Auto Scaling automatically adds the private IP addresses of the ECS instances in your scaling group to the IP address whitelist of the ApsaraDB RDS instance. Before you attach an ApsaraDB RDS instance to your scaling group, make sure that the ApsaraDB RDS instance meets the following requirements:
       * *   The ApsaraDB RDS instance is in the Running state. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) state to query the status of ApsaraDB RDS instances.
       * *   The number of IP addresses in the IP address whitelist of the ApsaraDB RDS instance does not reach its upper limit. For more information, see [Configure a whitelist](https://help.aliyun.com/document_detail/43185.html).
       * If you set MultiAZPolicy for the scaling group that you want to create to COST_OPTIMIZED, the following rules apply:
       * *   If you use OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, and SpotInstancePools to specify the instance allocation mode under the cost optimization policy, Auto Scaling prioritizes the implementation of the specified instance allocation mode during scale-out events.
       * *   If you do not specify OnDemandBaseCapacity, OnDemandPercentageAboveBaseCapacity, or SpotInstancePools, Auto Scaling preferentially creates instances of the lowest-priced instance type based on the cost optimization policy.
       * If you set `Tags.Propagate` to true, the following rules will apply:
       * *   Tags that you add to the scaling group cannot be propagated to existing instances in the scaling group. Tags that you add to the scaling group are propagated to only new instances.
       * *   If you specify instance tags in the scaling configuration that is used to create instances and propagate the tags that you add to the scaling group to the instances, all tags exist at the same time.
       * *   If the tag key that you specify in a scaling configuration and the tag key that you add to the scaling group of the scaling configuration are the same, the tag value that you specify in the scaling configuration is preferentially used.
       *
       * @param request CreateScalingGroupRequest
       * @return CreateScalingGroupResponse
       */
      Models::CreateScalingGroupResponse createScalingGroup(const Models::CreateScalingGroupRequest &request);

      /**
       * @summary Creates a scaling rule. The purpose of a scaling rule varies based on its type. You can use a scaling rule to trigger a scaling activity or adjust the boundary values for a scaling group. You can call the CreateScalingRule operation to create different types of scaling rules based on your business requirements. For example, if your business requires only automatic adjustment of the boundary values for your scaling group, you can call this operation to create a predictive scaling rule.
       *
       * @description A scaling rule defines the specific scaling action. For example, you can use a scaling rule to define N instances to add or remove. If the execution of a scaling rule causes the total number of Elastic Compute Service (ECS) instances or elastic container instances in the scaling group to drop below the value of MinSize or to exceed the value of MaxSize, Auto Scaling adjusts the number of instances to add or remove, which ensures that the total number of instances stays within the valid range. Take note that Auto Scaling does not adjust the number of instances that you defined in the scaling rule. Examples:
       * *   The maximum number of instances (MaxSize) that can be contained in a scaling group is 3 and the current number of instances (Total Capacity) in the scaling group is 2. In this example, the Add3 scaling rule is created to add three ECS instances to the scaling group. However, after you execute Add3, Auto Scaling adds only one ECS instance to the scaling group. In addition, the number of ECS instances to add in the Add3 scaling rule remains unchanged.
       * *   The minimum number of instances (MinSize) that must be contained in a scaling group is 2 and the current number of instances (Total Capacity) is 3. In this example, the Remove5 scaling rule is created to remove five ECS instances from the scaling group. However, after you execute Remove5, Auto Scaling only removes one ECS instance from the scaling group. In addition, the number of ECS instances to remove in the Remove5 scaling rule remains unchanged.
       * Before you call this operation, take note of the following items:
       * *   If you set AdjustmentType to TotalCapacity, the total number of ECS instances or elastic container instances in your scaling group will be adjusted to a specified number when the scaling rule that you create by calling this operation is executed. You must set AdjustmentValue to an integer that is greater than 0.
       * *   If you set AdjustmentType to QuantityChangeInCapacity or PercentChangeInCapacity, a positive value of AdjustmentValue specifies that a specific number of ECS instances or elastic container instances will be added to your scaling group, and a negative value of AdjustmentValue specifies that a specific number of ECS instances or elastic container instances will be removed from the scaling group.
       * *   If you set AdjustmentType to PercentChangeInCapacity, Auto Scaling calculates the number of ECS instances or elastic container instances to add or remove by multiplying the current capacity of the scaling group (Total Capacity) by AdjustmentValue divided by 100, rounding off the result to determine the final adjustment count.
       * *   If you specify a cooldown period for a scaling rule, the cooldown period of the scaling rule takes effect after you execute the scaling rule. If you do not specify a cooldown period for a scaling rule, the value of DefaultCooldown of the scaling group takes effect after you execute the scaling rule.
       * *   You can create only a limited number of scaling rules for a scaling group. For more information, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       * *   The following API operations may use the unique identifier of a scaling rule (ScalingRuleAri) that is returned after you call the CreateScalingRule operation:
       *     *   ExecuteScalingRule: You can call this operation to manually execute a scaling rule. In this operation, you can set ScalingRuleAri to the unique identifier of the scaling rule that you want to execute.
       *     *   CreateScheduledTask: You can call this operation to create a scheduled task for a scaling rule. In this operation, you can set ScalingRuleAri to the unique identifier of the scaling rule for which you want to create a scheduled task.
       *
       * @param request CreateScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRuleWithOptions(const Models::CreateScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling rule. The purpose of a scaling rule varies based on its type. You can use a scaling rule to trigger a scaling activity or adjust the boundary values for a scaling group. You can call the CreateScalingRule operation to create different types of scaling rules based on your business requirements. For example, if your business requires only automatic adjustment of the boundary values for your scaling group, you can call this operation to create a predictive scaling rule.
       *
       * @description A scaling rule defines the specific scaling action. For example, you can use a scaling rule to define N instances to add or remove. If the execution of a scaling rule causes the total number of Elastic Compute Service (ECS) instances or elastic container instances in the scaling group to drop below the value of MinSize or to exceed the value of MaxSize, Auto Scaling adjusts the number of instances to add or remove, which ensures that the total number of instances stays within the valid range. Take note that Auto Scaling does not adjust the number of instances that you defined in the scaling rule. Examples:
       * *   The maximum number of instances (MaxSize) that can be contained in a scaling group is 3 and the current number of instances (Total Capacity) in the scaling group is 2. In this example, the Add3 scaling rule is created to add three ECS instances to the scaling group. However, after you execute Add3, Auto Scaling adds only one ECS instance to the scaling group. In addition, the number of ECS instances to add in the Add3 scaling rule remains unchanged.
       * *   The minimum number of instances (MinSize) that must be contained in a scaling group is 2 and the current number of instances (Total Capacity) is 3. In this example, the Remove5 scaling rule is created to remove five ECS instances from the scaling group. However, after you execute Remove5, Auto Scaling only removes one ECS instance from the scaling group. In addition, the number of ECS instances to remove in the Remove5 scaling rule remains unchanged.
       * Before you call this operation, take note of the following items:
       * *   If you set AdjustmentType to TotalCapacity, the total number of ECS instances or elastic container instances in your scaling group will be adjusted to a specified number when the scaling rule that you create by calling this operation is executed. You must set AdjustmentValue to an integer that is greater than 0.
       * *   If you set AdjustmentType to QuantityChangeInCapacity or PercentChangeInCapacity, a positive value of AdjustmentValue specifies that a specific number of ECS instances or elastic container instances will be added to your scaling group, and a negative value of AdjustmentValue specifies that a specific number of ECS instances or elastic container instances will be removed from the scaling group.
       * *   If you set AdjustmentType to PercentChangeInCapacity, Auto Scaling calculates the number of ECS instances or elastic container instances to add or remove by multiplying the current capacity of the scaling group (Total Capacity) by AdjustmentValue divided by 100, rounding off the result to determine the final adjustment count.
       * *   If you specify a cooldown period for a scaling rule, the cooldown period of the scaling rule takes effect after you execute the scaling rule. If you do not specify a cooldown period for a scaling rule, the value of DefaultCooldown of the scaling group takes effect after you execute the scaling rule.
       * *   You can create only a limited number of scaling rules for a scaling group. For more information, see [Limits](https://help.aliyun.com/document_detail/25863.html).
       * *   The following API operations may use the unique identifier of a scaling rule (ScalingRuleAri) that is returned after you call the CreateScalingRule operation:
       *     *   ExecuteScalingRule: You can call this operation to manually execute a scaling rule. In this operation, you can set ScalingRuleAri to the unique identifier of the scaling rule that you want to execute.
       *     *   CreateScheduledTask: You can call this operation to create a scheduled task for a scaling rule. In this operation, you can set ScalingRuleAri to the unique identifier of the scaling rule for which you want to create a scheduled task.
       *
       * @param request CreateScalingRuleRequest
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRule(const Models::CreateScalingRuleRequest &request);

      /**
       * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
       *
       * @description *   If the scaling rule of a scheduled task fails to be executed due to an ongoing scaling activity in the scaling group or because the scaling group is disabled, the scheduled task is automatically retried during the time window specified by `LaunchExpirationTime`. If the scheduled task still fails after the specified time window ends, the task is automatically skipped.
       * *   If several scheduled tasks concurrently attempt to execute the same scaling rule within a scaling group, the following rules apply:
       *     *   Scaling groups with **Expected Number of Instances** configured: The scaling activities incurred by the scheduled tasks are parallel scaling activities. In a proximate time window, Auto Scaling can trigger several scheduled tasks and then execute multiple parallel scaling activities at the same time.
       *     *   Scaling groups with **Expected Number of Instances** not configured: The scaling activity incurred by the earliest scheduled task is executed. Considering that a scaling group allows for no more than one ongoing scaling activity simultaneously, other scheduled tasks will spontaneously invoke retries within the time window specified by `LaunchExpirationTime`. Upon completion of the first scheduled task, any retries invoked by other tasks within the time window specified by `LaunchExpirationTime` lead to continuous enforcement of the scaling rule, with each iteration generating a distinct scaling activity.
       * *   You can use one of the following methods to specify the scaling mode:
       *     *   ScheduledAction: Specify an existing scaling rule that you want Auto Scaling to execute when the scheduled task is triggered.
       *     *   ScalingGroupId: Specify the minimum number, maximum number, or expected number of instances for the scaling group for which you create the scheduled task.
       *     **
       *     **Note** You cannot specify ScheduledAction and ScalingGroupId at the same time.
       *
       * @param request CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
       *
       * @description *   If the scaling rule of a scheduled task fails to be executed due to an ongoing scaling activity in the scaling group or because the scaling group is disabled, the scheduled task is automatically retried during the time window specified by `LaunchExpirationTime`. If the scheduled task still fails after the specified time window ends, the task is automatically skipped.
       * *   If several scheduled tasks concurrently attempt to execute the same scaling rule within a scaling group, the following rules apply:
       *     *   Scaling groups with **Expected Number of Instances** configured: The scaling activities incurred by the scheduled tasks are parallel scaling activities. In a proximate time window, Auto Scaling can trigger several scheduled tasks and then execute multiple parallel scaling activities at the same time.
       *     *   Scaling groups with **Expected Number of Instances** not configured: The scaling activity incurred by the earliest scheduled task is executed. Considering that a scaling group allows for no more than one ongoing scaling activity simultaneously, other scheduled tasks will spontaneously invoke retries within the time window specified by `LaunchExpirationTime`. Upon completion of the first scheduled task, any retries invoked by other tasks within the time window specified by `LaunchExpirationTime` lead to continuous enforcement of the scaling rule, with each iteration generating a distinct scaling activity.
       * *   You can use one of the following methods to specify the scaling mode:
       *     *   ScheduledAction: Specify an existing scaling rule that you want Auto Scaling to execute when the scheduled task is triggered.
       *     *   ScalingGroupId: Specify the minimum number, maximum number, or expected number of instances for the scaling group for which you create the scheduled task.
       *     **
       *     **Note** You cannot specify ScheduledAction and ScalingGroupId at the same time.
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary Deactivates a scaling configuration.
       *
       * @description *   You can call this operation to deactivate a scaling configuration only in a disabled scaling group.
       *
       * @param request DeactivateScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateScalingConfigurationResponse
       */
      Models::DeactivateScalingConfigurationResponse deactivateScalingConfigurationWithOptions(const Models::DeactivateScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivates a scaling configuration.
       *
       * @description *   You can call this operation to deactivate a scaling configuration only in a disabled scaling group.
       *
       * @param request DeactivateScalingConfigurationRequest
       * @return DeactivateScalingConfigurationResponse
       */
      Models::DeactivateScalingConfigurationResponse deactivateScalingConfiguration(const Models::DeactivateScalingConfigurationRequest &request);

      /**
       * @summary Deletes an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you no longer need an event-triggered task, you can call the DeleteAlarm operation to delete it.
       *
       * @param request DeleteAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlarmResponse
       */
      Models::DeleteAlarmResponse deleteAlarmWithOptions(const Models::DeleteAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you no longer need an event-triggered task, you can call the DeleteAlarm operation to delete it.
       *
       * @param request DeleteAlarmRequest
       * @return DeleteAlarmResponse
       */
      Models::DeleteAlarmResponse deleteAlarm(const Models::DeleteAlarmRequest &request);

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
      Models::DeleteEciScalingConfigurationResponse deleteEciScalingConfigurationWithOptions(const Models::DeleteEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteEciScalingConfigurationResponse deleteEciScalingConfiguration(const Models::DeleteEciScalingConfigurationRequest &request);

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
      Models::DeleteLifecycleHookResponse deleteLifecycleHookWithOptions(const Models::DeleteLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteLifecycleHookResponse deleteLifecycleHook(const Models::DeleteLifecycleHookRequest &request);

      /**
       * @summary Deletes event notification rules. The event notification feature facilitates efficient issue identification and event management by automatically forwarding notifications from Auto Scaling to designated endpoints such as CloudMonitor or Message Service (MNS) topics and queues. If you no longer require an event notification rule, you can call the DeleteNotificationConfiguration operation to delete it.
       *
       * @param request DeleteNotificationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNotificationConfigurationResponse
       */
      Models::DeleteNotificationConfigurationResponse deleteNotificationConfigurationWithOptions(const Models::DeleteNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes event notification rules. The event notification feature facilitates efficient issue identification and event management by automatically forwarding notifications from Auto Scaling to designated endpoints such as CloudMonitor or Message Service (MNS) topics and queues. If you no longer require an event notification rule, you can call the DeleteNotificationConfiguration operation to delete it.
       *
       * @param request DeleteNotificationConfigurationRequest
       * @return DeleteNotificationConfigurationResponse
       */
      Models::DeleteNotificationConfigurationResponse deleteNotificationConfiguration(const Models::DeleteNotificationConfigurationRequest &request);

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
      Models::DeleteScalingConfigurationResponse deleteScalingConfigurationWithOptions(const Models::DeleteScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteScalingConfigurationResponse deleteScalingConfiguration(const Models::DeleteScalingConfigurationRequest &request);

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
      Models::DeleteScalingGroupResponse deleteScalingGroupWithOptions(const Models::DeleteScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteScalingGroupResponse deleteScalingGroup(const Models::DeleteScalingGroupRequest &request);

      /**
       * @summary Deletes a scaling rule.
       *
       * @param request DeleteScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRuleWithOptions(const Models::DeleteScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling rule.
       *
       * @param request DeleteScalingRuleRequest
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRule(const Models::DeleteScalingRuleRequest &request);

      /**
       * @summary Deletes scheduled tasks. For workloads with predictable patterns, you can create scheduled tasks to align with your business requirements and optimize resource utilization for cost savings. These tasks automatically ensure that sufficient computing resources are provisioned in anticipation of peak hours and efficiently release unused resources during off-peak hours, thereby streamlining operational efficiency and reducing expenses. If you no longer require a scheduled task, you can call the DeleteScheduledTask operation to delete it.
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes scheduled tasks. For workloads with predictable patterns, you can create scheduled tasks to align with your business requirements and optimize resource utilization for cost savings. These tasks automatically ensure that sufficient computing resources are provisioned in anticipation of peak hours and efficiently release unused resources during off-peak hours, thereby streamlining operational efficiency and reducing expenses. If you no longer require a scheduled task, you can call the DeleteScheduledTask operation to delete it.
       *
       * @param request DeleteScheduledTaskRequest
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTask(const Models::DeleteScheduledTaskRequest &request);

      /**
       * @summary Queries event-triggered tasks. You can call the DescribeAlarms operation to learn about the configurations of event-triggered tasks and keep updated on monitoring data changes. This helps you troubleshoot system resource issues at the earliest opportunity and ensures system stability and reliability.
       *
       * @param request DescribeAlarmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmsResponse
       */
      Models::DescribeAlarmsResponse describeAlarmsWithOptions(const Models::DescribeAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event-triggered tasks. You can call the DescribeAlarms operation to learn about the configurations of event-triggered tasks and keep updated on monitoring data changes. This helps you troubleshoot system resource issues at the earliest opportunity and ensures system stability and reliability.
       *
       * @param request DescribeAlarmsRequest
       * @return DescribeAlarmsResponse
       */
      Models::DescribeAlarmsResponse describeAlarms(const Models::DescribeAlarmsRequest &request);

      /**
       * @summary Queries the status of scaling activities that trigger text message, internal message, or email-based notifications. When you call the DescribeAlertConfiguration operation, you must specify the scaling group ID and region ID to query the status of the desired scaling activities. A scaling activity can be in one of the following states: Successful, Failed, and Rejected.
       *
       * @param request DescribeAlertConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertConfigurationResponse
       */
      Models::DescribeAlertConfigurationResponse describeAlertConfigurationWithOptions(const Models::DescribeAlertConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of scaling activities that trigger text message, internal message, or email-based notifications. When you call the DescribeAlertConfiguration operation, you must specify the scaling group ID and region ID to query the status of the desired scaling activities. A scaling activity can be in one of the following states: Successful, Failed, and Rejected.
       *
       * @param request DescribeAlertConfigurationRequest
       * @return DescribeAlertConfigurationResponse
       */
      Models::DescribeAlertConfigurationResponse describeAlertConfiguration(const Models::DescribeAlertConfigurationRequest &request);

      /**
       * @summary Queries the diagnostic reports.
       *
       * @param request DescribeDiagnoseReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnoseReportsResponse
       */
      Models::DescribeDiagnoseReportsResponse describeDiagnoseReportsWithOptions(const Models::DescribeDiagnoseReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic reports.
       *
       * @param request DescribeDiagnoseReportsRequest
       * @return DescribeDiagnoseReportsResponse
       */
      Models::DescribeDiagnoseReportsResponse describeDiagnoseReports(const Models::DescribeDiagnoseReportsRequest &request);

      /**
       * @summary Queries the details of a scaling configuration. You can query a scaling configuration by its ID to learn about its details such as the temporary storage size, number of IPv6 addresses, and bandwidth of the elastic IP address (EIP). The scaling configuration details can be obtained as a YAML file.
       *
       * @param request DescribeEciScalingConfigurationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEciScalingConfigurationDetailResponse
       */
      Models::DescribeEciScalingConfigurationDetailResponse describeEciScalingConfigurationDetailWithOptions(const Models::DescribeEciScalingConfigurationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a scaling configuration. You can query a scaling configuration by its ID to learn about its details such as the temporary storage size, number of IPv6 addresses, and bandwidth of the elastic IP address (EIP). The scaling configuration details can be obtained as a YAML file.
       *
       * @param request DescribeEciScalingConfigurationDetailRequest
       * @return DescribeEciScalingConfigurationDetailResponse
       */
      Models::DescribeEciScalingConfigurationDetailResponse describeEciScalingConfigurationDetail(const Models::DescribeEciScalingConfigurationDetailRequest &request);

      /**
       * @summary Queries scaling configurations of the Elastic Container Instance type. When you call the DescribeEciScalingConfigurations operation, you can specify ScalingGroupId, ScalingConfigurationIds, or ScalingConfigurationNames to query details about the desired scaling configurations, such as the instance bidding policy, instance type, image pulling policy, and load balancing weight of each elastic container instance. This can help you select a suitable template for creating elastic container instances or reference existing scaling configurations before you modify the automatic scaling policy for elastic container instances.
       *
       * @param request DescribeEciScalingConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEciScalingConfigurationsResponse
       */
      Models::DescribeEciScalingConfigurationsResponse describeEciScalingConfigurationsWithOptions(const Models::DescribeEciScalingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling configurations of the Elastic Container Instance type. When you call the DescribeEciScalingConfigurations operation, you can specify ScalingGroupId, ScalingConfigurationIds, or ScalingConfigurationNames to query details about the desired scaling configurations, such as the instance bidding policy, instance type, image pulling policy, and load balancing weight of each elastic container instance. This can help you select a suitable template for creating elastic container instances or reference existing scaling configurations before you modify the automatic scaling policy for elastic container instances.
       *
       * @param request DescribeEciScalingConfigurationsRequest
       * @return DescribeEciScalingConfigurationsResponse
       */
      Models::DescribeEciScalingConfigurationsResponse describeEciScalingConfigurations(const Models::DescribeEciScalingConfigurationsRequest &request);

      /**
       * @summary Queries the scaling strength of a scaling configuration. The success rate of scale-out events depends on the scaling strength of the scaling configuration that you want to use. By checking the scaling strength of a scaling configuration, you can enable Auto Scaling to measure its performance and improve specific configurations.
       *
       * @param request DescribeElasticStrengthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticStrengthResponse
       */
      Models::DescribeElasticStrengthResponse describeElasticStrengthWithOptions(const Models::DescribeElasticStrengthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scaling strength of a scaling configuration. The success rate of scale-out events depends on the scaling strength of the scaling configuration that you want to use. By checking the scaling strength of a scaling configuration, you can enable Auto Scaling to measure its performance and improve specific configurations.
       *
       * @param request DescribeElasticStrengthRequest
       * @return DescribeElasticStrengthResponse
       */
      Models::DescribeElasticStrengthResponse describeElasticStrength(const Models::DescribeElasticStrengthRequest &request);

      /**
       * @summary Queries instance refresh tasks. If you want to view the basic information and execution progress of an instance refresh task, you can call the DescribeInstanceRefreshes operation.
       *
       * @param request DescribeInstanceRefreshesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRefreshesResponse
       */
      Models::DescribeInstanceRefreshesResponse describeInstanceRefreshesWithOptions(const Models::DescribeInstanceRefreshesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance refresh tasks. If you want to view the basic information and execution progress of an instance refresh task, you can call the DescribeInstanceRefreshes operation.
       *
       * @param request DescribeInstanceRefreshesRequest
       * @return DescribeInstanceRefreshesResponse
       */
      Models::DescribeInstanceRefreshesResponse describeInstanceRefreshes(const Models::DescribeInstanceRefreshesRequest &request);

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
      Models::DescribeLifecycleActionsResponse describeLifecycleActionsWithOptions(const Models::DescribeLifecycleActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeLifecycleActionsResponse describeLifecycleActions(const Models::DescribeLifecycleActionsRequest &request);

      /**
       * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
       *
       * @description You can use one of the following methods to query lifecycle hooks:
       * *   Specify a list of lifecycle hook IDs by using the LifecycleHookIds parameter. In this case, you do not need to specify the ScalingGroupId and LifecycleHookName parameters.
       * *   Specify the scaling group ID by using the ScalingGroupId parameter.
       * *   Specify the scaling group ID by using the ScalingGroupId parameter and the lifecycle hook name by using the LifecycleHookName parameter at the same time.
       *
       * @param request DescribeLifecycleHooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecycleHooksResponse
       */
      Models::DescribeLifecycleHooksResponse describeLifecycleHooksWithOptions(const Models::DescribeLifecycleHooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
       *
       * @description You can use one of the following methods to query lifecycle hooks:
       * *   Specify a list of lifecycle hook IDs by using the LifecycleHookIds parameter. In this case, you do not need to specify the ScalingGroupId and LifecycleHookName parameters.
       * *   Specify the scaling group ID by using the ScalingGroupId parameter.
       * *   Specify the scaling group ID by using the ScalingGroupId parameter and the lifecycle hook name by using the LifecycleHookName parameter at the same time.
       *
       * @param request DescribeLifecycleHooksRequest
       * @return DescribeLifecycleHooksResponse
       */
      Models::DescribeLifecycleHooksResponse describeLifecycleHooks(const Models::DescribeLifecycleHooksRequest &request);

      /**
       * @summary Queries resource quotas. For example, you can call the DescribeLimitation operation to query the maximum numbers of scheduled tasks that you can create in a scaling group, load balancers that you can attach to a scaling group, instances that you can add to a scaling group, and scaling configurations that you can create in a scaling group.
       *
       * @param request DescribeLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitationWithOptions(const Models::DescribeLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource quotas. For example, you can call the DescribeLimitation operation to query the maximum numbers of scheduled tasks that you can create in a scaling group, load balancers that you can attach to a scaling group, instances that you can add to a scaling group, and scaling configurations that you can create in a scaling group.
       *
       * @param request DescribeLimitationRequest
       * @return DescribeLimitationResponse
       */
      Models::DescribeLimitationResponse describeLimitation(const Models::DescribeLimitationRequest &request);

      /**
       * @summary Queries notification settings. You can call the DescribeNotificationConfiguration operation to query notification settings of scaling events or resource changes, including the notification types and methods.
       *
       * @param request DescribeNotificationConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNotificationConfigurationsResponse
       */
      Models::DescribeNotificationConfigurationsResponse describeNotificationConfigurationsWithOptions(const Models::DescribeNotificationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification settings. You can call the DescribeNotificationConfiguration operation to query notification settings of scaling events or resource changes, including the notification types and methods.
       *
       * @param request DescribeNotificationConfigurationsRequest
       * @return DescribeNotificationConfigurationsResponse
       */
      Models::DescribeNotificationConfigurationsResponse describeNotificationConfigurations(const Models::DescribeNotificationConfigurationsRequest &request);

      /**
       * @summary Queries notification types. You can call the DescribeNotificationTypes operation to query the types of notifications on scaling events or resource changes occurred in your scaling groups. Notifications are triggered in scenarios such as successful scale-out events, successful scale-in events, expiration of scheduled tasks, and partially successful scale-out events.
       *
       * @param request DescribeNotificationTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNotificationTypesResponse
       */
      Models::DescribeNotificationTypesResponse describeNotificationTypesWithOptions(const Models::DescribeNotificationTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification types. You can call the DescribeNotificationTypes operation to query the types of notifications on scaling events or resource changes occurred in your scaling groups. Notifications are triggered in scenarios such as successful scale-out events, successful scale-in events, expiration of scheduled tasks, and partially successful scale-out events.
       *
       * @param request DescribeNotificationTypesRequest
       * @return DescribeNotificationTypesResponse
       */
      Models::DescribeNotificationTypesResponse describeNotificationTypes(const Models::DescribeNotificationTypesRequest &request);

      /**
       * @summary Queries instance types. When you call the DescribePatternTypes operation, you can specify attributes such as the vSwitch ID, number of vCPUs, memory size, instance family, and maximum acceptable price to filer instance types that meet your business requirements.
       *
       * @param request DescribePatternTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePatternTypesResponse
       */
      Models::DescribePatternTypesResponse describePatternTypesWithOptions(const Models::DescribePatternTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance types. When you call the DescribePatternTypes operation, you can specify attributes such as the vSwitch ID, number of vCPUs, memory size, instance family, and maximum acceptable price to filer instance types that meet your business requirements.
       *
       * @param request DescribePatternTypesRequest
       * @return DescribePatternTypesResponse
       */
      Models::DescribePatternTypesResponse describePatternTypes(const Models::DescribePatternTypesRequest &request);

      /**
       * @summary Queries regions. Before you activate Auto Scaling, you can call the DescribeRegions operation to query the regions where Auto Scaling is officially launched. This preliminary step facilitates the strategic selection of both the optimal region and availability zones for activating Auto Scaling, thereby guaranteeing the finest access speeds and operational efficiency within your chosen geographical area.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions. Before you activate Auto Scaling, you can call the DescribeRegions operation to query the regions where Auto Scaling is officially launched. This preliminary step facilitates the strategic selection of both the optimal region and availability zones for activating Auto Scaling, thereby guaranteeing the finest access speeds and operational efficiency within your chosen geographical area.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries scaling activities. You can call the DescribeScalingActivities operation to query the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can query the status and cause of a scaling activity. You can also query the total number of instances after a scaling activity is complete.
       *
       * @description *   You can query all scaling activities in a scaling group by specifying ScalingGroupId.
       * *   You can filter query results based on the status of scaling activities.
       * *   You can query scaling activities within the last 30 days.
       *
       * @param request DescribeScalingActivitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingActivitiesResponse
       */
      Models::DescribeScalingActivitiesResponse describeScalingActivitiesWithOptions(const Models::DescribeScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling activities. You can call the DescribeScalingActivities operation to query the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can query the status and cause of a scaling activity. You can also query the total number of instances after a scaling activity is complete.
       *
       * @description *   You can query all scaling activities in a scaling group by specifying ScalingGroupId.
       * *   You can filter query results based on the status of scaling activities.
       * *   You can query scaling activities within the last 30 days.
       *
       * @param request DescribeScalingActivitiesRequest
       * @return DescribeScalingActivitiesResponse
       */
      Models::DescribeScalingActivitiesResponse describeScalingActivities(const Models::DescribeScalingActivitiesRequest &request);

      /**
       * @summary Queries the details of a scaling activity. You can query a scaling activity by its ID. The scaling activity details include the scaling activity status, error code, and error message. You can efficiently troubleshoot issues and analyze service performance based on the error message.
       *
       * @param request DescribeScalingActivityDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingActivityDetailResponse
       */
      Models::DescribeScalingActivityDetailResponse describeScalingActivityDetailWithOptions(const Models::DescribeScalingActivityDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a scaling activity. You can query a scaling activity by its ID. The scaling activity details include the scaling activity status, error code, and error message. You can efficiently troubleshoot issues and analyze service performance based on the error message.
       *
       * @param request DescribeScalingActivityDetailRequest
       * @return DescribeScalingActivityDetailResponse
       */
      Models::DescribeScalingActivityDetailResponse describeScalingActivityDetail(const Models::DescribeScalingActivityDetailRequest &request);

      /**
       * @summary Queries scaling configurations.
       *
       * @param request DescribeScalingConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingConfigurationsResponse
       */
      Models::DescribeScalingConfigurationsResponse describeScalingConfigurationsWithOptions(const Models::DescribeScalingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling configurations.
       *
       * @param request DescribeScalingConfigurationsRequest
       * @return DescribeScalingConfigurationsResponse
       */
      Models::DescribeScalingConfigurationsResponse describeScalingConfigurations(const Models::DescribeScalingConfigurationsRequest &request);

      /**
       * @summary Queries a scaling group. You can call the DescribeScalingGroupDetail operation to query the basic information, instances, and scaling configurations of a scaling group. If you set OutputFormat to YAML for a scaling group of the Elastic Container Instance type, the output is a Kubernetes Deployment file in the YAML format.
       *
       * @param request DescribeScalingGroupDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingGroupDetailResponse
       */
      Models::DescribeScalingGroupDetailResponse describeScalingGroupDetailWithOptions(const Models::DescribeScalingGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a scaling group. You can call the DescribeScalingGroupDetail operation to query the basic information, instances, and scaling configurations of a scaling group. If you set OutputFormat to YAML for a scaling group of the Elastic Container Instance type, the output is a Kubernetes Deployment file in the YAML format.
       *
       * @param request DescribeScalingGroupDetailRequest
       * @return DescribeScalingGroupDetailResponse
       */
      Models::DescribeScalingGroupDetailResponse describeScalingGroupDetail(const Models::DescribeScalingGroupDetailRequest &request);

      /**
       * @summary DescribeScalingGroupDiagnoseDetails
       *
       * @param request DescribeScalingGroupDiagnoseDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingGroupDiagnoseDetailsResponse
       */
      Models::DescribeScalingGroupDiagnoseDetailsResponse describeScalingGroupDiagnoseDetailsWithOptions(const Models::DescribeScalingGroupDiagnoseDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeScalingGroupDiagnoseDetails
       *
       * @param request DescribeScalingGroupDiagnoseDetailsRequest
       * @return DescribeScalingGroupDiagnoseDetailsResponse
       */
      Models::DescribeScalingGroupDiagnoseDetailsResponse describeScalingGroupDiagnoseDetails(const Models::DescribeScalingGroupDiagnoseDetailsRequest &request);

      /**
       * @summary Queries information about scaling groups, such as the basic information, instances, and scaling configurations.
       *
       * @param request DescribeScalingGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingGroupsResponse
       */
      Models::DescribeScalingGroupsResponse describeScalingGroupsWithOptions(const Models::DescribeScalingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about scaling groups, such as the basic information, instances, and scaling configurations.
       *
       * @param request DescribeScalingGroupsRequest
       * @return DescribeScalingGroupsResponse
       */
      Models::DescribeScalingGroupsResponse describeScalingGroups(const Models::DescribeScalingGroupsRequest &request);

      /**
       * @summary Queries instances in a scaling group. You can call the DescribeScalingInstances operation to query instance details, such as the number of preemptible instances in the Running state, the number of Elastic Compute Service (ECS) instances, the warm-up status of ECS instances, and the lifecycle status of ECS instances in a scaling group. You can specify the scaling group whose instances you want to query by scaling group ID. If you want to filter instances based on conditions, such as the instance health status, lifecycle status, or creation method, you can also call this operation.
       *
       * @param request DescribeScalingInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingInstancesResponse
       */
      Models::DescribeScalingInstancesResponse describeScalingInstancesWithOptions(const Models::DescribeScalingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances in a scaling group. You can call the DescribeScalingInstances operation to query instance details, such as the number of preemptible instances in the Running state, the number of Elastic Compute Service (ECS) instances, the warm-up status of ECS instances, and the lifecycle status of ECS instances in a scaling group. You can specify the scaling group whose instances you want to query by scaling group ID. If you want to filter instances based on conditions, such as the instance health status, lifecycle status, or creation method, you can also call this operation.
       *
       * @param request DescribeScalingInstancesRequest
       * @return DescribeScalingInstancesResponse
       */
      Models::DescribeScalingInstancesResponse describeScalingInstances(const Models::DescribeScalingInstancesRequest &request);

      /**
       * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
       *
       * @description You can specify a scaling group ID to query all scaling rules in the scaling group. You can also specify the scaling rule ID, name, unique identifier, and type in the request parameters as filter conditions.
       *
       * @param request DescribeScalingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingRulesResponse
       */
      Models::DescribeScalingRulesResponse describeScalingRulesWithOptions(const Models::DescribeScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
       *
       * @description You can specify a scaling group ID to query all scaling rules in the scaling group. You can also specify the scaling rule ID, name, unique identifier, and type in the request parameters as filter conditions.
       *
       * @param request DescribeScalingRulesRequest
       * @return DescribeScalingRulesResponse
       */
      Models::DescribeScalingRulesResponse describeScalingRules(const Models::DescribeScalingRulesRequest &request);

      /**
       * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
       *
       * @description You can query scheduled tasks by scaling rule, task ID, or task name.
       *
       * @param request DescribeScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasksWithOptions(const Models::DescribeScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
       *
       * @description You can query scheduled tasks by scaling rule, task ID, or task name.
       *
       * @param request DescribeScheduledTasksRequest
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasks(const Models::DescribeScheduledTasksRequest &request);

      /**
       * @summary Detaches Application Load Balancer (ALB) server groups from a scaling group. When you call the DetachAlbServerGroups operation, you can specify the scaling group ID, ALB server group ID, and port used by Elastic Compute Service (ECS) instances in the desired ALB server group to detach one or more ALB server groups from your scaling group.
       *
       * @param request DetachAlbServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAlbServerGroupsResponse
       */
      Models::DetachAlbServerGroupsResponse detachAlbServerGroupsWithOptions(const Models::DetachAlbServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches Application Load Balancer (ALB) server groups from a scaling group. When you call the DetachAlbServerGroups operation, you can specify the scaling group ID, ALB server group ID, and port used by Elastic Compute Service (ECS) instances in the desired ALB server group to detach one or more ALB server groups from your scaling group.
       *
       * @param request DetachAlbServerGroupsRequest
       * @return DetachAlbServerGroupsResponse
       */
      Models::DetachAlbServerGroupsResponse detachAlbServerGroups(const Models::DetachAlbServerGroupsRequest &request);

      /**
       * @summary Detaches one or more ApsaraDB RDS instances from a scaling group. If you want to decrease the number of ApsaraDB RDS instances attached to your scaling group, you can call the DetachDBInstance operation. This operation liberates ApsaraDB RDS instances from your scaling group, thereby significantly boosting the agility and efficiency in managing and allocating your resources.
       *
       * @param request DetachDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDBInstancesResponse
       */
      Models::DetachDBInstancesResponse detachDBInstancesWithOptions(const Models::DetachDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches one or more ApsaraDB RDS instances from a scaling group. If you want to decrease the number of ApsaraDB RDS instances attached to your scaling group, you can call the DetachDBInstance operation. This operation liberates ApsaraDB RDS instances from your scaling group, thereby significantly boosting the agility and efficiency in managing and allocating your resources.
       *
       * @param request DetachDBInstancesRequest
       * @return DetachDBInstancesResponse
       */
      Models::DetachDBInstancesResponse detachDBInstances(const Models::DetachDBInstancesRequest &request);

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
      Models::DetachInstancesResponse detachInstancesWithOptions(const Models::DetachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DetachInstancesResponse detachInstances(const Models::DetachInstancesRequest &request);

      /**
       * @summary Detaches Classic Load Balancer (CLB, formerly known as Server Load Balancer or SLB) instances from a scaling group. If the current CLB instance no longer meets your business requirements, you can call the DetachLoadBalancers operation to detach it from your scaling group. When you call this operation, you can use ScalingGroupId, LoadBalancer.N, and ForceDetach to specify one or more CLB instances to detach. You can also determine whether to call this operation asynchronously and whether to remove the Elastic Compute Service (ECS) instances acting as backend servers from the backend server groups of the CLB instance. You can call this operation to detach only CLB instances from a scaling group.
       *
       * @param request DetachLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachLoadBalancersResponse
       */
      Models::DetachLoadBalancersResponse detachLoadBalancersWithOptions(const Models::DetachLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches Classic Load Balancer (CLB, formerly known as Server Load Balancer or SLB) instances from a scaling group. If the current CLB instance no longer meets your business requirements, you can call the DetachLoadBalancers operation to detach it from your scaling group. When you call this operation, you can use ScalingGroupId, LoadBalancer.N, and ForceDetach to specify one or more CLB instances to detach. You can also determine whether to call this operation asynchronously and whether to remove the Elastic Compute Service (ECS) instances acting as backend servers from the backend server groups of the CLB instance. You can call this operation to detach only CLB instances from a scaling group.
       *
       * @param request DetachLoadBalancersRequest
       * @return DetachLoadBalancersResponse
       */
      Models::DetachLoadBalancersResponse detachLoadBalancers(const Models::DetachLoadBalancersRequest &request);

      /**
       * @summary Detach server groups from a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the DetachServerGroups operation. By detaching Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups from your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request DetachServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachServerGroupsResponse
       */
      Models::DetachServerGroupsResponse detachServerGroupsWithOptions(const Models::DetachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach server groups from a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the DetachServerGroups operation. By detaching Application Load Balancer (ALB) or Network Load Balancer (NLB) server groups from your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request DetachServerGroupsRequest
       * @return DetachServerGroupsResponse
       */
      Models::DetachServerGroupsResponse detachServerGroups(const Models::DetachServerGroupsRequest &request);

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
      Models::DetachVServerGroupsResponse detachVServerGroupsWithOptions(const Models::DetachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DetachVServerGroupsResponse detachVServerGroups(const Models::DetachVServerGroupsRequest &request);

      /**
       * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
       *
       * @description Before you disable an event-triggered task, make sure that the task is in the `Normal`, `Alert`, or `Insufficient Data` state.
       *
       * @param request DisableAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAlarmResponse
       */
      Models::DisableAlarmResponse disableAlarmWithOptions(const Models::DisableAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
       *
       * @description Before you disable an event-triggered task, make sure that the task is in the `Normal`, `Alert`, or `Insufficient Data` state.
       *
       * @param request DisableAlarmRequest
       * @return DisableAlarmResponse
       */
      Models::DisableAlarmResponse disableAlarm(const Models::DisableAlarmRequest &request);

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
      Models::DisableScalingGroupResponse disableScalingGroupWithOptions(const Models::DisableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableScalingGroupResponse disableScalingGroup(const Models::DisableScalingGroupRequest &request);

      /**
       * @summary Enables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you want to reuse an event-triggered task that is in the Disabled state, you can call the EnableAlarm operation to enable it.
       *
       * @param request EnableAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAlarmResponse
       */
      Models::EnableAlarmResponse enableAlarmWithOptions(const Models::EnableAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you want to reuse an event-triggered task that is in the Disabled state, you can call the EnableAlarm operation to enable it.
       *
       * @param request EnableAlarmRequest
       * @return EnableAlarmResponse
       */
      Models::EnableAlarmResponse enableAlarm(const Models::EnableAlarmRequest &request);

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
      Models::EnableScalingGroupResponse enableScalingGroupWithOptions(const Models::EnableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableScalingGroupResponse enableScalingGroup(const Models::EnableScalingGroupRequest &request);

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
      Models::EnterStandbyResponse enterStandbyWithOptions(const Models::EnterStandbyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnterStandbyResponse enterStandby(const Models::EnterStandbyRequest &request);

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
      Models::ExecuteScalingRuleResponse executeScalingRuleWithOptions(const Models::ExecuteScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ExecuteScalingRuleResponse executeScalingRule(const Models::ExecuteScalingRuleRequest &request);

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
      Models::ExitStandbyResponse exitStandbyWithOptions(const Models::ExitStandbyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ExitStandbyResponse exitStandby(const Models::ExitStandbyRequest &request);

      /**
       * @summary Queries the tag keys added to Auto Scaling resources. Querying tag keys facilitates easier classification, identification, and monitoring of your Auto Scaling resources, thereby enhancing the flexibility and convenience of your resource management processes.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag keys added to Auto Scaling resources. Querying tag keys facilitates easier classification, identification, and monitoring of your Auto Scaling resources, thereby enhancing the flexibility and convenience of your resource management processes.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags. You can call the ListTagResources operation to query tags that are added to Auto Scaling resources, thereby clarifying resource utilization and facilitating efficient resource management. This operation aids in the automation of resource categorization and permission management processes.
       *
       * @description *   Specify at least one of the following request parameters: `ResourceIds` and `Tags`. `Tags.Key` and `Tags.Value` are used to specify the query objects.
       * *   If you provide both `ResourceIds` and `Tags` in your request, the response will exclusively include Auto Scaling resources that satisfy the criteria set by these parameters, ensuring targeted and precise information retrieval.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag keys associated with Auto Scaling resources to facilitate a deeper comprehension of those resources. By doing so, you can categorize and manage your Auto Scaling resources more efficiently.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag keys associated with Auto Scaling resources to facilitate a deeper comprehension of those resources. By doing so, you can categorize and manage your Auto Scaling resources more efficiently.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Modifies an event-triggered task.
       *
       * @description *   If you set the MetricType parameter to custom, you must report your custom metrics to CloudMonitor before you can create event-triggered tasks by using the custom metrics. For more information, see [Custom monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74861.html).
       * *   When you create an event-triggered task, you must specify the MetricName, DimensionKey, and DimensionValue parameters to determine the range of statistics that you want to aggregate for the metrics of the scaling group. For example, you can specify the user_id and scaling_group dimensions for an event-triggered task to aggregate monitoring data of all Elastic Compute Service (ECS) instances or elastic container instances in a scaling group within an Alibaba Cloud account.
       *     *   If you set the MetricType parameter to custom, the valid values are your custom metrics.
       *     *   For information about the metrics that are supported if you set the MetricType parameter to system, see[ Event-triggered task for system monitoring](https://help.aliyun.com/document_detail/74854.html).
       * > The user_id and scaling_group dimensions are automatically populated. You need to only specify the device and state dimensions. For more information, see the `DimensionKey` and `DimensionValue` parameters in the "Request parameters" section of this topic.
       *
       * @param request ModifyAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAlarmResponse
       */
      Models::ModifyAlarmResponse modifyAlarmWithOptions(const Models::ModifyAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an event-triggered task.
       *
       * @description *   If you set the MetricType parameter to custom, you must report your custom metrics to CloudMonitor before you can create event-triggered tasks by using the custom metrics. For more information, see [Custom monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74861.html).
       * *   When you create an event-triggered task, you must specify the MetricName, DimensionKey, and DimensionValue parameters to determine the range of statistics that you want to aggregate for the metrics of the scaling group. For example, you can specify the user_id and scaling_group dimensions for an event-triggered task to aggregate monitoring data of all Elastic Compute Service (ECS) instances or elastic container instances in a scaling group within an Alibaba Cloud account.
       *     *   If you set the MetricType parameter to custom, the valid values are your custom metrics.
       *     *   For information about the metrics that are supported if you set the MetricType parameter to system, see[ Event-triggered task for system monitoring](https://help.aliyun.com/document_detail/74854.html).
       * > The user_id and scaling_group dimensions are automatically populated. You need to only specify the device and state dimensions. For more information, see the `DimensionKey` and `DimensionValue` parameters in the "Request parameters" section of this topic.
       *
       * @param request ModifyAlarmRequest
       * @return ModifyAlarmResponse
       */
      Models::ModifyAlarmResponse modifyAlarm(const Models::ModifyAlarmRequest &request);

      /**
       * @summary Sets the status of scaling activities that prompt text message or email notifications.
       *
       * @param request ModifyAlertConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAlertConfigurationResponse
       */
      Models::ModifyAlertConfigurationResponse modifyAlertConfigurationWithOptions(const Models::ModifyAlertConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of scaling activities that prompt text message or email notifications.
       *
       * @param request ModifyAlertConfigurationRequest
       * @return ModifyAlertConfigurationResponse
       */
      Models::ModifyAlertConfigurationResponse modifyAlertConfiguration(const Models::ModifyAlertConfigurationRequest &request);

      /**
       * @summary Modifies a scaling configuration of the Elastic Container Instance type. When you call the ModifyEciScalingConfiguration operation, you can specify the ID, name, and instance properties of the scaling configuration whose information you want to modify. You can modify the instance restart policy, instance bidding policy, and elastic IP address (EIP) bandwidth.
       *
       * @description *   To rename a scaling configuration in a scaling group, ensure the new name is unique within that group.
       * *   You can call the [DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html) operation to check the modification result.
       *
       * @param request ModifyEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEciScalingConfigurationResponse
       */
      Models::ModifyEciScalingConfigurationResponse modifyEciScalingConfigurationWithOptions(const Models::ModifyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling configuration of the Elastic Container Instance type. When you call the ModifyEciScalingConfiguration operation, you can specify the ID, name, and instance properties of the scaling configuration whose information you want to modify. You can modify the instance restart policy, instance bidding policy, and elastic IP address (EIP) bandwidth.
       *
       * @description *   To rename a scaling configuration in a scaling group, ensure the new name is unique within that group.
       * *   You can call the [DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html) operation to check the modification result.
       *
       * @param request ModifyEciScalingConfigurationRequest
       * @return ModifyEciScalingConfigurationResponse
       */
      Models::ModifyEciScalingConfigurationResponse modifyEciScalingConfiguration(const Models::ModifyEciScalingConfigurationRequest &request);

      /**
       * @summary Modifies the information of an Elastic Compute Service (ECS) instance. When you call the ModifyInstanceAttribute operation, you can specify attributes such as the instance ID, scaling group ID, and region ID to modify the attributes of an ECS instance in a scaling group. You can modify only the hosting attributes of instances that are manually added to scaling groups.
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an Elastic Compute Service (ECS) instance. When you call the ModifyInstanceAttribute operation, you can specify attributes such as the instance ID, scaling group ID, and region ID to modify the attributes of an ECS instance in a scaling group. You can modify only the hosting attributes of instances that are manually added to scaling groups.
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Modifies a lifecycle hook. If an existing lifecycle hook does not meet your business requirements anymore, you can call the ModifyLifecycleHook operation to modify the information such as the scaling event, timeout period, and default action of the lifecycle hook. Before you modify a lifecycle hook, you can locate the lifecycle hook by its ID, name, or scaling group.
       *
       * @description You can use one of the following methods to locate the lifecycle hook that you want to modify:
       * *   Specify LifecycleHookId. In this case, ScalingGroupId and LifecycleHookName are ignored.
       * *   Specify ScalingGroupId and LifecycleHookName. Each lifecycle hook within a scaling group has a unique name.
       *
       * @param request ModifyLifecycleHookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLifecycleHookResponse
       */
      Models::ModifyLifecycleHookResponse modifyLifecycleHookWithOptions(const Models::ModifyLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a lifecycle hook. If an existing lifecycle hook does not meet your business requirements anymore, you can call the ModifyLifecycleHook operation to modify the information such as the scaling event, timeout period, and default action of the lifecycle hook. Before you modify a lifecycle hook, you can locate the lifecycle hook by its ID, name, or scaling group.
       *
       * @description You can use one of the following methods to locate the lifecycle hook that you want to modify:
       * *   Specify LifecycleHookId. In this case, ScalingGroupId and LifecycleHookName are ignored.
       * *   Specify ScalingGroupId and LifecycleHookName. Each lifecycle hook within a scaling group has a unique name.
       *
       * @param request ModifyLifecycleHookRequest
       * @return ModifyLifecycleHookResponse
       */
      Models::ModifyLifecycleHookResponse modifyLifecycleHook(const Models::ModifyLifecycleHookRequest &request);

      /**
       * @summary Modifies event notification rules. Event notification rules support automatic sending of notifications to CloudMonitor, Message Service (MNS) topics, or MNS queues when a specified type of events occur. This helps you learn about the dynamics of your scaling group at the earliest opportunity and further automate resource management. If an existing event notification rule does not meet your business requirements, you can call the ModifyNotificationConfiguration operation to modify the event notification rule, without the need to create a new rule. Take not that you cannot modify the notification method of an event notification rule by calling this operation.
       *
       * @param request ModifyNotificationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNotificationConfigurationResponse
       */
      Models::ModifyNotificationConfigurationResponse modifyNotificationConfigurationWithOptions(const Models::ModifyNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies event notification rules. Event notification rules support automatic sending of notifications to CloudMonitor, Message Service (MNS) topics, or MNS queues when a specified type of events occur. This helps you learn about the dynamics of your scaling group at the earliest opportunity and further automate resource management. If an existing event notification rule does not meet your business requirements, you can call the ModifyNotificationConfiguration operation to modify the event notification rule, without the need to create a new rule. Take not that you cannot modify the notification method of an event notification rule by calling this operation.
       *
       * @param request ModifyNotificationConfigurationRequest
       * @return ModifyNotificationConfigurationResponse
       */
      Models::ModifyNotificationConfigurationResponse modifyNotificationConfiguration(const Models::ModifyNotificationConfigurationRequest &request);

      /**
       * @summary Modifies a scaling configuration.
       *
       * @description *   If you want to change the name of a scaling configuration in a scaling group, make sure that the new name is unique within the scaling group.
       * *   If you want to bind a primary elastic network interface (ENI) when you call this operation, you must use one of the following methods. If you use the following methods at the same time, the call fails and an error is reported. In addition, if you use one of the following methods to modify the ENI information when you call this operation, the ENI information configured by using the other method is cleared.
       *     *   You can specify SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount to configure ENI-related information.
       *     *   You can specify NetworkInterfaces to configure primary and secondary ENIs. You must use NetworkInterface to specify at least one primary ENI. If you set NetworkInterface.InstanceType to Primary, it specifies that a primary ENI is configured. If you set NetworkInterface.InstanceType to Secondary or leave it empty, it specifies that a secondary ENI is configured.
       *
       * @param tmpReq ModifyScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingConfigurationResponse
       */
      Models::ModifyScalingConfigurationResponse modifyScalingConfigurationWithOptions(const Models::ModifyScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling configuration.
       *
       * @description *   If you want to change the name of a scaling configuration in a scaling group, make sure that the new name is unique within the scaling group.
       * *   If you want to bind a primary elastic network interface (ENI) when you call this operation, you must use one of the following methods. If you use the following methods at the same time, the call fails and an error is reported. In addition, if you use one of the following methods to modify the ENI information when you call this operation, the ENI information configured by using the other method is cleared.
       *     *   You can specify SecurityGroupId, SecurityGroupIds, and Ipv6AddressCount to configure ENI-related information.
       *     *   You can specify NetworkInterfaces to configure primary and secondary ENIs. You must use NetworkInterface to specify at least one primary ENI. If you set NetworkInterface.InstanceType to Primary, it specifies that a primary ENI is configured. If you set NetworkInterface.InstanceType to Secondary or leave it empty, it specifies that a secondary ENI is configured.
       *
       * @param request ModifyScalingConfigurationRequest
       * @return ModifyScalingConfigurationResponse
       */
      Models::ModifyScalingConfigurationResponse modifyScalingConfiguration(const Models::ModifyScalingConfigurationRequest &request);

      /**
       * @summary Modifies a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can modify scaling groups to adjust your computing power with ease. The computing power refers to the instances that provide the computing capability. When your scaling group cannot meet your business requirements, you can call the ModifyScalingGroup operation to modify scaling group attributes such as the maximum, minimum, and expected numbers of instances. This prevents repeated creation and configuration of scaling groups, which saves you a lot of time and resource costs.
       *
       * @description *   You cannot modify the following parameters by calling this operation:
       *     *   RegionId
       *     *   LoadBalancerId
       *     **
       *     **Note** If you want to modify the load balancer settings of your scaling group, you can call the AttachLoadBalancers operation or the DetachLoadBalancers operation.
       *     *   DBInstanceId
       *     **
       *     **Note** If you want to modify the ApsaraDB RDS instance settings of your scaling group, you can call the AttachDBInstances operation or the DetachDBInstances operation.
       * *   You can call this operation to modify a scaling group only when the scaling group is in the `Active` or `Inactive` state.
       * *   Enabling a new scaling configuration in the scaling group will not impact existing Elastic Compute Service (ECS) instances or elastic container instances that were provisioned based on the previous scaling configuration. These instances will continue to run as expected.
       * *   If the modification of the MaxSize setting leads to the total number of ECS instances or elastic container instances in the scaling group exceeding the new maximum limit, Auto Scaling proactively removes the surplus instances to restore the total number to match the new maximum limit.
       * *   If the modification of the MinSize setting leads to the total number of ECS instances or elastic container instances in the scaling group exceeding the new minimum threshold, Auto Scaling proactively adds more instances to the scaling group to ensure that the total number aligns with the new minimum threshold.
       * *   If the modification of the DesiredCapacity setting leads to the total number of ECS instances or elastic container instances in the scaling group not matching the new desired capacity, Auto Scaling proactively adjusts the total number of instances to ensure that the total number aligns with the new desired capacity.
       *
       * @param request ModifyScalingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingGroupResponse
       */
      Models::ModifyScalingGroupResponse modifyScalingGroupWithOptions(const Models::ModifyScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can modify scaling groups to adjust your computing power with ease. The computing power refers to the instances that provide the computing capability. When your scaling group cannot meet your business requirements, you can call the ModifyScalingGroup operation to modify scaling group attributes such as the maximum, minimum, and expected numbers of instances. This prevents repeated creation and configuration of scaling groups, which saves you a lot of time and resource costs.
       *
       * @description *   You cannot modify the following parameters by calling this operation:
       *     *   RegionId
       *     *   LoadBalancerId
       *     **
       *     **Note** If you want to modify the load balancer settings of your scaling group, you can call the AttachLoadBalancers operation or the DetachLoadBalancers operation.
       *     *   DBInstanceId
       *     **
       *     **Note** If you want to modify the ApsaraDB RDS instance settings of your scaling group, you can call the AttachDBInstances operation or the DetachDBInstances operation.
       * *   You can call this operation to modify a scaling group only when the scaling group is in the `Active` or `Inactive` state.
       * *   Enabling a new scaling configuration in the scaling group will not impact existing Elastic Compute Service (ECS) instances or elastic container instances that were provisioned based on the previous scaling configuration. These instances will continue to run as expected.
       * *   If the modification of the MaxSize setting leads to the total number of ECS instances or elastic container instances in the scaling group exceeding the new maximum limit, Auto Scaling proactively removes the surplus instances to restore the total number to match the new maximum limit.
       * *   If the modification of the MinSize setting leads to the total number of ECS instances or elastic container instances in the scaling group exceeding the new minimum threshold, Auto Scaling proactively adds more instances to the scaling group to ensure that the total number aligns with the new minimum threshold.
       * *   If the modification of the DesiredCapacity setting leads to the total number of ECS instances or elastic container instances in the scaling group not matching the new desired capacity, Auto Scaling proactively adjusts the total number of instances to ensure that the total number aligns with the new desired capacity.
       *
       * @param request ModifyScalingGroupRequest
       * @return ModifyScalingGroupResponse
       */
      Models::ModifyScalingGroupResponse modifyScalingGroup(const Models::ModifyScalingGroupRequest &request);

      /**
       * @summary Modifies a scaling rule. If an existing scaling rule cannot meet your business requirements, you can call the ModifyScalingRule operation to modify the scaling rule, without the need to create a new one. This streamlines your workflow, enhancing operational efficiency while also contributing to cost optimization by avoiding redundant steps.
       *
       * @param request ModifyScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRuleWithOptions(const Models::ModifyScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling rule. If an existing scaling rule cannot meet your business requirements, you can call the ModifyScalingRule operation to modify the scaling rule, without the need to create a new one. This streamlines your workflow, enhancing operational efficiency while also contributing to cost optimization by avoiding redundant steps.
       *
       * @param request ModifyScalingRuleRequest
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRule(const Models::ModifyScalingRuleRequest &request);

      /**
       * @summary Modifies a scheduled task. If an existing scheduled task cannot meet your business requirements, you can call the ModifyScheduledTask operation to adjust its parameter settings including the scaling rule to execute and the boundary values of your scaling group, without the need to create a new scheduled task. This operation provides a flexible way to optimize scheduled tasks.
       *
       * @description You can use the following parameters to specify the scaling method of a scheduled task:
       * *   If you use the `ScheduledAction` parameter, you must select an existing scaling rule for the scheduled task.
       * *   If you use the `ScalingGroupId` parameter, you must specify the minimum number, maximum number, or expected number of instances in the scheduled task.
       * > You cannot specify the `ScheduledAction` and `ScalingGroupId` parameters at the same time.
       *
       * @param request ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled task. If an existing scheduled task cannot meet your business requirements, you can call the ModifyScheduledTask operation to adjust its parameter settings including the scaling rule to execute and the boundary values of your scaling group, without the need to create a new scheduled task. This operation provides a flexible way to optimize scheduled tasks.
       *
       * @description You can use the following parameters to specify the scaling method of a scheduled task:
       * *   If you use the `ScheduledAction` parameter, you must select an existing scaling rule for the scheduled task.
       * *   If you use the `ScalingGroupId` parameter, you must specify the minimum number, maximum number, or expected number of instances in the scheduled task.
       * > You cannot specify the `ScheduledAction` and `ScalingGroupId` parameters at the same time.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
       *
       * @description ## [](#)Usage notes
       * Auto Scaling creates new ECS instances to replace the existing ECS instances to fulfill the rebalancing purpose. Auto Scaling starts the new ECS instances before stopping the existing ECS instances. The rebalancing operation does not affect the performance or service availability of your application.
       * *   This operation is supported by only multi-zone scaling groups whose `MultiAZPolicy` is set to `BALANCE`.
       * *   A rebalancing operation is required only when the distribution of the instances of a multi-zone scaling group is significantly unbalanced. In a rebalancing activity, Auto Scaling replaces up to 20 ECS instances to rectify the unbalanced distribution.
       * *   During the execution of a rebalancing operation, if the number of instances in the scaling group approaches or hits the value of MaxSize but the rebalancing operation needs to continue, Auto Scaling allows the total number of ECS instances to momentarily exceed the value of MaxSize by 10%. This temporary surplus condition persists for a duration until equilibrium in the distribution of ECS instances is achieved. Typically, it takes 1 to 6 minutes.
       *     **
       *     **Note** If the 10% increment of the maximum number of instances in a scaling group yield a non-integer value, the decimal portion is always rounded up to ensure an additional instance is accounted for. For example, you have a scaling group that holds a maximum of 15 ECS instances. During a rebalancing operation, Auto Scaling would permit the total number of instances to momentarily surpass this limit by 2, instead of the calculated 10% (which is 1.5).
       *
       * @param request RebalanceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebalanceInstancesResponse
       */
      Models::RebalanceInstancesResponse rebalanceInstancesWithOptions(const Models::RebalanceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
       *
       * @description ## [](#)Usage notes
       * Auto Scaling creates new ECS instances to replace the existing ECS instances to fulfill the rebalancing purpose. Auto Scaling starts the new ECS instances before stopping the existing ECS instances. The rebalancing operation does not affect the performance or service availability of your application.
       * *   This operation is supported by only multi-zone scaling groups whose `MultiAZPolicy` is set to `BALANCE`.
       * *   A rebalancing operation is required only when the distribution of the instances of a multi-zone scaling group is significantly unbalanced. In a rebalancing activity, Auto Scaling replaces up to 20 ECS instances to rectify the unbalanced distribution.
       * *   During the execution of a rebalancing operation, if the number of instances in the scaling group approaches or hits the value of MaxSize but the rebalancing operation needs to continue, Auto Scaling allows the total number of ECS instances to momentarily exceed the value of MaxSize by 10%. This temporary surplus condition persists for a duration until equilibrium in the distribution of ECS instances is achieved. Typically, it takes 1 to 6 minutes.
       *     **
       *     **Note** If the 10% increment of the maximum number of instances in a scaling group yield a non-integer value, the decimal portion is always rounded up to ensure an additional instance is accounted for. For example, you have a scaling group that holds a maximum of 15 ECS instances. During a rebalancing operation, Auto Scaling would permit the total number of instances to momentarily surpass this limit by 2, instead of the calculated 10% (which is 1.5).
       *
       * @param request RebalanceInstancesRequest
       * @return RebalanceInstancesResponse
       */
      Models::RebalanceInstancesResponse rebalanceInstances(const Models::RebalanceInstancesRequest &request);

      /**
       * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
       *
       * @description You can call this operation only to extend the time window during which Elastic Compute Service (ECS) instances stay in a Pending state.
       * An ECS instance can stay in a Pending state for up to six hours. Each time an ECS instance enters a Pending state, you can extend the time window during which the ECS instance stays in the Pending state up to 20 times.
       *
       * @param request RecordLifecycleActionHeartbeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordLifecycleActionHeartbeatResponse
       */
      Models::RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeatWithOptions(const Models::RecordLifecycleActionHeartbeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
       *
       * @description You can call this operation only to extend the time window during which Elastic Compute Service (ECS) instances stay in a Pending state.
       * An ECS instance can stay in a Pending state for up to six hours. Each time an ECS instance enters a Pending state, you can extend the time window during which the ECS instance stays in the Pending state up to 20 times.
       *
       * @param request RecordLifecycleActionHeartbeatRequest
       * @return RecordLifecycleActionHeartbeatResponse
       */
      Models::RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeat(const Models::RecordLifecycleActionHeartbeatRequest &request);

      /**
       * @summary Removes one or more instances from a scaling group. If your scaling group is enabled and contains no ongoing scaling activities, you can call the RemoveInstances operation to remove instances that you no longer require from the scaling group.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The scaling group is in the Active state.
       *     *   No scaling activity is in progress within the scaling group.
       * > If no scaling activity is in progress within the scaling group, you can call the operation even within the cooldown period.
       * *   If an ECS instance is automatically created by Auto Scaling, or if an ECS instance is manually added to a scaling group and managed by the scaling group, the ECS instance is stopped in economical mode or is released after the instance is removed from the scaling group.
       * *   If an ECS instance is manually added to a scaling group and is not managed by the scaling group, the ECS instance is not stopped or released after the instance is removed from the scaling group.
       * *   If the difference between the number of existing ECS instances specified by the TotalCapacity parameter and the number of ECS instances that you call this operation to remove is less than the value of the MinSize parameter, the call fails.
       * A successful call only means that Auto Scaling accepts the request. The scaling activity may still fail. You can obtain the status of a scaling activity based on the value of the ScalingActivityId parameter in the response.
       *
       * @param tmpReq RemoveInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstancesResponse
       */
      Models::RemoveInstancesResponse removeInstancesWithOptions(const Models::RemoveInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more instances from a scaling group. If your scaling group is enabled and contains no ongoing scaling activities, you can call the RemoveInstances operation to remove instances that you no longer require from the scaling group.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The scaling group is in the Active state.
       *     *   No scaling activity is in progress within the scaling group.
       * > If no scaling activity is in progress within the scaling group, you can call the operation even within the cooldown period.
       * *   If an ECS instance is automatically created by Auto Scaling, or if an ECS instance is manually added to a scaling group and managed by the scaling group, the ECS instance is stopped in economical mode or is released after the instance is removed from the scaling group.
       * *   If an ECS instance is manually added to a scaling group and is not managed by the scaling group, the ECS instance is not stopped or released after the instance is removed from the scaling group.
       * *   If the difference between the number of existing ECS instances specified by the TotalCapacity parameter and the number of ECS instances that you call this operation to remove is less than the value of the MinSize parameter, the call fails.
       * A successful call only means that Auto Scaling accepts the request. The scaling activity may still fail. You can obtain the status of a scaling activity based on the value of the ScalingActivityId parameter in the response.
       *
       * @param request RemoveInstancesRequest
       * @return RemoveInstancesResponse
       */
      Models::RemoveInstancesResponse removeInstances(const Models::RemoveInstancesRequest &request);

      /**
       * @summary Resumes an instance refresh task.
       *
       * @param request ResumeInstanceRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceRefreshResponse
       */
      Models::ResumeInstanceRefreshResponse resumeInstanceRefreshWithOptions(const Models::ResumeInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an instance refresh task.
       *
       * @param request ResumeInstanceRefreshRequest
       * @return ResumeInstanceRefreshResponse
       */
      Models::ResumeInstanceRefreshResponse resumeInstanceRefresh(const Models::ResumeInstanceRefreshRequest &request);

      /**
       * @summary Resumes suspended processes in a scaling group. This operation allows Auto Scaling to proceed with executing these processes according to their predefined rules and logic. For example, if you resume the health check process in your scaling group, Auto Scaling automatically detects and removes any instances deemed unhealthy from the scaling group.
       *
       * @param request ResumeProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeProcessesResponse
       */
      Models::ResumeProcessesResponse resumeProcessesWithOptions(const Models::ResumeProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes suspended processes in a scaling group. This operation allows Auto Scaling to proceed with executing these processes according to their predefined rules and logic. For example, if you resume the health check process in your scaling group, Auto Scaling automatically detects and removes any instances deemed unhealthy from the scaling group.
       *
       * @param request ResumeProcessesRequest
       * @return ResumeProcessesResponse
       */
      Models::ResumeProcessesResponse resumeProcesses(const Models::ResumeProcessesRequest &request);

      /**
       * @summary Rolls back an instance refresh task. If an instance refresh task cannot meet your business requirements, you can call the RollbackInstanceRefresh operation. When you roll back an instance refresh task, Auto Scaling creates new instances based on the active scaling configuration to replace the instances whose configurations are already updated by running the task.
       *
       * @param request RollbackInstanceRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackInstanceRefreshResponse
       */
      Models::RollbackInstanceRefreshResponse rollbackInstanceRefreshWithOptions(const Models::RollbackInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an instance refresh task. If an instance refresh task cannot meet your business requirements, you can call the RollbackInstanceRefresh operation. When you roll back an instance refresh task, Auto Scaling creates new instances based on the active scaling configuration to replace the instances whose configurations are already updated by running the task.
       *
       * @param request RollbackInstanceRefreshRequest
       * @return RollbackInstanceRefreshResponse
       */
      Models::RollbackInstanceRefreshResponse rollbackInstanceRefresh(const Models::RollbackInstanceRefreshRequest &request);

      /**
       * @summary Scales instances. The ScaleWithAdjustment operation differs from the ExecuteScalingRule operation in that ScaleWithAdjust can directly scale instances without requiring you to create a scaling rule in advance.
       *
       * @description *   Before you call this operation, take note of the following items:
       *     *   The scaling group is in the Active state.
       *     *   The scaling group has no ongoing scaling activities.
       * *   If no scaling activities in the scaling group are in progress, the operation can trigger scaling activities before the cooldown period of the scaling group expires.
       * *   If the addition of a specific number of Elastic Compute Service (ECS) instances to the scaling group causes the total number of ECS instances in the scaling group to exceed the maximum allowed number, Auto Scaling adds ECS instances to the scaling group until the total number of instances is equal to the maximum allowed number.
       * *   If the removal of a specific number of ECS instances from the scaling group causes the total number of ECS instances in the scaling group to be less than the minimum allowed number, Auto Scaling removes ECS instances from the scaling group until the total number of instances is equal to the minimum allowed number.
       * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity based on the value of `ScalingActivityId` in the response.
       *
       * @param tmpReq ScaleWithAdjustmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleWithAdjustmentResponse
       */
      Models::ScaleWithAdjustmentResponse scaleWithAdjustmentWithOptions(const Models::ScaleWithAdjustmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales instances. The ScaleWithAdjustment operation differs from the ExecuteScalingRule operation in that ScaleWithAdjust can directly scale instances without requiring you to create a scaling rule in advance.
       *
       * @description *   Before you call this operation, take note of the following items:
       *     *   The scaling group is in the Active state.
       *     *   The scaling group has no ongoing scaling activities.
       * *   If no scaling activities in the scaling group are in progress, the operation can trigger scaling activities before the cooldown period of the scaling group expires.
       * *   If the addition of a specific number of Elastic Compute Service (ECS) instances to the scaling group causes the total number of ECS instances in the scaling group to exceed the maximum allowed number, Auto Scaling adds ECS instances to the scaling group until the total number of instances is equal to the maximum allowed number.
       * *   If the removal of a specific number of ECS instances from the scaling group causes the total number of ECS instances in the scaling group to be less than the minimum allowed number, Auto Scaling removes ECS instances from the scaling group until the total number of instances is equal to the minimum allowed number.
       * A successful call indicates that Auto Scaling accepts the request. However, the scaling activity may still fail. You can obtain the status of a scaling activity based on the value of `ScalingActivityId` in the response.
       *
       * @param request ScaleWithAdjustmentRequest
       * @return ScaleWithAdjustmentResponse
       */
      Models::ScaleWithAdjustmentResponse scaleWithAdjustment(const Models::ScaleWithAdjustmentRequest &request);

      /**
       * @summary Sets deletion protection for a scaling group. If you enable deletion protection for a scaling group, you cannot delete the scaling group. If you disable deletion protection for a scaling group, you can directly delete the scaling group. You can call the SetGroupDeletionProtection operation to enable or disable deletion protection.
       *
       * @param request SetGroupDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGroupDeletionProtectionResponse
       */
      Models::SetGroupDeletionProtectionResponse setGroupDeletionProtectionWithOptions(const Models::SetGroupDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets deletion protection for a scaling group. If you enable deletion protection for a scaling group, you cannot delete the scaling group. If you disable deletion protection for a scaling group, you can directly delete the scaling group. You can call the SetGroupDeletionProtection operation to enable or disable deletion protection.
       *
       * @param request SetGroupDeletionProtectionRequest
       * @return SetGroupDeletionProtectionResponse
       */
      Models::SetGroupDeletionProtectionResponse setGroupDeletionProtection(const Models::SetGroupDeletionProtectionRequest &request);

      /**
       * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\&M hurdles efficiently.
       *
       * @description Auto Scaling detects and removes unhealthy ECS instances or elastic container instances from the corresponding scaling groups. If you want to retain a specific instance in the corresponding scaling group, you can put the instance into the Standby or Protected state. For more information, see [EnterStandby](~~EnterStandby~~) and [SetInstancesProtection](~~SetInstancesProtection~~).
       *
       * @param request SetInstanceHealthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceHealthResponse
       */
      Models::SetInstanceHealthResponse setInstanceHealthWithOptions(const Models::SetInstanceHealthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\&M hurdles efficiently.
       *
       * @description Auto Scaling detects and removes unhealthy ECS instances or elastic container instances from the corresponding scaling groups. If you want to retain a specific instance in the corresponding scaling group, you can put the instance into the Standby or Protected state. For more information, see [EnterStandby](~~EnterStandby~~) and [SetInstancesProtection](~~SetInstancesProtection~~).
       *
       * @param request SetInstanceHealthRequest
       * @return SetInstanceHealthResponse
       */
      Models::SetInstanceHealthResponse setInstanceHealth(const Models::SetInstanceHealthRequest &request);

      /**
       * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
       *
       * @description Once ECS instances enter the Protected state, they become subject to the following restrictions:
       * *   ECS instances will persist in the Protected state, unless you deliberately remove them from this state.
       * *   Even in scenarios where automatic scale-in actions are initiated due to fluctuations in the number of ECS instances or the execution of event-triggered tasks, Auto Scaling does not remove ECS instances that are in the Protected state from their respective scaling groups. Only after being manually removed from their respective scaling groups can ECS instances that are in the Protected state be released. For more information, see [Remove an ECS instance](https://help.aliyun.com/document_detail/459393.html).
       * *   ECS instances in the Protected state maintain their health status even when they undergo stopping or restarting processes.
       *
       * @param request SetInstancesProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstancesProtectionResponse
       */
      Models::SetInstancesProtectionResponse setInstancesProtectionWithOptions(const Models::SetInstancesProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
       *
       * @description Once ECS instances enter the Protected state, they become subject to the following restrictions:
       * *   ECS instances will persist in the Protected state, unless you deliberately remove them from this state.
       * *   Even in scenarios where automatic scale-in actions are initiated due to fluctuations in the number of ECS instances or the execution of event-triggered tasks, Auto Scaling does not remove ECS instances that are in the Protected state from their respective scaling groups. Only after being manually removed from their respective scaling groups can ECS instances that are in the Protected state be released. For more information, see [Remove an ECS instance](https://help.aliyun.com/document_detail/459393.html).
       * *   ECS instances in the Protected state maintain their health status even when they undergo stopping or restarting processes.
       *
       * @param request SetInstancesProtectionRequest
       * @return SetInstancesProtectionResponse
       */
      Models::SetInstancesProtectionResponse setInstancesProtection(const Models::SetInstancesProtectionRequest &request);

      /**
       * @summary Starts an instance refresh task. If you want to apply a new scaling configuration in a scaling group or update the image specified in a scaling configuration, you can call the StartInstanceRefresh operation.
       *
       * @description *   Only one instance refresh task can be executed at a time in a scaling group.
       * *   You can start instance refresh tasks for Elastic Compute Service (ECS) instances in scaling groups that use the **priority policy** as the scaling policy. Scaling groups whose capacity is measured based on the **number of vCPUs** and scaling groups whose instance reclaim mode is **Economical Mode** or **Forcibly Recycle** do not support the StartInstanceRefresh operation.
       * *   When you start an instance refresh task, scaling events can be completed as expected. Take note that instances that are scaled out use the configurations specified in the instance refresh task.
       * *   The StartInstanceRefresh operation does not take effect on instances that are manually added or instances that are in the Standby and Protected states.
       *
       * @param request StartInstanceRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceRefreshResponse
       */
      Models::StartInstanceRefreshResponse startInstanceRefreshWithOptions(const Models::StartInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an instance refresh task. If you want to apply a new scaling configuration in a scaling group or update the image specified in a scaling configuration, you can call the StartInstanceRefresh operation.
       *
       * @description *   Only one instance refresh task can be executed at a time in a scaling group.
       * *   You can start instance refresh tasks for Elastic Compute Service (ECS) instances in scaling groups that use the **priority policy** as the scaling policy. Scaling groups whose capacity is measured based on the **number of vCPUs** and scaling groups whose instance reclaim mode is **Economical Mode** or **Forcibly Recycle** do not support the StartInstanceRefresh operation.
       * *   When you start an instance refresh task, scaling events can be completed as expected. Take note that instances that are scaled out use the configurations specified in the instance refresh task.
       * *   The StartInstanceRefresh operation does not take effect on instances that are manually added or instances that are in the Standby and Protected states.
       *
       * @param request StartInstanceRefreshRequest
       * @return StartInstanceRefreshResponse
       */
      Models::StartInstanceRefreshResponse startInstanceRefresh(const Models::StartInstanceRefreshRequest &request);

      /**
       * @summary Suspends an instance refresh task. If you are not sure that you want to roll back an ongoing instance refresh task whose configurations you think has an issue, you can call the SuspendInstanceRefresh operation to suspend the task.
       *
       * @description *   You cannot call this operation to suspend an instance refresh task that is being rolled back.
       *
       * @param request SuspendInstanceRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendInstanceRefreshResponse
       */
      Models::SuspendInstanceRefreshResponse suspendInstanceRefreshWithOptions(const Models::SuspendInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends an instance refresh task. If you are not sure that you want to roll back an ongoing instance refresh task whose configurations you think has an issue, you can call the SuspendInstanceRefresh operation to suspend the task.
       *
       * @description *   You cannot call this operation to suspend an instance refresh task that is being rolled back.
       *
       * @param request SuspendInstanceRefreshRequest
       * @return SuspendInstanceRefreshResponse
       */
      Models::SuspendInstanceRefreshResponse suspendInstanceRefresh(const Models::SuspendInstanceRefreshRequest &request);

      /**
       * @summary Suspends scaling processes. This operation empowers you to selectively pause distinct scaling processes within a particular scaling group, enabling you to carry out alternative tasks and achieve more granular management over your scaling operations.
       *
       * @param request SuspendProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendProcessesResponse
       */
      Models::SuspendProcessesResponse suspendProcessesWithOptions(const Models::SuspendProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends scaling processes. This operation empowers you to selectively pause distinct scaling processes within a particular scaling group, enabling you to carry out alternative tasks and achieve more granular management over your scaling operations.
       *
       * @param request SuspendProcessesRequest
       * @return SuspendProcessesResponse
       */
      Models::SuspendProcessesResponse suspendProcesses(const Models::SuspendProcessesRequest &request);

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
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from Auto Scaling resources simultaneously. This operation streamlines resource management activities, enhances system efficiency, and mitigates potential security vulnerabilities. Once a tag is removed from a particular resource, and if it is not re-added to any other resource, the system will automatically delete the unused tag.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Auto Scaling resources simultaneously. This operation streamlines resource management activities, enhances system efficiency, and mitigates potential security vulnerabilities. Once a tag is removed from a particular resource, and if it is not re-added to any other resource, the system will automatically delete the unused tag.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Checks whether the specified Alibaba Cloud account assumes the AliyunServiceRoleForAutoScaling service-linked role. An account can be used to operate Elastic Compute Service (ECS) instances and elastic container instances only after it assumes the service-linked role.
       *
       * @param request VerifyAuthenticationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyAuthenticationResponse
       */
      Models::VerifyAuthenticationResponse verifyAuthenticationWithOptions(const Models::VerifyAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the specified Alibaba Cloud account assumes the AliyunServiceRoleForAutoScaling service-linked role. An account can be used to operate Elastic Compute Service (ECS) instances and elastic container instances only after it assumes the service-linked role.
       *
       * @param request VerifyAuthenticationRequest
       * @return VerifyAuthenticationResponse
       */
      Models::VerifyAuthenticationResponse verifyAuthentication(const Models::VerifyAuthenticationRequest &request);

      /**
       * @summary Verifies whether Auto Scaling is activated. This operation guarantees that in response to shifts in business workloads or variations in incoming traffic, the system will automatically adjust resource provisioning. This auto-scaling capability enhances the overall system performance, ensuring high availability and improved flexibility to accommodate dynamic demands.
       *
       * @param request VerifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyUserResponse
       */
      Models::VerifyUserResponse verifyUserWithOptions(const Models::VerifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether Auto Scaling is activated. This operation guarantees that in response to shifts in business workloads or variations in incoming traffic, the system will automatically adjust resource provisioning. This auto-scaling capability enhances the overall system performance, ensuring high availability and improved flexibility to accommodate dynamic demands.
       *
       * @param request VerifyUserRequest
       * @return VerifyUserResponse
       */
      Models::VerifyUserResponse verifyUser(const Models::VerifyUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
