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
       * @description 基于YAML配置文件管理ECI类型的伸缩配置时，您需要注意以下事项：
       * - 如果指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件更新ECI类型的伸缩配置。
       * - 如果未指定ECI类型的伸缩配置ID时，系统会基于YAML配置文件创建对应ECI类型的伸缩配置。
       *
       * @param request ApplyEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyEciScalingConfigurationResponse
       */
      Models::ApplyEciScalingConfigurationResponse applyEciScalingConfigurationWithOptions(const Models::ApplyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request AttachAlbServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAlbServerGroupsResponse
       */
      Models::AttachAlbServerGroupsResponse attachAlbServerGroupsWithOptions(const Models::AttachAlbServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches Application Load Balancer (ALB) server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachAlbServerGroups operation. By attaching ALB server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request AttachAlbServerGroupsRequest
       * @return AttachAlbServerGroupsResponse
       */
      Models::AttachAlbServerGroupsResponse attachAlbServerGroups(const Models::AttachAlbServerGroupsRequest &request);

      /**
       * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
       *
       * @param request AttachDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDBInstancesResponse
       */
      Models::AttachDBInstancesResponse attachDBInstancesWithOptions(const Models::AttachDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates one or more ApsaraDB RDS instances with a scaling group.
       *
       * @param request AttachDBInstancesRequest
       * @return AttachDBInstancesResponse
       */
      Models::AttachDBInstancesResponse attachDBInstances(const Models::AttachDBInstancesRequest &request);

      /**
       * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
       *
       * @param request AttachInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstancesWithOptions(const Models::AttachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds instances to a scaling group to provide services or restarts Elastic Compute Service (ECS) instances stopped in Economical Mode to provide services. You can call the AttachInstances operation to add ECS instances, elastic container instances, or third-party instances managed by Alibaba Cloud to your scaling group to provide services. You can also call this operation to restart ECS instances stopped in Economical Mode in your scaling group to provide services.
       *
       * @param request AttachInstancesRequest
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstances(const Models::AttachInstancesRequest &request);

      /**
       * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
       *
       * @param request AttachLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachLoadBalancersResponse
       */
      Models::AttachLoadBalancersResponse attachLoadBalancersWithOptions(const Models::AttachLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches load balancers to a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups. Load balancers help distribute the access traffic to the instances in scaling groups, which effectively improves the service performance of the scaling groups. You can call the AttachLoadBalancers operation to attach one or more load balancers to your scaling group.
       *
       * @param request AttachLoadBalancersRequest
       * @return AttachLoadBalancersResponse
       */
      Models::AttachLoadBalancersResponse attachLoadBalancers(const Models::AttachLoadBalancersRequest &request);

      /**
       * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request AttachServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachServerGroupsResponse
       */
      Models::AttachServerGroupsResponse attachServerGroupsWithOptions(const Models::AttachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches server groups to a scaling group. To seamlessly adjust the number of instances in response to changes in your business workload or to maintain the uninterrupted accessibility of your application, you can call the AttachServerGroups operation. By attaching Application Load Balancer (ALB), Network Load Balancer (NLB), or Gateway Load Balancer (GWLB) server groups to your scaling group, this operation enables Auto Scaling to automatically tailor your computing capacity to your business needs. Furthermore, it optimizes traffic routing by dynamically allocating incoming requests based on current workload patterns, which significantly improves the stability and performance of your application.
       *
       * @param request AttachServerGroupsRequest
       * @return AttachServerGroupsResponse
       */
      Models::AttachServerGroupsResponse attachServerGroups(const Models::AttachServerGroupsRequest &request);

      /**
       * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
       *
       * @param request AttachVServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVServerGroupsResponse
       */
      Models::AttachVServerGroupsResponse attachVServerGroupsWithOptions(const Models::AttachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches vServer groups to a scaling group. After a Classic Load Balancer (CLB) instance is attached to your scaling group, the instances in the scaling group are automatically added as backend servers of the CLB instance. These servers then handle requests forwarded by the CLB instance, streamlining the processing of incoming traffic. To direct varying access requests to separate backend servers or to distribute requests based on domain names or URLs, you can call the AttachVServerGroups operation. This operation enables the addition of multiple vServer groups, allowing for efficient management of various backend server configurations tailored to your routing preferences.
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
       * @param request CompleteLifecycleActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteLifecycleActionResponse
       */
      Models::CompleteLifecycleActionResponse completeLifecycleActionWithOptions(const Models::CompleteLifecycleActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends the timeout period of a lifecycle hook ahead of schedule. If you have created a lifecycle hook for your scaling group, you can call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule based on your business requirements.
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
       * @description 伸缩配置用来指定弹性扩张时使用的ECI实例模板。
       * 参数Cpu和Memory用于指定CPU和内存定义实例规格的范围，弹性伸缩会结合IO优化、可用区等因素确定可用实例规格集合，并根据价格排序为您创建价格最低的实例。该方式仅适用于伸缩组的扩缩容策略为成本优化策略，且伸缩配置未指定实例规格的场景。
       *
       * @param request CreateEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEciScalingConfigurationResponse
       */
      Models::CreateEciScalingConfigurationResponse createEciScalingConfigurationWithOptions(const Models::CreateEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling configuration of the Elastic Container Instance type. Auto Scaling uses the scaling configuration as a template to create elastic container instances to meet your business requirements during scale-out events.
       *
       * @description 伸缩配置用来指定弹性扩张时使用的ECI实例模板。
       * 参数Cpu和Memory用于指定CPU和内存定义实例规格的范围，弹性伸缩会结合IO优化、可用区等因素确定可用实例规格集合，并根据价格排序为您创建价格最低的实例。该方式仅适用于伸缩组的扩缩容策略为成本优化策略，且伸缩配置未指定实例规格的场景。
       *
       * @param request CreateEciScalingConfigurationRequest
       * @return CreateEciScalingConfigurationResponse
       */
      Models::CreateEciScalingConfigurationResponse createEciScalingConfiguration(const Models::CreateEciScalingConfigurationRequest &request);

      /**
       * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
       *
       * @param request CreateLifecycleHookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecycleHookResponse
       */
      Models::CreateLifecycleHookResponse createLifecycleHookWithOptions(const Models::CreateLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more lifecycle hooks in a scaling group. A lifecycle hook allows you to execute custom actions like sending notifications or automating script execution at critical stages (such as instance startup and termination) in the lifecycle of an instance. Implementing the lifecycle hook feature allows for finer control and management of instances. For example, you can verify configurations, set up custom tasks, or back up data on your instances when lifecycle hooks take effect, thus enhancing the flexibility and reliability of application deployment.
       *
       * @param request CreateLifecycleHookRequest
       * @return CreateLifecycleHookResponse
       */
      Models::CreateLifecycleHookResponse createLifecycleHook(const Models::CreateLifecycleHookRequest &request);

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
      Models::CreateNotificationConfigurationResponse createNotificationConfigurationWithOptions(const Models::CreateNotificationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateNotificationConfigurationResponse createNotificationConfiguration(const Models::CreateNotificationConfigurationRequest &request);

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
      Models::CreateScalingConfigurationResponse createScalingConfigurationWithOptions(const Models::CreateScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateScalingConfigurationResponse createScalingConfiguration(const Models::CreateScalingConfigurationRequest &request);

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
      Models::CreateScalingGroupResponse createScalingGroupWithOptions(const Models::CreateScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateScalingGroupResponse createScalingGroup(const Models::CreateScalingGroupRequest &request);

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
      Models::CreateScalingRuleResponse createScalingRuleWithOptions(const Models::CreateScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateScalingRuleResponse createScalingRule(const Models::CreateScalingRuleRequest &request);

      /**
       * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
       *
       * @param request CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task. A scheduled task is a type of scaling task that enables automatic execution of a specific scaling rule at a specified point in time. You can call the CreateScheduledTask operation to create a scheduled task to implement automatic scaling of computing resources. This ensures your business continuity and minimizes resource costs.
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary 使指定伸缩配置进入失效状态
       *
       * @param request DeactivateScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateScalingConfigurationResponse
       */
      Models::DeactivateScalingConfigurationResponse deactivateScalingConfigurationWithOptions(const Models::DeactivateScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 使指定伸缩配置进入失效状态
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
       * @summary Deletes a health diagnosis report for a scaling group.
       *
       * @param request DeleteDiagnoseReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnoseReportResponse
       */
      Models::DeleteDiagnoseReportResponse deleteDiagnoseReportWithOptions(const Models::DeleteDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a health diagnosis report for a scaling group.
       *
       * @param request DeleteDiagnoseReportRequest
       * @return DeleteDiagnoseReportResponse
       */
      Models::DeleteDiagnoseReportResponse deleteDiagnoseReport(const Models::DeleteDiagnoseReportRequest &request);

      /**
       * @summary Deletes a scaling configuration of the Elastic Container Instance type. If the scaling configuration of a scaling group is in the Inactive state and the scaling group contains no elastic container instances created from the scaling configuration, you can call the DeleteEciScalingConfiguration operation to delete the scaling configuration to free up the scaling configuration quota.
       *
       * @param request DeleteEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEciScalingConfigurationResponse
       */
      Models::DeleteEciScalingConfigurationResponse deleteEciScalingConfigurationWithOptions(const Models::DeleteEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling configuration of the Elastic Container Instance type. If the scaling configuration of a scaling group is in the Inactive state and the scaling group contains no elastic container instances created from the scaling configuration, you can call the DeleteEciScalingConfiguration operation to delete the scaling configuration to free up the scaling configuration quota.
       *
       * @param request DeleteEciScalingConfigurationRequest
       * @return DeleteEciScalingConfigurationResponse
       */
      Models::DeleteEciScalingConfigurationResponse deleteEciScalingConfiguration(const Models::DeleteEciScalingConfigurationRequest &request);

      /**
       * @summary Deletes a lifecycle hook. If you no longer require a lifecycle hook, you can call the DeleteLifecycleHook operation to delete it, which frees up the lifecycle hook quota.
       *
       * @param request DeleteLifecycleHookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLifecycleHookResponse
       */
      Models::DeleteLifecycleHookResponse deleteLifecycleHookWithOptions(const Models::DeleteLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lifecycle hook. If you no longer require a lifecycle hook, you can call the DeleteLifecycleHook operation to delete it, which frees up the lifecycle hook quota.
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
       * @param request DeleteScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingConfigurationResponse
       */
      Models::DeleteScalingConfigurationResponse deleteScalingConfigurationWithOptions(const Models::DeleteScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling configuration that is used to create Elastic Compute Service (ECS) instances.
       *
       * @param request DeleteScalingConfigurationRequest
       * @return DeleteScalingConfigurationResponse
       */
      Models::DeleteScalingConfigurationResponse deleteScalingConfiguration(const Models::DeleteScalingConfigurationRequest &request);

      /**
       * @summary Deletes a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can create scaling groups to manage your computing power with ease. The computing power refers to the instances that provide the computing capability. If you no longer require a scaling group, you can call the DeleteScalingGroup operation to delete it to free up the scaling group quota.
       *
       * @param request DeleteScalingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingGroupResponse
       */
      Models::DeleteScalingGroupResponse deleteScalingGroupWithOptions(const Models::DeleteScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling group. If you want to enable policy-based automatic addition or removal of instances of a specific type to meet evolving business requirements, you can create scaling groups to manage your computing power with ease. The computing power refers to the instances that provide the computing capability. If you no longer require a scaling group, you can call the DeleteScalingGroup operation to delete it to free up the scaling group quota.
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
       * @summary Lists candidate instance types.
       *
       * @param request DescribeCandidateInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCandidateInstanceTypeResponse
       */
      Models::DescribeCandidateInstanceTypeResponse describeCandidateInstanceTypeWithOptions(const Models::DescribeCandidateInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists candidate instance types.
       *
       * @param request DescribeCandidateInstanceTypeRequest
       * @return DescribeCandidateInstanceTypeResponse
       */
      Models::DescribeCandidateInstanceTypeResponse describeCandidateInstanceType(const Models::DescribeCandidateInstanceTypeRequest &request);

      /**
       * @summary DescribeDiagnoseReports
       *
       * @param request DescribeDiagnoseReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnoseReportsResponse
       */
      Models::DescribeDiagnoseReportsResponse describeDiagnoseReportsWithOptions(const Models::DescribeDiagnoseReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeDiagnoseReports
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
       * @summary A scaling group\\"s configuration is key to successful scale-outs. Auto Scaling uses elasticity strength to quantify the effectiveness of a Scaling Configuration, helping you make targeted optimizations.
       *
       * @param request DescribeElasticStrengthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticStrengthResponse
       */
      Models::DescribeElasticStrengthResponse describeElasticStrengthWithOptions(const Models::DescribeElasticStrengthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A scaling group\\"s configuration is key to successful scale-outs. Auto Scaling uses elasticity strength to quantify the effectiveness of a Scaling Configuration, helping you make targeted optimizations.
       *
       * @param request DescribeElasticStrengthRequest
       * @return DescribeElasticStrengthResponse
       */
      Models::DescribeElasticStrengthResponse describeElasticStrength(const Models::DescribeElasticStrengthRequest &request);

      /**
       * @summary Instance creation and deletion statistics.
       *
       * @param request DescribeInstanceCreateAndDeleteStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceCreateAndDeleteStatisticsResponse
       */
      Models::DescribeInstanceCreateAndDeleteStatisticsResponse describeInstanceCreateAndDeleteStatisticsWithOptions(const Models::DescribeInstanceCreateAndDeleteStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Instance creation and deletion statistics.
       *
       * @param request DescribeInstanceCreateAndDeleteStatisticsRequest
       * @return DescribeInstanceCreateAndDeleteStatisticsResponse
       */
      Models::DescribeInstanceCreateAndDeleteStatisticsResponse describeInstanceCreateAndDeleteStatistics(const Models::DescribeInstanceCreateAndDeleteStatisticsRequest &request);

      /**
       * @summary Queries instance refresh tasks for a scaling group. You can call this operation to view basic information and progress of instance refresh tasks.
       *
       * @param request DescribeInstanceRefreshesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRefreshesResponse
       */
      Models::DescribeInstanceRefreshesResponse describeInstanceRefreshesWithOptions(const Models::DescribeInstanceRefreshesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance refresh tasks for a scaling group. You can call this operation to view basic information and progress of instance refresh tasks.
       *
       * @param request DescribeInstanceRefreshesRequest
       * @return DescribeInstanceRefreshesResponse
       */
      Models::DescribeInstanceRefreshesResponse describeInstanceRefreshes(const Models::DescribeInstanceRefreshesRequest &request);

      /**
       * @summary Queries lifecycle hook actions. When you call the DescribeLifecycleActions operation, you can specify parameters such as ScalingActivityId, NextToken, and MaxResults to query the details such as the action status and ID of a lifecycle hook. You can also call this operation to query the IDs of Elastic Compute Service (ECS) instances on which the lifecycle hook takes effect.
       *
       * @param request DescribeLifecycleActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecycleActionsResponse
       */
      Models::DescribeLifecycleActionsResponse describeLifecycleActionsWithOptions(const Models::DescribeLifecycleActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle hook actions. When you call the DescribeLifecycleActions operation, you can specify parameters such as ScalingActivityId, NextToken, and MaxResults to query the details such as the action status and ID of a lifecycle hook. You can also call this operation to query the IDs of Elastic Compute Service (ECS) instances on which the lifecycle hook takes effect.
       *
       * @param request DescribeLifecycleActionsRequest
       * @return DescribeLifecycleActionsResponse
       */
      Models::DescribeLifecycleActionsResponse describeLifecycleActions(const Models::DescribeLifecycleActionsRequest &request);

      /**
       * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
       *
       * @param request DescribeLifecycleHooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecycleHooksResponse
       */
      Models::DescribeLifecycleHooksResponse describeLifecycleHooksWithOptions(const Models::DescribeLifecycleHooksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle hooks. When you call this operation, you can specify the lifecycle hook ID or scaling group ID to query the details of the desired lifecycle hook, such as the default action after the lifecycle hook times out, scaling activity that corresponds to the lifecycle hook, Alibaba Cloud Resource Name (ARN) of the notification recipient, and effective period of the lifecycle hook.
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
       * @param request DescribeScalingActivitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingActivitiesResponse
       */
      Models::DescribeScalingActivitiesResponse describeScalingActivitiesWithOptions(const Models::DescribeScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling activities. You can call the DescribeScalingActivities operation to query the results of scaling activities triggered by scheduled tasks, event-triggered tasks, or manual execution of scaling rules. For example, you can query the status and cause of a scaling activity. You can also query the total number of instances after a scaling activity is complete.
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
       * @summary The distribution of scaling activities in different states over a period of time.
       *
       * @param request DescribeScalingActivityStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingActivityStatisticsResponse
       */
      Models::DescribeScalingActivityStatisticsResponse describeScalingActivityStatisticsWithOptions(const Models::DescribeScalingActivityStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The distribution of scaling activities in different states over a period of time.
       *
       * @param request DescribeScalingActivityStatisticsRequest
       * @return DescribeScalingActivityStatisticsResponse
       */
      Models::DescribeScalingActivityStatisticsResponse describeScalingActivityStatistics(const Models::DescribeScalingActivityStatisticsRequest &request);

      /**
       * @summary You can call the DescribeScalingConfigurations API to query information about ECS-type scaling configurations, including instance type and image details. This helps you understand the ECS instance template used during scale-out operations.
       *
       * @param request DescribeScalingConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingConfigurationsResponse
       */
      Models::DescribeScalingConfigurationsResponse describeScalingConfigurationsWithOptions(const Models::DescribeScalingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeScalingConfigurations API to query information about ECS-type scaling configurations, including instance type and image details. This helps you understand the ECS instance template used during scale-out operations.
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
       * @summary Calls DescribeScalingInstances to query the list and information of ECS instances in a scaling group by scaling group ID, including the total number of running spot instances, the total number of ECS instances, the warmup state of ECS instances, and the lifecycle state in the current scaling group. You can also filter ECS instances by health check status, lifecycle state, or creation type.
       *
       * @param request DescribeScalingInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingInstancesResponse
       */
      Models::DescribeScalingInstancesResponse describeScalingInstancesWithOptions(const Models::DescribeScalingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeScalingInstances to query the list and information of ECS instances in a scaling group by scaling group ID, including the total number of running spot instances, the total number of ECS instances, the warmup state of ECS instances, and the lifecycle state in the current scaling group. You can also filter ECS instances by health check status, lifecycle state, or creation type.
       *
       * @param request DescribeScalingInstancesRequest
       * @return DescribeScalingInstancesResponse
       */
      Models::DescribeScalingInstancesResponse describeScalingInstances(const Models::DescribeScalingInstancesRequest &request);

      /**
       * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
       *
       * @param request DescribeScalingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScalingRulesResponse
       */
      Models::DescribeScalingRulesResponse describeScalingRulesWithOptions(const Models::DescribeScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling rules. When you call this operation, you can specify the ID, name, or Alibaba Cloud Resource Name (ARN) of a scaling rule to query the details of the scaling rule. For example, you can query the adjustment method, instance warm-up period, and associated event-triggered tasks of the desired scaling rule.
       *
       * @param request DescribeScalingRulesRequest
       * @return DescribeScalingRulesResponse
       */
      Models::DescribeScalingRulesResponse describeScalingRules(const Models::DescribeScalingRulesRequest &request);

      /**
       * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
       *
       * @param request DescribeScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasksWithOptions(const Models::DescribeScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled tasks. A scheduled task is a predefined task that triggers the automatic execution of a scaling rule at the specified point in time. It ensures an automatic scaling of computing resources to fulfill your business demands at a minimum cost. After you create a scheduled task, you can call the DescribeScheduledTasks operation to query the details of the task, such as the execution time point and the scaling group ID. You can also call this operation to query the total number of existing scheduled tasks.
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
       * @param request DetachInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachInstancesResponse
       */
      Models::DetachInstancesResponse detachInstancesWithOptions(const Models::DetachInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes instances from a scaling group. If an enabled scaling group has no ongoing scaling activities, you can call the DetachInstances operation to remove one or more Elastic Compute Service (ECS) instances, elastic container instances, or Alibaba Cloud-hosted third-party instances from the scaling group.
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
       * @summary Remove one or more SLB server groups from a scaling group. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB), which can dynamically adjust SLB policies and help improve high availability of the system.
       *
       * @param request DetachServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachServerGroupsResponse
       */
      Models::DetachServerGroupsResponse detachServerGroupsWithOptions(const Models::DetachServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove one or more SLB server groups from a scaling group. Supported server group types include Application Load Balancer (ALB), Network Load Balancer (NLB), and Gateway Load Balancer (GWLB), which can dynamically adjust SLB policies and help improve high availability of the system.
       *
       * @param request DetachServerGroupsRequest
       * @return DetachServerGroupsResponse
       */
      Models::DetachServerGroupsResponse detachServerGroups(const Models::DetachServerGroupsRequest &request);

      /**
       * @summary Detaches vServer groups from a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups to improve service performance. If the load balancer currently attached to your scaling group is no longer needed to distribute the access traffic to the instances in your scaling group, you can call the DetachVServerGroups operation to detach one or more vServer groups of this load balancer from the scaling group.
       *
       * @param request DetachVServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVServerGroupsResponse
       */
      Models::DetachVServerGroupsResponse detachVServerGroupsWithOptions(const Models::DetachVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches vServer groups from a scaling group. Auto Scaling supports the attachment of load balancers to scaling groups to improve service performance. If the load balancer currently attached to your scaling group is no longer needed to distribute the access traffic to the instances in your scaling group, you can call the DetachVServerGroups operation to detach one or more vServer groups of this load balancer from the scaling group.
       *
       * @param request DetachVServerGroupsRequest
       * @return DetachVServerGroupsResponse
       */
      Models::DetachVServerGroupsResponse detachVServerGroups(const Models::DetachVServerGroupsRequest &request);

      /**
       * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
       *
       * @param request DisableAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAlarmResponse
       */
      Models::DisableAlarmResponse disableAlarmWithOptions(const Models::DisableAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an event-triggered task. If your business pattern is unpredictable or prone to unforeseen traffic spikes, you can create event-triggered tasks by associating CloudMonitor metrics to effectively monitor fluctuations in your business workload. Upon detecting that the criteria for alerts, as specified in event-triggered tasks, are fulfilled, Auto Scaling promptly issues alerts and executes the scaling rules predefined within those tasks. This process occurs within the predefined effective time windows of the tasks, thereby facilitating the automatic increase or decrease of Elastic Compute Service (ECS) instances or elastic container instances within your scaling groups. Ultimately, this mechanism ensures the dynamic optimization of resources based on real-time workload demands. If you currently do not need an event-triggered task, you can call the DisableAlarm operation to disable it.
       *
       * @param request DisableAlarmRequest
       * @return DisableAlarmResponse
       */
      Models::DisableAlarmResponse disableAlarm(const Models::DisableAlarmRequest &request);

      /**
       * @summary Disables a scaling group. If you temporarily do not require a scaling group that is in the Enabled state, you can call the DisableScalingGroup operation to disable it.
       *
       * @param request DisableScalingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableScalingGroupResponse
       */
      Models::DisableScalingGroupResponse disableScalingGroupWithOptions(const Models::DisableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a scaling group. If you temporarily do not require a scaling group that is in the Enabled state, you can call the DisableScalingGroup operation to disable it.
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
       * @param request EnableScalingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableScalingGroupResponse
       */
      Models::EnableScalingGroupResponse enableScalingGroupWithOptions(const Models::EnableScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a scaling group. If a scaling group is in the Disabled state and contains an instance configuration source such as a launch template or a scaling configuration, you can call the EnableScalingGroup operation to enable the scaling group. This operation permits Auto Scaling to dynamically adjust the computing power (also known as the number of instances) in the scaling group based on your business requirements.
       *
       * @param request EnableScalingGroupRequest
       * @return EnableScalingGroupResponse
       */
      Models::EnableScalingGroupResponse enableScalingGroup(const Models::EnableScalingGroupRequest &request);

      /**
       * @summary Puts an Elastic Compute Service (ECS) instance into the Standby state.
       *
       * @param request EnterStandbyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterStandbyResponse
       */
      Models::EnterStandbyResponse enterStandbyWithOptions(const Models::EnterStandbyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Puts an Elastic Compute Service (ECS) instance into the Standby state.
       *
       * @param request EnterStandbyRequest
       * @return EnterStandbyResponse
       */
      Models::EnterStandbyResponse enterStandby(const Models::EnterStandbyRequest &request);

      /**
       * @summary Executes a scaling rule. To adjust the number of Elastic Compute Service (ECS) instances or elastic container instances, you can manually execute a scaling rule or enable Auto Scaling to execute a scaling rule. You can call the ExecuteScalingRule operation to execute simple scaling rules or step scaling rules. Auto Scaling automatically executes target tracking scaling rules and predictive scaling rules on your behalf without requiring explicit execution calls.
       *
       * @param request ExecuteScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteScalingRuleResponse
       */
      Models::ExecuteScalingRuleResponse executeScalingRuleWithOptions(const Models::ExecuteScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a scaling rule. To adjust the number of Elastic Compute Service (ECS) instances or elastic container instances, you can manually execute a scaling rule or enable Auto Scaling to execute a scaling rule. You can call the ExecuteScalingRule operation to execute simple scaling rules or step scaling rules. Auto Scaling automatically executes target tracking scaling rules and predictive scaling rules on your behalf without requiring explicit execution calls.
       *
       * @param request ExecuteScalingRuleRequest
       * @return ExecuteScalingRuleResponse
       */
      Models::ExecuteScalingRuleResponse executeScalingRule(const Models::ExecuteScalingRuleRequest &request);

      /**
       * @summary Removes an instance from the Standby state. When a scale-in event is triggered in a scaling group, Auto Scaling does not remove Elastic Compute Service (ECS) instances or elastic container instances that are in the Standby state from the scaling group. If you want to restart the instances that are in the Standby state, you can call the ExitStandby operation to remove the instances from the Standby state and put them into the In Service state.
       *
       * @param request ExitStandbyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExitStandbyResponse
       */
      Models::ExitStandbyResponse exitStandbyWithOptions(const Models::ExitStandbyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an instance from the Standby state. When a scale-in event is triggered in a scaling group, Auto Scaling does not remove Elastic Compute Service (ECS) instances or elastic container instances that are in the Standby state from the scaling group. If you want to restart the instances that are in the Standby state, you can call the ExitStandby operation to remove the instances from the Standby state and put them into the In Service state.
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
      Models::ModifyAlarmResponse modifyAlarmWithOptions(const Models::ModifyAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @description - 如果修改伸缩配置的名称，请注意同一伸缩组下不能存在名称相同的伸缩配置。
       * - 可以调用[DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html)查询并验证修改结果。
       *
       * @param request ModifyEciScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEciScalingConfigurationResponse
       */
      Models::ModifyEciScalingConfigurationResponse modifyEciScalingConfigurationWithOptions(const Models::ModifyEciScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling configuration of the Elastic Container Instance type. When you call the ModifyEciScalingConfiguration operation, you can specify the ID, name, and instance properties of the scaling configuration whose information you want to modify. You can modify the instance restart policy, instance bidding policy, and elastic IP address (EIP) bandwidth.
       *
       * @description - 如果修改伸缩配置的名称，请注意同一伸缩组下不能存在名称相同的伸缩配置。
       * - 可以调用[DescribeEciScalingConfigurations](https://help.aliyun.com/document_detail/459374.html)查询并验证修改结果。
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
       * @param request ModifyLifecycleHookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLifecycleHookResponse
       */
      Models::ModifyLifecycleHookResponse modifyLifecycleHookWithOptions(const Models::ModifyLifecycleHookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a lifecycle hook. If an existing lifecycle hook does not meet your business requirements anymore, you can call the ModifyLifecycleHook operation to modify the information such as the scaling event, timeout period, and default action of the lifecycle hook. Before you modify a lifecycle hook, you can locate the lifecycle hook by its ID, name, or scaling group.
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
      Models::ModifyScalingConfigurationResponse modifyScalingConfigurationWithOptions(const Models::ModifyScalingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyScalingConfigurationResponse modifyScalingConfiguration(const Models::ModifyScalingConfigurationRequest &request);

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
      Models::ModifyScalingGroupResponse modifyScalingGroupWithOptions(const Models::ModifyScalingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled task. If an existing scheduled task cannot meet your business requirements, you can call the ModifyScheduledTask operation to adjust its parameter settings including the scaling rule to execute and the boundary values of your scaling group, without the need to create a new scheduled task. This operation provides a flexible way to optimize scheduled tasks.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Queries the historical monitoring data of a scaling group that uses predictive scaling rules.
       *
       * @param request QueryHistoricalMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHistoricalMetricResponse
       */
      Models::QueryHistoricalMetricResponse queryHistoricalMetricWithOptions(const Models::QueryHistoricalMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical monitoring data of a scaling group that uses predictive scaling rules.
       *
       * @param request QueryHistoricalMetricRequest
       * @return QueryHistoricalMetricResponse
       */
      Models::QueryHistoricalMetricResponse queryHistoricalMetric(const Models::QueryHistoricalMetricRequest &request);

      /**
       * @summary Queries predicted monitoring data.
       *
       * @param request QueryPredictiveMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPredictiveMetricResponse
       */
      Models::QueryPredictiveMetricResponse queryPredictiveMetricWithOptions(const Models::QueryPredictiveMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries predicted monitoring data.
       *
       * @param request QueryPredictiveMetricRequest
       * @return QueryPredictiveMetricResponse
       */
      Models::QueryPredictiveMetricResponse queryPredictiveMetric(const Models::QueryPredictiveMetricRequest &request);

      /**
       * @summary Queries the information about a prediction task.
       *
       * @param request QueryPredictiveTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPredictiveTaskInfoResponse
       */
      Models::QueryPredictiveTaskInfoResponse queryPredictiveTaskInfoWithOptions(const Models::QueryPredictiveTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a prediction task.
       *
       * @param request QueryPredictiveTaskInfoRequest
       * @return QueryPredictiveTaskInfoResponse
       */
      Models::QueryPredictiveTaskInfoResponse queryPredictiveTaskInfo(const Models::QueryPredictiveTaskInfoRequest &request);

      /**
       * @summary Queries the predicted number of instances in a scaling group.
       *
       * @param request QueryPredictiveValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPredictiveValueResponse
       */
      Models::QueryPredictiveValueResponse queryPredictiveValueWithOptions(const Models::QueryPredictiveValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the predicted number of instances in a scaling group.
       *
       * @param request QueryPredictiveValueRequest
       * @return QueryPredictiveValueResponse
       */
      Models::QueryPredictiveValueResponse queryPredictiveValue(const Models::QueryPredictiveValueRequest &request);

      /**
       * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
       *
       * @param request RebalanceInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebalanceInstancesResponse
       */
      Models::RebalanceInstancesResponse rebalanceInstancesWithOptions(const Models::RebalanceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebalances the distribution of Elastic Compute Service (ECS) instances across zones. If ECS instances are unevenly distributed across multiple zones, you can call the RebalanceInstances operation to rebalance the distribution of the ECS instances across the zones.
       *
       * @param request RebalanceInstancesRequest
       * @return RebalanceInstancesResponse
       */
      Models::RebalanceInstancesResponse rebalanceInstances(const Models::RebalanceInstancesRequest &request);

      /**
       * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
       *
       * @param request RecordLifecycleActionHeartbeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordLifecycleActionHeartbeatResponse
       */
      Models::RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeatWithOptions(const Models::RecordLifecycleActionHeartbeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the time window during which Elastic Compute Service (ECS) instances stay in a Pending state. If the current time window during which an ECS instance stays in a Pending state is not sufficient for you to complete custom operations on the ECS instance, you can call the RecordLifecycleActionHeartbeat operation to extend the time window. When you call this operation, you can specify lifecycleHookId, lifecycleActionToken, and heartbeatTimeout to extend the time window for the desired ECS instance.
       *
       * @param request RecordLifecycleActionHeartbeatRequest
       * @return RecordLifecycleActionHeartbeatResponse
       */
      Models::RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeat(const Models::RecordLifecycleActionHeartbeatRequest &request);

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
      Models::RemoveInstancesResponse removeInstancesWithOptions(const Models::RemoveInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ScaleWithAdjustmentResponse scaleWithAdjustmentWithOptions(const Models::ScaleWithAdjustmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
       * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\\\\\&M hurdles efficiently.
       *
       * @description 伸缩组会检测并移出处于不健康状态的ECS实例或ECI实例，如果您需要保留指定的ECS实例或ECI实例，请将ECS实例或ECI实例转入备用或者保护状态，更多信息，请参见[EnterStandby](https://help.aliyun.com/document_detail/459345.html)和[SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html)。
       *
       * @param request SetInstanceHealthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceHealthResponse
       */
      Models::SetInstanceHealthResponse setInstanceHealthWithOptions(const Models::SetInstanceHealthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets instance health. At times, the automatic health check system might not sufficiently determine the precise health status of your Elastic Compute Service (ECS) instances or elastic container instances. To overcome this, you can call the SetInstanceHealth operation to swiftly pinpoint problematic instances and resolve issues. This operation is designed to more precisely align with real-world business requirements and tackle O\\\\\\&M hurdles efficiently.
       *
       * @description 伸缩组会检测并移出处于不健康状态的ECS实例或ECI实例，如果您需要保留指定的ECS实例或ECI实例，请将ECS实例或ECI实例转入备用或者保护状态，更多信息，请参见[EnterStandby](https://help.aliyun.com/document_detail/459345.html)和[SetInstancesProtection](https://help.aliyun.com/document_detail/459342.html)。
       *
       * @param request SetInstanceHealthRequest
       * @return SetInstanceHealthResponse
       */
      Models::SetInstanceHealthResponse setInstanceHealth(const Models::SetInstanceHealthRequest &request);

      /**
       * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
       *
       * @param request SetInstancesProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstancesProtectionResponse
       */
      Models::SetInstancesProtectionResponse setInstancesProtectionWithOptions(const Models::SetInstancesProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Puts or removes Elastic Compute Service (ECS) instances into or from the Protected state. After you put an ECS instance into the Protected state, the ECS instance will not be stopped or released when a scale-in event is triggered. In this case, you can manually delete the ECS instance in the Auto Scaling console or by calling the RemoveInstances operation.
       *
       * @param request SetInstancesProtectionRequest
       * @return SetInstancesProtectionResponse
       */
      Models::SetInstancesProtectionResponse setInstancesProtection(const Models::SetInstancesProtectionRequest &request);

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
      Models::StartInstanceRefreshResponse startInstanceRefreshWithOptions(const Models::StartInstanceRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

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
