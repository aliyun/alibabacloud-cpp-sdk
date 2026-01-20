// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIDNS20150109_HPP_
#define ALIBABACLOUD_ALIDNS20150109_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Alidns20150109Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Alidns20150109.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a custom line to the domain name.
       *
       * @description In each CIDR block, the end IP address must be greater than or equal to the start IP address.\\
       * The CIDR blocks that are specified for all custom lines of a domain name cannot be overlapped.
       *
       * @param request AddCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLineWithOptions(const Models::AddCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom line to the domain name.
       *
       * @description In each CIDR block, the end IP address must be greater than or equal to the start IP address.\\
       * The CIDR blocks that are specified for all custom lines of a domain name cannot be overlapped.
       *
       * @param request AddCustomLineRequest
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLine(const Models::AddCustomLineRequest &request);

      /**
       * @summary Adds a cache-accelerated domain name based on the specified parameters.
       *
       * @param request AddDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsCacheDomainResponse
       */
      Models::AddDnsCacheDomainResponse addDnsCacheDomainWithOptions(const Models::AddDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a cache-accelerated domain name based on the specified parameters.
       *
       * @param request AddDnsCacheDomainRequest
       * @return AddDnsCacheDomainResponse
       */
      Models::AddDnsCacheDomainResponse addDnsCacheDomain(const Models::AddDnsCacheDomainRequest &request);

      /**
       * @summary Creates an access policy.
       *
       * @param request AddDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmAccessStrategyResponse
       */
      Models::AddDnsGtmAccessStrategyResponse addDnsGtmAccessStrategyWithOptions(const Models::AddDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access policy.
       *
       * @param request AddDnsGtmAccessStrategyRequest
       * @return AddDnsGtmAccessStrategyResponse
       */
      Models::AddDnsGtmAccessStrategyResponse addDnsGtmAccessStrategy(const Models::AddDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Creates an address pool.
       *
       * @param request AddDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmAddressPoolResponse
       */
      Models::AddDnsGtmAddressPoolResponse addDnsGtmAddressPoolWithOptions(const Models::AddDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address pool.
       *
       * @param request AddDnsGtmAddressPoolRequest
       * @return AddDnsGtmAddressPoolResponse
       */
      Models::AddDnsGtmAddressPoolResponse addDnsGtmAddressPool(const Models::AddDnsGtmAddressPoolRequest &request);

      /**
       * @summary Creates a health check task.
       *
       * @description ***
       *
       * @param request AddDnsGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmMonitorResponse
       */
      Models::AddDnsGtmMonitorResponse addDnsGtmMonitorWithOptions(const Models::AddDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check task.
       *
       * @description ***
       *
       * @param request AddDnsGtmMonitorRequest
       * @return AddDnsGtmMonitorResponse
       */
      Models::AddDnsGtmMonitorResponse addDnsGtmMonitor(const Models::AddDnsGtmMonitorRequest &request);

      /**
       * @summary Adds a domain name based on the specified parameters.
       *
       * @description For more information about how to check whether a domain name is valid, see
       * [Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
       *
       * @param request AddDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomainWithOptions(const Models::AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name based on the specified parameters.
       *
       * @description For more information about how to check whether a domain name is valid, see
       * [Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
       *
       * @param request AddDomainRequest
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomain(const Models::AddDomainRequest &request);

      /**
       * @summary Creates a backup task for a domain name.
       *
       * @param request AddDomainBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainBackupResponse
       */
      Models::AddDomainBackupResponse addDomainBackupWithOptions(const Models::AddDomainBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup task for a domain name.
       *
       * @param request AddDomainBackupRequest
       * @return AddDomainBackupResponse
       */
      Models::AddDomainBackupResponse addDomainBackup(const Models::AddDomainBackupRequest &request);

      /**
       * @summary Creates a domain name group based on the specified parameters.
       *
       * @param request AddDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainGroupResponse
       */
      Models::AddDomainGroupResponse addDomainGroupWithOptions(const Models::AddDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a domain name group based on the specified parameters.
       *
       * @param request AddDomainGroupRequest
       * @return AddDomainGroupResponse
       */
      Models::AddDomainGroupResponse addDomainGroup(const Models::AddDomainGroupRequest &request);

      /**
       * @summary Adds a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request AddDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainRecordResponse
       */
      Models::AddDomainRecordResponse addDomainRecordWithOptions(const Models::AddDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request AddDomainRecordRequest
       * @return AddDomainRecordResponse
       */
      Models::AddDomainRecordResponse addDomainRecord(const Models::AddDomainRecordRequest &request);

      /**
       * @param request AddGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmAccessStrategyResponse
       */
      Models::AddGtmAccessStrategyResponse addGtmAccessStrategyWithOptions(const Models::AddGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddGtmAccessStrategyRequest
       * @return AddGtmAccessStrategyResponse
       */
      Models::AddGtmAccessStrategyResponse addGtmAccessStrategy(const Models::AddGtmAccessStrategyRequest &request);

      /**
       * @summary Creates an address pool.
       *
       * @param request AddGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmAddressPoolResponse
       */
      Models::AddGtmAddressPoolResponse addGtmAddressPoolWithOptions(const Models::AddGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address pool.
       *
       * @param request AddGtmAddressPoolRequest
       * @return AddGtmAddressPoolResponse
       */
      Models::AddGtmAddressPoolResponse addGtmAddressPool(const Models::AddGtmAddressPoolRequest &request);

      /**
       * @summary Creates a health check task.
       *
       * @param request AddGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmMonitorResponse
       */
      Models::AddGtmMonitorResponse addGtmMonitorWithOptions(const Models::AddGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check task.
       *
       * @param request AddGtmMonitorRequest
       * @return AddGtmMonitorResponse
       */
      Models::AddGtmMonitorResponse addGtmMonitor(const Models::AddGtmMonitorRequest &request);

      /**
       * @summary Creates a disaster recovery plan.
       *
       * @param request AddGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmRecoveryPlanResponse
       */
      Models::AddGtmRecoveryPlanResponse addGtmRecoveryPlanWithOptions(const Models::AddGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a disaster recovery plan.
       *
       * @param request AddGtmRecoveryPlanRequest
       * @return AddGtmRecoveryPlanResponse
       */
      Models::AddGtmRecoveryPlanResponse addGtmRecoveryPlan(const Models::AddGtmRecoveryPlanRequest &request);

      /**
       * @summary 新增递归解析内置权威解析记录
       *
       * @param request AddRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecursionRecordResponse
       */
      Models::AddRecursionRecordResponse addRecursionRecordWithOptions(const Models::AddRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增递归解析内置权威解析记录
       *
       * @param request AddRecursionRecordRequest
       * @return AddRecursionRecordResponse
       */
      Models::AddRecursionRecordResponse addRecursionRecord(const Models::AddRecursionRecordRequest &request);

      /**
       * @summary 新增递归解析内置权威域名zone
       *
       * @param request AddRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecursionZoneResponse
       */
      Models::AddRecursionZoneResponse addRecursionZoneWithOptions(const Models::AddRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增递归解析内置权威域名zone
       *
       * @param request AddRecursionZoneRequest
       * @return AddRecursionZoneResponse
       */
      Models::AddRecursionZoneResponse addRecursionZone(const Models::AddRecursionZoneRequest &request);

      /**
       * @summary 用于添加特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request AddRspDomainServerHoldStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRspDomainServerHoldStatusForGatewayResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayResponse addRspDomainServerHoldStatusForGatewayWithOptions(const Models::AddRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于添加特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request AddRspDomainServerHoldStatusForGatewayRequest
       * @return AddRspDomainServerHoldStatusForGatewayResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayResponse addRspDomainServerHoldStatusForGateway(const Models::AddRspDomainServerHoldStatusForGatewayRequest &request);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayOteResponse addRspDomainServerHoldStatusForGatewayOteWithOptions(const Models::AddRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
       * @return AddRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayOteResponse addRspDomainServerHoldStatusForGatewayOte(const Models::AddRspDomainServerHoldStatusForGatewayOteRequest &request);

      /**
       * @summary Binds one or more domain names to a paid Alibaba Cloud DNS instance.
       *
       * @description A paid Alibaba Cloud DNS instance whose ID starts with dns is an instance of the new version. You can call this API operation to bind multiple domain names to the instance. If the upper limit is exceeded, an error message is returned.\\
       * A paid Alibaba Cloud DNS instance whose ID does not start with dns is an instance of the old version. You can call this API operation to bind only one domain name to the instance. However, if the instance is already bound to a domain name, you must unbind the original domain name from the instance and bind the desired domain name to the instance.
       *
       * @param request BindInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInstanceDomainsResponse
       */
      Models::BindInstanceDomainsResponse bindInstanceDomainsWithOptions(const Models::BindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds one or more domain names to a paid Alibaba Cloud DNS instance.
       *
       * @description A paid Alibaba Cloud DNS instance whose ID starts with dns is an instance of the new version. You can call this API operation to bind multiple domain names to the instance. If the upper limit is exceeded, an error message is returned.\\
       * A paid Alibaba Cloud DNS instance whose ID does not start with dns is an instance of the old version. You can call this API operation to bind only one domain name to the instance. However, if the instance is already bound to a domain name, you must unbind the original domain name from the instance and bind the desired domain name to the instance.
       *
       * @param request BindInstanceDomainsRequest
       * @return BindInstanceDomainsResponse
       */
      Models::BindInstanceDomainsResponse bindInstanceDomains(const Models::BindInstanceDomainsRequest &request);

      /**
       * @summary Moves a domain name from the original group to the new group based on the specified parameters.
       *
       * @description You can specify GroupId to move a domain name to a specific domain name group. You can move the domain name to the group that contains all domain names or the default group.
       *
       * @param request ChangeDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDomainGroupResponse
       */
      Models::ChangeDomainGroupResponse changeDomainGroupWithOptions(const Models::ChangeDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a domain name from the original group to the new group based on the specified parameters.
       *
       * @description You can specify GroupId to move a domain name to a specific domain name group. You can move the domain name to the group that contains all domain names or the default group.
       *
       * @param request ChangeDomainGroupRequest
       * @return ChangeDomainGroupResponse
       */
      Models::ChangeDomainGroupResponse changeDomainGroup(const Models::ChangeDomainGroupRequest &request);

      /**
       * @summary Changes the domain name that is bound to an Alibaba Cloud DNS instance.
       *
       * @description *   **You can call this operation regardless of whether the Alibaba Cloud DNS instance is bound to a domain name. You can also call this operation to unbind the domain name from the Alibaba Cloud DNS instance by leaving the NewDomain parameter empty.**
       * *   **This operation applies to instances of the custom edition. To change the domain name that is bound to an Alibaba Cloud DNS instance of Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation.
       *
       * @param request ChangeDomainOfDnsProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDomainOfDnsProductResponse
       */
      Models::ChangeDomainOfDnsProductResponse changeDomainOfDnsProductWithOptions(const Models::ChangeDomainOfDnsProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the domain name that is bound to an Alibaba Cloud DNS instance.
       *
       * @description *   **You can call this operation regardless of whether the Alibaba Cloud DNS instance is bound to a domain name. You can also call this operation to unbind the domain name from the Alibaba Cloud DNS instance by leaving the NewDomain parameter empty.**
       * *   **This operation applies to instances of the custom edition. To change the domain name that is bound to an Alibaba Cloud DNS instance of Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation.
       *
       * @param request ChangeDomainOfDnsProductRequest
       * @return ChangeDomainOfDnsProductResponse
       */
      Models::ChangeDomainOfDnsProductResponse changeDomainOfDnsProduct(const Models::ChangeDomainOfDnsProductRequest &request);

      /**
       * @summary Copies the configurations of a Global Traffic Manager (GTM) instance.
       *
       * @param request CopyGtmConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyGtmConfigResponse
       */
      Models::CopyGtmConfigResponse copyGtmConfigWithOptions(const Models::CopyGtmConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies the configurations of a Global Traffic Manager (GTM) instance.
       *
       * @param request CopyGtmConfigRequest
       * @return CopyGtmConfigResponse
       */
      Models::CopyGtmConfigResponse copyGtmConfig(const Models::CopyGtmConfigRequest &request);

      /**
       * @summary Creates an address.
       *
       * @param tmpReq CreateCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmAddressResponse
       */
      Models::CreateCloudGtmAddressResponse createCloudGtmAddressWithOptions(const Models::CreateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address.
       *
       * @param request CreateCloudGtmAddressRequest
       * @return CreateCloudGtmAddressResponse
       */
      Models::CreateCloudGtmAddressResponse createCloudGtmAddress(const Models::CreateCloudGtmAddressRequest &request);

      /**
       * @summary Creates an address pool.
       *
       * @param request CreateCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmAddressPoolResponse
       */
      Models::CreateCloudGtmAddressPoolResponse createCloudGtmAddressPoolWithOptions(const Models::CreateCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address pool.
       *
       * @param request CreateCloudGtmAddressPoolRequest
       * @return CreateCloudGtmAddressPoolResponse
       */
      Models::CreateCloudGtmAddressPoolResponse createCloudGtmAddressPool(const Models::CreateCloudGtmAddressPoolRequest &request);

      /**
       * @summary 创建gtm实例配置
       *
       * @param request CreateCloudGtmInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmInstanceConfigResponse
       */
      Models::CreateCloudGtmInstanceConfigResponse createCloudGtmInstanceConfigWithOptions(const Models::CreateCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建gtm实例配置
       *
       * @param request CreateCloudGtmInstanceConfigRequest
       * @return CreateCloudGtmInstanceConfigResponse
       */
      Models::CreateCloudGtmInstanceConfigResponse createCloudGtmInstanceConfig(const Models::CreateCloudGtmInstanceConfigRequest &request);

      /**
       * @summary Creates a health check template.
       *
       * @param tmpReq CreateCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmMonitorTemplateResponse
       */
      Models::CreateCloudGtmMonitorTemplateResponse createCloudGtmMonitorTemplateWithOptions(const Models::CreateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check template.
       *
       * @param request CreateCloudGtmMonitorTemplateRequest
       * @return CreateCloudGtmMonitorTemplateResponse
       */
      Models::CreateCloudGtmMonitorTemplateResponse createCloudGtmMonitorTemplate(const Models::CreateCloudGtmMonitorTemplateRequest &request);

      /**
       * @summary 创建公共DNS AppKey
       *
       * @param request CreatePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdnsAppKeyResponse
       */
      Models::CreatePdnsAppKeyResponse createPdnsAppKeyWithOptions(const Models::CreatePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建公共DNS AppKey
       *
       * @param request CreatePdnsAppKeyRequest
       * @return CreatePdnsAppKeyResponse
       */
      Models::CreatePdnsAppKeyResponse createPdnsAppKey(const Models::CreatePdnsAppKeyRequest &request);

      /**
       * @summary 创建公共DNS Udp Ip地址段
       *
       * @param request CreatePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdnsUdpIpSegmentResponse
       */
      Models::CreatePdnsUdpIpSegmentResponse createPdnsUdpIpSegmentWithOptions(const Models::CreatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建公共DNS Udp Ip地址段
       *
       * @param request CreatePdnsUdpIpSegmentRequest
       * @return CreatePdnsUdpIpSegmentResponse
       */
      Models::CreatePdnsUdpIpSegmentResponse createPdnsUdpIpSegment(const Models::CreatePdnsUdpIpSegmentRequest &request);

      /**
       * @summary Deletes an address.
       *
       * @param request DeleteCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmAddressResponse
       */
      Models::DeleteCloudGtmAddressResponse deleteCloudGtmAddressWithOptions(const Models::DeleteCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address.
       *
       * @param request DeleteCloudGtmAddressRequest
       * @return DeleteCloudGtmAddressResponse
       */
      Models::DeleteCloudGtmAddressResponse deleteCloudGtmAddress(const Models::DeleteCloudGtmAddressRequest &request);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmAddressPoolResponse
       */
      Models::DeleteCloudGtmAddressPoolResponse deleteCloudGtmAddressPoolWithOptions(const Models::DeleteCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteCloudGtmAddressPoolRequest
       * @return DeleteCloudGtmAddressPoolResponse
       */
      Models::DeleteCloudGtmAddressPoolResponse deleteCloudGtmAddressPool(const Models::DeleteCloudGtmAddressPoolRequest &request);

      /**
       * @summary Deletes an access domain name that is configured for a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request DeleteCloudGtmInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmInstanceConfigResponse
       */
      Models::DeleteCloudGtmInstanceConfigResponse deleteCloudGtmInstanceConfigWithOptions(const Models::DeleteCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access domain name that is configured for a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request DeleteCloudGtmInstanceConfigRequest
       * @return DeleteCloudGtmInstanceConfigResponse
       */
      Models::DeleteCloudGtmInstanceConfigResponse deleteCloudGtmInstanceConfig(const Models::DeleteCloudGtmInstanceConfigRequest &request);

      /**
       * @summary Deletes a health check template.
       *
       * @param request DeleteCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmMonitorTemplateResponse
       */
      Models::DeleteCloudGtmMonitorTemplateResponse deleteCloudGtmMonitorTemplateWithOptions(const Models::DeleteCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a health check template.
       *
       * @param request DeleteCloudGtmMonitorTemplateRequest
       * @return DeleteCloudGtmMonitorTemplateResponse
       */
      Models::DeleteCloudGtmMonitorTemplateResponse deleteCloudGtmMonitorTemplate(const Models::DeleteCloudGtmMonitorTemplateRequest &request);

      /**
       * @summary Deletes custom lines at a time by using the unique IDs.
       *
       * @param request DeleteCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomLinesResponse
       */
      Models::DeleteCustomLinesResponse deleteCustomLinesWithOptions(const Models::DeleteCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom lines at a time by using the unique IDs.
       *
       * @param request DeleteCustomLinesRequest
       * @return DeleteCustomLinesResponse
       */
      Models::DeleteCustomLinesResponse deleteCustomLines(const Models::DeleteCustomLinesRequest &request);

      /**
       * @summary Deletes a specified cache-accelerated domain name.
       *
       * @param request DeleteDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsCacheDomainResponse
       */
      Models::DeleteDnsCacheDomainResponse deleteDnsCacheDomainWithOptions(const Models::DeleteDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified cache-accelerated domain name.
       *
       * @param request DeleteDnsCacheDomainRequest
       * @return DeleteDnsCacheDomainResponse
       */
      Models::DeleteDnsCacheDomainResponse deleteDnsCacheDomain(const Models::DeleteDnsCacheDomainRequest &request);

      /**
       * @param request DeleteDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsGtmAccessStrategyResponse
       */
      Models::DeleteDnsGtmAccessStrategyResponse deleteDnsGtmAccessStrategyWithOptions(const Models::DeleteDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDnsGtmAccessStrategyRequest
       * @return DeleteDnsGtmAccessStrategyResponse
       */
      Models::DeleteDnsGtmAccessStrategyResponse deleteDnsGtmAccessStrategy(const Models::DeleteDnsGtmAccessStrategyRequest &request);

      /**
       * @param request DeleteDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsGtmAddressPoolResponse
       */
      Models::DeleteDnsGtmAddressPoolResponse deleteDnsGtmAddressPoolWithOptions(const Models::DeleteDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDnsGtmAddressPoolRequest
       * @return DeleteDnsGtmAddressPoolResponse
       */
      Models::DeleteDnsGtmAddressPoolResponse deleteDnsGtmAddressPool(const Models::DeleteDnsGtmAddressPoolRequest &request);

      /**
       * @summary Deletes a domain name based on the specified parameters.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name based on the specified parameters.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes a domain name group. After you delete the domain name group, the domain names in the group are moved to the default group.
       *
       * @description >  The default group cannot be deleted.
       *
       * @param request DeleteDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroupWithOptions(const Models::DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name group. After you delete the domain name group, the domain names in the group are moved to the default group.
       *
       * @description >  The default group cannot be deleted.
       *
       * @param request DeleteDomainGroupRequest
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroup(const Models::DeleteDomainGroupRequest &request);

      /**
       * @summary Deletes an Alibaba Cloud DNS (DNS) record based on the specified parameters.
       *
       * @param request DeleteDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainRecordResponse
       */
      Models::DeleteDomainRecordResponse deleteDomainRecordWithOptions(const Models::DeleteDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Alibaba Cloud DNS (DNS) record based on the specified parameters.
       *
       * @param request DeleteDomainRecordRequest
       * @return DeleteDomainRecordResponse
       */
      Models::DeleteDomainRecordResponse deleteDomainRecord(const Models::DeleteDomainRecordRequest &request);

      /**
       * @param request DeleteGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmAccessStrategyResponse
       */
      Models::DeleteGtmAccessStrategyResponse deleteGtmAccessStrategyWithOptions(const Models::DeleteGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGtmAccessStrategyRequest
       * @return DeleteGtmAccessStrategyResponse
       */
      Models::DeleteGtmAccessStrategyResponse deleteGtmAccessStrategy(const Models::DeleteGtmAccessStrategyRequest &request);

      /**
       * @param request DeleteGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmAddressPoolResponse
       */
      Models::DeleteGtmAddressPoolResponse deleteGtmAddressPoolWithOptions(const Models::DeleteGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGtmAddressPoolRequest
       * @return DeleteGtmAddressPoolResponse
       */
      Models::DeleteGtmAddressPoolResponse deleteGtmAddressPool(const Models::DeleteGtmAddressPoolRequest &request);

      /**
       * @param request DeleteGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmRecoveryPlanResponse
       */
      Models::DeleteGtmRecoveryPlanResponse deleteGtmRecoveryPlanWithOptions(const Models::DeleteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGtmRecoveryPlanRequest
       * @return DeleteGtmRecoveryPlanResponse
       */
      Models::DeleteGtmRecoveryPlanResponse deleteGtmRecoveryPlan(const Models::DeleteGtmRecoveryPlanRequest &request);

      /**
       * @summary 删除递归解析内置权威解析记录
       *
       * @param request DeleteRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecursionRecordResponse
       */
      Models::DeleteRecursionRecordResponse deleteRecursionRecordWithOptions(const Models::DeleteRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除递归解析内置权威解析记录
       *
       * @param request DeleteRecursionRecordRequest
       * @return DeleteRecursionRecordResponse
       */
      Models::DeleteRecursionRecordResponse deleteRecursionRecord(const Models::DeleteRecursionRecordRequest &request);

      /**
       * @summary 删除递归解析内置权威域名zone
       *
       * @param request DeleteRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecursionZoneResponse
       */
      Models::DeleteRecursionZoneResponse deleteRecursionZoneWithOptions(const Models::DeleteRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除递归解析内置权威域名zone
       *
       * @param request DeleteRecursionZoneRequest
       * @return DeleteRecursionZoneResponse
       */
      Models::DeleteRecursionZoneResponse deleteRecursionZone(const Models::DeleteRecursionZoneRequest &request);

      /**
       * @summary Deletes the DNS records that are corresponding to a hostname based on the specified parameters.
       *
       * @description If the DNS records to be deleted contain locked DNS records, the locked DNS records will not be deleted.
       *
       * @param request DeleteSubDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubDomainRecordsResponse
       */
      Models::DeleteSubDomainRecordsResponse deleteSubDomainRecordsWithOptions(const Models::DeleteSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the DNS records that are corresponding to a hostname based on the specified parameters.
       *
       * @description If the DNS records to be deleted contain locked DNS records, the locked DNS records will not be deleted.
       *
       * @param request DeleteSubDomainRecordsRequest
       * @return DeleteSubDomainRecordsResponse
       */
      Models::DeleteSubDomainRecordsResponse deleteSubDomainRecords(const Models::DeleteSubDomainRecordsRequest &request);

      /**
       * @summary Queries the execution result of a batch operation task based on the task ID. If you do not specify task ID, the execution result of the last batch operation task is returned.
       *
       * @param request DescribeBatchResultCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchResultCountResponse
       */
      Models::DescribeBatchResultCountResponse describeBatchResultCountWithOptions(const Models::DescribeBatchResultCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a batch operation task based on the task ID. If you do not specify task ID, the execution result of the last batch operation task is returned.
       *
       * @param request DescribeBatchResultCountRequest
       * @return DescribeBatchResultCountResponse
       */
      Models::DescribeBatchResultCountResponse describeBatchResultCount(const Models::DescribeBatchResultCountRequest &request);

      /**
       * @summary Queries the detailed results of a batch operation task.
       *
       * @description Before you call this operation, make sure that the batch operation task is complete.
       *
       * @param request DescribeBatchResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchResultDetailResponse
       */
      Models::DescribeBatchResultDetailResponse describeBatchResultDetailWithOptions(const Models::DescribeBatchResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed results of a batch operation task.
       *
       * @description Before you call this operation, make sure that the batch operation task is complete.
       *
       * @param request DescribeBatchResultDetailRequest
       * @return DescribeBatchResultDetailResponse
       */
      Models::DescribeBatchResultDetailResponse describeBatchResultDetail(const Models::DescribeBatchResultDetailRequest &request);

      /**
       * @summary Queries the configurations of an address.
       *
       * @param request DescribeCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressResponse
       */
      Models::DescribeCloudGtmAddressResponse describeCloudGtmAddressWithOptions(const Models::DescribeCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an address.
       *
       * @param request DescribeCloudGtmAddressRequest
       * @return DescribeCloudGtmAddressResponse
       */
      Models::DescribeCloudGtmAddressResponse describeCloudGtmAddress(const Models::DescribeCloudGtmAddressRequest &request);

      /**
       * @summary Queries the configurations of an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressPoolResponse
       */
      Models::DescribeCloudGtmAddressPoolResponse describeCloudGtmAddressPoolWithOptions(const Models::DescribeCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolRequest
       * @return DescribeCloudGtmAddressPoolResponse
       */
      Models::DescribeCloudGtmAddressPoolResponse describeCloudGtmAddressPool(const Models::DescribeCloudGtmAddressPoolRequest &request);

      /**
       * @summary Queries the information about the access domain names that reference an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolReferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressPoolReferenceResponse
       */
      Models::DescribeCloudGtmAddressPoolReferenceResponse describeCloudGtmAddressPoolReferenceWithOptions(const Models::DescribeCloudGtmAddressPoolReferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the access domain names that reference an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolReferenceRequest
       * @return DescribeCloudGtmAddressPoolReferenceResponse
       */
      Models::DescribeCloudGtmAddressPoolReferenceResponse describeCloudGtmAddressPoolReference(const Models::DescribeCloudGtmAddressPoolReferenceRequest &request);

      /**
       * @summary Queries the information about the address pools and Global Traffic Manager (GTM) 3.0 instances that reference an address.
       *
       * @param request DescribeCloudGtmAddressReferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressReferenceResponse
       */
      Models::DescribeCloudGtmAddressReferenceResponse describeCloudGtmAddressReferenceWithOptions(const Models::DescribeCloudGtmAddressReferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the address pools and Global Traffic Manager (GTM) 3.0 instances that reference an address.
       *
       * @param request DescribeCloudGtmAddressReferenceRequest
       * @return DescribeCloudGtmAddressReferenceResponse
       */
      Models::DescribeCloudGtmAddressReferenceResponse describeCloudGtmAddressReference(const Models::DescribeCloudGtmAddressReferenceRequest &request);

      /**
       * @summary 查询全局流量管理告警配置
       *
       * @param request DescribeCloudGtmGlobalAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmGlobalAlertResponse
       */
      Models::DescribeCloudGtmGlobalAlertResponse describeCloudGtmGlobalAlertWithOptions(const Models::DescribeCloudGtmGlobalAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全局流量管理告警配置
       *
       * @param request DescribeCloudGtmGlobalAlertRequest
       * @return DescribeCloudGtmGlobalAlertResponse
       */
      Models::DescribeCloudGtmGlobalAlertResponse describeCloudGtmGlobalAlert(const Models::DescribeCloudGtmGlobalAlertRequest &request);

      /**
       * @param request DescribeCloudGtmInstanceConfigAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmInstanceConfigAlertResponse
       */
      Models::DescribeCloudGtmInstanceConfigAlertResponse describeCloudGtmInstanceConfigAlertWithOptions(const Models::DescribeCloudGtmInstanceConfigAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCloudGtmInstanceConfigAlertRequest
       * @return DescribeCloudGtmInstanceConfigAlertResponse
       */
      Models::DescribeCloudGtmInstanceConfigAlertResponse describeCloudGtmInstanceConfigAlert(const Models::DescribeCloudGtmInstanceConfigAlertRequest &request);

      /**
       * @summary Queries the complete configuration information about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmInstanceConfigFullInfoResponse
       */
      Models::DescribeCloudGtmInstanceConfigFullInfoResponse describeCloudGtmInstanceConfigFullInfoWithOptions(const Models::DescribeCloudGtmInstanceConfigFullInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete configuration information about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
       * @return DescribeCloudGtmInstanceConfigFullInfoResponse
       */
      Models::DescribeCloudGtmInstanceConfigFullInfoResponse describeCloudGtmInstanceConfigFullInfo(const Models::DescribeCloudGtmInstanceConfigFullInfoRequest &request);

      /**
       * @summary Queries the configurations of a health check template.
       *
       * @param request DescribeCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmMonitorTemplateResponse
       */
      Models::DescribeCloudGtmMonitorTemplateResponse describeCloudGtmMonitorTemplateWithOptions(const Models::DescribeCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a health check template.
       *
       * @param request DescribeCloudGtmMonitorTemplateRequest
       * @return DescribeCloudGtmMonitorTemplateResponse
       */
      Models::DescribeCloudGtmMonitorTemplateResponse describeCloudGtmMonitorTemplate(const Models::DescribeCloudGtmMonitorTemplateRequest &request);

      /**
       * @param request DescribeCloudGtmSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmSummaryResponse
       */
      Models::DescribeCloudGtmSummaryResponse describeCloudGtmSummaryWithOptions(const Models::DescribeCloudGtmSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCloudGtmSummaryRequest
       * @return DescribeCloudGtmSummaryResponse
       */
      Models::DescribeCloudGtmSummaryResponse describeCloudGtmSummary(const Models::DescribeCloudGtmSummaryRequest &request);

      /**
       * @param request DescribeCloudGtmSystemLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmSystemLinesResponse
       */
      Models::DescribeCloudGtmSystemLinesResponse describeCloudGtmSystemLinesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeCloudGtmSystemLinesResponse
       */
      Models::DescribeCloudGtmSystemLinesResponse describeCloudGtmSystemLines();

      /**
       * @summary Queries the details of a custom line by its unique ID.
       *
       * @param request DescribeCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLineResponse
       */
      Models::DescribeCustomLineResponse describeCustomLineWithOptions(const Models::DescribeCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom line by its unique ID.
       *
       * @param request DescribeCustomLineRequest
       * @return DescribeCustomLineResponse
       */
      Models::DescribeCustomLineResponse describeCustomLine(const Models::DescribeCustomLineRequest &request);

      /**
       * @summary Queries custom lines by domain name.
       *
       * @param request DescribeCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLinesWithOptions(const Models::DescribeCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom lines by domain name.
       *
       * @param request DescribeCustomLinesRequest
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLines(const Models::DescribeCustomLinesRequest &request);

      /**
       * @summary Queries the subdomains for which weighted round-robin is enabled based on the specified parameters.
       *
       * @param request DescribeDNSSLBSubDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDNSSLBSubDomainsResponse
       */
      Models::DescribeDNSSLBSubDomainsResponse describeDNSSLBSubDomainsWithOptions(const Models::DescribeDNSSLBSubDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subdomains for which weighted round-robin is enabled based on the specified parameters.
       *
       * @param request DescribeDNSSLBSubDomainsRequest
       * @return DescribeDNSSLBSubDomainsResponse
       */
      Models::DescribeDNSSLBSubDomainsResponse describeDNSSLBSubDomains(const Models::DescribeDNSSLBSubDomainsRequest &request);

      /**
       * @summary 查询代理域名
       *
       * @param request DescribeDnsCacheDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsCacheDomainsResponse
       */
      Models::DescribeDnsCacheDomainsResponse describeDnsCacheDomainsWithOptions(const Models::DescribeDnsCacheDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代理域名
       *
       * @param request DescribeDnsCacheDomainsRequest
       * @return DescribeDnsCacheDomainsResponse
       */
      Models::DescribeDnsCacheDomainsResponse describeDnsCacheDomains(const Models::DescribeDnsCacheDomainsRequest &request);

      /**
       * @summary Queries access policies of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategiesResponse
       */
      Models::DescribeDnsGtmAccessStrategiesResponse describeDnsGtmAccessStrategiesWithOptions(const Models::DescribeDnsGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access policies of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategiesRequest
       * @return DescribeDnsGtmAccessStrategiesResponse
       */
      Models::DescribeDnsGtmAccessStrategiesResponse describeDnsGtmAccessStrategies(const Models::DescribeDnsGtmAccessStrategiesRequest &request);

      /**
       * @summary Queries detailed information about an access policy of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategyResponse
       */
      Models::DescribeDnsGtmAccessStrategyResponse describeDnsGtmAccessStrategyWithOptions(const Models::DescribeDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about an access policy of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategyRequest
       * @return DescribeDnsGtmAccessStrategyResponse
       */
      Models::DescribeDnsGtmAccessStrategyResponse describeDnsGtmAccessStrategy(const Models::DescribeDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Queries the available configurations of an access policy of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeDnsGtmAccessStrategyAvailableConfigResponse describeDnsGtmAccessStrategyAvailableConfigWithOptions(const Models::DescribeDnsGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available configurations of an access policy of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
       * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeDnsGtmAccessStrategyAvailableConfigResponse describeDnsGtmAccessStrategyAvailableConfig(const Models::DescribeDnsGtmAccessStrategyAvailableConfigRequest &request);

      /**
       * @summary Queries the source regions of addresses.
       *
       * @param request DescribeDnsGtmAddrAttributeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAddrAttributeInfoResponse
       */
      Models::DescribeDnsGtmAddrAttributeInfoResponse describeDnsGtmAddrAttributeInfoWithOptions(const Models::DescribeDnsGtmAddrAttributeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source regions of addresses.
       *
       * @param request DescribeDnsGtmAddrAttributeInfoRequest
       * @return DescribeDnsGtmAddrAttributeInfoResponse
       */
      Models::DescribeDnsGtmAddrAttributeInfoResponse describeDnsGtmAddrAttributeInfo(const Models::DescribeDnsGtmAddrAttributeInfoRequest &request);

      /**
       * @summary Queries the available configurations of an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
       */
      Models::DescribeDnsGtmAddressPoolAvailableConfigResponse describeDnsGtmAddressPoolAvailableConfigWithOptions(const Models::DescribeDnsGtmAddressPoolAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available configurations of an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
       * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
       */
      Models::DescribeDnsGtmAddressPoolAvailableConfigResponse describeDnsGtmAddressPoolAvailableConfig(const Models::DescribeDnsGtmAddressPoolAvailableConfigRequest &request);

      /**
       * @param request DescribeDnsGtmAvailableAlertGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAvailableAlertGroupResponse
       */
      Models::DescribeDnsGtmAvailableAlertGroupResponse describeDnsGtmAvailableAlertGroupWithOptions(const Models::DescribeDnsGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDnsGtmAvailableAlertGroupRequest
       * @return DescribeDnsGtmAvailableAlertGroupResponse
       */
      Models::DescribeDnsGtmAvailableAlertGroupResponse describeDnsGtmAvailableAlertGroup(const Models::DescribeDnsGtmAvailableAlertGroupRequest &request);

      /**
       * @summary Queries detailed information about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceResponse
       */
      Models::DescribeDnsGtmInstanceResponse describeDnsGtmInstanceWithOptions(const Models::DescribeDnsGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceRequest
       * @return DescribeDnsGtmInstanceResponse
       */
      Models::DescribeDnsGtmInstanceResponse describeDnsGtmInstance(const Models::DescribeDnsGtmInstanceRequest &request);

      /**
       * @summary Queries detailed information about an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceAddressPoolResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolResponse describeDnsGtmInstanceAddressPoolWithOptions(const Models::DescribeDnsGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolRequest
       * @return DescribeDnsGtmInstanceAddressPoolResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolResponse describeDnsGtmInstanceAddressPool(const Models::DescribeDnsGtmInstanceAddressPoolRequest &request);

      /**
       * @summary Queries the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceAddressPoolsResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolsResponse describeDnsGtmInstanceAddressPoolsWithOptions(const Models::DescribeDnsGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolsRequest
       * @return DescribeDnsGtmInstanceAddressPoolsResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolsResponse describeDnsGtmInstanceAddressPools(const Models::DescribeDnsGtmInstanceAddressPoolsRequest &request);

      /**
       * @summary Queries the status of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceStatusResponse
       */
      Models::DescribeDnsGtmInstanceStatusResponse describeDnsGtmInstanceStatusWithOptions(const Models::DescribeDnsGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceStatusRequest
       * @return DescribeDnsGtmInstanceStatusResponse
       */
      Models::DescribeDnsGtmInstanceStatusResponse describeDnsGtmInstanceStatus(const Models::DescribeDnsGtmInstanceStatusRequest &request);

      /**
       * @summary Queries the CNAME domain name assigned by the system for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceSystemCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceSystemCnameResponse
       */
      Models::DescribeDnsGtmInstanceSystemCnameResponse describeDnsGtmInstanceSystemCnameWithOptions(const Models::DescribeDnsGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CNAME domain name assigned by the system for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceSystemCnameRequest
       * @return DescribeDnsGtmInstanceSystemCnameResponse
       */
      Models::DescribeDnsGtmInstanceSystemCnameResponse describeDnsGtmInstanceSystemCname(const Models::DescribeDnsGtmInstanceSystemCnameRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request DescribeDnsGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstancesResponse
       */
      Models::DescribeDnsGtmInstancesResponse describeDnsGtmInstancesWithOptions(const Models::DescribeDnsGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request DescribeDnsGtmInstancesRequest
       * @return DescribeDnsGtmInstancesResponse
       */
      Models::DescribeDnsGtmInstancesResponse describeDnsGtmInstances(const Models::DescribeDnsGtmInstancesRequest &request);

      /**
       * @summary Queries operation logs of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmLogsResponse
       */
      Models::DescribeDnsGtmLogsResponse describeDnsGtmLogsWithOptions(const Models::DescribeDnsGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries operation logs of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmLogsRequest
       * @return DescribeDnsGtmLogsResponse
       */
      Models::DescribeDnsGtmLogsResponse describeDnsGtmLogs(const Models::DescribeDnsGtmLogsRequest &request);

      /**
       * @summary Queries the configuration items that can be set for a health check task.
       *
       * @param request DescribeDnsGtmMonitorAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmMonitorAvailableConfigResponse
       */
      Models::DescribeDnsGtmMonitorAvailableConfigResponse describeDnsGtmMonitorAvailableConfigWithOptions(const Models::DescribeDnsGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration items that can be set for a health check task.
       *
       * @param request DescribeDnsGtmMonitorAvailableConfigRequest
       * @return DescribeDnsGtmMonitorAvailableConfigResponse
       */
      Models::DescribeDnsGtmMonitorAvailableConfigResponse describeDnsGtmMonitorAvailableConfig(const Models::DescribeDnsGtmMonitorAvailableConfigRequest &request);

      /**
       * @summary Queries the health check configuration of an address pool.
       *
       * @param request DescribeDnsGtmMonitorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmMonitorConfigResponse
       */
      Models::DescribeDnsGtmMonitorConfigResponse describeDnsGtmMonitorConfigWithOptions(const Models::DescribeDnsGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check configuration of an address pool.
       *
       * @param request DescribeDnsGtmMonitorConfigRequest
       * @return DescribeDnsGtmMonitorConfigResponse
       */
      Models::DescribeDnsGtmMonitorConfigResponse describeDnsGtmMonitorConfig(const Models::DescribeDnsGtmMonitorConfigRequest &request);

      /**
       * @summary Queries the details about a paid Alibaba Cloud DNS instance based on the instance ID.
       *
       * @param request DescribeDnsProductInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsProductInstanceResponse
       */
      Models::DescribeDnsProductInstanceResponse describeDnsProductInstanceWithOptions(const Models::DescribeDnsProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a paid Alibaba Cloud DNS instance based on the instance ID.
       *
       * @param request DescribeDnsProductInstanceRequest
       * @return DescribeDnsProductInstanceResponse
       */
      Models::DescribeDnsProductInstanceResponse describeDnsProductInstance(const Models::DescribeDnsProductInstanceRequest &request);

      /**
       * @summary Calls the DescribeDnsProductInstances operation to query the list of paid Alibaba Cloud DNS instances based on input parameters.
       *
       * @description >  If the response parameters of an Alibaba Cloud DNS instance do not contain domain names, no domain names are bound to the instance.
       *
       * @param request DescribeDnsProductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsProductInstancesResponse
       */
      Models::DescribeDnsProductInstancesResponse describeDnsProductInstancesWithOptions(const Models::DescribeDnsProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDnsProductInstances operation to query the list of paid Alibaba Cloud DNS instances based on input parameters.
       *
       * @description >  If the response parameters of an Alibaba Cloud DNS instance do not contain domain names, no domain names are bound to the instance.
       *
       * @param request DescribeDnsProductInstancesRequest
       * @return DescribeDnsProductInstancesResponse
       */
      Models::DescribeDnsProductInstancesResponse describeDnsProductInstances(const Models::DescribeDnsProductInstancesRequest &request);

      /**
       * @param request DescribeDohAccountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohAccountStatisticsResponse
       */
      Models::DescribeDohAccountStatisticsResponse describeDohAccountStatisticsWithOptions(const Models::DescribeDohAccountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDohAccountStatisticsRequest
       * @return DescribeDohAccountStatisticsResponse
       */
      Models::DescribeDohAccountStatisticsResponse describeDohAccountStatistics(const Models::DescribeDohAccountStatisticsRequest &request);

      /**
       * @summary 查询DOH域名请求量数据
       *
       * @param request DescribeDohDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohDomainStatisticsResponse
       */
      Models::DescribeDohDomainStatisticsResponse describeDohDomainStatisticsWithOptions(const Models::DescribeDohDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DOH域名请求量数据
       *
       * @param request DescribeDohDomainStatisticsRequest
       * @return DescribeDohDomainStatisticsResponse
       */
      Models::DescribeDohDomainStatisticsResponse describeDohDomainStatistics(const Models::DescribeDohDomainStatisticsRequest &request);

      /**
       * @param request DescribeDohDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohDomainStatisticsSummaryResponse
       */
      Models::DescribeDohDomainStatisticsSummaryResponse describeDohDomainStatisticsSummaryWithOptions(const Models::DescribeDohDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDohDomainStatisticsSummaryRequest
       * @return DescribeDohDomainStatisticsSummaryResponse
       */
      Models::DescribeDohDomainStatisticsSummaryResponse describeDohDomainStatisticsSummary(const Models::DescribeDohDomainStatisticsSummaryRequest &request);

      /**
       * @param request DescribeDohSubDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohSubDomainStatisticsResponse
       */
      Models::DescribeDohSubDomainStatisticsResponse describeDohSubDomainStatisticsWithOptions(const Models::DescribeDohSubDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDohSubDomainStatisticsRequest
       * @return DescribeDohSubDomainStatisticsResponse
       */
      Models::DescribeDohSubDomainStatisticsResponse describeDohSubDomainStatistics(const Models::DescribeDohSubDomainStatisticsRequest &request);

      /**
       * @param request DescribeDohSubDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohSubDomainStatisticsSummaryResponse
       */
      Models::DescribeDohSubDomainStatisticsSummaryResponse describeDohSubDomainStatisticsSummaryWithOptions(const Models::DescribeDohSubDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDohSubDomainStatisticsSummaryRequest
       * @return DescribeDohSubDomainStatisticsSummaryResponse
       */
      Models::DescribeDohSubDomainStatisticsSummaryResponse describeDohSubDomainStatisticsSummary(const Models::DescribeDohSubDomainStatisticsSummaryRequest &request);

      /**
       * @summary Queries the numbers of accessed domains and subdomains by using DNS over HTTPS (DoH).
       *
       * @param request DescribeDohUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohUserInfoResponse
       */
      Models::DescribeDohUserInfoResponse describeDohUserInfoWithOptions(const Models::DescribeDohUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of accessed domains and subdomains by using DNS over HTTPS (DoH).
       *
       * @param request DescribeDohUserInfoRequest
       * @return DescribeDohUserInfoResponse
       */
      Models::DescribeDohUserInfoResponse describeDohUserInfo(const Models::DescribeDohUserInfoRequest &request);

      /**
       * @summary Queries the Domain Name System Security Extensions (DNSSEC) configurations of a domain name based on the specified parameters.
       *
       * @param request DescribeDomainDnssecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDnssecInfoResponse
       */
      Models::DescribeDomainDnssecInfoResponse describeDomainDnssecInfoWithOptions(const Models::DescribeDomainDnssecInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Domain Name System Security Extensions (DNSSEC) configurations of a domain name based on the specified parameters.
       *
       * @param request DescribeDomainDnssecInfoRequest
       * @return DescribeDomainDnssecInfoResponse
       */
      Models::DescribeDomainDnssecInfoResponse describeDomainDnssecInfo(const Models::DescribeDomainDnssecInfoRequest &request);

      /**
       * @summary Queries all domain name groups based on the specified parameters.
       *
       * @param request DescribeDomainGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainGroupsResponse
       */
      Models::DescribeDomainGroupsResponse describeDomainGroupsWithOptions(const Models::DescribeDomainGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all domain name groups based on the specified parameters.
       *
       * @param request DescribeDomainGroupsRequest
       * @return DescribeDomainGroupsResponse
       */
      Models::DescribeDomainGroupsResponse describeDomainGroups(const Models::DescribeDomainGroupsRequest &request);

      /**
       * @summary Queries the information about a domain name based on specified parameters.
       *
       * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Enterprise Ultimate Edition. For more information about valid Domain Name System (DNS) request lines, see the return values of the RecordLines parameter.
       *
       * @param request DescribeDomainInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainInfoResponse
       */
      Models::DescribeDomainInfoResponse describeDomainInfoWithOptions(const Models::DescribeDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a domain name based on specified parameters.
       *
       * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Enterprise Ultimate Edition. For more information about valid Domain Name System (DNS) request lines, see the return values of the RecordLines parameter.
       *
       * @param request DescribeDomainInfoRequest
       * @return DescribeDomainInfoResponse
       */
      Models::DescribeDomainInfoResponse describeDomainInfo(const Models::DescribeDomainInfoRequest &request);

      /**
       * @summary Queries the operation logs of domain names based on the specified parameters.
       *
       * @param request DescribeDomainLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainLogsResponse
       */
      Models::DescribeDomainLogsResponse describeDomainLogsWithOptions(const Models::DescribeDomainLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of domain names based on the specified parameters.
       *
       * @param request DescribeDomainLogsRequest
       * @return DescribeDomainLogsResponse
       */
      Models::DescribeDomainLogsResponse describeDomainLogs(const Models::DescribeDomainLogsRequest &request);

      /**
       * @summary Queries the name servers configured for a specified domain name and checks whether all the name servers are Alibaba Cloud Domain Name System (DNS) servers.
       *
       * @description >  You can call this operation to query the authoritative servers of a domain name registry to obtain the name servers for a domain name. If the domain name is in an invalid state, such as serverHold or clientHold, an error may be returned.
       *
       * @param request DescribeDomainNsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainNsResponse
       */
      Models::DescribeDomainNsResponse describeDomainNsWithOptions(const Models::DescribeDomainNsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the name servers configured for a specified domain name and checks whether all the name servers are Alibaba Cloud Domain Name System (DNS) servers.
       *
       * @description >  You can call this operation to query the authoritative servers of a domain name registry to obtain the name servers for a domain name. If the domain name is in an invalid state, such as serverHold or clientHold, an error may be returned.
       *
       * @param request DescribeDomainNsRequest
       * @return DescribeDomainNsResponse
       */
      Models::DescribeDomainNsResponse describeDomainNs(const Models::DescribeDomainNsRequest &request);

      /**
       * @summary Queries the information about a Domain Name System (DNS) record by the ID of the DNS record.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Alidns\\&api=DescribeDomainRecordInfo\\&type=RPC\\&version=2015-01-09)
       *
       * @param request DescribeDomainRecordInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRecordInfoResponse
       */
      Models::DescribeDomainRecordInfoResponse describeDomainRecordInfoWithOptions(const Models::DescribeDomainRecordInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Domain Name System (DNS) record by the ID of the DNS record.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Alidns\\&api=DescribeDomainRecordInfo\\&type=RPC\\&version=2015-01-09)
       *
       * @param request DescribeDomainRecordInfoRequest
       * @return DescribeDomainRecordInfoResponse
       */
      Models::DescribeDomainRecordInfoResponse describeDomainRecordInfo(const Models::DescribeDomainRecordInfoRequest &request);

      /**
       * @summary Queries all Domain Name System (DNS) records of the specified primary domain names based on the specified parameters.
       *
       * @description *   You can specify DomainName, PageNumber, and PageSize to query the DNS records of the specified domain names.
       * *   You can also specify RRKeyWord, TypeKeyWord, or ValueKeyWord to query the DNS records that contain the specified keyword.
       * *   By default, the DNS records are sorted in reverse chronological order based on the time when they were added.
       * *   You can specify GroupId to query the DNS records of the specified domain names based on the group ID. You can query the DNS records of all domain names and the domain names in the default group.
       *
       * @param request DescribeDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRecordsResponse
       */
      Models::DescribeDomainRecordsResponse describeDomainRecordsWithOptions(const Models::DescribeDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Domain Name System (DNS) records of the specified primary domain names based on the specified parameters.
       *
       * @description *   You can specify DomainName, PageNumber, and PageSize to query the DNS records of the specified domain names.
       * *   You can also specify RRKeyWord, TypeKeyWord, or ValueKeyWord to query the DNS records that contain the specified keyword.
       * *   By default, the DNS records are sorted in reverse chronological order based on the time when they were added.
       * *   You can specify GroupId to query the DNS records of the specified domain names based on the group ID. You can query the DNS records of all domain names and the domain names in the default group.
       *
       * @param request DescribeDomainRecordsRequest
       * @return DescribeDomainRecordsResponse
       */
      Models::DescribeDomainRecordsResponse describeDomainRecords(const Models::DescribeDomainRecordsRequest &request);

      /**
       * @summary Queries the resolution requests of all paid domain names within your account.
       *
       * @param request DescribeDomainResolveStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResolveStatisticsSummaryResponse
       */
      Models::DescribeDomainResolveStatisticsSummaryResponse describeDomainResolveStatisticsSummaryWithOptions(const Models::DescribeDomainResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resolution requests of all paid domain names within your account.
       *
       * @param request DescribeDomainResolveStatisticsSummaryRequest
       * @return DescribeDomainResolveStatisticsSummaryResponse
       */
      Models::DescribeDomainResolveStatisticsSummaryResponse describeDomainResolveStatisticsSummary(const Models::DescribeDomainResolveStatisticsSummaryRequest &request);

      /**
       * @summary Queries the real-time statistics on the Domain Name System (DNS) requests for a primary domain name.
       *
       * @description Real-time data is collected per hour.
       *
       * @param request DescribeDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatisticsResponse
       */
      Models::DescribeDomainStatisticsResponse describeDomainStatisticsWithOptions(const Models::DescribeDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time statistics on the Domain Name System (DNS) requests for a primary domain name.
       *
       * @description Real-time data is collected per hour.
       *
       * @param request DescribeDomainStatisticsRequest
       * @return DescribeDomainStatisticsResponse
       */
      Models::DescribeDomainStatisticsResponse describeDomainStatistics(const Models::DescribeDomainStatisticsRequest &request);

      /**
       * @summary Calls the DescribeDomainStatisticsSummary operation to obtain the query volume of all paid domain names under your account.
       *
       * @param request DescribeDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatisticsSummaryResponse
       */
      Models::DescribeDomainStatisticsSummaryResponse describeDomainStatisticsSummaryWithOptions(const Models::DescribeDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDomainStatisticsSummary operation to obtain the query volume of all paid domain names under your account.
       *
       * @param request DescribeDomainStatisticsSummaryRequest
       * @return DescribeDomainStatisticsSummaryResponse
       */
      Models::DescribeDomainStatisticsSummaryResponse describeDomainStatisticsSummary(const Models::DescribeDomainStatisticsSummaryRequest &request);

      /**
       * @summary Calls the DescribeDomains operation to query domain names of a user based on input parameters.
       *
       * @description *   You can specify the PageNumber and PageSize parameters to query domain names.
       * *   You can specify the KeyWord parameter to query domain names that contain the specified keyword.
       * *   By default, the domain names in a list are sorted in descending order of the time they were added.
       * *   You can specify the GroupId parameter. If you do not specify this parameter, all domain names are queried by default.
       *
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDomains operation to query domain names of a user based on input parameters.
       *
       * @description *   You can specify the PageNumber and PageSize parameters to query domain names.
       * *   You can specify the KeyWord parameter to query domain names that contain the specified keyword.
       * *   By default, the domain names in a list are sorted in descending order of the time they were added.
       * *   You can specify the GroupId parameter. If you do not specify this parameter, all domain names are queried by default.
       *
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary You can call this operation to query the access policies of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmAccessStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategiesResponse
       */
      Models::DescribeGtmAccessStrategiesResponse describeGtmAccessStrategiesWithOptions(const Models::DescribeGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the access policies of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmAccessStrategiesRequest
       * @return DescribeGtmAccessStrategiesResponse
       */
      Models::DescribeGtmAccessStrategiesResponse describeGtmAccessStrategies(const Models::DescribeGtmAccessStrategiesRequest &request);

      /**
       * @summary You can call this operation to query the details about an access policy of a Global Traffic Manager (GTM) instance based on the policy ID.
       *
       * @param request DescribeGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategyResponse
       */
      Models::DescribeGtmAccessStrategyResponse describeGtmAccessStrategyWithOptions(const Models::DescribeGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the details about an access policy of a Global Traffic Manager (GTM) instance based on the policy ID.
       *
       * @param request DescribeGtmAccessStrategyRequest
       * @return DescribeGtmAccessStrategyResponse
       */
      Models::DescribeGtmAccessStrategyResponse describeGtmAccessStrategy(const Models::DescribeGtmAccessStrategyRequest &request);

      /**
       * @summary Queries the configuration items that can be set for an access policy.
       *
       * @param request DescribeGtmAccessStrategyAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeGtmAccessStrategyAvailableConfigResponse describeGtmAccessStrategyAvailableConfigWithOptions(const Models::DescribeGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration items that can be set for an access policy.
       *
       * @param request DescribeGtmAccessStrategyAvailableConfigRequest
       * @return DescribeGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeGtmAccessStrategyAvailableConfigResponse describeGtmAccessStrategyAvailableConfig(const Models::DescribeGtmAccessStrategyAvailableConfigRequest &request);

      /**
       * @param request DescribeGtmAvailableAlertGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAvailableAlertGroupResponse
       */
      Models::DescribeGtmAvailableAlertGroupResponse describeGtmAvailableAlertGroupWithOptions(const Models::DescribeGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeGtmAvailableAlertGroupRequest
       * @return DescribeGtmAvailableAlertGroupResponse
       */
      Models::DescribeGtmAvailableAlertGroupResponse describeGtmAvailableAlertGroup(const Models::DescribeGtmAvailableAlertGroupRequest &request);

      /**
       * @summary Queries the details about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceResponse
       */
      Models::DescribeGtmInstanceResponse describeGtmInstanceWithOptions(const Models::DescribeGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceRequest
       * @return DescribeGtmInstanceResponse
       */
      Models::DescribeGtmInstanceResponse describeGtmInstance(const Models::DescribeGtmInstanceRequest &request);

      /**
       * @summary You can call this operation to query the details about an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceAddressPoolResponse
       */
      Models::DescribeGtmInstanceAddressPoolResponse describeGtmInstanceAddressPoolWithOptions(const Models::DescribeGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the details about an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolRequest
       * @return DescribeGtmInstanceAddressPoolResponse
       */
      Models::DescribeGtmInstanceAddressPoolResponse describeGtmInstanceAddressPool(const Models::DescribeGtmInstanceAddressPoolRequest &request);

      /**
       * @summary You can call this operation to query the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceAddressPoolsResponse
       */
      Models::DescribeGtmInstanceAddressPoolsResponse describeGtmInstanceAddressPoolsWithOptions(const Models::DescribeGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolsRequest
       * @return DescribeGtmInstanceAddressPoolsResponse
       */
      Models::DescribeGtmInstanceAddressPoolsResponse describeGtmInstanceAddressPools(const Models::DescribeGtmInstanceAddressPoolsRequest &request);

      /**
       * @summary Queries the status of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceStatusResponse
       */
      Models::DescribeGtmInstanceStatusResponse describeGtmInstanceStatusWithOptions(const Models::DescribeGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceStatusRequest
       * @return DescribeGtmInstanceStatusResponse
       */
      Models::DescribeGtmInstanceStatusResponse describeGtmInstanceStatus(const Models::DescribeGtmInstanceStatusRequest &request);

      /**
       * @param request DescribeGtmInstanceSystemCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceSystemCnameResponse
       */
      Models::DescribeGtmInstanceSystemCnameResponse describeGtmInstanceSystemCnameWithOptions(const Models::DescribeGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeGtmInstanceSystemCnameRequest
       * @return DescribeGtmInstanceSystemCnameResponse
       */
      Models::DescribeGtmInstanceSystemCnameResponse describeGtmInstanceSystemCname(const Models::DescribeGtmInstanceSystemCnameRequest &request);

      /**
       * @summary Queries the Global Traffic Manager (GTM) instances under your account.
       *
       * @param request DescribeGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstancesResponse
       */
      Models::DescribeGtmInstancesResponse describeGtmInstancesWithOptions(const Models::DescribeGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Global Traffic Manager (GTM) instances under your account.
       *
       * @param request DescribeGtmInstancesRequest
       * @return DescribeGtmInstancesResponse
       */
      Models::DescribeGtmInstancesResponse describeGtmInstances(const Models::DescribeGtmInstancesRequest &request);

      /**
       * @summary You can call this operation to query logs of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmLogsResponse
       */
      Models::DescribeGtmLogsResponse describeGtmLogsWithOptions(const Models::DescribeGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query logs of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmLogsRequest
       * @return DescribeGtmLogsResponse
       */
      Models::DescribeGtmLogsResponse describeGtmLogs(const Models::DescribeGtmLogsRequest &request);

      /**
       * @summary Queries available monitored nodes.
       *
       * @param request DescribeGtmMonitorAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmMonitorAvailableConfigResponse
       */
      Models::DescribeGtmMonitorAvailableConfigResponse describeGtmMonitorAvailableConfigWithOptions(const Models::DescribeGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available monitored nodes.
       *
       * @param request DescribeGtmMonitorAvailableConfigRequest
       * @return DescribeGtmMonitorAvailableConfigResponse
       */
      Models::DescribeGtmMonitorAvailableConfigResponse describeGtmMonitorAvailableConfig(const Models::DescribeGtmMonitorAvailableConfigRequest &request);

      /**
       * @summary Queries the health check configuration of an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmMonitorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmMonitorConfigResponse
       */
      Models::DescribeGtmMonitorConfigResponse describeGtmMonitorConfigWithOptions(const Models::DescribeGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check configuration of an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmMonitorConfigRequest
       * @return DescribeGtmMonitorConfigResponse
       */
      Models::DescribeGtmMonitorConfigResponse describeGtmMonitorConfig(const Models::DescribeGtmMonitorConfigRequest &request);

      /**
       * @summary Queries the details of a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlanResponse
       */
      Models::DescribeGtmRecoveryPlanResponse describeGtmRecoveryPlanWithOptions(const Models::DescribeGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanRequest
       * @return DescribeGtmRecoveryPlanResponse
       */
      Models::DescribeGtmRecoveryPlanResponse describeGtmRecoveryPlan(const Models::DescribeGtmRecoveryPlanRequest &request);

      /**
       * @summary Queries the configuration items that can be set for a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlanAvailableConfigResponse
       */
      Models::DescribeGtmRecoveryPlanAvailableConfigResponse describeGtmRecoveryPlanAvailableConfigWithOptions(const Models::DescribeGtmRecoveryPlanAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration items that can be set for a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
       * @return DescribeGtmRecoveryPlanAvailableConfigResponse
       */
      Models::DescribeGtmRecoveryPlanAvailableConfigResponse describeGtmRecoveryPlanAvailableConfig(const Models::DescribeGtmRecoveryPlanAvailableConfigRequest &request);

      /**
       * @summary Queries the disaster recovery plans for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmRecoveryPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlansResponse
       */
      Models::DescribeGtmRecoveryPlansResponse describeGtmRecoveryPlansWithOptions(const Models::DescribeGtmRecoveryPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disaster recovery plans for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmRecoveryPlansRequest
       * @return DescribeGtmRecoveryPlansResponse
       */
      Models::DescribeGtmRecoveryPlansResponse describeGtmRecoveryPlans(const Models::DescribeGtmRecoveryPlansRequest &request);

      /**
       * @summary Queries the domain names that are bound to an Alibaba Cloud DNS instance.
       *
       * @param request DescribeInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDomainsResponse
       */
      Models::DescribeInstanceDomainsResponse describeInstanceDomainsWithOptions(const Models::DescribeInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are bound to an Alibaba Cloud DNS instance.
       *
       * @param request DescribeInstanceDomainsRequest
       * @return DescribeInstanceDomainsResponse
       */
      Models::DescribeInstanceDomainsResponse describeInstanceDomains(const Models::DescribeInstanceDomainsRequest &request);

      /**
       * @summary 查询解析日志
       *
       * @param request DescribeInternetDnsLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetDnsLogsResponse
       */
      Models::DescribeInternetDnsLogsResponse describeInternetDnsLogsWithOptions(const Models::DescribeInternetDnsLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询解析日志
       *
       * @param request DescribeInternetDnsLogsRequest
       * @return DescribeInternetDnsLogsResponse
       */
      Models::DescribeInternetDnsLogsResponse describeInternetDnsLogs(const Models::DescribeInternetDnsLogsRequest &request);

      /**
       * @summary 获取缓存刷新套餐包列表
       *
       * @param request DescribeIspFlushCacheInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheInstancesResponse
       */
      Models::DescribeIspFlushCacheInstancesResponse describeIspFlushCacheInstancesWithOptions(const Models::DescribeIspFlushCacheInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取缓存刷新套餐包列表
       *
       * @param request DescribeIspFlushCacheInstancesRequest
       * @return DescribeIspFlushCacheInstancesResponse
       */
      Models::DescribeIspFlushCacheInstancesResponse describeIspFlushCacheInstances(const Models::DescribeIspFlushCacheInstancesRequest &request);

      /**
       * @summary 获取剩余可缓存刷新次数
       *
       * @param request DescribeIspFlushCacheRemainQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheRemainQuotaResponse
       */
      Models::DescribeIspFlushCacheRemainQuotaResponse describeIspFlushCacheRemainQuotaWithOptions(const Models::DescribeIspFlushCacheRemainQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取剩余可缓存刷新次数
       *
       * @param request DescribeIspFlushCacheRemainQuotaRequest
       * @return DescribeIspFlushCacheRemainQuotaResponse
       */
      Models::DescribeIspFlushCacheRemainQuotaResponse describeIspFlushCacheRemainQuota(const Models::DescribeIspFlushCacheRemainQuotaRequest &request);

      /**
       * @summary 获取缓存刷新任务详情
       *
       * @param request DescribeIspFlushCacheTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheTaskResponse
       */
      Models::DescribeIspFlushCacheTaskResponse describeIspFlushCacheTaskWithOptions(const Models::DescribeIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取缓存刷新任务详情
       *
       * @param request DescribeIspFlushCacheTaskRequest
       * @return DescribeIspFlushCacheTaskResponse
       */
      Models::DescribeIspFlushCacheTaskResponse describeIspFlushCacheTask(const Models::DescribeIspFlushCacheTaskRequest &request);

      /**
       * @summary 获取缓存刷新任务列表
       *
       * @param request DescribeIspFlushCacheTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheTasksResponse
       */
      Models::DescribeIspFlushCacheTasksResponse describeIspFlushCacheTasksWithOptions(const Models::DescribeIspFlushCacheTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取缓存刷新任务列表
       *
       * @param request DescribeIspFlushCacheTasksRequest
       * @return DescribeIspFlushCacheTasksResponse
       */
      Models::DescribeIspFlushCacheTasksResponse describeIspFlushCacheTasks(const Models::DescribeIspFlushCacheTasksRequest &request);

      /**
       * @summary 获取公共DNS用户数据概览
       *
       * @param request DescribePdnsAccountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAccountSummaryResponse
       */
      Models::DescribePdnsAccountSummaryResponse describePdnsAccountSummaryWithOptions(const Models::DescribePdnsAccountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS用户数据概览
       *
       * @param request DescribePdnsAccountSummaryRequest
       * @return DescribePdnsAccountSummaryResponse
       */
      Models::DescribePdnsAccountSummaryResponse describePdnsAccountSummary(const Models::DescribePdnsAccountSummaryRequest &request);

      /**
       * @summary 获取公共DNS AppKey 详情
       *
       * @param request DescribePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAppKeyResponse
       */
      Models::DescribePdnsAppKeyResponse describePdnsAppKeyWithOptions(const Models::DescribePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS AppKey 详情
       *
       * @param request DescribePdnsAppKeyRequest
       * @return DescribePdnsAppKeyResponse
       */
      Models::DescribePdnsAppKeyResponse describePdnsAppKey(const Models::DescribePdnsAppKeyRequest &request);

      /**
       * @summary 获取公共DNS AppKey 列表
       *
       * @param request DescribePdnsAppKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAppKeysResponse
       */
      Models::DescribePdnsAppKeysResponse describePdnsAppKeysWithOptions(const Models::DescribePdnsAppKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS AppKey 列表
       *
       * @param request DescribePdnsAppKeysRequest
       * @return DescribePdnsAppKeysResponse
       */
      Models::DescribePdnsAppKeysResponse describePdnsAppKeys(const Models::DescribePdnsAppKeysRequest &request);

      /**
       * @summary 获取公共DNS 操作日志列表
       *
       * @param request DescribePdnsOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsOperateLogsResponse
       */
      Models::DescribePdnsOperateLogsResponse describePdnsOperateLogsWithOptions(const Models::DescribePdnsOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS 操作日志列表
       *
       * @param request DescribePdnsOperateLogsRequest
       * @return DescribePdnsOperateLogsResponse
       */
      Models::DescribePdnsOperateLogsResponse describePdnsOperateLogs(const Models::DescribePdnsOperateLogsRequest &request);

      /**
       * @summary Queries the statistics on requests for Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsRequestStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsRequestStatisticResponse
       */
      Models::DescribePdnsRequestStatisticResponse describePdnsRequestStatisticWithOptions(const Models::DescribePdnsRequestStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on requests for Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsRequestStatisticRequest
       * @return DescribePdnsRequestStatisticResponse
       */
      Models::DescribePdnsRequestStatisticResponse describePdnsRequestStatistic(const Models::DescribePdnsRequestStatisticRequest &request);

      /**
       * @summary Queries a list of statistics on requests for Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsRequestStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsRequestStatisticsResponse
       */
      Models::DescribePdnsRequestStatisticsResponse describePdnsRequestStatisticsWithOptions(const Models::DescribePdnsRequestStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of statistics on requests for Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsRequestStatisticsRequest
       * @return DescribePdnsRequestStatisticsResponse
       */
      Models::DescribePdnsRequestStatisticsResponse describePdnsRequestStatistics(const Models::DescribePdnsRequestStatisticsRequest &request);

      /**
       * @summary 获取公共DNS 威胁日志列表
       *
       * @param request DescribePdnsThreatLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatLogsResponse
       */
      Models::DescribePdnsThreatLogsResponse describePdnsThreatLogsWithOptions(const Models::DescribePdnsThreatLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS 威胁日志列表
       *
       * @param request DescribePdnsThreatLogsRequest
       * @return DescribePdnsThreatLogsResponse
       */
      Models::DescribePdnsThreatLogsResponse describePdnsThreatLogs(const Models::DescribePdnsThreatLogsRequest &request);

      /**
       * @summary 获取公共DNS 威胁统计
       *
       * @param request DescribePdnsThreatStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatStatisticResponse
       */
      Models::DescribePdnsThreatStatisticResponse describePdnsThreatStatisticWithOptions(const Models::DescribePdnsThreatStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS 威胁统计
       *
       * @param request DescribePdnsThreatStatisticRequest
       * @return DescribePdnsThreatStatisticResponse
       */
      Models::DescribePdnsThreatStatisticResponse describePdnsThreatStatistic(const Models::DescribePdnsThreatStatisticRequest &request);

      /**
       * @summary 获取公共DNS 威胁统计列表
       *
       * @param request DescribePdnsThreatStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatStatisticsResponse
       */
      Models::DescribePdnsThreatStatisticsResponse describePdnsThreatStatisticsWithOptions(const Models::DescribePdnsThreatStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS 威胁统计列表
       *
       * @param request DescribePdnsThreatStatisticsRequest
       * @return DescribePdnsThreatStatisticsResponse
       */
      Models::DescribePdnsThreatStatisticsResponse describePdnsThreatStatistics(const Models::DescribePdnsThreatStatisticsRequest &request);

      /**
       * @summary 获取公共DNS Udp IP段列表
       *
       * @param request DescribePdnsUdpIpSegmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsUdpIpSegmentsResponse
       */
      Models::DescribePdnsUdpIpSegmentsResponse describePdnsUdpIpSegmentsWithOptions(const Models::DescribePdnsUdpIpSegmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共DNS Udp IP段列表
       *
       * @param request DescribePdnsUdpIpSegmentsRequest
       * @return DescribePdnsUdpIpSegmentsResponse
       */
      Models::DescribePdnsUdpIpSegmentsResponse describePdnsUdpIpSegments(const Models::DescribePdnsUdpIpSegmentsRequest &request);

      /**
       * @summary Queries the information about users in Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsUserInfoResponse
       */
      Models::DescribePdnsUserInfoResponse describePdnsUserInfoWithOptions(const Models::DescribePdnsUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about users in Alibaba Cloud Public DNS.
       *
       * @param request DescribePdnsUserInfoRequest
       * @return DescribePdnsUserInfoResponse
       */
      Models::DescribePdnsUserInfoResponse describePdnsUserInfo(const Models::DescribePdnsUserInfoRequest &request);

      /**
       * @summary Queries the operation logs of a domain name based on the specified parameters.
       *
       * @param request DescribeRecordLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordLogsResponse
       */
      Models::DescribeRecordLogsResponse describeRecordLogsWithOptions(const Models::DescribeRecordLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of a domain name based on the specified parameters.
       *
       * @param request DescribeRecordLogsRequest
       * @return DescribeRecordLogsResponse
       */
      Models::DescribeRecordLogsResponse describeRecordLogs(const Models::DescribeRecordLogsRequest &request);

      /**
       * @summary Queries the number of resolution requests for all subdomain names of a specified domain name.
       *
       * @param request DescribeRecordResolveStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordResolveStatisticsSummaryResponse
       */
      Models::DescribeRecordResolveStatisticsSummaryResponse describeRecordResolveStatisticsSummaryWithOptions(const Models::DescribeRecordResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of resolution requests for all subdomain names of a specified domain name.
       *
       * @param request DescribeRecordResolveStatisticsSummaryRequest
       * @return DescribeRecordResolveStatisticsSummaryResponse
       */
      Models::DescribeRecordResolveStatisticsSummaryResponse describeRecordResolveStatisticsSummary(const Models::DescribeRecordResolveStatisticsSummaryRequest &request);

      /**
       * @summary Queries the real-time statistics on the Domain Name System (DNS) requests for a subdomain name.
       *
       * @description Real-time data is collected per hour.
       *
       * @param request DescribeRecordStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordStatisticsResponse
       */
      Models::DescribeRecordStatisticsResponse describeRecordStatisticsWithOptions(const Models::DescribeRecordStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time statistics on the Domain Name System (DNS) requests for a subdomain name.
       *
       * @description Real-time data is collected per hour.
       *
       * @param request DescribeRecordStatisticsRequest
       * @return DescribeRecordStatisticsResponse
       */
      Models::DescribeRecordStatisticsResponse describeRecordStatistics(const Models::DescribeRecordStatisticsRequest &request);

      /**
       * @summary Queries the number of Domain Name System (DNS) requests for all subdomain names of a specified domain name.
       *
       * @param request DescribeRecordStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordStatisticsSummaryResponse
       */
      Models::DescribeRecordStatisticsSummaryResponse describeRecordStatisticsSummaryWithOptions(const Models::DescribeRecordStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Domain Name System (DNS) requests for all subdomain names of a specified domain name.
       *
       * @param request DescribeRecordStatisticsSummaryRequest
       * @return DescribeRecordStatisticsSummaryResponse
       */
      Models::DescribeRecordStatisticsSummaryResponse describeRecordStatisticsSummary(const Models::DescribeRecordStatisticsSummaryRequest &request);

      /**
       * @summary 查询递归解析内置权威解析记录详情
       *
       * @param request DescribeRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecursionRecordResponse
       */
      Models::DescribeRecursionRecordResponse describeRecursionRecordWithOptions(const Models::DescribeRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询递归解析内置权威解析记录详情
       *
       * @param request DescribeRecursionRecordRequest
       * @return DescribeRecursionRecordResponse
       */
      Models::DescribeRecursionRecordResponse describeRecursionRecord(const Models::DescribeRecursionRecordRequest &request);

      /**
       * @summary 查询递归解析内置权威域名zone详情
       *
       * @param request DescribeRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecursionZoneResponse
       */
      Models::DescribeRecursionZoneResponse describeRecursionZoneWithOptions(const Models::DescribeRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询递归解析内置权威域名zone详情
       *
       * @param request DescribeRecursionZoneRequest
       * @return DescribeRecursionZoneResponse
       */
      Models::DescribeRecursionZoneResponse describeRecursionZone(const Models::DescribeRecursionZoneRequest &request);

      /**
       * @summary Queries all Domain Name System (DNS) records of a subdomain name based on the specified parameters.
       *
       * @param request DescribeSubDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubDomainRecordsResponse
       */
      Models::DescribeSubDomainRecordsResponse describeSubDomainRecordsWithOptions(const Models::DescribeSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Domain Name System (DNS) records of a subdomain name based on the specified parameters.
       *
       * @param request DescribeSubDomainRecordsRequest
       * @return DescribeSubDomainRecordsResponse
       */
      Models::DescribeSubDomainRecordsResponse describeSubDomainRecords(const Models::DescribeSubDomainRecordsRequest &request);

      /**
       * @summary 查询支持的所有线路
       *
       * @param request DescribeSupportLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportLinesResponse
       */
      Models::DescribeSupportLinesResponse describeSupportLinesWithOptions(const Models::DescribeSupportLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询支持的所有线路
       *
       * @param request DescribeSupportLinesRequest
       * @return DescribeSupportLinesResponse
       */
      Models::DescribeSupportLinesResponse describeSupportLines(const Models::DescribeSupportLinesRequest &request);

      /**
       * @summary Queries existing tags.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries existing tags.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the domain names that were transferred between the current account and another account based on the specified parameters.
       *
       * @param request DescribeTransferDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransferDomainsResponse
       */
      Models::DescribeTransferDomainsResponse describeTransferDomainsWithOptions(const Models::DescribeTransferDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that were transferred between the current account and another account based on the specified parameters.
       *
       * @param request DescribeTransferDomainsRequest
       * @return DescribeTransferDomainsResponse
       */
      Models::DescribeTransferDomainsResponse describeTransferDomains(const Models::DescribeTransferDomainsRequest &request);

      /**
       * @summary Executes a disaster recovery plan.
       *
       * @param request ExecuteGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteGtmRecoveryPlanResponse
       */
      Models::ExecuteGtmRecoveryPlanResponse executeGtmRecoveryPlanWithOptions(const Models::ExecuteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a disaster recovery plan.
       *
       * @param request ExecuteGtmRecoveryPlanRequest
       * @return ExecuteGtmRecoveryPlanResponse
       */
      Models::ExecuteGtmRecoveryPlanResponse executeGtmRecoveryPlan(const Models::ExecuteGtmRecoveryPlanRequest &request);

      /**
       * @summary Queries a primary domain name based on the specified parameters.
       *
       * @description For more information about the difference between primary domain names and subdomain names, see
       * [Subdomain levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, abc.com is obtained.
       *
       * @param request GetMainDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainNameWithOptions(const Models::GetMainDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a primary domain name based on the specified parameters.
       *
       * @description For more information about the difference between primary domain names and subdomain names, see
       * [Subdomain levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, abc.com is obtained.
       *
       * @param request GetMainDomainNameRequest
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainName(const Models::GetMainDomainNameRequest &request);

      /**
       * @summary Generates a text (TXT) record. TXT records are used to retrieve domain names and subdomain names, enable the subdomain name verification feature, and perform batch retrievals.
       *
       * @param request GetTxtRecordForVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTxtRecordForVerifyResponse
       */
      Models::GetTxtRecordForVerifyResponse getTxtRecordForVerifyWithOptions(const Models::GetTxtRecordForVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a text (TXT) record. TXT records are used to retrieve domain names and subdomain names, enable the subdomain name verification feature, and perform batch retrievals.
       *
       * @param request GetTxtRecordForVerifyRequest
       * @return GetTxtRecordForVerifyResponse
       */
      Models::GetTxtRecordForVerifyResponse getTxtRecordForVerify(const Models::GetTxtRecordForVerifyRequest &request);

      /**
       * @summary Queries a list of address pools.
       *
       * @param request ListCloudGtmAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAddressPoolsResponse
       */
      Models::ListCloudGtmAddressPoolsResponse listCloudGtmAddressPoolsWithOptions(const Models::ListCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of address pools.
       *
       * @param request ListCloudGtmAddressPoolsRequest
       * @return ListCloudGtmAddressPoolsResponse
       */
      Models::ListCloudGtmAddressPoolsResponse listCloudGtmAddressPools(const Models::ListCloudGtmAddressPoolsRequest &request);

      /**
       * @summary Queries a list of addresses.
       *
       * @param request ListCloudGtmAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAddressesResponse
       */
      Models::ListCloudGtmAddressesResponse listCloudGtmAddressesWithOptions(const Models::ListCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of addresses.
       *
       * @param request ListCloudGtmAddressesRequest
       * @return ListCloudGtmAddressesResponse
       */
      Models::ListCloudGtmAddressesResponse listCloudGtmAddresses(const Models::ListCloudGtmAddressesRequest &request);

      /**
       * @param request ListCloudGtmAlertLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAlertLogsResponse
       */
      Models::ListCloudGtmAlertLogsResponse listCloudGtmAlertLogsWithOptions(const Models::ListCloudGtmAlertLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCloudGtmAlertLogsRequest
       * @return ListCloudGtmAlertLogsResponse
       */
      Models::ListCloudGtmAlertLogsResponse listCloudGtmAlertLogs(const Models::ListCloudGtmAlertLogsRequest &request);

      /**
       * @param request ListCloudGtmAvailableAlertGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAvailableAlertGroupsResponse
       */
      Models::ListCloudGtmAvailableAlertGroupsResponse listCloudGtmAvailableAlertGroupsWithOptions(const Models::ListCloudGtmAvailableAlertGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCloudGtmAvailableAlertGroupsRequest
       * @return ListCloudGtmAvailableAlertGroupsResponse
       */
      Models::ListCloudGtmAvailableAlertGroupsResponse listCloudGtmAvailableAlertGroups(const Models::ListCloudGtmAvailableAlertGroupsRequest &request);

      /**
       * @summary Queries the configurations of a Global Traffic Manager (GTM) instance, including the information about access domain names and address pools.
       *
       * @param request ListCloudGtmInstanceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmInstanceConfigsResponse
       */
      Models::ListCloudGtmInstanceConfigsResponse listCloudGtmInstanceConfigsWithOptions(const Models::ListCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a Global Traffic Manager (GTM) instance, including the information about access domain names and address pools.
       *
       * @param request ListCloudGtmInstanceConfigsRequest
       * @return ListCloudGtmInstanceConfigsResponse
       */
      Models::ListCloudGtmInstanceConfigsResponse listCloudGtmInstanceConfigs(const Models::ListCloudGtmInstanceConfigsRequest &request);

      /**
       * @summary Queries a list of Global Traffic Manager (GTM) 3.0 instances.
       *
       * @param request ListCloudGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmInstancesResponse
       */
      Models::ListCloudGtmInstancesResponse listCloudGtmInstancesWithOptions(const Models::ListCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Global Traffic Manager (GTM) 3.0 instances.
       *
       * @param request ListCloudGtmInstancesRequest
       * @return ListCloudGtmInstancesResponse
       */
      Models::ListCloudGtmInstancesResponse listCloudGtmInstances(const Models::ListCloudGtmInstancesRequest &request);

      /**
       * @summary Queries a list of health check nodes.
       *
       * @param request ListCloudGtmMonitorNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmMonitorNodesResponse
       */
      Models::ListCloudGtmMonitorNodesResponse listCloudGtmMonitorNodesWithOptions(const Models::ListCloudGtmMonitorNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of health check nodes.
       *
       * @param request ListCloudGtmMonitorNodesRequest
       * @return ListCloudGtmMonitorNodesResponse
       */
      Models::ListCloudGtmMonitorNodesResponse listCloudGtmMonitorNodes(const Models::ListCloudGtmMonitorNodesRequest &request);

      /**
       * @summary Queries a list of health check templates.
       *
       * @param request ListCloudGtmMonitorTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmMonitorTemplatesResponse
       */
      Models::ListCloudGtmMonitorTemplatesResponse listCloudGtmMonitorTemplatesWithOptions(const Models::ListCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of health check templates.
       *
       * @param request ListCloudGtmMonitorTemplatesRequest
       * @return ListCloudGtmMonitorTemplatesResponse
       */
      Models::ListCloudGtmMonitorTemplatesResponse listCloudGtmMonitorTemplates(const Models::ListCloudGtmMonitorTemplatesRequest &request);

      /**
       * @summary 查询递归解析内置权威解析记录
       *
       * @param request ListRecursionRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecursionRecordsResponse
       */
      Models::ListRecursionRecordsResponse listRecursionRecordsWithOptions(const Models::ListRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询递归解析内置权威解析记录
       *
       * @param request ListRecursionRecordsRequest
       * @return ListRecursionRecordsResponse
       */
      Models::ListRecursionRecordsResponse listRecursionRecords(const Models::ListRecursionRecordsRequest &request);

      /**
       * @summary 查询递归解析内置权威域名zone
       *
       * @param request ListRecursionZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecursionZonesResponse
       */
      Models::ListRecursionZonesResponse listRecursionZonesWithOptions(const Models::ListRecursionZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询递归解析内置权威域名zone
       *
       * @param request ListRecursionZonesRequest
       * @return ListRecursionZonesResponse
       */
      Models::ListRecursionZonesResponse listRecursionZones(const Models::ListRecursionZonesRequest &request);

      /**
       * @summary Queries resources by tag.
       *
       * @description *   Set ResourceId.N or Tag.N that consists of Tag.N.Key and Tag.N.Value in the request to specify the object to be queried.
       * *   Tag.N is a resource tag that consists of a key-value pair. If you set only Tag.N.Key, all tag values that are assigned to the specified key are returned. If you set only Tag.N.Value, an error message is returned.
       * *   If you set both Tag.N and ResourceId.N to filter tags, ResourceId.N must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources by tag.
       *
       * @description *   Set ResourceId.N or Tag.N that consists of Tag.N.Key and Tag.N.Value in the request to specify the object to be queried.
       * *   Tag.N is a resource tag that consists of a key-value pair. If you set only Tag.N.Key, all tag values that are assigned to the specified key are returned. If you set only Tag.N.Value, an error message is returned.
       * *   If you set both Tag.N and ResourceId.N to filter tags, ResourceId.N must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Changes the names of DNS servers bound to a domain name from DNS server names provided by a third-party service provider to DNS server names provided by Alibaba Cloud DNS.
       *
       * @description If the operation succeeds, the names of DNS servers change to those of Alibaba Cloud DNS servers (ending with hichina.com).
       * >  **Before you call this operation, make sure that your domain name has been registered with Alibaba Cloud and the DNS servers in use are not Alibaba Cloud DNS servers.
       *
       * @param request ModifyHichinaDomainDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHichinaDomainDNSResponse
       */
      Models::ModifyHichinaDomainDNSResponse modifyHichinaDomainDNSWithOptions(const Models::ModifyHichinaDomainDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the names of DNS servers bound to a domain name from DNS server names provided by a third-party service provider to DNS server names provided by Alibaba Cloud DNS.
       *
       * @description If the operation succeeds, the names of DNS servers change to those of Alibaba Cloud DNS servers (ending with hichina.com).
       * >  **Before you call this operation, make sure that your domain name has been registered with Alibaba Cloud and the DNS servers in use are not Alibaba Cloud DNS servers.
       *
       * @param request ModifyHichinaDomainDNSRequest
       * @return ModifyHichinaDomainDNSResponse
       */
      Models::ModifyHichinaDomainDNSResponse modifyHichinaDomainDNS(const Models::ModifyHichinaDomainDNSRequest &request);

      /**
       * @summary Moves a domain name to another resource group.
       *
       * @param request MoveDomainResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveDomainResourceGroupResponse
       */
      Models::MoveDomainResourceGroupResponse moveDomainResourceGroupWithOptions(const Models::MoveDomainResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a domain name to another resource group.
       *
       * @param request MoveDomainResourceGroupRequest
       * @return MoveDomainResourceGroupResponse
       */
      Models::MoveDomainResourceGroupResponse moveDomainResourceGroup(const Models::MoveDomainResourceGroupRequest &request);

      /**
       * @param request MoveGtmResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveGtmResourceGroupResponse
       */
      Models::MoveGtmResourceGroupResponse moveGtmResourceGroupWithOptions(const Models::MoveGtmResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MoveGtmResourceGroupRequest
       * @return MoveGtmResourceGroupResponse
       */
      Models::MoveGtmResourceGroupResponse moveGtmResourceGroup(const Models::MoveGtmResourceGroupRequest &request);

      /**
       * @summary Adds or deletes domain names and Domain Name System (DNS) records in batches.
       *
       * @description Scenario: You need to execute a large number of tasks related to DNS resolution and you do not have high requirements for efficiency.
       *
       * @param request OperateBatchDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBatchDomainResponse
       */
      Models::OperateBatchDomainResponse operateBatchDomainWithOptions(const Models::OperateBatchDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or deletes domain names and Domain Name System (DNS) records in batches.
       *
       * @description Scenario: You need to execute a large number of tasks related to DNS resolution and you do not have high requirements for efficiency.
       *
       * @param request OperateBatchDomainRequest
       * @return OperateBatchDomainResponse
       */
      Models::OperateBatchDomainResponse operateBatchDomain(const Models::OperateBatchDomainRequest &request);

      /**
       * @summary 暂停公共DNS服务
       *
       * @param request PausePdnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PausePdnsServiceResponse
       */
      Models::PausePdnsServiceResponse pausePdnsServiceWithOptions(const Models::PausePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停公共DNS服务
       *
       * @param request PausePdnsServiceRequest
       * @return PausePdnsServiceResponse
       */
      Models::PausePdnsServiceResponse pausePdnsService(const Models::PausePdnsServiceRequest &request);

      /**
       * @summary You can call this operation to preview a disaster recovery plan of a Global Traffic Manager (GTM) instance.
       *
       * @param request PreviewGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewGtmRecoveryPlanResponse
       */
      Models::PreviewGtmRecoveryPlanResponse previewGtmRecoveryPlanWithOptions(const Models::PreviewGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to preview a disaster recovery plan of a Global Traffic Manager (GTM) instance.
       *
       * @param request PreviewGtmRecoveryPlanRequest
       * @return PreviewGtmRecoveryPlanResponse
       */
      Models::PreviewGtmRecoveryPlanResponse previewGtmRecoveryPlan(const Models::PreviewGtmRecoveryPlanRequest &request);

      /**
       * @summary 删除公共DNS AppKey
       *
       * @param request RemovePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePdnsAppKeyResponse
       */
      Models::RemovePdnsAppKeyResponse removePdnsAppKeyWithOptions(const Models::RemovePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公共DNS AppKey
       *
       * @param request RemovePdnsAppKeyRequest
       * @return RemovePdnsAppKeyResponse
       */
      Models::RemovePdnsAppKeyResponse removePdnsAppKey(const Models::RemovePdnsAppKeyRequest &request);

      /**
       * @summary 删除公共DNS Udp Ip地址段
       *
       * @param request RemovePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePdnsUdpIpSegmentResponse
       */
      Models::RemovePdnsUdpIpSegmentResponse removePdnsUdpIpSegmentWithOptions(const Models::RemovePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公共DNS Udp Ip地址段
       *
       * @param request RemovePdnsUdpIpSegmentRequest
       * @return RemovePdnsUdpIpSegmentResponse
       */
      Models::RemovePdnsUdpIpSegmentResponse removePdnsUdpIpSegment(const Models::RemovePdnsUdpIpSegmentRequest &request);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRspDomainServerHoldStatusForGatewayResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayResponse removeRspDomainServerHoldStatusForGatewayWithOptions(const Models::RemoveRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
       * @return RemoveRspDomainServerHoldStatusForGatewayResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayResponse removeRspDomainServerHoldStatusForGateway(const Models::RemoveRspDomainServerHoldStatusForGatewayRequest &request);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayOteResponse removeRspDomainServerHoldStatusForGatewayOteWithOptions(const Models::RemoveRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除特定域名的serverHold状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
       * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayOteResponse removeRspDomainServerHoldStatusForGatewayOte(const Models::RemoveRspDomainServerHoldStatusForGatewayOteRequest &request);

      /**
       * @summary Replaces the addresses referenced by an address pool.
       *
       * @param tmpReq ReplaceCloudGtmAddressPoolAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceCloudGtmAddressPoolAddressResponse
       */
      Models::ReplaceCloudGtmAddressPoolAddressResponse replaceCloudGtmAddressPoolAddressWithOptions(const Models::ReplaceCloudGtmAddressPoolAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the addresses referenced by an address pool.
       *
       * @param request ReplaceCloudGtmAddressPoolAddressRequest
       * @return ReplaceCloudGtmAddressPoolAddressResponse
       */
      Models::ReplaceCloudGtmAddressPoolAddressResponse replaceCloudGtmAddressPoolAddress(const Models::ReplaceCloudGtmAddressPoolAddressRequest &request);

      /**
       * @summary Replaces address pools that are associated with a Global Traffic Manager (GTM) 3.0 instance with new address pools.
       *
       * @param tmpReq ReplaceCloudGtmInstanceConfigAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
       */
      Models::ReplaceCloudGtmInstanceConfigAddressPoolResponse replaceCloudGtmInstanceConfigAddressPoolWithOptions(const Models::ReplaceCloudGtmInstanceConfigAddressPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces address pools that are associated with a Global Traffic Manager (GTM) 3.0 instance with new address pools.
       *
       * @param request ReplaceCloudGtmInstanceConfigAddressPoolRequest
       * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
       */
      Models::ReplaceCloudGtmInstanceConfigAddressPoolResponse replaceCloudGtmInstanceConfigAddressPool(const Models::ReplaceCloudGtmInstanceConfigAddressPoolRequest &request);

      /**
       * @summary 恢复公共DNS服务
       *
       * @param request ResumePdnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumePdnsServiceResponse
       */
      Models::ResumePdnsServiceResponse resumePdnsServiceWithOptions(const Models::ResumePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复公共DNS服务
       *
       * @param request ResumePdnsServiceRequest
       * @return ResumePdnsServiceResponse
       */
      Models::ResumePdnsServiceResponse resumePdnsService(const Models::ResumePdnsServiceRequest &request);

      /**
       * @summary Retrieves a domain name.
       *
       * @description To retrieve a domain name, you must verify a text (TXT) record. Therefore, before you call this API operation to retrieve a domain name, call the [GetTxtRecordForVerify](https://www.alibabacloud.com/help/en/alibaba-cloud-dns/latest/generating-a-txt-record) operation to generate a TXT record.
       *
       * @param request RetrieveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveDomainResponse
       */
      Models::RetrieveDomainResponse retrieveDomainWithOptions(const Models::RetrieveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a domain name.
       *
       * @description To retrieve a domain name, you must verify a text (TXT) record. Therefore, before you call this API operation to retrieve a domain name, call the [GetTxtRecordForVerify](https://www.alibabacloud.com/help/en/alibaba-cloud-dns/latest/generating-a-txt-record) operation to generate a TXT record.
       *
       * @param request RetrieveDomainRequest
       * @return RetrieveDomainResponse
       */
      Models::RetrieveDomainResponse retrieveDomain(const Models::RetrieveDomainRequest &request);

      /**
       * @summary Rolls back a disaster recovery plan.
       *
       * @param request RollbackGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackGtmRecoveryPlanResponse
       */
      Models::RollbackGtmRecoveryPlanResponse rollbackGtmRecoveryPlanWithOptions(const Models::RollbackGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a disaster recovery plan.
       *
       * @param request RollbackGtmRecoveryPlanRequest
       * @return RollbackGtmRecoveryPlanResponse
       */
      Models::RollbackGtmRecoveryPlanResponse rollbackGtmRecoveryPlan(const Models::RollbackGtmRecoveryPlanRequest &request);

      /**
       * @summary Queries a list of address pools.
       *
       * @param request SearchCloudGtmAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmAddressPoolsResponse
       */
      Models::SearchCloudGtmAddressPoolsResponse searchCloudGtmAddressPoolsWithOptions(const Models::SearchCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of address pools.
       *
       * @param request SearchCloudGtmAddressPoolsRequest
       * @return SearchCloudGtmAddressPoolsResponse
       */
      Models::SearchCloudGtmAddressPoolsResponse searchCloudGtmAddressPools(const Models::SearchCloudGtmAddressPoolsRequest &request);

      /**
       * @summary Queries a list of addresses based on address names, descriptions, health check templates referenced by the addresses, or address IDs.
       *
       * @param request SearchCloudGtmAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmAddressesResponse
       */
      Models::SearchCloudGtmAddressesResponse searchCloudGtmAddressesWithOptions(const Models::SearchCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of addresses based on address names, descriptions, health check templates referenced by the addresses, or address IDs.
       *
       * @param request SearchCloudGtmAddressesRequest
       * @return SearchCloudGtmAddressesResponse
       */
      Models::SearchCloudGtmAddressesResponse searchCloudGtmAddresses(const Models::SearchCloudGtmAddressesRequest &request);

      /**
       * @summary Queries the configurations of an access domain name.
       *
       * @param request SearchCloudGtmInstanceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmInstanceConfigsResponse
       */
      Models::SearchCloudGtmInstanceConfigsResponse searchCloudGtmInstanceConfigsWithOptions(const Models::SearchCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an access domain name.
       *
       * @param request SearchCloudGtmInstanceConfigsRequest
       * @return SearchCloudGtmInstanceConfigsResponse
       */
      Models::SearchCloudGtmInstanceConfigsResponse searchCloudGtmInstanceConfigs(const Models::SearchCloudGtmInstanceConfigsRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request SearchCloudGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmInstancesResponse
       */
      Models::SearchCloudGtmInstancesResponse searchCloudGtmInstancesWithOptions(const Models::SearchCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request SearchCloudGtmInstancesRequest
       * @return SearchCloudGtmInstancesResponse
       */
      Models::SearchCloudGtmInstancesResponse searchCloudGtmInstances(const Models::SearchCloudGtmInstancesRequest &request);

      /**
       * @summary Queries the list of health check templates.
       *
       * @param request SearchCloudGtmMonitorTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmMonitorTemplatesResponse
       */
      Models::SearchCloudGtmMonitorTemplatesResponse searchCloudGtmMonitorTemplatesWithOptions(const Models::SearchCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of health check templates.
       *
       * @param request SearchCloudGtmMonitorTemplatesRequest
       * @return SearchCloudGtmMonitorTemplatesResponse
       */
      Models::SearchCloudGtmMonitorTemplatesResponse searchCloudGtmMonitorTemplates(const Models::SearchCloudGtmMonitorTemplatesRequest &request);

      /**
       * @summary 搜索递归解析内置权威解析记录
       *
       * @param request SearchRecursionRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRecursionRecordsResponse
       */
      Models::SearchRecursionRecordsResponse searchRecursionRecordsWithOptions(const Models::SearchRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索递归解析内置权威解析记录
       *
       * @param request SearchRecursionRecordsRequest
       * @return SearchRecursionRecordsResponse
       */
      Models::SearchRecursionRecordsResponse searchRecursionRecords(const Models::SearchRecursionRecordsRequest &request);

      /**
       * @summary 搜索递归解析内置权威域名zone
       *
       * @param tmpReq SearchRecursionZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRecursionZonesResponse
       */
      Models::SearchRecursionZonesResponse searchRecursionZonesWithOptions(const Models::SearchRecursionZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索递归解析内置权威域名zone
       *
       * @param request SearchRecursionZonesRequest
       * @return SearchRecursionZonesResponse
       */
      Models::SearchRecursionZonesResponse searchRecursionZones(const Models::SearchRecursionZonesRequest &request);

      /**
       * @summary 设置全局流量管理实例配置日志开关
       *
       * @param request SetCloudGtmInstanceConfigLogSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCloudGtmInstanceConfigLogSwitchResponse
       */
      Models::SetCloudGtmInstanceConfigLogSwitchResponse setCloudGtmInstanceConfigLogSwitchWithOptions(const Models::SetCloudGtmInstanceConfigLogSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置全局流量管理实例配置日志开关
       *
       * @param request SetCloudGtmInstanceConfigLogSwitchRequest
       * @return SetCloudGtmInstanceConfigLogSwitchResponse
       */
      Models::SetCloudGtmInstanceConfigLogSwitchResponse setCloudGtmInstanceConfigLogSwitch(const Models::SetCloudGtmInstanceConfigLogSwitchRequest &request);

      /**
       * @summary Enables or disables weighted round-robin based on the specified parameters.
       *
       * @param request SetDNSSLBStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDNSSLBStatusResponse
       */
      Models::SetDNSSLBStatusResponse setDNSSLBStatusWithOptions(const Models::SetDNSSLBStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables weighted round-robin based on the specified parameters.
       *
       * @param request SetDNSSLBStatusRequest
       * @return SetDNSSLBStatusResponse
       */
      Models::SetDNSSLBStatusResponse setDNSSLBStatus(const Models::SetDNSSLBStatusRequest &request);

      /**
       * @summary Modifies an access policy.
       *
       * @description ****
       *
       * @param request SetDnsGtmAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDnsGtmAccessModeResponse
       */
      Models::SetDnsGtmAccessModeResponse setDnsGtmAccessModeWithOptions(const Models::SetDnsGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access policy.
       *
       * @description ****
       *
       * @param request SetDnsGtmAccessModeRequest
       * @return SetDnsGtmAccessModeResponse
       */
      Models::SetDnsGtmAccessModeResponse setDnsGtmAccessMode(const Models::SetDnsGtmAccessModeRequest &request);

      /**
       * @summary Specifies the health check status of an address pool.
       *
       * @param request SetDnsGtmMonitorStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDnsGtmMonitorStatusResponse
       */
      Models::SetDnsGtmMonitorStatusResponse setDnsGtmMonitorStatusWithOptions(const Models::SetDnsGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the health check status of an address pool.
       *
       * @param request SetDnsGtmMonitorStatusRequest
       * @return SetDnsGtmMonitorStatusResponse
       */
      Models::SetDnsGtmMonitorStatusResponse setDnsGtmMonitorStatus(const Models::SetDnsGtmMonitorStatusRequest &request);

      /**
       * @summary Enables or disables the Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only for the users of the paid editions of Alibaba Cloud DNS.
       *
       * @param request SetDomainDnssecStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainDnssecStatusResponse
       */
      Models::SetDomainDnssecStatusResponse setDomainDnssecStatusWithOptions(const Models::SetDomainDnssecStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only for the users of the paid editions of Alibaba Cloud DNS.
       *
       * @param request SetDomainDnssecStatusRequest
       * @return SetDomainDnssecStatusResponse
       */
      Models::SetDomainDnssecStatusResponse setDomainDnssecStatus(const Models::SetDomainDnssecStatusRequest &request);

      /**
       * @summary Specifies the status of an Alibaba Cloud DNS (DNS) record based on the specified parameters.
       *
       * @param request SetDomainRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainRecordStatusResponse
       */
      Models::SetDomainRecordStatusResponse setDomainRecordStatusWithOptions(const Models::SetDomainRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the status of an Alibaba Cloud DNS (DNS) record based on the specified parameters.
       *
       * @param request SetDomainRecordStatusRequest
       * @return SetDomainRecordStatusResponse
       */
      Models::SetDomainRecordStatusResponse setDomainRecordStatus(const Models::SetDomainRecordStatusRequest &request);

      /**
       * @summary Modifies a policy for switchover between address pool sets.
       *
       * @param request SetGtmAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGtmAccessModeResponse
       */
      Models::SetGtmAccessModeResponse setGtmAccessModeWithOptions(const Models::SetGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a policy for switchover between address pool sets.
       *
       * @param request SetGtmAccessModeRequest
       * @return SetGtmAccessModeResponse
       */
      Models::SetGtmAccessModeResponse setGtmAccessMode(const Models::SetGtmAccessModeRequest &request);

      /**
       * @param request SetGtmMonitorStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGtmMonitorStatusResponse
       */
      Models::SetGtmMonitorStatusResponse setGtmMonitorStatusWithOptions(const Models::SetGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetGtmMonitorStatusRequest
       * @return SetGtmMonitorStatusResponse
       */
      Models::SetGtmMonitorStatusResponse setGtmMonitorStatus(const Models::SetGtmMonitorStatusRequest &request);

      /**
       * @summary 提交缓存刷新任务
       *
       * @param request SubmitIspFlushCacheTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIspFlushCacheTaskResponse
       */
      Models::SubmitIspFlushCacheTaskResponse submitIspFlushCacheTaskWithOptions(const Models::SubmitIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交缓存刷新任务
       *
       * @param request SubmitIspFlushCacheTaskRequest
       * @return SubmitIspFlushCacheTaskResponse
       */
      Models::SubmitIspFlushCacheTaskResponse submitIspFlushCacheTask(const Models::SubmitIspFlushCacheTaskRequest &request);

      /**
       * @summary Changes the access policy type for a Global Traffic Manager (GTM) instance.
       *
       * @param request SwitchDnsGtmInstanceStrategyModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDnsGtmInstanceStrategyModeResponse
       */
      Models::SwitchDnsGtmInstanceStrategyModeResponse switchDnsGtmInstanceStrategyModeWithOptions(const Models::SwitchDnsGtmInstanceStrategyModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the access policy type for a Global Traffic Manager (GTM) instance.
       *
       * @param request SwitchDnsGtmInstanceStrategyModeRequest
       * @return SwitchDnsGtmInstanceStrategyModeResponse
       */
      Models::SwitchDnsGtmInstanceStrategyModeResponse switchDnsGtmInstanceStrategyMode(const Models::SwitchDnsGtmInstanceStrategyModeRequest &request);

      /**
       * @summary Adds and modifies a tag for a resource.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds and modifies a tag for a resource.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Transfers multiple domain names from the current account to another account at a time.
       *
       * @param request TransferDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferDomainResponse
       */
      Models::TransferDomainResponse transferDomainWithOptions(const Models::TransferDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers multiple domain names from the current account to another account at a time.
       *
       * @param request TransferDomainRequest
       * @return TransferDomainResponse
       */
      Models::TransferDomainResponse transferDomain(const Models::TransferDomainRequest &request);

      /**
       * @summary Unbinds one or more domain names from a paid Alibaba Cloud DNS instance based on the instance ID.
       *
       * @description A paid Alibaba Cloud DNS instance whose ID starts with dns is an instance of the new version. You can call an API operation to bind multiple domain names to the instance. If the upper limit is exceeded, an error message is returned.\\
       * A paid Alibaba Cloud DNS instance whose ID does not start with dns is an instance of the old version. You can call an API operation to bind only one domain name to the instance. However, if the instance that you want to bind to the desired domain name is already bound to a domain name, you can call this operation to unbind the original domain name from the instance and then bind the desired domain name to the instance.
       *
       * @param request UnbindInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindInstanceDomainsResponse
       */
      Models::UnbindInstanceDomainsResponse unbindInstanceDomainsWithOptions(const Models::UnbindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds one or more domain names from a paid Alibaba Cloud DNS instance based on the instance ID.
       *
       * @description A paid Alibaba Cloud DNS instance whose ID starts with dns is an instance of the new version. You can call an API operation to bind multiple domain names to the instance. If the upper limit is exceeded, an error message is returned.\\
       * A paid Alibaba Cloud DNS instance whose ID does not start with dns is an instance of the old version. You can call an API operation to bind only one domain name to the instance. However, if the instance that you want to bind to the desired domain name is already bound to a domain name, you can call this operation to unbind the original domain name from the instance and then bind the desired domain name to the instance.
       *
       * @param request UnbindInstanceDomainsRequest
       * @return UnbindInstanceDomainsResponse
       */
      Models::UnbindInstanceDomainsResponse unbindInstanceDomains(const Models::UnbindInstanceDomainsRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 修改 AppKey 状态
       *
       * @param request UpdateAppKeyStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppKeyStateResponse
       */
      Models::UpdateAppKeyStateResponse updateAppKeyStateWithOptions(const Models::UpdateAppKeyStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改 AppKey 状态
       *
       * @param request UpdateAppKeyStateRequest
       * @return UpdateAppKeyStateResponse
       */
      Models::UpdateAppKeyStateResponse updateAppKeyState(const Models::UpdateAppKeyStateRequest &request);

      /**
       * @summary Modifies the condition for determining the health status of a specified address.
       *
       * @param tmpReq UpdateCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressResponse
       */
      Models::UpdateCloudGtmAddressResponse updateCloudGtmAddressWithOptions(const Models::UpdateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the condition for determining the health status of a specified address.
       *
       * @param request UpdateCloudGtmAddressRequest
       * @return UpdateCloudGtmAddressResponse
       */
      Models::UpdateCloudGtmAddressResponse updateCloudGtmAddress(const Models::UpdateCloudGtmAddressRequest &request);

      /**
       * @summary Modifies the enabling status of an address.
       *
       * @description *   If an address is **enabled** and the health status of the address is **Normal**, the availability status of the address is **Available**.
       * *   If an address is **disabled** or the health status of the address is **Abnormal**, the availability status of the address is **Unavailable**.
       *
       * @param request UpdateCloudGtmAddressEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressEnableStatusResponse updateCloudGtmAddressEnableStatusWithOptions(const Models::UpdateCloudGtmAddressEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the enabling status of an address.
       *
       * @description *   If an address is **enabled** and the health status of the address is **Normal**, the availability status of the address is **Available**.
       * *   If an address is **disabled** or the health status of the address is **Abnormal**, the availability status of the address is **Unavailable**.
       *
       * @param request UpdateCloudGtmAddressEnableStatusRequest
       * @return UpdateCloudGtmAddressEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressEnableStatusResponse updateCloudGtmAddressEnableStatus(const Models::UpdateCloudGtmAddressEnableStatusRequest &request);

      /**
       * @summary Modifies the failover mode that is used when address exceptions are identified.
       *
       * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressManualAvailableStatusResponse
       */
      Models::UpdateCloudGtmAddressManualAvailableStatusResponse updateCloudGtmAddressManualAvailableStatusWithOptions(const Models::UpdateCloudGtmAddressManualAvailableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the failover mode that is used when address exceptions are identified.
       *
       * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
       * @return UpdateCloudGtmAddressManualAvailableStatusResponse
       */
      Models::UpdateCloudGtmAddressManualAvailableStatusResponse updateCloudGtmAddressManualAvailableStatus(const Models::UpdateCloudGtmAddressManualAvailableStatusRequest &request);

      /**
       * @summary Modifies the basic configurations of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolBasicConfigResponse
       */
      Models::UpdateCloudGtmAddressPoolBasicConfigResponse updateCloudGtmAddressPoolBasicConfigWithOptions(const Models::UpdateCloudGtmAddressPoolBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic configurations of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
       * @return UpdateCloudGtmAddressPoolBasicConfigResponse
       */
      Models::UpdateCloudGtmAddressPoolBasicConfigResponse updateCloudGtmAddressPoolBasicConfig(const Models::UpdateCloudGtmAddressPoolBasicConfigRequest &request);

      /**
       * @summary Modifies the enabling status of an address pool.
       *
       * @description *   If an address pool is **enabled** and the health status of the address pool is **Normal**, the availability status of the address pool is **Available**.
       * *   If an address pool is **disabled** or the health status of the address pool is **Abnormal**, the availability status of the address pool is **unavailable**.
       *
       * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressPoolEnableStatusResponse updateCloudGtmAddressPoolEnableStatusWithOptions(const Models::UpdateCloudGtmAddressPoolEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the enabling status of an address pool.
       *
       * @description *   If an address pool is **enabled** and the health status of the address pool is **Normal**, the availability status of the address pool is **Available**.
       * *   If an address pool is **disabled** or the health status of the address pool is **Abnormal**, the availability status of the address pool is **unavailable**.
       *
       * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
       * @return UpdateCloudGtmAddressPoolEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressPoolEnableStatusResponse updateCloudGtmAddressPoolEnableStatus(const Models::UpdateCloudGtmAddressPoolEnableStatusRequest &request);

      /**
       * @summary Modifies the load balancing policy of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolLbStrategyResponse
       */
      Models::UpdateCloudGtmAddressPoolLbStrategyResponse updateCloudGtmAddressPoolLbStrategyWithOptions(const Models::UpdateCloudGtmAddressPoolLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the load balancing policy of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
       * @return UpdateCloudGtmAddressPoolLbStrategyResponse
       */
      Models::UpdateCloudGtmAddressPoolLbStrategyResponse updateCloudGtmAddressPoolLbStrategy(const Models::UpdateCloudGtmAddressPoolLbStrategyRequest &request);

      /**
       * @summary Modifies the remarks of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolRemarkResponse
       */
      Models::UpdateCloudGtmAddressPoolRemarkResponse updateCloudGtmAddressPoolRemarkWithOptions(const Models::UpdateCloudGtmAddressPoolRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolRemarkRequest
       * @return UpdateCloudGtmAddressPoolRemarkResponse
       */
      Models::UpdateCloudGtmAddressPoolRemarkResponse updateCloudGtmAddressPoolRemark(const Models::UpdateCloudGtmAddressPoolRemarkRequest &request);

      /**
       * @summary Modifies the remarks of an address.
       *
       * @param request UpdateCloudGtmAddressRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressRemarkResponse
       */
      Models::UpdateCloudGtmAddressRemarkResponse updateCloudGtmAddressRemarkWithOptions(const Models::UpdateCloudGtmAddressRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks of an address.
       *
       * @param request UpdateCloudGtmAddressRemarkRequest
       * @return UpdateCloudGtmAddressRemarkResponse
       */
      Models::UpdateCloudGtmAddressRemarkResponse updateCloudGtmAddressRemark(const Models::UpdateCloudGtmAddressRemarkRequest &request);

      /**
       * @summary 更新全局流量管理告警设置
       *
       * @param tmpReq UpdateCloudGtmGlobalAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmGlobalAlertResponse
       */
      Models::UpdateCloudGtmGlobalAlertResponse updateCloudGtmGlobalAlertWithOptions(const Models::UpdateCloudGtmGlobalAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新全局流量管理告警设置
       *
       * @param request UpdateCloudGtmGlobalAlertRequest
       * @return UpdateCloudGtmGlobalAlertResponse
       */
      Models::UpdateCloudGtmGlobalAlertResponse updateCloudGtmGlobalAlert(const Models::UpdateCloudGtmGlobalAlertRequest &request);

      /**
       * @param tmpReq UpdateCloudGtmInstanceConfigAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigAlertResponse
       */
      Models::UpdateCloudGtmInstanceConfigAlertResponse updateCloudGtmInstanceConfigAlertWithOptions(const Models::UpdateCloudGtmInstanceConfigAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmInstanceConfigAlertRequest
       * @return UpdateCloudGtmInstanceConfigAlertResponse
       */
      Models::UpdateCloudGtmInstanceConfigAlertResponse updateCloudGtmInstanceConfigAlert(const Models::UpdateCloudGtmInstanceConfigAlertRequest &request);

      /**
       * @summary Updates the global time-to-live (TTL) configuration of a GTM 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigBasicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigBasicResponse
       */
      Models::UpdateCloudGtmInstanceConfigBasicResponse updateCloudGtmInstanceConfigBasicWithOptions(const Models::UpdateCloudGtmInstanceConfigBasicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the global time-to-live (TTL) configuration of a GTM 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigBasicRequest
       * @return UpdateCloudGtmInstanceConfigBasicResponse
       */
      Models::UpdateCloudGtmInstanceConfigBasicResponse updateCloudGtmInstanceConfigBasic(const Models::UpdateCloudGtmInstanceConfigBasicRequest &request);

      /**
       * @summary Modifies the enabling status of an access domain name.
       *
       * @description *   If an access domain name is **enabled** and the health state is **normal**, the access domain name is deemed **available**.
       * *   If an access domain name is **disabled** or the health state is **abnormal**, the access domain name is deemed **unavailable**.
       *
       * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
       */
      Models::UpdateCloudGtmInstanceConfigEnableStatusResponse updateCloudGtmInstanceConfigEnableStatusWithOptions(const Models::UpdateCloudGtmInstanceConfigEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the enabling status of an access domain name.
       *
       * @description *   If an access domain name is **enabled** and the health state is **normal**, the access domain name is deemed **available**.
       * *   If an access domain name is **disabled** or the health state is **abnormal**, the access domain name is deemed **unavailable**.
       *
       * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
       * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
       */
      Models::UpdateCloudGtmInstanceConfigEnableStatusResponse updateCloudGtmInstanceConfigEnableStatus(const Models::UpdateCloudGtmInstanceConfigEnableStatusRequest &request);

      /**
       * @summary Modifies the load balancing policy of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
       */
      Models::UpdateCloudGtmInstanceConfigLbStrategyResponse updateCloudGtmInstanceConfigLbStrategyWithOptions(const Models::UpdateCloudGtmInstanceConfigLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the load balancing policy of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
       * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
       */
      Models::UpdateCloudGtmInstanceConfigLbStrategyResponse updateCloudGtmInstanceConfigLbStrategy(const Models::UpdateCloudGtmInstanceConfigLbStrategyRequest &request);

      /**
       * @summary Modifies the description of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigRemarkResponse
       */
      Models::UpdateCloudGtmInstanceConfigRemarkResponse updateCloudGtmInstanceConfigRemarkWithOptions(const Models::UpdateCloudGtmInstanceConfigRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request UpdateCloudGtmInstanceConfigRemarkRequest
       * @return UpdateCloudGtmInstanceConfigRemarkResponse
       */
      Models::UpdateCloudGtmInstanceConfigRemarkResponse updateCloudGtmInstanceConfigRemark(const Models::UpdateCloudGtmInstanceConfigRemarkRequest &request);

      /**
       * @param request UpdateCloudGtmInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceNameResponse
       */
      Models::UpdateCloudGtmInstanceNameResponse updateCloudGtmInstanceNameWithOptions(const Models::UpdateCloudGtmInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmInstanceNameRequest
       * @return UpdateCloudGtmInstanceNameResponse
       */
      Models::UpdateCloudGtmInstanceNameResponse updateCloudGtmInstanceName(const Models::UpdateCloudGtmInstanceNameRequest &request);

      /**
       * @summary Modifies the information about a health check template.
       *
       * @param tmpReq UpdateCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmMonitorTemplateResponse
       */
      Models::UpdateCloudGtmMonitorTemplateResponse updateCloudGtmMonitorTemplateWithOptions(const Models::UpdateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a health check template.
       *
       * @param request UpdateCloudGtmMonitorTemplateRequest
       * @return UpdateCloudGtmMonitorTemplateResponse
       */
      Models::UpdateCloudGtmMonitorTemplateResponse updateCloudGtmMonitorTemplate(const Models::UpdateCloudGtmMonitorTemplateRequest &request);

      /**
       * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmMonitorTemplateRemarkResponse
       */
      Models::UpdateCloudGtmMonitorTemplateRemarkResponse updateCloudGtmMonitorTemplateRemarkWithOptions(const Models::UpdateCloudGtmMonitorTemplateRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
       * @return UpdateCloudGtmMonitorTemplateRemarkResponse
       */
      Models::UpdateCloudGtmMonitorTemplateRemarkResponse updateCloudGtmMonitorTemplateRemark(const Models::UpdateCloudGtmMonitorTemplateRemarkRequest &request);

      /**
       * @summary Modifies a custom line with its unique ID.
       *
       * @description In each CIDR block, the end IP address must be greater than or equal to the start IP address.\\
       * The CIDR blocks that are specified for all custom lines of a domain name cannot be overlapped.
       *
       * @param request UpdateCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLineWithOptions(const Models::UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom line with its unique ID.
       *
       * @description In each CIDR block, the end IP address must be greater than or equal to the start IP address.\\
       * The CIDR blocks that are specified for all custom lines of a domain name cannot be overlapped.
       *
       * @param request UpdateCustomLineRequest
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLine(const Models::UpdateCustomLineRequest &request);

      /**
       * @summary Modifies the weight of a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDNSSLBWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDNSSLBWeightResponse
       */
      Models::UpdateDNSSLBWeightResponse updateDNSSLBWeightWithOptions(const Models::UpdateDNSSLBWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDNSSLBWeightRequest
       * @return UpdateDNSSLBWeightResponse
       */
      Models::UpdateDNSSLBWeightResponse updateDNSSLBWeight(const Models::UpdateDNSSLBWeightRequest &request);

      /**
       * @summary Updates the cache-accelerated domain name based on the specified parameters.
       *
       * @param request UpdateDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsCacheDomainResponse
       */
      Models::UpdateDnsCacheDomainResponse updateDnsCacheDomainWithOptions(const Models::UpdateDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cache-accelerated domain name based on the specified parameters.
       *
       * @param request UpdateDnsCacheDomainRequest
       * @return UpdateDnsCacheDomainResponse
       */
      Models::UpdateDnsCacheDomainResponse updateDnsCacheDomain(const Models::UpdateDnsCacheDomainRequest &request);

      /**
       * @summary Updates the remarks for the cache-accelerated domain name of the destination domain name.
       *
       * @param request UpdateDnsCacheDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsCacheDomainRemarkResponse
       */
      Models::UpdateDnsCacheDomainRemarkResponse updateDnsCacheDomainRemarkWithOptions(const Models::UpdateDnsCacheDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for the cache-accelerated domain name of the destination domain name.
       *
       * @param request UpdateDnsCacheDomainRemarkRequest
       * @return UpdateDnsCacheDomainRemarkResponse
       */
      Models::UpdateDnsCacheDomainRemarkResponse updateDnsCacheDomainRemark(const Models::UpdateDnsCacheDomainRemarkRequest &request);

      /**
       * @summary Modifies an access policy.
       *
       * @param request UpdateDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmAccessStrategyResponse
       */
      Models::UpdateDnsGtmAccessStrategyResponse updateDnsGtmAccessStrategyWithOptions(const Models::UpdateDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access policy.
       *
       * @param request UpdateDnsGtmAccessStrategyRequest
       * @return UpdateDnsGtmAccessStrategyResponse
       */
      Models::UpdateDnsGtmAccessStrategyResponse updateDnsGtmAccessStrategy(const Models::UpdateDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Modifies an address pool.
       *
       * @param request UpdateDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmAddressPoolResponse
       */
      Models::UpdateDnsGtmAddressPoolResponse updateDnsGtmAddressPoolWithOptions(const Models::UpdateDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an address pool.
       *
       * @param request UpdateDnsGtmAddressPoolRequest
       * @return UpdateDnsGtmAddressPoolResponse
       */
      Models::UpdateDnsGtmAddressPoolResponse updateDnsGtmAddressPool(const Models::UpdateDnsGtmAddressPoolRequest &request);

      /**
       * @summary Modifies the configurations of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateDnsGtmInstanceGlobalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmInstanceGlobalConfigResponse
       */
      Models::UpdateDnsGtmInstanceGlobalConfigResponse updateDnsGtmInstanceGlobalConfigWithOptions(const Models::UpdateDnsGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateDnsGtmInstanceGlobalConfigRequest
       * @return UpdateDnsGtmInstanceGlobalConfigResponse
       */
      Models::UpdateDnsGtmInstanceGlobalConfigResponse updateDnsGtmInstanceGlobalConfig(const Models::UpdateDnsGtmInstanceGlobalConfigRequest &request);

      /**
       * @summary Modifies a health check task.
       *
       * @param request UpdateDnsGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmMonitorResponse
       */
      Models::UpdateDnsGtmMonitorResponse updateDnsGtmMonitorWithOptions(const Models::UpdateDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a health check task.
       *
       * @param request UpdateDnsGtmMonitorRequest
       * @return UpdateDnsGtmMonitorResponse
       */
      Models::UpdateDnsGtmMonitorResponse updateDnsGtmMonitor(const Models::UpdateDnsGtmMonitorRequest &request);

      /**
       * @summary Modifies the name of a domain name group based on the specified parameters.
       *
       * @description Modifies the name of an existing domain name group.
       *
       * @param request UpdateDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainGroupResponse
       */
      Models::UpdateDomainGroupResponse updateDomainGroupWithOptions(const Models::UpdateDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a domain name group based on the specified parameters.
       *
       * @description Modifies the name of an existing domain name group.
       *
       * @param request UpdateDomainGroupRequest
       * @return UpdateDomainGroupResponse
       */
      Models::UpdateDomainGroupResponse updateDomainGroup(const Models::UpdateDomainGroupRequest &request);

      /**
       * @summary Modifies a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRecordResponse
       */
      Models::UpdateDomainRecordResponse updateDomainRecordWithOptions(const Models::UpdateDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRequest
       * @return UpdateDomainRecordResponse
       */
      Models::UpdateDomainRecordResponse updateDomainRecord(const Models::UpdateDomainRecordRequest &request);

      /**
       * @summary Modifies the description of a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRecordRemarkResponse
       */
      Models::UpdateDomainRecordRemarkResponse updateDomainRecordRemarkWithOptions(const Models::UpdateDomainRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a Domain Name System (DNS) record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRemarkRequest
       * @return UpdateDomainRecordRemarkResponse
       */
      Models::UpdateDomainRecordRemarkResponse updateDomainRecordRemark(const Models::UpdateDomainRecordRemarkRequest &request);

      /**
       * @summary Modifies the description of a domain name based on the specified parameters.
       *
       * @param request UpdateDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRemarkResponse
       */
      Models::UpdateDomainRemarkResponse updateDomainRemarkWithOptions(const Models::UpdateDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a domain name based on the specified parameters.
       *
       * @param request UpdateDomainRemarkRequest
       * @return UpdateDomainRemarkResponse
       */
      Models::UpdateDomainRemarkResponse updateDomainRemark(const Models::UpdateDomainRemarkRequest &request);

      /**
       * @param request UpdateGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmAccessStrategyResponse
       */
      Models::UpdateGtmAccessStrategyResponse updateGtmAccessStrategyWithOptions(const Models::UpdateGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateGtmAccessStrategyRequest
       * @return UpdateGtmAccessStrategyResponse
       */
      Models::UpdateGtmAccessStrategyResponse updateGtmAccessStrategy(const Models::UpdateGtmAccessStrategyRequest &request);

      /**
       * @param request UpdateGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmAddressPoolResponse
       */
      Models::UpdateGtmAddressPoolResponse updateGtmAddressPoolWithOptions(const Models::UpdateGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateGtmAddressPoolRequest
       * @return UpdateGtmAddressPoolResponse
       */
      Models::UpdateGtmAddressPoolResponse updateGtmAddressPool(const Models::UpdateGtmAddressPoolRequest &request);

      /**
       * @summary Modifies the configurations of a Global Traffic Manager (GTM) instance based on the specified parameters.
       *
       * @param request UpdateGtmInstanceGlobalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmInstanceGlobalConfigResponse
       */
      Models::UpdateGtmInstanceGlobalConfigResponse updateGtmInstanceGlobalConfigWithOptions(const Models::UpdateGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a Global Traffic Manager (GTM) instance based on the specified parameters.
       *
       * @param request UpdateGtmInstanceGlobalConfigRequest
       * @return UpdateGtmInstanceGlobalConfigResponse
       */
      Models::UpdateGtmInstanceGlobalConfigResponse updateGtmInstanceGlobalConfig(const Models::UpdateGtmInstanceGlobalConfigRequest &request);

      /**
       * @summary Modifies the health check configuration for an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmMonitorResponse
       */
      Models::UpdateGtmMonitorResponse updateGtmMonitorWithOptions(const Models::UpdateGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the health check configuration for an address pool of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateGtmMonitorRequest
       * @return UpdateGtmMonitorResponse
       */
      Models::UpdateGtmMonitorResponse updateGtmMonitor(const Models::UpdateGtmMonitorRequest &request);

      /**
       * @summary Modifies a disaster recovery plan.
       *
       * @param request UpdateGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmRecoveryPlanResponse
       */
      Models::UpdateGtmRecoveryPlanResponse updateGtmRecoveryPlanWithOptions(const Models::UpdateGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a disaster recovery plan.
       *
       * @param request UpdateGtmRecoveryPlanRequest
       * @return UpdateGtmRecoveryPlanResponse
       */
      Models::UpdateGtmRecoveryPlanResponse updateGtmRecoveryPlan(const Models::UpdateGtmRecoveryPlanRequest &request);

      /**
       * @summary 修改缓存刷新套餐包配置
       *
       * @param request UpdateIspFlushCacheInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIspFlushCacheInstanceConfigResponse
       */
      Models::UpdateIspFlushCacheInstanceConfigResponse updateIspFlushCacheInstanceConfigWithOptions(const Models::UpdateIspFlushCacheInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改缓存刷新套餐包配置
       *
       * @param request UpdateIspFlushCacheInstanceConfigRequest
       * @return UpdateIspFlushCacheInstanceConfigResponse
       */
      Models::UpdateIspFlushCacheInstanceConfigResponse updateIspFlushCacheInstanceConfig(const Models::UpdateIspFlushCacheInstanceConfigRequest &request);

      /**
       * @summary 修改递归解析内置权威解析记录
       *
       * @param request UpdateRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordResponse
       */
      Models::UpdateRecursionRecordResponse updateRecursionRecordWithOptions(const Models::UpdateRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威解析记录
       *
       * @param request UpdateRecursionRecordRequest
       * @return UpdateRecursionRecordResponse
       */
      Models::UpdateRecursionRecordResponse updateRecursionRecord(const Models::UpdateRecursionRecordRequest &request);

      /**
       * @summary 修改内置权威解析记录启用状态
       *
       * @param request UpdateRecursionRecordEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordEnableStatusResponse
       */
      Models::UpdateRecursionRecordEnableStatusResponse updateRecursionRecordEnableStatusWithOptions(const Models::UpdateRecursionRecordEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改内置权威解析记录启用状态
       *
       * @param request UpdateRecursionRecordEnableStatusRequest
       * @return UpdateRecursionRecordEnableStatusResponse
       */
      Models::UpdateRecursionRecordEnableStatusResponse updateRecursionRecordEnableStatus(const Models::UpdateRecursionRecordEnableStatusRequest &request);

      /**
       * @summary 修改递归解析内置权威解析记录备注
       *
       * @param request UpdateRecursionRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordRemarkResponse
       */
      Models::UpdateRecursionRecordRemarkResponse updateRecursionRecordRemarkWithOptions(const Models::UpdateRecursionRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威解析记录备注
       *
       * @param request UpdateRecursionRecordRemarkRequest
       * @return UpdateRecursionRecordRemarkResponse
       */
      Models::UpdateRecursionRecordRemarkResponse updateRecursionRecordRemark(const Models::UpdateRecursionRecordRemarkRequest &request);

      /**
       * @summary 修改递归解析内置权威解析记录权重
       *
       * @param request UpdateRecursionRecordWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordWeightResponse
       */
      Models::UpdateRecursionRecordWeightResponse updateRecursionRecordWeightWithOptions(const Models::UpdateRecursionRecordWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威解析记录权重
       *
       * @param request UpdateRecursionRecordWeightRequest
       * @return UpdateRecursionRecordWeightResponse
       */
      Models::UpdateRecursionRecordWeightResponse updateRecursionRecordWeight(const Models::UpdateRecursionRecordWeightRequest &request);

      /**
       * @summary 修改递归解析内置权威解析记录权重算法启用状态
       *
       * @param request UpdateRecursionRecordWeightEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordWeightEnableStatusResponse
       */
      Models::UpdateRecursionRecordWeightEnableStatusResponse updateRecursionRecordWeightEnableStatusWithOptions(const Models::UpdateRecursionRecordWeightEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威解析记录权重算法启用状态
       *
       * @param request UpdateRecursionRecordWeightEnableStatusRequest
       * @return UpdateRecursionRecordWeightEnableStatusResponse
       */
      Models::UpdateRecursionRecordWeightEnableStatusResponse updateRecursionRecordWeightEnableStatus(const Models::UpdateRecursionRecordWeightEnableStatusRequest &request);

      /**
       * @summary 修改递归解析内置权威域名zone生效范围
       *
       * @param tmpReq UpdateRecursionZoneEffectiveScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneEffectiveScopeResponse
       */
      Models::UpdateRecursionZoneEffectiveScopeResponse updateRecursionZoneEffectiveScopeWithOptions(const Models::UpdateRecursionZoneEffectiveScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威域名zone生效范围
       *
       * @param request UpdateRecursionZoneEffectiveScopeRequest
       * @return UpdateRecursionZoneEffectiveScopeResponse
       */
      Models::UpdateRecursionZoneEffectiveScopeResponse updateRecursionZoneEffectiveScope(const Models::UpdateRecursionZoneEffectiveScopeRequest &request);

      /**
       * @summary 修改递归解析内置权威域名zone递归代理模式
       *
       * @param request UpdateRecursionZoneProxyPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneProxyPatternResponse
       */
      Models::UpdateRecursionZoneProxyPatternResponse updateRecursionZoneProxyPatternWithOptions(const Models::UpdateRecursionZoneProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威域名zone递归代理模式
       *
       * @param request UpdateRecursionZoneProxyPatternRequest
       * @return UpdateRecursionZoneProxyPatternResponse
       */
      Models::UpdateRecursionZoneProxyPatternResponse updateRecursionZoneProxyPattern(const Models::UpdateRecursionZoneProxyPatternRequest &request);

      /**
       * @summary 修改递归解析内置权威域名zone备注
       *
       * @param request UpdateRecursionZoneRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneRemarkResponse
       */
      Models::UpdateRecursionZoneRemarkResponse updateRecursionZoneRemarkWithOptions(const Models::UpdateRecursionZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改递归解析内置权威域名zone备注
       *
       * @param request UpdateRecursionZoneRemarkRequest
       * @return UpdateRecursionZoneRemarkResponse
       */
      Models::UpdateRecursionZoneRemarkResponse updateRecursionZoneRemark(const Models::UpdateRecursionZoneRemarkRequest &request);

      /**
       * @summary 用于更新特定域名的状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayResponse updateRspDomainServerProhibitStatusForGatewayWithOptions(const Models::UpdateRspDomainServerProhibitStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于更新特定域名的状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
       * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayResponse updateRspDomainServerProhibitStatusForGateway(const Models::UpdateRspDomainServerProhibitStatusForGatewayRequest &request);

      /**
       * @summary 用于更新特定域名的状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayOteResponse updateRspDomainServerProhibitStatusForGatewayOteWithOptions(const Models::UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于更新特定域名的状态信息。
       *
       * @description ## 请求说明
       * - 本接口专为注册局用户设计，允许他们更新指定顶级域名（TLD）的各种属性。
       * - 必须提供`RegistryId`和`Tld`参数以标识要修改的具体TLD。
       * - 可选参数包括但不限于宽限期设置、DNS解析缓存时间、价格设定等，这些都可根据需要进行调整。
       * - 环境(`Env`)参数指定了API调用的目标环境，默认值为“DAILY”表示日常测试环境；正式上线前，请确保已正确设置此参数。
       * - 某些时间戳字段如`SunriseStartTimeStamp`要求输入Unix时间戳格式的数据。
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
       * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayOteResponse updateRspDomainServerProhibitStatusForGatewayOte(const Models::UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request);

      /**
       * @summary 检查实例主机名是否可添加
       *
       * @param request ValidateDnsGtmCnameRrCanUseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateDnsGtmCnameRrCanUseResponse
       */
      Models::ValidateDnsGtmCnameRrCanUseResponse validateDnsGtmCnameRrCanUseWithOptions(const Models::ValidateDnsGtmCnameRrCanUseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查实例主机名是否可添加
       *
       * @param request ValidateDnsGtmCnameRrCanUseRequest
       * @return ValidateDnsGtmCnameRrCanUseResponse
       */
      Models::ValidateDnsGtmCnameRrCanUseResponse validateDnsGtmCnameRrCanUse(const Models::ValidateDnsGtmCnameRrCanUseRequest &request);

      /**
       * @summary 验证公共DNS Udp Ip地址段
       *
       * @param request ValidatePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidatePdnsUdpIpSegmentResponse
       */
      Models::ValidatePdnsUdpIpSegmentResponse validatePdnsUdpIpSegmentWithOptions(const Models::ValidatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证公共DNS Udp Ip地址段
       *
       * @param request ValidatePdnsUdpIpSegmentRequest
       * @return ValidatePdnsUdpIpSegmentResponse
       */
      Models::ValidatePdnsUdpIpSegmentResponse validatePdnsUdpIpSegment(const Models::ValidatePdnsUdpIpSegmentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
