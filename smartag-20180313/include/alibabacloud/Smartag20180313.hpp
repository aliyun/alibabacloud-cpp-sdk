// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SMARTAG20180313_HPP_
#define ALIBABACLOUD_SMARTAG20180313_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Smartag20180313Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Smartag20180313.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates a Smart Access Gateway (SAG) device.
       *
       * @param request ActivateSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateSmartAccessGatewayResponse
       */
      Models::ActivateSmartAccessGatewayResponse activateSmartAccessGatewayWithOptions(const Models::ActivateSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a Smart Access Gateway (SAG) device.
       *
       * @param request ActivateSmartAccessGatewayRequest
       * @return ActivateSmartAccessGatewayResponse
       */
      Models::ActivateSmartAccessGatewayResponse activateSmartAccessGateway(const Models::ActivateSmartAccessGatewayRequest &request);

      /**
       * @summary Enables a flow log.
       *
       * @param request ActiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLogWithOptions(const Models::ActiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a flow log.
       *
       * @param request ActiveFlowLogRequest
       * @return ActiveFlowLogResponse
       */
      Models::ActiveFlowLogResponse activeFlowLog(const Models::ActiveFlowLogRequest &request);

      /**
       * @summary Adds an access control rule.
       *
       * @param request AddACLRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddACLRuleResponse
       */
      Models::AddACLRuleResponse addACLRuleWithOptions(const Models::AddACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an access control rule.
       *
       * @param request AddACLRuleRequest
       * @return AddACLRuleResponse
       */
      Models::AddACLRuleResponse addACLRule(const Models::AddACLRuleRequest &request);

      /**
       * @summary Adds a destination network address translation (DNAT) entry to a Smart Access Gateway (SAG) instance.
       *
       * @param request AddDnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnatEntryResponse
       */
      Models::AddDnatEntryResponse addDnatEntryWithOptions(const Models::AddDnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a destination network address translation (DNAT) entry to a Smart Access Gateway (SAG) instance.
       *
       * @param request AddDnatEntryRequest
       * @return AddDnatEntryResponse
       */
      Models::AddDnatEntryResponse addDnatEntry(const Models::AddDnatEntryRequest &request);

      /**
       * @summary Adds DNS forwarding configurations to an SCG5000 or SCG5000-5G instance. The device version must be 3.4.2 or later.
       *
       * @param request AddSmartAccessGatewayDnsForwardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmartAccessGatewayDnsForwardResponse
       */
      Models::AddSmartAccessGatewayDnsForwardResponse addSmartAccessGatewayDnsForwardWithOptions(const Models::AddSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds DNS forwarding configurations to an SCG5000 or SCG5000-5G instance. The device version must be 3.4.2 or later.
       *
       * @param request AddSmartAccessGatewayDnsForwardRequest
       * @return AddSmartAccessGatewayDnsForwardResponse
       */
      Models::AddSmartAccessGatewayDnsForwardResponse addSmartAccessGatewayDnsForward(const Models::AddSmartAccessGatewayDnsForwardRequest &request);

      /**
       * @summary Adds a source network address translation (SNAT) entry to a Smart Access Gateway (SAG) instance.
       *
       * @param request AddSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSnatEntryResponse
       */
      Models::AddSnatEntryResponse addSnatEntryWithOptions(const Models::AddSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a source network address translation (SNAT) entry to a Smart Access Gateway (SAG) instance.
       *
       * @param request AddSnatEntryRequest
       * @return AddSnatEntryResponse
       */
      Models::AddSnatEntryResponse addSnatEntry(const Models::AddSnatEntryRequest &request);

      /**
       * @summary Associates an access control list (ACL) with a Smart Access Gateway (SAG) instance.
       *
       * @param request AssociateACLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateACLResponse
       */
      Models::AssociateACLResponse associateACLWithOptions(const Models::AssociateACLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an access control list (ACL) with a Smart Access Gateway (SAG) instance.
       *
       * @param request AssociateACLRequest
       * @return AssociateACLResponse
       */
      Models::AssociateACLResponse associateACL(const Models::AssociateACLRequest &request);

      /**
       * @summary Associates a Smart Access Gateway instance.
       *
       * @param request AssociateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateFlowLogResponse
       */
      Models::AssociateFlowLogResponse associateFlowLogWithOptions(const Models::AssociateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Smart Access Gateway instance.
       *
       * @param request AssociateFlowLogRequest
       * @return AssociateFlowLogResponse
       */
      Models::AssociateFlowLogResponse associateFlowLog(const Models::AssociateFlowLogRequest &request);

      /**
       * @summary Applies a Quality of Service (QoS) policy to a Smart Access Gateway (SAG) instance.
       *
       * @param request AssociateQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateQosResponse
       */
      Models::AssociateQosResponse associateQosWithOptions(const Models::AssociateQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a Quality of Service (QoS) policy to a Smart Access Gateway (SAG) instance.
       *
       * @param request AssociateQosRequest
       * @return AssociateQosResponse
       */
      Models::AssociateQosResponse associateQos(const Models::AssociateQosRequest &request);

      /**
       * @summary Associates a bandwidth plan for application acceleration with a Smart Access Gateway (SAG) instance.
       *
       * @description Before you associate a bandwidth plan for application acceleration with an SAG instance, make sure that the following requirements are met:
       * *   If you want to associate a bandwidth plan for application acceleration with an SAG CPE instance, the version of the SAG device associated with the SAG CPE instance must be 2.4.0 or later.
       *     If the version of the SAG device is earlier than 2.4.0, update it. For more information, see [Update the version of an SAG device](https://help.aliyun.com/document_detail/163948.html).
       * *   If you want to associate a bandwidth plan for application acceleration with an SAG app instance, the version of the SAG app must be 2.4.0 or later.
       *     If the version of the SAG app is earlier than 2.4.0, update it. For more information, see [Install the SAG app](https://help.aliyun.com/document_detail/102544.html).
       * *   The SAG instance to be associated is in the available state.
       *
       * @param request AssociateSmartAGWithApplicationBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateSmartAGWithApplicationBandwidthPackageResponse
       */
      Models::AssociateSmartAGWithApplicationBandwidthPackageResponse associateSmartAGWithApplicationBandwidthPackageWithOptions(const Models::AssociateSmartAGWithApplicationBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a bandwidth plan for application acceleration with a Smart Access Gateway (SAG) instance.
       *
       * @description Before you associate a bandwidth plan for application acceleration with an SAG instance, make sure that the following requirements are met:
       * *   If you want to associate a bandwidth plan for application acceleration with an SAG CPE instance, the version of the SAG device associated with the SAG CPE instance must be 2.4.0 or later.
       *     If the version of the SAG device is earlier than 2.4.0, update it. For more information, see [Update the version of an SAG device](https://help.aliyun.com/document_detail/163948.html).
       * *   If you want to associate a bandwidth plan for application acceleration with an SAG app instance, the version of the SAG app must be 2.4.0 or later.
       *     If the version of the SAG app is earlier than 2.4.0, update it. For more information, see [Install the SAG app](https://help.aliyun.com/document_detail/102544.html).
       * *   The SAG instance to be associated is in the available state.
       *
       * @param request AssociateSmartAGWithApplicationBandwidthPackageRequest
       * @return AssociateSmartAGWithApplicationBandwidthPackageResponse
       */
      Models::AssociateSmartAGWithApplicationBandwidthPackageResponse associateSmartAGWithApplicationBandwidthPackage(const Models::AssociateSmartAGWithApplicationBandwidthPackageRequest &request);

      /**
       * @summary Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request AttachCcnInstanceToCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCcnInstanceToCenResponse
       */
      Models::AttachCcnInstanceToCenResponse attachCcnInstanceToCenWithOptions(const Models::AttachCcnInstanceToCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @description Binds a Cloud Connect Network (CCN) instance to a Cloud Enterprise Network (CEN) instance.
       *
       * @param request AttachCcnInstanceToCenRequest
       * @return AttachCcnInstanceToCenResponse
       */
      Models::AttachCcnInstanceToCenResponse attachCcnInstanceToCen(const Models::AttachCcnInstanceToCenRequest &request);

      /**
       * @summary Binds a Smart Access Gateway device to a Smart Access Gateway instance.
       *
       * @param request BindSerialNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindSerialNumberResponse
       */
      Models::BindSerialNumberResponse bindSerialNumberWithOptions(const Models::BindSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Smart Access Gateway device to a Smart Access Gateway instance.
       *
       * @param request BindSerialNumberRequest
       * @return BindSerialNumberResponse
       */
      Models::BindSerialNumberResponse bindSerialNumber(const Models::BindSerialNumberRequest &request);

      /**
       * @summary Associates a Smart Access Gateway (SAG) instance with a Cloud Connect Network (CCN) instance.
       *
       * @param request BindSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindSmartAccessGatewayResponse
       */
      Models::BindSmartAccessGatewayResponse bindSmartAccessGatewayWithOptions(const Models::BindSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Smart Access Gateway (SAG) instance with a Cloud Connect Network (CCN) instance.
       *
       * @param request BindSmartAccessGatewayRequest
       * @return BindSmartAccessGatewayResponse
       */
      Models::BindSmartAccessGatewayResponse bindSmartAccessGateway(const Models::BindSmartAccessGatewayRequest &request);

      /**
       * @summary Binds a virtual border router (VBR) to a Smart Access Gateway instance.
       *
       * @param request BindVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindVbrResponse
       */
      Models::BindVbrResponse bindVbrWithOptions(const Models::BindVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a virtual border router (VBR) to a Smart Access Gateway instance.
       *
       * @param request BindVbrRequest
       * @return BindVbrResponse
       */
      Models::BindVbrResponse bindVbr(const Models::BindVbrRequest &request);

      /**
       * @summary Resets the password of a virtual customer-premises equipment (vCPE) device of Smart Access Gateway (SAG).
       *
       * @param request ClearSagCipherRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearSagCipherResponse
       */
      Models::ClearSagCipherResponse clearSagCipherWithOptions(const Models::ClearSagCipherRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a virtual customer-premises equipment (vCPE) device of Smart Access Gateway (SAG).
       *
       * @param request ClearSagCipherRequest
       * @return ClearSagCipherResponse
       */
      Models::ClearSagCipherResponse clearSagCipher(const Models::ClearSagCipherRequest &request);

      /**
       * @summary Purges the routable addresses of a Smart Access Gateway instance.
       *
       * @param request ClearSagRouteableAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearSagRouteableAddressResponse
       */
      Models::ClearSagRouteableAddressResponse clearSagRouteableAddressWithOptions(const Models::ClearSagRouteableAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purges the routable addresses of a Smart Access Gateway instance.
       *
       * @param request ClearSagRouteableAddressRequest
       * @return ClearSagRouteableAddressResponse
       */
      Models::ClearSagRouteableAddressResponse clearSagRouteableAddress(const Models::ClearSagRouteableAddressRequest &request);

      /**
       * @summary Creates an access control instance by calling the CreateACL operation.
       *
       * @param request CreateACLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateACLResponse
       */
      Models::CreateACLResponse createACLWithOptions(const Models::CreateACLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control instance by calling the CreateACL operation.
       *
       * @param request CreateACLRequest
       * @return CreateACLResponse
       */
      Models::CreateACLResponse createACL(const Models::CreateACLRequest &request);

      /**
       * @summary Calls the CreateCloudConnectNetwork operation to create a Cloud Connect Network (CCN) instance.
       *
       * @description A Cloud Connect Network (CCN) is a device access matrix that consists of Alibaba Cloud distributed access gateways. CCN is another important component of Smart Access Gateway. After you attach Smart Access Gateway to a CCN, Smart Access Gateway can connect your on-premises network to Alibaba Cloud through the CCN via network connectivity. For more information, see [Cloud Connect Network overview](https://help.aliyun.com/document_detail/93667.html).
       *
       * @param request CreateCloudConnectNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudConnectNetworkResponse
       */
      Models::CreateCloudConnectNetworkResponse createCloudConnectNetworkWithOptions(const Models::CreateCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateCloudConnectNetwork operation to create a Cloud Connect Network (CCN) instance.
       *
       * @description A Cloud Connect Network (CCN) is a device access matrix that consists of Alibaba Cloud distributed access gateways. CCN is another important component of Smart Access Gateway. After you attach Smart Access Gateway to a CCN, Smart Access Gateway can connect your on-premises network to Alibaba Cloud through the CCN via network connectivity. For more information, see [Cloud Connect Network overview](https://help.aliyun.com/document_detail/93667.html).
       *
       * @param request CreateCloudConnectNetworkRequest
       * @return CreateCloudConnectNetworkResponse
       */
      Models::CreateCloudConnectNetworkResponse createCloudConnectNetwork(const Models::CreateCloudConnectNetworkRequest &request);

      /**
       * @summary Creates an enterprise code by calling CreateEnterpriseCode.
       *
       * @param request CreateEnterpriseCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseCodeResponse
       */
      Models::CreateEnterpriseCodeResponse createEnterpriseCodeWithOptions(const Models::CreateEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enterprise code by calling CreateEnterpriseCode.
       *
       * @param request CreateEnterpriseCodeRequest
       * @return CreateEnterpriseCodeResponse
       */
      Models::CreateEnterpriseCodeResponse createEnterpriseCode(const Models::CreateEnterpriseCodeRequest &request);

      /**
       * @summary Creates a flow log.
       *
       * @param request CreateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLogWithOptions(const Models::CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log.
       *
       * @param request CreateFlowLogRequest
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLog(const Models::CreateFlowLogRequest &request);

      /**
       * @summary Calls CreateHealthCheck to create a health check for a Smart Access Gateway instance.
       *
       * @param request CreateHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHealthCheckResponse
       */
      Models::CreateHealthCheckResponse createHealthCheckWithOptions(const Models::CreateHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateHealthCheck to create a health check for a Smart Access Gateway instance.
       *
       * @param request CreateHealthCheckRequest
       * @return CreateHealthCheckResponse
       */
      Models::CreateHealthCheckResponse createHealthCheck(const Models::CreateHealthCheckRequest &request);

      /**
       * @summary Creates a probe task for a specified Smart Access Gateway device.
       *
       * @description - Currently, only SAG-1000 devices with software version 2.7.0 or later support the probe monitoring feature.
       * - Before creating a probe task, enable the advanced monitoring feature for the Smart Access Gateway instance. You can call the [SetAdvancedMonitorState](https://help.aliyun.com/document_detail/476404.html) operation to set the advanced monitoring status.
       *
       * @param request CreateProbeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProbeTaskResponse
       */
      Models::CreateProbeTaskResponse createProbeTaskWithOptions(const Models::CreateProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a probe task for a specified Smart Access Gateway device.
       *
       * @description - Currently, only SAG-1000 devices with software version 2.7.0 or later support the probe monitoring feature.
       * - Before creating a probe task, enable the advanced monitoring feature for the Smart Access Gateway instance. You can call the [SetAdvancedMonitorState](https://help.aliyun.com/document_detail/476404.html) operation to set the advanced monitoring status.
       *
       * @param request CreateProbeTaskRequest
       * @return CreateProbeTaskResponse
       */
      Models::CreateProbeTaskResponse createProbeTask(const Models::CreateProbeTaskRequest &request);

      /**
       * @summary Creates a quality of service (QoS) policy instance by calling the CreateQos operation.
       *
       * @param request CreateQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQosResponse
       */
      Models::CreateQosResponse createQosWithOptions(const Models::CreateQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality of service (QoS) policy instance by calling the CreateQos operation.
       *
       * @param request CreateQosRequest
       * @return CreateQosResponse
       */
      Models::CreateQosResponse createQos(const Models::CreateQosRequest &request);

      /**
       * @summary Creates a rate limiting rule for a quality of service (QoS) policy by calling the CreateQosCar operation.
       *
       * @param request CreateQosCarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQosCarResponse
       */
      Models::CreateQosCarResponse createQosCarWithOptions(const Models::CreateQosCarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rate limiting rule for a quality of service (QoS) policy by calling the CreateQosCar operation.
       *
       * @param request CreateQosCarRequest
       * @return CreateQosCarResponse
       */
      Models::CreateQosCarResponse createQosCar(const Models::CreateQosCarRequest &request);

      /**
       * @summary Creates a traffic classification rule for a QoS policy by calling the CreateQosPolicy operation.
       *
       * @description Before you create a 5-tuple rule for a QoS policy, make sure that you have created a rate limiting rule for the QoS policy. For more information, see [CreateQosCar](https://help.aliyun.com/document_detail/131806.html).
       *
       * @param request CreateQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQosPolicyResponse
       */
      Models::CreateQosPolicyResponse createQosPolicyWithOptions(const Models::CreateQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a traffic classification rule for a QoS policy by calling the CreateQosPolicy operation.
       *
       * @description Before you create a 5-tuple rule for a QoS policy, make sure that you have created a rate limiting rule for the QoS policy. For more information, see [CreateQosCar](https://help.aliyun.com/document_detail/131806.html).
       *
       * @param request CreateQosPolicyRequest
       * @return CreateQosPolicyResponse
       */
      Models::CreateQosPolicyResponse createQosPolicy(const Models::CreateQosPolicyRequest &request);

      /**
       * @summary Creates a subinterface for an Express Connect circuit.
       *
       * @param request CreateSagExpressConnectInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSagExpressConnectInterfaceResponse
       */
      Models::CreateSagExpressConnectInterfaceResponse createSagExpressConnectInterfaceWithOptions(const Models::CreateSagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subinterface for an Express Connect circuit.
       *
       * @param request CreateSagExpressConnectInterfaceRequest
       * @return CreateSagExpressConnectInterfaceResponse
       */
      Models::CreateSagExpressConnectInterfaceResponse createSagExpressConnectInterface(const Models::CreateSagExpressConnectInterfaceRequest &request);

      /**
       * @summary Adds a static route to a Smart Access Gateway (SAG) instance.
       *
       * @param request CreateSagStaticRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSagStaticRouteResponse
       */
      Models::CreateSagStaticRouteResponse createSagStaticRouteWithOptions(const Models::CreateSagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a static route to a Smart Access Gateway (SAG) instance.
       *
       * @param request CreateSagStaticRouteRequest
       * @return CreateSagStaticRouteResponse
       */
      Models::CreateSagStaticRouteResponse createSagStaticRoute(const Models::CreateSagStaticRouteRequest &request);

      /**
       * @summary Configures a service address for a specified Smart Access Gateway device.
       *
       * @param request CreateServiceAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceAddressResponse
       */
      Models::CreateServiceAddressResponse createServiceAddressWithOptions(const Models::CreateServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a service address for a specified Smart Access Gateway device.
       *
       * @param request CreateServiceAddressRequest
       * @return CreateServiceAddressResponse
       */
      Models::CreateServiceAddressResponse createServiceAddress(const Models::CreateServiceAddressRequest &request);

      /**
       * @summary Creates a Smart Access Gateway (SAG) CPE or vCPE instance.
       *
       * @param request CreateSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmartAccessGatewayResponse
       */
      Models::CreateSmartAccessGatewayResponse createSmartAccessGatewayWithOptions(const Models::CreateSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Smart Access Gateway (SAG) CPE or vCPE instance.
       *
       * @param request CreateSmartAccessGatewayRequest
       * @return CreateSmartAccessGatewayResponse
       */
      Models::CreateSmartAccessGatewayResponse createSmartAccessGateway(const Models::CreateSmartAccessGatewayRequest &request);

      /**
       * @summary Creates a client account.
       *
       * @param request CreateSmartAccessGatewayClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmartAccessGatewayClientUserResponse
       */
      Models::CreateSmartAccessGatewayClientUserResponse createSmartAccessGatewayClientUserWithOptions(const Models::CreateSmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a client account.
       *
       * @param request CreateSmartAccessGatewayClientUserRequest
       * @return CreateSmartAccessGatewayClientUserResponse
       */
      Models::CreateSmartAccessGatewayClientUserResponse createSmartAccessGatewayClientUser(const Models::CreateSmartAccessGatewayClientUserRequest &request);

      /**
       * @summary Creates a Smart Access Gateway (SAG) app instance.
       *
       * @param request CreateSmartAccessGatewaySoftwareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmartAccessGatewaySoftwareResponse
       */
      Models::CreateSmartAccessGatewaySoftwareResponse createSmartAccessGatewaySoftwareWithOptions(const Models::CreateSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Smart Access Gateway (SAG) app instance.
       *
       * @param request CreateSmartAccessGatewaySoftwareRequest
       * @return CreateSmartAccessGatewaySoftwareResponse
       */
      Models::CreateSmartAccessGatewaySoftwareResponse createSmartAccessGatewaySoftware(const Models::CreateSmartAccessGatewaySoftwareRequest &request);

      /**
       * @summary Stops a flow log.
       *
       * @param request DeactiveFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLogWithOptions(const Models::DeactiveFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a flow log.
       *
       * @param request DeactiveFlowLogRequest
       * @return DeactiveFlowLogResponse
       */
      Models::DeactiveFlowLogResponse deactiveFlowLog(const Models::DeactiveFlowLogRequest &request);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @param request DeleteACLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteACLResponse
       */
      Models::DeleteACLResponse deleteACLWithOptions(const Models::DeleteACLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @param request DeleteACLRequest
       * @return DeleteACLResponse
       */
      Models::DeleteACLResponse deleteACL(const Models::DeleteACLRequest &request);

      /**
       * @summary Deletes a rule from an ACL.
       *
       * @param request DeleteACLRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteACLRuleResponse
       */
      Models::DeleteACLRuleResponse deleteACLRuleWithOptions(const Models::DeleteACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule from an ACL.
       *
       * @param request DeleteACLRuleRequest
       * @return DeleteACLRuleResponse
       */
      Models::DeleteACLRuleResponse deleteACLRule(const Models::DeleteACLRuleRequest &request);

      /**
       * @summary Deletes a Cloud Connect Network (CCN) instance.
       *
       * @description >  Make sure that the CCN instance you want to delete is not associated with a Smart Access Gateway (SAG) instance or a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DeleteCloudConnectNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudConnectNetworkResponse
       */
      Models::DeleteCloudConnectNetworkResponse deleteCloudConnectNetworkWithOptions(const Models::DeleteCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Connect Network (CCN) instance.
       *
       * @description >  Make sure that the CCN instance you want to delete is not associated with a Smart Access Gateway (SAG) instance or a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DeleteCloudConnectNetworkRequest
       * @return DeleteCloudConnectNetworkResponse
       */
      Models::DeleteCloudConnectNetworkResponse deleteCloudConnectNetwork(const Models::DeleteCloudConnectNetworkRequest &request);

      /**
       * @summary Removes a DNAT entry from a Smart Access Gateway (SAG) instance.
       *
       * @param request DeleteDnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnatEntryResponse
       */
      Models::DeleteDnatEntryResponse deleteDnatEntryWithOptions(const Models::DeleteDnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a DNAT entry from a Smart Access Gateway (SAG) instance.
       *
       * @param request DeleteDnatEntryRequest
       * @return DeleteDnatEntryResponse
       */
      Models::DeleteDnatEntryResponse deleteDnatEntry(const Models::DeleteDnatEntryRequest &request);

      /**
       * @summary Deletes a specified enterprise code by calling DeleteEnterpriseCode.
       *
       * @description Before you delete an enterprise code, note the following information:
       * - Default enterprise codes cannot be deleted.
       * If the enterprise code that you want to delete is a default enterprise code, change it to a common enterprise code first, and then delete it. For more information, see [UpdateEnterpriseCode](https://help.aliyun.com/document_detail/197700.html).
       * - Enterprise codes that are attached to Smart Access Gateway app instances cannot be deleted.
       * If the enterprise code that you want to delete is attached to Smart Access Gateway app instances, change the enterprise code of the Smart Access Gateway app instances to another enterprise code first, and then delete the current enterprise code. For more information, see [UpdateSmartAGEnterpriseCode](https://help.aliyun.com/document_detail/197701.html).
       *
       * @param request DeleteEnterpriseCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseCodeResponse
       */
      Models::DeleteEnterpriseCodeResponse deleteEnterpriseCodeWithOptions(const Models::DeleteEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified enterprise code by calling DeleteEnterpriseCode.
       *
       * @description Before you delete an enterprise code, note the following information:
       * - Default enterprise codes cannot be deleted.
       * If the enterprise code that you want to delete is a default enterprise code, change it to a common enterprise code first, and then delete it. For more information, see [UpdateEnterpriseCode](https://help.aliyun.com/document_detail/197700.html).
       * - Enterprise codes that are attached to Smart Access Gateway app instances cannot be deleted.
       * If the enterprise code that you want to delete is attached to Smart Access Gateway app instances, change the enterprise code of the Smart Access Gateway app instances to another enterprise code first, and then delete the current enterprise code. For more information, see [UpdateSmartAGEnterpriseCode](https://help.aliyun.com/document_detail/197701.html).
       *
       * @param request DeleteEnterpriseCodeRequest
       * @return DeleteEnterpriseCodeResponse
       */
      Models::DeleteEnterpriseCodeResponse deleteEnterpriseCode(const Models::DeleteEnterpriseCodeRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @param request DeleteFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLogWithOptions(const Models::DeleteFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @param request DeleteFlowLogRequest
       * @return DeleteFlowLogResponse
       */
      Models::DeleteFlowLogResponse deleteFlowLog(const Models::DeleteFlowLogRequest &request);

      /**
       * @summary Deletes a health check instance.
       *
       * @param request DeleteHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHealthCheckResponse
       */
      Models::DeleteHealthCheckResponse deleteHealthCheckWithOptions(const Models::DeleteHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a health check instance.
       *
       * @param request DeleteHealthCheckRequest
       * @return DeleteHealthCheckResponse
       */
      Models::DeleteHealthCheckResponse deleteHealthCheck(const Models::DeleteHealthCheckRequest &request);

      /**
       * @summary Deletes a probe task.
       *
       * @param request DeleteProbeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProbeTaskResponse
       */
      Models::DeleteProbeTaskResponse deleteProbeTaskWithOptions(const Models::DeleteProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a probe task.
       *
       * @param request DeleteProbeTaskRequest
       * @return DeleteProbeTaskResponse
       */
      Models::DeleteProbeTaskResponse deleteProbeTask(const Models::DeleteProbeTaskRequest &request);

      /**
       * @summary Deletes a Quality of Service (QoS) policy.
       *
       * @param request DeleteQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQosResponse
       */
      Models::DeleteQosResponse deleteQosWithOptions(const Models::DeleteQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Quality of Service (QoS) policy.
       *
       * @param request DeleteQosRequest
       * @return DeleteQosResponse
       */
      Models::DeleteQosResponse deleteQos(const Models::DeleteQosRequest &request);

      /**
       * @summary Deletes a QoS car (bandwidth throttling rule) by calling the DeleteQosCar operation.
       *
       * @param request DeleteQosCarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQosCarResponse
       */
      Models::DeleteQosCarResponse deleteQosCarWithOptions(const Models::DeleteQosCarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a QoS car (bandwidth throttling rule) by calling the DeleteQosCar operation.
       *
       * @param request DeleteQosCarRequest
       * @return DeleteQosCarResponse
       */
      Models::DeleteQosCarResponse deleteQosCar(const Models::DeleteQosCarRequest &request);

      /**
       * @summary Deletes a quintuple rule of a Quality of Service (QoS) policy.
       *
       * @param request DeleteQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQosPolicyResponse
       */
      Models::DeleteQosPolicyResponse deleteQosPolicyWithOptions(const Models::DeleteQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quintuple rule of a Quality of Service (QoS) policy.
       *
       * @param request DeleteQosPolicyRequest
       * @return DeleteQosPolicyResponse
       */
      Models::DeleteQosPolicyResponse deleteQosPolicy(const Models::DeleteQosPolicyRequest &request);

      /**
       * @summary Deletes a route advertisement policy.
       *
       * @param request DeleteRouteDistributionStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteDistributionStrategyResponse
       */
      Models::DeleteRouteDistributionStrategyResponse deleteRouteDistributionStrategyWithOptions(const Models::DeleteRouteDistributionStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route advertisement policy.
       *
       * @param request DeleteRouteDistributionStrategyRequest
       * @return DeleteRouteDistributionStrategyResponse
       */
      Models::DeleteRouteDistributionStrategyResponse deleteRouteDistributionStrategy(const Models::DeleteRouteDistributionStrategyRequest &request);

      /**
       * @summary Deletes a subinterface from a leased line port.
       *
       * @param request DeleteSagExpressConnectInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSagExpressConnectInterfaceResponse
       */
      Models::DeleteSagExpressConnectInterfaceResponse deleteSagExpressConnectInterfaceWithOptions(const Models::DeleteSagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subinterface from a leased line port.
       *
       * @param request DeleteSagExpressConnectInterfaceRequest
       * @return DeleteSagExpressConnectInterfaceResponse
       */
      Models::DeleteSagExpressConnectInterfaceResponse deleteSagExpressConnectInterface(const Models::DeleteSagExpressConnectInterfaceRequest &request);

      /**
       * @summary Deletes a static route.
       *
       * @param request DeleteSagStaticRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSagStaticRouteResponse
       */
      Models::DeleteSagStaticRouteResponse deleteSagStaticRouteWithOptions(const Models::DeleteSagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a static route.
       *
       * @param request DeleteSagStaticRouteRequest
       * @return DeleteSagStaticRouteResponse
       */
      Models::DeleteSagStaticRouteResponse deleteSagStaticRoute(const Models::DeleteSagStaticRouteRequest &request);

      /**
       * @summary Deletes a service address configured on a Smart Access Gateway device.
       *
       * @param request DeleteServiceAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceAddressResponse
       */
      Models::DeleteServiceAddressResponse deleteServiceAddressWithOptions(const Models::DeleteServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service address configured on a Smart Access Gateway device.
       *
       * @param request DeleteServiceAddressRequest
       * @return DeleteServiceAddressResponse
       */
      Models::DeleteServiceAddressResponse deleteServiceAddress(const Models::DeleteServiceAddressRequest &request);

      /**
       * @summary Deletes a Smart Access Gateway (SAG) instance.
       *
       * @description *   The SAG instance that you want to delete is an SAG CPE instance or an SAG vCPE instance.
       * *   The SAG instance that you want to delete is locked due to overdue payments.
       * *   The SAG instance that you want to delete is not associated with a Cloud Connect Network (CCN) instance or a virtual border router (VBR). If the SAG instance is associated with a CCN instance or a VBR, dissociate the SAG instance from the CCN instance or VBR first. For more information, see [Detach a network](https://help.aliyun.com/document_detail/164903.html).
       *
       * @param request DeleteSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmartAccessGatewayResponse
       */
      Models::DeleteSmartAccessGatewayResponse deleteSmartAccessGatewayWithOptions(const Models::DeleteSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Smart Access Gateway (SAG) instance.
       *
       * @description *   The SAG instance that you want to delete is an SAG CPE instance or an SAG vCPE instance.
       * *   The SAG instance that you want to delete is locked due to overdue payments.
       * *   The SAG instance that you want to delete is not associated with a Cloud Connect Network (CCN) instance or a virtual border router (VBR). If the SAG instance is associated with a CCN instance or a VBR, dissociate the SAG instance from the CCN instance or VBR first. For more information, see [Detach a network](https://help.aliyun.com/document_detail/164903.html).
       *
       * @param request DeleteSmartAccessGatewayRequest
       * @return DeleteSmartAccessGatewayResponse
       */
      Models::DeleteSmartAccessGatewayResponse deleteSmartAccessGateway(const Models::DeleteSmartAccessGatewayRequest &request);

      /**
       * @summary Deletes a client account from a Smart Access Gateway (SAG) app instance.
       *
       * @param request DeleteSmartAccessGatewayClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmartAccessGatewayClientUserResponse
       */
      Models::DeleteSmartAccessGatewayClientUserResponse deleteSmartAccessGatewayClientUserWithOptions(const Models::DeleteSmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client account from a Smart Access Gateway (SAG) app instance.
       *
       * @param request DeleteSmartAccessGatewayClientUserRequest
       * @return DeleteSmartAccessGatewayClientUserResponse
       */
      Models::DeleteSmartAccessGatewayClientUserResponse deleteSmartAccessGatewayClientUser(const Models::DeleteSmartAccessGatewayClientUserRequest &request);

      /**
       * @summary Deletes a DNS forwarding rule. This operation is applicable only to Smart Access Gateway (SAG) instances that are created using an SCG5000 or SCG5000-5G device with firmware version 3.4.2 or later.
       *
       * @param request DeleteSmartAccessGatewayDnsForwardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmartAccessGatewayDnsForwardResponse
       */
      Models::DeleteSmartAccessGatewayDnsForwardResponse deleteSmartAccessGatewayDnsForwardWithOptions(const Models::DeleteSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNS forwarding rule. This operation is applicable only to Smart Access Gateway (SAG) instances that are created using an SCG5000 or SCG5000-5G device with firmware version 3.4.2 or later.
       *
       * @param request DeleteSmartAccessGatewayDnsForwardRequest
       * @return DeleteSmartAccessGatewayDnsForwardResponse
       */
      Models::DeleteSmartAccessGatewayDnsForwardResponse deleteSmartAccessGatewayDnsForward(const Models::DeleteSmartAccessGatewayDnsForwardRequest &request);

      /**
       * @summary Removes an SNAT entry from a Smart Access Gateway (SAG) instance.
       *
       * @param request DeleteSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntryWithOptions(const Models::DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an SNAT entry from a Smart Access Gateway (SAG) instance.
       *
       * @param request DeleteSnatEntryRequest
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntry(const Models::DeleteSnatEntryRequest &request);

      /**
       * @summary Calls DescribeACLAttribute to query the information about a specified access control list (ACL) instance.
       *
       * @param request DescribeACLAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeACLAttributeResponse
       */
      Models::DescribeACLAttributeResponse describeACLAttributeWithOptions(const Models::DescribeACLAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeACLAttribute to query the information about a specified access control list (ACL) instance.
       *
       * @param request DescribeACLAttributeRequest
       * @return DescribeACLAttributeResponse
       */
      Models::DescribeACLAttributeResponse describeACLAttribute(const Models::DescribeACLAttributeRequest &request);

      /**
       * @summary Calls DescribeACLs to query the information about access control instances in a specified region.
       *
       * @param request DescribeACLsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeACLsResponse
       */
      Models::DescribeACLsResponse describeACLsWithOptions(const Models::DescribeACLsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeACLs to query the information about access control instances in a specified region.
       *
       * @param request DescribeACLsRequest
       * @return DescribeACLsResponse
       */
      Models::DescribeACLsResponse describeACLs(const Models::DescribeACLsRequest &request);

      /**
       * @summary Queries the Smart Access Gateway (SAG) instances in a region that can be associated with a Cloud Connect Network (CCN) instance.
       *
       * @param request DescribeBindableSmartAccessGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBindableSmartAccessGatewaysResponse
       */
      Models::DescribeBindableSmartAccessGatewaysResponse describeBindableSmartAccessGatewaysWithOptions(const Models::DescribeBindableSmartAccessGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Smart Access Gateway (SAG) instances in a region that can be associated with a Cloud Connect Network (CCN) instance.
       *
       * @param request DescribeBindableSmartAccessGatewaysRequest
       * @return DescribeBindableSmartAccessGatewaysResponse
       */
      Models::DescribeBindableSmartAccessGatewaysResponse describeBindableSmartAccessGateways(const Models::DescribeBindableSmartAccessGatewaysRequest &request);

      /**
       * @summary Queries the DNS settings of a Smart Access Gateway (SAG) instance associated with SAG app.
       *
       * @param request DescribeClientUserDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientUserDNSResponse
       */
      Models::DescribeClientUserDNSResponse describeClientUserDNSWithOptions(const Models::DescribeClientUserDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS settings of a Smart Access Gateway (SAG) instance associated with SAG app.
       *
       * @param request DescribeClientUserDNSRequest
       * @return DescribeClientUserDNSResponse
       */
      Models::DescribeClientUserDNSResponse describeClientUserDNS(const Models::DescribeClientUserDNSRequest &request);

      /**
       * @summary Retrieves Cloud Connect Network (CCN) instances in a specified region.
       *
       * @param request DescribeCloudConnectNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudConnectNetworksResponse
       */
      Models::DescribeCloudConnectNetworksResponse describeCloudConnectNetworksWithOptions(const Models::DescribeCloudConnectNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves Cloud Connect Network (CCN) instances in a specified region.
       *
       * @param request DescribeCloudConnectNetworksRequest
       * @return DescribeCloudConnectNetworksResponse
       */
      Models::DescribeCloudConnectNetworksResponse describeCloudConnectNetworks(const Models::DescribeCloudConnectNetworksRequest &request);

      /**
       * @summary Queries the automatic upgrade policy of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeDeviceAutoUpgradePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceAutoUpgradePolicyResponse
       */
      Models::DescribeDeviceAutoUpgradePolicyResponse describeDeviceAutoUpgradePolicyWithOptions(const Models::DescribeDeviceAutoUpgradePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic upgrade policy of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeDeviceAutoUpgradePolicyRequest
       * @return DescribeDeviceAutoUpgradePolicyResponse
       */
      Models::DescribeDeviceAutoUpgradePolicyResponse describeDeviceAutoUpgradePolicy(const Models::DescribeDeviceAutoUpgradePolicyRequest &request);

      /**
       * @summary Queries DNAT entries that are associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeDnatEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnatEntriesResponse
       */
      Models::DescribeDnatEntriesResponse describeDnatEntriesWithOptions(const Models::DescribeDnatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DNAT entries that are associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeDnatEntriesRequest
       * @return DescribeDnatEntriesResponse
       */
      Models::DescribeDnatEntriesResponse describeDnatEntries(const Models::DescribeDnatEntriesRequest &request);

      /**
       * @summary Queries the Smart Access Gateway instances associated with a flow log by calling DescribeFlowLogSags.
       *
       * @param request DescribeFlowLogSagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowLogSagsResponse
       */
      Models::DescribeFlowLogSagsResponse describeFlowLogSagsWithOptions(const Models::DescribeFlowLogSagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Smart Access Gateway instances associated with a flow log by calling DescribeFlowLogSags.
       *
       * @param request DescribeFlowLogSagsRequest
       * @return DescribeFlowLogSagsResponse
       */
      Models::DescribeFlowLogSagsResponse describeFlowLogSags(const Models::DescribeFlowLogSagsRequest &request);

      /**
       * @summary Queries flow logs in a specified region.
       *
       * @param request DescribeFlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogsWithOptions(const Models::DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flow logs in a specified region.
       *
       * @param request DescribeFlowLogsRequest
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogs(const Models::DescribeFlowLogsRequest &request);

      /**
       * @summary Queries the authorization information about a Cloud Connect Network (CCN) instance.
       *
       * @param request DescribeGrantRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantRulesResponse
       */
      Models::DescribeGrantRulesResponse describeGrantRulesWithOptions(const Models::DescribeGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information about a Cloud Connect Network (CCN) instance.
       *
       * @param request DescribeGrantRulesRequest
       * @return DescribeGrantRulesResponse
       */
      Models::DescribeGrantRulesResponse describeGrantRules(const Models::DescribeGrantRulesRequest &request);

      /**
       * @summary Queries the permission information about a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeGrantSagRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantSagRulesResponse
       */
      Models::DescribeGrantSagRulesResponse describeGrantSagRulesWithOptions(const Models::DescribeGrantSagRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permission information about a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeGrantSagRulesRequest
       * @return DescribeGrantSagRulesResponse
       */
      Models::DescribeGrantSagRulesResponse describeGrantSagRules(const Models::DescribeGrantSagRulesRequest &request);

      /**
       * @summary Queries authorization information about Smart Access Gateway (SAG) instances and cross-account virtual border routers (VBRs).
       *
       * @param request DescribeGrantSagVbrRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGrantSagVbrRulesResponse
       */
      Models::DescribeGrantSagVbrRulesResponse describeGrantSagVbrRulesWithOptions(const Models::DescribeGrantSagVbrRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries authorization information about Smart Access Gateway (SAG) instances and cross-account virtual border routers (VBRs).
       *
       * @param request DescribeGrantSagVbrRulesRequest
       * @return DescribeGrantSagVbrRulesResponse
       */
      Models::DescribeGrantSagVbrRulesResponse describeGrantSagVbrRules(const Models::DescribeGrantSagVbrRulesRequest &request);

      /**
       * @summary Queries the detailed information about a health check instance.
       *
       * @param request DescribeHealthCheckAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthCheckAttributeResponse
       */
      Models::DescribeHealthCheckAttributeResponse describeHealthCheckAttributeWithOptions(const Models::DescribeHealthCheckAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a health check instance.
       *
       * @param request DescribeHealthCheckAttributeRequest
       * @return DescribeHealthCheckAttributeResponse
       */
      Models::DescribeHealthCheckAttributeResponse describeHealthCheckAttribute(const Models::DescribeHealthCheckAttributeRequest &request);

      /**
       * @summary Queries health checks that are associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeHealthChecksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthChecksResponse
       */
      Models::DescribeHealthChecksResponse describeHealthChecksWithOptions(const Models::DescribeHealthChecksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries health checks that are associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeHealthChecksRequest
       * @return DescribeHealthChecksResponse
       */
      Models::DescribeHealthChecksResponse describeHealthChecks(const Models::DescribeHealthChecksRequest &request);

      /**
       * @summary Queries traffic throttling rules of a quality of service (QoS) policy.
       *
       * @param request DescribeQosCarsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQosCarsResponse
       */
      Models::DescribeQosCarsResponse describeQosCarsWithOptions(const Models::DescribeQosCarsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic throttling rules of a quality of service (QoS) policy.
       *
       * @param request DescribeQosCarsRequest
       * @return DescribeQosCarsResponse
       */
      Models::DescribeQosCarsResponse describeQosCars(const Models::DescribeQosCarsRequest &request);

      /**
       * @summary You can call the DescribeQosPolicies operation to query the quintuple rule configurations for a Quality of Service (QoS) policy.
       *
       * @param request DescribeQosPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQosPoliciesResponse
       */
      Models::DescribeQosPoliciesResponse describeQosPoliciesWithOptions(const Models::DescribeQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeQosPolicies operation to query the quintuple rule configurations for a Quality of Service (QoS) policy.
       *
       * @param request DescribeQosPoliciesRequest
       * @return DescribeQosPoliciesResponse
       */
      Models::DescribeQosPoliciesResponse describeQosPolicies(const Models::DescribeQosPoliciesRequest &request);

      /**
       * @summary Queries quality of service (QoS) policies in a specified region.
       *
       * @param request DescribeQosesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQosesResponse
       */
      Models::DescribeQosesResponse describeQosesWithOptions(const Models::DescribeQosesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality of service (QoS) policies in a specified region.
       *
       * @param request DescribeQosesRequest
       * @return DescribeQosesResponse
       */
      Models::DescribeQosesResponse describeQoses(const Models::DescribeQosesRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries route advertisement policies.
       *
       * @param request DescribeRouteDistributionStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRouteDistributionStrategiesResponse
       */
      Models::DescribeRouteDistributionStrategiesResponse describeRouteDistributionStrategiesWithOptions(const Models::DescribeRouteDistributionStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route advertisement policies.
       *
       * @param request DescribeRouteDistributionStrategiesRequest
       * @return DescribeRouteDistributionStrategiesResponse
       */
      Models::DescribeRouteDistributionStrategiesResponse describeRouteDistributionStrategies(const Models::DescribeRouteDistributionStrategiesRequest &request);

      /**
       * @summary Queries information about a Smart Access Gateway device by calling the DescribeSAGDeviceInfo operation.
       *
       * @param request DescribeSAGDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSAGDeviceInfoResponse
       */
      Models::DescribeSAGDeviceInfoResponse describeSAGDeviceInfoWithOptions(const Models::DescribeSAGDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Smart Access Gateway device by calling the DescribeSAGDeviceInfo operation.
       *
       * @param request DescribeSAGDeviceInfoRequest
       * @return DescribeSAGDeviceInfoResponse
       */
      Models::DescribeSAGDeviceInfoResponse describeSAGDeviceInfo(const Models::DescribeSAGDeviceInfoRequest &request);

      /**
       * @summary Queries the DNS settings that are currently in effect on a Smart Access Gateway device.
       *
       * @param request DescribeSagCurrentDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagCurrentDnsResponse
       */
      Models::DescribeSagCurrentDnsResponse describeSagCurrentDnsWithOptions(const Models::DescribeSagCurrentDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS settings that are currently in effect on a Smart Access Gateway device.
       *
       * @param request DescribeSagCurrentDnsRequest
       * @return DescribeSagCurrentDnsResponse
       */
      Models::DescribeSagCurrentDnsResponse describeSagCurrentDns(const Models::DescribeSagCurrentDnsRequest &request);

      /**
       * @summary Queries the top 10 Smart Access Gateway instances with the highest packet loss rate in a specified region.
       *
       * @param request DescribeSagDropTopNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagDropTopNResponse
       */
      Models::DescribeSagDropTopNResponse describeSagDropTopNWithOptions(const Models::DescribeSagDropTopNRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 Smart Access Gateway instances with the highest packet loss rate in a specified region.
       *
       * @param request DescribeSagDropTopNRequest
       * @return DescribeSagDropTopNResponse
       */
      Models::DescribeSagDropTopNResponse describeSagDropTopN(const Models::DescribeSagDropTopNRequest &request);

      /**
       * @summary Queries the sub-interfaces of a dedicated connection port by calling DescribeSagExpressConnectInterfaceList.
       *
       * @param request DescribeSagExpressConnectInterfaceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagExpressConnectInterfaceListResponse
       */
      Models::DescribeSagExpressConnectInterfaceListResponse describeSagExpressConnectInterfaceListWithOptions(const Models::DescribeSagExpressConnectInterfaceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sub-interfaces of a dedicated connection port by calling DescribeSagExpressConnectInterfaceList.
       *
       * @param request DescribeSagExpressConnectInterfaceListRequest
       * @return DescribeSagExpressConnectInterfaceListResponse
       */
      Models::DescribeSagExpressConnectInterfaceListResponse describeSagExpressConnectInterfaceList(const Models::DescribeSagExpressConnectInterfaceListRequest &request);

      /**
       * @summary Queries the global routing protocol.
       *
       * @param request DescribeSagGlobalRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagGlobalRouteProtocolResponse
       */
      Models::DescribeSagGlobalRouteProtocolResponse describeSagGlobalRouteProtocolWithOptions(const Models::DescribeSagGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global routing protocol.
       *
       * @param request DescribeSagGlobalRouteProtocolRequest
       * @return DescribeSagGlobalRouteProtocolResponse
       */
      Models::DescribeSagGlobalRouteProtocolResponse describeSagGlobalRouteProtocol(const Models::DescribeSagGlobalRouteProtocolRequest &request);

      /**
       * @summary Queries the high-availability configuration of a Smart Access Gateway instance by calling DescribeSagHa.
       *
       * @param request DescribeSagHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagHaResponse
       */
      Models::DescribeSagHaResponse describeSagHaWithOptions(const Models::DescribeSagHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high-availability configuration of a Smart Access Gateway instance by calling DescribeSagHa.
       *
       * @param request DescribeSagHaRequest
       * @return DescribeSagHaResponse
       */
      Models::DescribeSagHaResponse describeSagHa(const Models::DescribeSagHaRequest &request);

      /**
       * @summary Queries the LAN port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagLanListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagLanListResponse
       */
      Models::DescribeSagLanListResponse describeSagLanListWithOptions(const Models::DescribeSagLanListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the LAN port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagLanListRequest
       * @return DescribeSagLanListResponse
       */
      Models::DescribeSagLanListResponse describeSagLanList(const Models::DescribeSagLanListRequest &request);

      /**
       * @summary Queries the management port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagManagementPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagManagementPortResponse
       */
      Models::DescribeSagManagementPortResponse describeSagManagementPortWithOptions(const Models::DescribeSagManagementPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the management port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagManagementPortRequest
       * @return DescribeSagManagementPortResponse
       */
      Models::DescribeSagManagementPortResponse describeSagManagementPort(const Models::DescribeSagManagementPortRequest &request);

      /**
       * @summary Queries online client statistics for Smart Access Gateway (SAG) app instances.
       *
       * @param request DescribeSagOnlineClientStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagOnlineClientStatisticsResponse
       */
      Models::DescribeSagOnlineClientStatisticsResponse describeSagOnlineClientStatisticsWithOptions(const Models::DescribeSagOnlineClientStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries online client statistics for Smart Access Gateway (SAG) app instances.
       *
       * @param request DescribeSagOnlineClientStatisticsRequest
       * @return DescribeSagOnlineClientStatisticsResponse
       */
      Models::DescribeSagOnlineClientStatisticsResponse describeSagOnlineClientStatistics(const Models::DescribeSagOnlineClientStatisticsRequest &request);

      /**
       * @summary Queries the information about a physical port.
       *
       * @param request DescribeSagPortListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagPortListResponse
       */
      Models::DescribeSagPortListResponse describeSagPortListWithOptions(const Models::DescribeSagPortListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a physical port.
       *
       * @param request DescribeSagPortListRequest
       * @return DescribeSagPortListResponse
       */
      Models::DescribeSagPortListResponse describeSagPortList(const Models::DescribeSagPortListRequest &request);

      /**
       * @summary Invokes DescribeSagPortRouteProtocolList to obtain the list of ports on which routing protocols are enabled.
       *
       * @param request DescribeSagPortRouteProtocolListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagPortRouteProtocolListResponse
       */
      Models::DescribeSagPortRouteProtocolListResponse describeSagPortRouteProtocolListWithOptions(const Models::DescribeSagPortRouteProtocolListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeSagPortRouteProtocolList to obtain the list of ports on which routing protocols are enabled.
       *
       * @param request DescribeSagPortRouteProtocolListRequest
       * @return DescribeSagPortRouteProtocolListResponse
       */
      Models::DescribeSagPortRouteProtocolListResponse describeSagPortRouteProtocolList(const Models::DescribeSagPortRouteProtocolListRequest &request);

      /**
       * @summary Queries remote logon information about a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagRemoteAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagRemoteAccessResponse
       */
      Models::DescribeSagRemoteAccessResponse describeSagRemoteAccessWithOptions(const Models::DescribeSagRemoteAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries remote logon information about a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagRemoteAccessRequest
       * @return DescribeSagRemoteAccessResponse
       */
      Models::DescribeSagRemoteAccessResponse describeSagRemoteAccess(const Models::DescribeSagRemoteAccessRequest &request);

      /**
       * @summary Queries the routes of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagRouteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagRouteListResponse
       */
      Models::DescribeSagRouteListResponse describeSagRouteListWithOptions(const Models::DescribeSagRouteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagRouteListRequest
       * @return DescribeSagRouteListResponse
       */
      Models::DescribeSagRouteListResponse describeSagRouteList(const Models::DescribeSagRouteListRequest &request);

      /**
       * @summary Queries the configurations of Border Gateway Protocol (BGP) dynamic routing.
       *
       * @param request DescribeSagRouteProtocolBgpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagRouteProtocolBgpResponse
       */
      Models::DescribeSagRouteProtocolBgpResponse describeSagRouteProtocolBgpWithOptions(const Models::DescribeSagRouteProtocolBgpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of Border Gateway Protocol (BGP) dynamic routing.
       *
       * @param request DescribeSagRouteProtocolBgpRequest
       * @return DescribeSagRouteProtocolBgpResponse
       */
      Models::DescribeSagRouteProtocolBgpResponse describeSagRouteProtocolBgp(const Models::DescribeSagRouteProtocolBgpRequest &request);

      /**
       * @summary Queries the OSPF settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagRouteProtocolOspfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagRouteProtocolOspfResponse
       */
      Models::DescribeSagRouteProtocolOspfResponse describeSagRouteProtocolOspfWithOptions(const Models::DescribeSagRouteProtocolOspfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the OSPF settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagRouteProtocolOspfRequest
       * @return DescribeSagRouteProtocolOspfResponse
       */
      Models::DescribeSagRouteProtocolOspfResponse describeSagRouteProtocolOspf(const Models::DescribeSagRouteProtocolOspfRequest &request);

      /**
       * @summary Queries the static routes of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagStaticRouteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagStaticRouteListResponse
       */
      Models::DescribeSagStaticRouteListResponse describeSagStaticRouteListWithOptions(const Models::DescribeSagStaticRouteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the static routes of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagStaticRouteListRequest
       * @return DescribeSagStaticRouteListResponse
       */
      Models::DescribeSagStaticRouteListResponse describeSagStaticRouteList(const Models::DescribeSagStaticRouteListRequest &request);

      /**
       * @summary Queries the top 10 Smart Access Gateway (SAG) instances that have the highest data transfer rates in a specific region.
       *
       * @param request DescribeSagTrafficTopNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagTrafficTopNResponse
       */
      Models::DescribeSagTrafficTopNResponse describeSagTrafficTopNWithOptions(const Models::DescribeSagTrafficTopNRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 Smart Access Gateway (SAG) instances that have the highest data transfer rates in a specific region.
       *
       * @param request DescribeSagTrafficTopNRequest
       * @return DescribeSagTrafficTopNResponse
       */
      Models::DescribeSagTrafficTopNResponse describeSagTrafficTopN(const Models::DescribeSagTrafficTopNRequest &request);

      /**
       * @summary Queries the DNS servers used by a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagUserDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagUserDnsResponse
       */
      Models::DescribeSagUserDnsResponse describeSagUserDnsWithOptions(const Models::DescribeSagUserDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS servers used by a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagUserDnsRequest
       * @return DescribeSagUserDnsResponse
       */
      Models::DescribeSagUserDnsResponse describeSagUserDns(const Models::DescribeSagUserDnsRequest &request);

      /**
       * @summary Queries whether a specified virtual border router (VBR) is associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagVbrRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagVbrRelationsResponse
       */
      Models::DescribeSagVbrRelationsResponse describeSagVbrRelationsWithOptions(const Models::DescribeSagVbrRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a specified virtual border router (VBR) is associated with a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagVbrRelationsRequest
       * @return DescribeSagVbrRelationsResponse
       */
      Models::DescribeSagVbrRelationsResponse describeSagVbrRelations(const Models::DescribeSagVbrRelationsRequest &request);

      /**
       * @summary Queries the information about the 4G subscriber identity module (SIM) card used by the WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWan4GRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagWan4GResponse
       */
      Models::DescribeSagWan4GResponse describeSagWan4GWithOptions(const Models::DescribeSagWan4GRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the 4G subscriber identity module (SIM) card used by the WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWan4GRequest
       * @return DescribeSagWan4GResponse
       */
      Models::DescribeSagWan4GResponse describeSagWan4G(const Models::DescribeSagWan4GRequest &request);

      /**
       * @summary Queries the WAN port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWanListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagWanListResponse
       */
      Models::DescribeSagWanListResponse describeSagWanListWithOptions(const Models::DescribeSagWanListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the WAN port settings of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWanListRequest
       * @return DescribeSagWanListResponse
       */
      Models::DescribeSagWanListResponse describeSagWanList(const Models::DescribeSagWanListRequest &request);

      /**
       * @summary Queries the SNAT settings of the WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWanSnatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagWanSnatResponse
       */
      Models::DescribeSagWanSnatResponse describeSagWanSnatWithOptions(const Models::DescribeSagWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SNAT settings of the WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSagWanSnatRequest
       * @return DescribeSagWanSnatResponse
       */
      Models::DescribeSagWanSnatResponse describeSagWanSnat(const Models::DescribeSagWanSnatRequest &request);

      /**
       * @summary Queries the Wi-Fi settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagWifiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSagWifiResponse
       */
      Models::DescribeSagWifiResponse describeSagWifiWithOptions(const Models::DescribeSagWifiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Wi-Fi settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSagWifiRequest
       * @return DescribeSagWifiResponse
       */
      Models::DescribeSagWifiResponse describeSagWifi(const Models::DescribeSagWifiRequest &request);

      /**
       * @summary Calls the DescribeSmartAccessGatewayAttribute operation to query the information about a specified Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSmartAccessGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartAccessGatewayAttributeResponse
       */
      Models::DescribeSmartAccessGatewayAttributeResponse describeSmartAccessGatewayAttributeWithOptions(const Models::DescribeSmartAccessGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeSmartAccessGatewayAttribute operation to query the information about a specified Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSmartAccessGatewayAttributeRequest
       * @return DescribeSmartAccessGatewayAttributeResponse
       */
      Models::DescribeSmartAccessGatewayAttributeResponse describeSmartAccessGatewayAttribute(const Models::DescribeSmartAccessGatewayAttributeRequest &request);

      /**
       * @summary Invokes DescribeSmartAccessGatewayClientUsers to query the client account information of a Smart Access Gateway app instance.
       *
       * @param request DescribeSmartAccessGatewayClientUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartAccessGatewayClientUsersResponse
       */
      Models::DescribeSmartAccessGatewayClientUsersResponse describeSmartAccessGatewayClientUsersWithOptions(const Models::DescribeSmartAccessGatewayClientUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeSmartAccessGatewayClientUsers to query the client account information of a Smart Access Gateway app instance.
       *
       * @param request DescribeSmartAccessGatewayClientUsersRequest
       * @return DescribeSmartAccessGatewayClientUsersResponse
       */
      Models::DescribeSmartAccessGatewayClientUsersResponse describeSmartAccessGatewayClientUsers(const Models::DescribeSmartAccessGatewayClientUsersRequest &request);

      /**
       * @summary Queries the high availability (HA) settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSmartAccessGatewayHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartAccessGatewayHaResponse
       */
      Models::DescribeSmartAccessGatewayHaResponse describeSmartAccessGatewayHaWithOptions(const Models::DescribeSmartAccessGatewayHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high availability (HA) settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request DescribeSmartAccessGatewayHaRequest
       * @return DescribeSmartAccessGatewayHaResponse
       */
      Models::DescribeSmartAccessGatewayHaResponse describeSmartAccessGatewayHa(const Models::DescribeSmartAccessGatewayHaRequest &request);

      /**
       * @summary Queries the version of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSmartAccessGatewayVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartAccessGatewayVersionsResponse
       */
      Models::DescribeSmartAccessGatewayVersionsResponse describeSmartAccessGatewayVersionsWithOptions(const Models::DescribeSmartAccessGatewayVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of a Smart Access Gateway (SAG) device.
       *
       * @param request DescribeSmartAccessGatewayVersionsRequest
       * @return DescribeSmartAccessGatewayVersionsResponse
       */
      Models::DescribeSmartAccessGatewayVersionsResponse describeSmartAccessGatewayVersions(const Models::DescribeSmartAccessGatewayVersionsRequest &request);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances.
       *
       * @param request DescribeSmartAccessGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartAccessGatewaysResponse
       */
      Models::DescribeSmartAccessGatewaysResponse describeSmartAccessGatewaysWithOptions(const Models::DescribeSmartAccessGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances.
       *
       * @param request DescribeSmartAccessGatewaysRequest
       * @return DescribeSmartAccessGatewaysResponse
       */
      Models::DescribeSmartAccessGatewaysResponse describeSmartAccessGateways(const Models::DescribeSmartAccessGatewaysRequest &request);

      /**
       * @summary Queries SNAT entries bound to a Smart Access Gateway instance by calling DescribeSnatEntries.
       *
       * @param request DescribeSnatEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatEntriesResponse
       */
      Models::DescribeSnatEntriesResponse describeSnatEntriesWithOptions(const Models::DescribeSnatEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SNAT entries bound to a Smart Access Gateway instance by calling DescribeSnatEntries.
       *
       * @param request DescribeSnatEntriesRequest
       * @return DescribeSnatEntriesResponse
       */
      Models::DescribeSnatEntriesResponse describeSnatEntries(const Models::DescribeSnatEntriesRequest &request);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances that are not associated with a flow log in a specific region.
       *
       * @param request DescribeUnbindFlowLogSagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnbindFlowLogSagsResponse
       */
      Models::DescribeUnbindFlowLogSagsResponse describeUnbindFlowLogSagsWithOptions(const Models::DescribeUnbindFlowLogSagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances that are not associated with a flow log in a specific region.
       *
       * @param request DescribeUnbindFlowLogSagsRequest
       * @return DescribeUnbindFlowLogSagsResponse
       */
      Models::DescribeUnbindFlowLogSagsResponse describeUnbindFlowLogSags(const Models::DescribeUnbindFlowLogSagsRequest &request);

      /**
       * @summary Queries the amount of data transfer generated by each client account of a Smart Access Gateway (SAG) app instance.
       *
       * @param request DescribeUserFlowStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserFlowStatisticsResponse
       */
      Models::DescribeUserFlowStatisticsResponse describeUserFlowStatisticsWithOptions(const Models::DescribeUserFlowStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the amount of data transfer generated by each client account of a Smart Access Gateway (SAG) app instance.
       *
       * @param request DescribeUserFlowStatisticsRequest
       * @return DescribeUserFlowStatisticsResponse
       */
      Models::DescribeUserFlowStatisticsResponse describeUserFlowStatistics(const Models::DescribeUserFlowStatisticsRequest &request);

      /**
       * @summary Queries a specified user\\"s online connection statistics from a Smart Access Gateway (SAG) app instance.
       *
       * @param request DescribeUserOnlineClientStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserOnlineClientStatisticsResponse
       */
      Models::DescribeUserOnlineClientStatisticsResponse describeUserOnlineClientStatisticsWithOptions(const Models::DescribeUserOnlineClientStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified user\\"s online connection statistics from a Smart Access Gateway (SAG) app instance.
       *
       * @param request DescribeUserOnlineClientStatisticsRequest
       * @return DescribeUserOnlineClientStatisticsResponse
       */
      Models::DescribeUserOnlineClientStatisticsResponse describeUserOnlineClientStatistics(const Models::DescribeUserOnlineClientStatisticsRequest &request);

      /**
       * @summary Queries the connection information about a client based on the ID of the Smart Access Gateway (SAG) APP instance and username of the client account.
       *
       * @param request DescribeUserOnlineClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserOnlineClientsResponse
       */
      Models::DescribeUserOnlineClientsResponse describeUserOnlineClientsWithOptions(const Models::DescribeUserOnlineClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection information about a client based on the ID of the Smart Access Gateway (SAG) APP instance and username of the client account.
       *
       * @param request DescribeUserOnlineClientsRequest
       * @return DescribeUserOnlineClientsResponse
       */
      Models::DescribeUserOnlineClientsResponse describeUserOnlineClients(const Models::DescribeUserOnlineClientsRequest &request);

      /**
       * @summary Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
       *
       * @description Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DetachCcnInstanceFromCenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCcnInstanceFromCenResponse
       */
      Models::DetachCcnInstanceFromCenResponse detachCcnInstanceFromCenWithOptions(const Models::DetachCcnInstanceFromCenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
       *
       * @description Unbinds a Cloud Connect Network (CCN) from a Cloud Enterprise Network (CEN) instance.
       *
       * @param request DetachCcnInstanceFromCenRequest
       * @return DetachCcnInstanceFromCenResponse
       */
      Models::DetachCcnInstanceFromCenResponse detachCcnInstanceFromCen(const Models::DetachCcnInstanceFromCenRequest &request);

      /**
       * @summary Enables diagnostics for Smart Access Gateway (SAG) devices
       *
       * @param request DiagnoseSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiagnoseSmartAccessGatewayResponse
       */
      Models::DiagnoseSmartAccessGatewayResponse diagnoseSmartAccessGatewayWithOptions(const Models::DiagnoseSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables diagnostics for Smart Access Gateway (SAG) devices
       *
       * @param request DiagnoseSmartAccessGatewayRequest
       * @return DiagnoseSmartAccessGatewayResponse
       */
      Models::DiagnoseSmartAccessGatewayResponse diagnoseSmartAccessGateway(const Models::DiagnoseSmartAccessGatewayRequest &request);

      /**
       * @summary Disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request DisableSmartAGDpiMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSmartAGDpiMonitorResponse
       */
      Models::DisableSmartAGDpiMonitorResponse disableSmartAGDpiMonitorWithOptions(const Models::DisableSmartAGDpiMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request DisableSmartAGDpiMonitorRequest
       * @return DisableSmartAGDpiMonitorResponse
       */
      Models::DisableSmartAGDpiMonitorResponse disableSmartAGDpiMonitor(const Models::DisableSmartAGDpiMonitorRequest &request);

      /**
       * @summary Disables a user of a Smart Access Gateway instance.
       *
       * @param request DisableSmartAccessGatewayUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSmartAccessGatewayUserResponse
       */
      Models::DisableSmartAccessGatewayUserResponse disableSmartAccessGatewayUserWithOptions(const Models::DisableSmartAccessGatewayUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a user of a Smart Access Gateway instance.
       *
       * @param request DisableSmartAccessGatewayUserRequest
       * @return DisableSmartAccessGatewayUserResponse
       */
      Models::DisableSmartAccessGatewayUserResponse disableSmartAccessGatewayUser(const Models::DisableSmartAccessGatewayUserRequest &request);

      /**
       * @summary Disassociates an access control list (ACL) from a Smart Access Gateway (SAG) instance.
       *
       * @param request DisassociateACLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateACLResponse
       */
      Models::DisassociateACLResponse disassociateACLWithOptions(const Models::DisassociateACLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an access control list (ACL) from a Smart Access Gateway (SAG) instance.
       *
       * @param request DisassociateACLRequest
       * @return DisassociateACLResponse
       */
      Models::DisassociateACLResponse disassociateACL(const Models::DisassociateACLRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a flow log.
       *
       * @param request DisassociateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateFlowLogResponse
       */
      Models::DisassociateFlowLogResponse disassociateFlowLogWithOptions(const Models::DisassociateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a flow log.
       *
       * @param request DisassociateFlowLogRequest
       * @return DisassociateFlowLogResponse
       */
      Models::DisassociateFlowLogResponse disassociateFlowLog(const Models::DisassociateFlowLogRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a Quality of Service (QoS) policy.
       *
       * @param request DisassociateQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateQosResponse
       */
      Models::DisassociateQosResponse disassociateQosWithOptions(const Models::DisassociateQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a Quality of Service (QoS) policy.
       *
       * @param request DisassociateQosRequest
       * @return DisassociateQosResponse
       */
      Models::DisassociateQosResponse disassociateQos(const Models::DisassociateQosRequest &request);

      /**
       * @summary Queries the diagnosis report of a Smart Access Gateway (SAG) device by calling the DiscribeSmartAccessGatewayDiagnosisReport operation.
       *
       * @param request DiscribeSmartAccessGatewayDiagnosisReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiscribeSmartAccessGatewayDiagnosisReportResponse
       */
      Models::DiscribeSmartAccessGatewayDiagnosisReportResponse discribeSmartAccessGatewayDiagnosisReportWithOptions(const Models::DiscribeSmartAccessGatewayDiagnosisReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnosis report of a Smart Access Gateway (SAG) device by calling the DiscribeSmartAccessGatewayDiagnosisReport operation.
       *
       * @param request DiscribeSmartAccessGatewayDiagnosisReportRequest
       * @return DiscribeSmartAccessGatewayDiagnosisReportResponse
       */
      Models::DiscribeSmartAccessGatewayDiagnosisReportResponse discribeSmartAccessGatewayDiagnosisReport(const Models::DiscribeSmartAccessGatewayDiagnosisReportRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a bandwidth plan for application acceleration.
       *
       * @description When you call **DissociateSmartAGFromApplicationBandwidthPackage**, you can set the **SmartAGId** parameter to specify an SAG instance, or set the **SmartAGIdList** to specify multiple SAG instances.
       *
       * @param request DissociateSmartAGFromApplicationBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateSmartAGFromApplicationBandwidthPackageResponse
       */
      Models::DissociateSmartAGFromApplicationBandwidthPackageResponse dissociateSmartAGFromApplicationBandwidthPackageWithOptions(const Models::DissociateSmartAGFromApplicationBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a bandwidth plan for application acceleration.
       *
       * @description When you call **DissociateSmartAGFromApplicationBandwidthPackage**, you can set the **SmartAGId** parameter to specify an SAG instance, or set the **SmartAGIdList** to specify multiple SAG instances.
       *
       * @param request DissociateSmartAGFromApplicationBandwidthPackageRequest
       * @return DissociateSmartAGFromApplicationBandwidthPackageResponse
       */
      Models::DissociateSmartAGFromApplicationBandwidthPackageResponse dissociateSmartAGFromApplicationBandwidthPackage(const Models::DissociateSmartAGFromApplicationBandwidthPackageRequest &request);

      /**
       * @summary Downgrades the bandwidth of a Smart Access Gateway (SAG) instance.
       *
       * @param request DowngradeSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradeSmartAccessGatewayResponse
       */
      Models::DowngradeSmartAccessGatewayResponse downgradeSmartAccessGatewayWithOptions(const Models::DowngradeSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downgrades the bandwidth of a Smart Access Gateway (SAG) instance.
       *
       * @param request DowngradeSmartAccessGatewayRequest
       * @return DowngradeSmartAccessGatewayResponse
       */
      Models::DowngradeSmartAccessGatewayResponse downgradeSmartAccessGateway(const Models::DowngradeSmartAccessGatewayRequest &request);

      /**
       * @summary Decreases the quota of client accounts that can be connected to a Smart Access Gateway (SAG) app instance.
       *
       * @param request DowngradeSmartAccessGatewaySoftwareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradeSmartAccessGatewaySoftwareResponse
       */
      Models::DowngradeSmartAccessGatewaySoftwareResponse downgradeSmartAccessGatewaySoftwareWithOptions(const Models::DowngradeSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decreases the quota of client accounts that can be connected to a Smart Access Gateway (SAG) app instance.
       *
       * @param request DowngradeSmartAccessGatewaySoftwareRequest
       * @return DowngradeSmartAccessGatewaySoftwareResponse
       */
      Models::DowngradeSmartAccessGatewaySoftwareResponse downgradeSmartAccessGatewaySoftware(const Models::DowngradeSmartAccessGatewaySoftwareRequest &request);

      /**
       * @summary Enables monitoring based on the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @description *   The DPI feature is enabled for the SAG instance. For more information, see [UpdateSmartAGDpiAttribute](https://help.aliyun.com/document_detail/196146.html).
       * *   Log Service is activated. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       *
       * @param request EnableSmartAGDpiMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSmartAGDpiMonitorResponse
       */
      Models::EnableSmartAGDpiMonitorResponse enableSmartAGDpiMonitorWithOptions(const Models::EnableSmartAGDpiMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables monitoring based on the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @description *   The DPI feature is enabled for the SAG instance. For more information, see [UpdateSmartAGDpiAttribute](https://help.aliyun.com/document_detail/196146.html).
       * *   Log Service is activated. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       *
       * @param request EnableSmartAGDpiMonitorRequest
       * @return EnableSmartAGDpiMonitorResponse
       */
      Models::EnableSmartAGDpiMonitorResponse enableSmartAGDpiMonitor(const Models::EnableSmartAGDpiMonitorRequest &request);

      /**
       * @summary Activates a client account of a Smart Access Gateway (SAG) app instance.
       *
       * @param request EnableSmartAccessGatewayUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSmartAccessGatewayUserResponse
       */
      Models::EnableSmartAccessGatewayUserResponse enableSmartAccessGatewayUserWithOptions(const Models::EnableSmartAccessGatewayUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a client account of a Smart Access Gateway (SAG) app instance.
       *
       * @param request EnableSmartAccessGatewayUserRequest
       * @return EnableSmartAccessGatewayUserResponse
       */
      Models::EnableSmartAccessGatewayUserResponse enableSmartAccessGatewayUser(const Models::EnableSmartAccessGatewayUserRequest &request);

      /**
       * @summary Queries the configuration errors of the deep packet inspection (DPI) feature in an access control list (ACL).
       *
       * @description *   An application-aware ACL is created. For more information, see [AddACLRule](https://help.aliyun.com/document_detail/114012.html).
       * *   The application-aware ACL is applied to a Smart Access Gateway (SAG) instance. For more information, see [AssociateACL](https://help.aliyun.com/document_detail/114009.html).
       *
       * @param request GetAclAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAclAttributeResponse
       */
      Models::GetAclAttributeResponse getAclAttributeWithOptions(const Models::GetAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration errors of the deep packet inspection (DPI) feature in an access control list (ACL).
       *
       * @description *   An application-aware ACL is created. For more information, see [AddACLRule](https://help.aliyun.com/document_detail/114012.html).
       * *   The application-aware ACL is applied to a Smart Access Gateway (SAG) instance. For more information, see [AssociateACL](https://help.aliyun.com/document_detail/114009.html).
       *
       * @param request GetAclAttributeRequest
       * @return GetAclAttributeResponse
       */
      Models::GetAclAttributeResponse getAclAttribute(const Models::GetAclAttributeRequest &request);

      /**
       * @summary Queries the status of the advanced monitoring feature for a specified Smart Access Gateway instance.
       *
       * @param request GetAdvancedMonitorStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvancedMonitorStateResponse
       */
      Models::GetAdvancedMonitorStateResponse getAdvancedMonitorStateWithOptions(const Models::GetAdvancedMonitorStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the advanced monitoring feature for a specified Smart Access Gateway instance.
       *
       * @param request GetAdvancedMonitorStateRequest
       * @return GetAdvancedMonitorStateResponse
       */
      Models::GetAdvancedMonitorStateResponse getAdvancedMonitorState(const Models::GetAdvancedMonitorStateRequest &request);

      /**
       * @summary Queries the number of Cloud Connect Network (CCN) instances that can be created within the current account in a region.
       *
       * @param request GetCloudConnectNetworkUseLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudConnectNetworkUseLimitResponse
       */
      Models::GetCloudConnectNetworkUseLimitResponse getCloudConnectNetworkUseLimitWithOptions(const Models::GetCloudConnectNetworkUseLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Cloud Connect Network (CCN) instances that can be created within the current account in a region.
       *
       * @param request GetCloudConnectNetworkUseLimitRequest
       * @return GetCloudConnectNetworkUseLimitResponse
       */
      Models::GetCloudConnectNetworkUseLimitResponse getCloudConnectNetworkUseLimit(const Models::GetCloudConnectNetworkUseLimitRequest &request);

      /**
       * @summary Queries the attributes of a quality of service (QoS) policy.
       *
       * @param request GetQosAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQosAttributeResponse
       */
      Models::GetQosAttributeResponse getQosAttributeWithOptions(const Models::GetQosAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a quality of service (QoS) policy.
       *
       * @param request GetQosAttributeRequest
       * @return GetQosAttributeResponse
       */
      Models::GetQosAttributeResponse getQosAttribute(const Models::GetQosAttributeRequest &request);

      /**
       * @summary Queries the settings of the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request GetSmartAGDpiAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartAGDpiAttributeResponse
       */
      Models::GetSmartAGDpiAttributeResponse getSmartAGDpiAttributeWithOptions(const Models::GetSmartAGDpiAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request GetSmartAGDpiAttributeRequest
       * @return GetSmartAGDpiAttributeResponse
       */
      Models::GetSmartAGDpiAttributeResponse getSmartAGDpiAttribute(const Models::GetSmartAGDpiAttributeRequest &request);

      /**
       * @summary Queries the number of Smart Access Gateway (SAG) instances that you can purchase.
       *
       * @param request GetSmartAccessGatewayUseLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartAccessGatewayUseLimitResponse
       */
      Models::GetSmartAccessGatewayUseLimitResponse getSmartAccessGatewayUseLimitWithOptions(const Models::GetSmartAccessGatewayUseLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Smart Access Gateway (SAG) instances that you can purchase.
       *
       * @param request GetSmartAccessGatewayUseLimitRequest
       * @return GetSmartAccessGatewayUseLimitResponse
       */
      Models::GetSmartAccessGatewayUseLimitResponse getSmartAccessGatewayUseLimit(const Models::GetSmartAccessGatewayUseLimitRequest &request);

      /**
       * @summary Authorizes a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
       *
       * @param request GrantInstanceToCbnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToCbnResponse
       */
      Models::GrantInstanceToCbnResponse grantInstanceToCbnWithOptions(const Models::GrantInstanceToCbnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
       *
       * @param request GrantInstanceToCbnRequest
       * @return GrantInstanceToCbnResponse
       */
      Models::GrantInstanceToCbnResponse grantInstanceToCbn(const Models::GrantInstanceToCbnRequest &request);

      /**
       * @summary Authorizes a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
       *
       * @param request GrantSagInstanceToCcnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantSagInstanceToCcnResponse
       */
      Models::GrantSagInstanceToCcnResponse grantSagInstanceToCcnWithOptions(const Models::GrantSagInstanceToCcnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance that belongs to another Alibaba Cloud account.
       *
       * @param request GrantSagInstanceToCcnRequest
       * @return GrantSagInstanceToCcnResponse
       */
      Models::GrantSagInstanceToCcnResponse grantSagInstanceToCcn(const Models::GrantSagInstanceToCcnRequest &request);

      /**
       * @summary Acquires permissions from a virtual border router (VBR) under another account.
       *
       * @param request GrantSagInstanceToVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantSagInstanceToVbrResponse
       */
      Models::GrantSagInstanceToVbrResponse grantSagInstanceToVbrWithOptions(const Models::GrantSagInstanceToVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Acquires permissions from a virtual border router (VBR) under another account.
       *
       * @param request GrantSagInstanceToVbrRequest
       * @return GrantSagInstanceToVbrResponse
       */
      Models::GrantSagInstanceToVbrResponse grantSagInstanceToVbr(const Models::GrantSagInstanceToVbrRequest &request);

      /**
       * @summary Closes a connection based on the Smart Access Gateway (SAG) app instance ID and username.
       *
       * @param request KickOutClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KickOutClientsResponse
       */
      Models::KickOutClientsResponse kickOutClientsWithOptions(const Models::KickOutClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a connection based on the Smart Access Gateway (SAG) app instance ID and username.
       *
       * @param request KickOutClientsRequest
       * @return KickOutClientsResponse
       */
      Models::KickOutClientsResponse kickOutClients(const Models::KickOutClientsRequest &request);

      /**
       * @summary Queries network qualities of endpoints for Smart Access Gateway (SAG) instances.
       *
       * @param request ListAccessPointNetworkQualitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessPointNetworkQualitiesResponse
       */
      Models::ListAccessPointNetworkQualitiesResponse listAccessPointNetworkQualitiesWithOptions(const Models::ListAccessPointNetworkQualitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network qualities of endpoints for Smart Access Gateway (SAG) instances.
       *
       * @param request ListAccessPointNetworkQualitiesRequest
       * @return ListAccessPointNetworkQualitiesResponse
       */
      Models::ListAccessPointNetworkQualitiesResponse listAccessPointNetworkQualities(const Models::ListAccessPointNetworkQualitiesRequest &request);

      /**
       * @summary Queries access points in a region.
       *
       * @description An access point connects Smart Access Gateway (SAG) instances to Cloud Connect Network (CCN). Some regions may contain more than one access point. After an SAG instance is associated with a CCN instance, the system selects the nearest access point to establish connections to Alibaba Cloud. This topic describes how to query access points in a specific region. For more information about the areas that support CCN, see [Introduction to CCN](https://help.aliyun.com/document_detail/93667.html).
       *
       * @param request ListAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPointsWithOptions(const Models::ListAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access points in a region.
       *
       * @description An access point connects Smart Access Gateway (SAG) instances to Cloud Connect Network (CCN). Some regions may contain more than one access point. After an SAG instance is associated with a CCN instance, the system selects the nearest access point to establish connections to Alibaba Cloud. This topic describes how to query access points in a specific region. For more information about the areas that support CCN, see [Introduction to CCN](https://help.aliyun.com/document_detail/93667.html).
       *
       * @param request ListAccessPointsRequest
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPoints(const Models::ListAccessPointsRequest &request);

      /**
       * @summary Lists the configured service addresses for a specified Smart Access Gateway device.
       *
       * @param request ListAvailableServiceAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableServiceAddressResponse
       */
      Models::ListAvailableServiceAddressResponse listAvailableServiceAddressWithOptions(const Models::ListAvailableServiceAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the configured service addresses for a specified Smart Access Gateway device.
       *
       * @param request ListAvailableServiceAddressRequest
       * @return ListAvailableServiceAddressResponse
       */
      Models::ListAvailableServiceAddressResponse listAvailableServiceAddress(const Models::ListAvailableServiceAddressRequest &request);

      /**
       * @summary Queries for deep packet inspection (DPI) configuration errors.
       *
       * @description If you configure an application-based Resource Access Management instance or a Quality of Service (QoS) policy instance and associate it with a Smart Access Gateway instance, you can call this operation to check whether the access control rules or QoS quintuple rules are successfully applied to the target Smart Access Gateway instance. If a configuration fails to apply, this operation returns information about the error.
       *
       * @param request ListDpiConfigErrorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDpiConfigErrorResponse
       */
      Models::ListDpiConfigErrorResponse listDpiConfigErrorWithOptions(const Models::ListDpiConfigErrorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for deep packet inspection (DPI) configuration errors.
       *
       * @description If you configure an application-based Resource Access Management instance or a Quality of Service (QoS) policy instance and associate it with a Smart Access Gateway instance, you can call this operation to check whether the access control rules or QoS quintuple rules are successfully applied to the target Smart Access Gateway instance. If a configuration fails to apply, this operation returns information about the error.
       *
       * @param request ListDpiConfigErrorRequest
       * @return ListDpiConfigErrorResponse
       */
      Models::ListDpiConfigErrorResponse listDpiConfigError(const Models::ListDpiConfigErrorRequest &request);

      /**
       * @summary Lists the application groups that Smart Access Gateway supports in a specified region.
       *
       * @param request ListDpiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDpiGroupsResponse
       */
      Models::ListDpiGroupsResponse listDpiGroupsWithOptions(const Models::ListDpiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the application groups that Smart Access Gateway supports in a specified region.
       *
       * @param request ListDpiGroupsRequest
       * @return ListDpiGroupsResponse
       */
      Models::ListDpiGroupsResponse listDpiGroups(const Models::ListDpiGroupsRequest &request);

      /**
       * @summary Queries all applications, specific applications, or specific application groups supported by Smart Access Gateway (SAG) in a specified region.
       *
       * @description This operation lets you:
       * - Query all applications supported by SAG in a specified region.
       * - Query a specific application by its ID in a specified region.
       * - Query a specific application by its name in a specified region.
       * - Query all applications in a specific application group by the group ID in a specified region.
       * If this is the first time you call this operation, we recommend that you query all applications supported by SAG in a region. This helps you obtain the information required for subsequent queries of specific applications.
       *
       * @param request ListDpiSignaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDpiSignaturesResponse
       */
      Models::ListDpiSignaturesResponse listDpiSignaturesWithOptions(const Models::ListDpiSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all applications, specific applications, or specific application groups supported by Smart Access Gateway (SAG) in a specified region.
       *
       * @description This operation lets you:
       * - Query all applications supported by SAG in a specified region.
       * - Query a specific application by its ID in a specified region.
       * - Query a specific application by its name in a specified region.
       * - Query all applications in a specific application group by the group ID in a specified region.
       * If this is the first time you call this operation, we recommend that you query all applications supported by SAG in a region. This helps you obtain the information required for subsequent queries of specific applications.
       *
       * @param request ListDpiSignaturesRequest
       * @return ListDpiSignaturesResponse
       */
      Models::ListDpiSignaturesResponse listDpiSignatures(const Models::ListDpiSignaturesRequest &request);

      /**
       * @summary Queries enterprise codes.
       *
       * @param request ListEnterpriseCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseCodeResponse
       */
      Models::ListEnterpriseCodeResponse listEnterpriseCodeWithOptions(const Models::ListEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries enterprise codes.
       *
       * @param request ListEnterpriseCodeRequest
       * @return ListEnterpriseCodeResponse
       */
      Models::ListEnterpriseCodeResponse listEnterpriseCode(const Models::ListEnterpriseCodeRequest &request);

      /**
       * @summary Queries a probe task.
       *
       * @param request ListProbeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProbeTaskResponse
       */
      Models::ListProbeTaskResponse listProbeTaskWithOptions(const Models::ListProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a probe task.
       *
       * @param request ListProbeTaskRequest
       * @return ListProbeTaskResponse
       */
      Models::ListProbeTaskResponse listProbeTask(const Models::ListProbeTaskRequest &request);

      /**
       * @summary Queries features that are not supported by a specified Smart Access Gateway (SAG) device.
       *
       * @param request ListSmartAGApiUnsupportedFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartAGApiUnsupportedFeatureResponse
       */
      Models::ListSmartAGApiUnsupportedFeatureResponse listSmartAGApiUnsupportedFeatureWithOptions(const Models::ListSmartAGApiUnsupportedFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries features that are not supported by a specified Smart Access Gateway (SAG) device.
       *
       * @param request ListSmartAGApiUnsupportedFeatureRequest
       * @return ListSmartAGApiUnsupportedFeatureResponse
       */
      Models::ListSmartAGApiUnsupportedFeatureResponse listSmartAGApiUnsupportedFeature(const Models::ListSmartAGApiUnsupportedFeatureRequest &request);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances associated with specific access points in a region.
       *
       * @param request ListSmartAGByAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartAGByAccessPointResponse
       */
      Models::ListSmartAGByAccessPointResponse listSmartAGByAccessPointWithOptions(const Models::ListSmartAGByAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Smart Access Gateway (SAG) instances associated with specific access points in a region.
       *
       * @param request ListSmartAGByAccessPointRequest
       * @return ListSmartAGByAccessPointResponse
       */
      Models::ListSmartAGByAccessPointResponse listSmartAGByAccessPoint(const Models::ListSmartAGByAccessPointRequest &request);

      /**
       * @summary Modifies the name of an access control list (ACL).
       *
       * @param request ModifyACLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyACLResponse
       */
      Models::ModifyACLResponse modifyACLWithOptions(const Models::ModifyACLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an access control list (ACL).
       *
       * @param request ModifyACLRequest
       * @return ModifyACLResponse
       */
      Models::ModifyACLResponse modifyACL(const Models::ModifyACLRequest &request);

      /**
       * @summary The ModifyACLRule operation modifies an access control rule.
       *
       * @param request ModifyACLRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyACLRuleResponse
       */
      Models::ModifyACLRuleResponse modifyACLRuleWithOptions(const Models::ModifyACLRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ModifyACLRule operation modifies an access control rule.
       *
       * @param request ModifyACLRuleRequest
       * @return ModifyACLRuleResponse
       */
      Models::ModifyACLRuleResponse modifyACLRule(const Models::ModifyACLRuleRequest &request);

      /**
       * @summary Modifies the DNS configuration of a Smart Access Gateway (SAG) application instance.
       *
       * @param request ModifyClientUserDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClientUserDNSResponse
       */
      Models::ModifyClientUserDNSResponse modifyClientUserDNSWithOptions(const Models::ModifyClientUserDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DNS configuration of a Smart Access Gateway (SAG) application instance.
       *
       * @param request ModifyClientUserDNSRequest
       * @return ModifyClientUserDNSResponse
       */
      Models::ModifyClientUserDNSResponse modifyClientUserDNS(const Models::ModifyClientUserDNSRequest &request);

      /**
       * @summary Updates the configurations of a Cloud Connect Network (CCN) instance.
       *
       * @param request ModifyCloudConnectNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudConnectNetworkResponse
       */
      Models::ModifyCloudConnectNetworkResponse modifyCloudConnectNetworkWithOptions(const Models::ModifyCloudConnectNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a Cloud Connect Network (CCN) instance.
       *
       * @param request ModifyCloudConnectNetworkRequest
       * @return ModifyCloudConnectNetworkResponse
       */
      Models::ModifyCloudConnectNetworkResponse modifyCloudConnectNetwork(const Models::ModifyCloudConnectNetworkRequest &request);

      /**
       * @summary Modifies the automatic upgrade policy of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifyDeviceAutoUpgradePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceAutoUpgradePolicyResponse
       */
      Models::ModifyDeviceAutoUpgradePolicyResponse modifyDeviceAutoUpgradePolicyWithOptions(const Models::ModifyDeviceAutoUpgradePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic upgrade policy of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifyDeviceAutoUpgradePolicyRequest
       * @return ModifyDeviceAutoUpgradePolicyResponse
       */
      Models::ModifyDeviceAutoUpgradePolicyResponse modifyDeviceAutoUpgradePolicy(const Models::ModifyDeviceAutoUpgradePolicyRequest &request);

      /**
       * @summary Updates the settings of a flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of a flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies a health check.
       *
       * @param request ModifyHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHealthCheckResponse
       */
      Models::ModifyHealthCheckResponse modifyHealthCheckWithOptions(const Models::ModifyHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a health check.
       *
       * @param request ModifyHealthCheckRequest
       * @return ModifyHealthCheckResponse
       */
      Models::ModifyHealthCheckResponse modifyHealthCheck(const Models::ModifyHealthCheckRequest &request);

      /**
       * @summary Modifies a quality of service (QoS) policy, such as its name.
       *
       * @param request ModifyQosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQosResponse
       */
      Models::ModifyQosResponse modifyQosWithOptions(const Models::ModifyQosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quality of service (QoS) policy, such as its name.
       *
       * @param request ModifyQosRequest
       * @return ModifyQosResponse
       */
      Models::ModifyQosResponse modifyQos(const Models::ModifyQosRequest &request);

      /**
       * @summary Modifies a traffic throttling rule in a quality of service (QoS) policy.
       *
       * @param request ModifyQosCarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQosCarResponse
       */
      Models::ModifyQosCarResponse modifyQosCarWithOptions(const Models::ModifyQosCarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a traffic throttling rule in a quality of service (QoS) policy.
       *
       * @param request ModifyQosCarRequest
       * @return ModifyQosCarResponse
       */
      Models::ModifyQosCarResponse modifyQosCar(const Models::ModifyQosCarRequest &request);

      /**
       * @summary You can call the ModifyQosPolicy operation to modify the stream classification rules in a Quality of Service (QoS) policy.
       *
       * @param request ModifyQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQosPolicyResponse
       */
      Models::ModifyQosPolicyResponse modifyQosPolicyWithOptions(const Models::ModifyQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyQosPolicy operation to modify the stream classification rules in a Quality of Service (QoS) policy.
       *
       * @param request ModifyQosPolicyRequest
       * @return ModifyQosPolicyResponse
       */
      Models::ModifyQosPolicyResponse modifyQosPolicy(const Models::ModifyQosPolicyRequest &request);

      /**
       * @summary Modifies the route advertisement policy for a CIDR block.
       *
       * @param request ModifyRouteDistributionStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRouteDistributionStrategyResponse
       */
      Models::ModifyRouteDistributionStrategyResponse modifyRouteDistributionStrategyWithOptions(const Models::ModifyRouteDistributionStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the route advertisement policy for a CIDR block.
       *
       * @param request ModifyRouteDistributionStrategyRequest
       * @return ModifyRouteDistributionStrategyResponse
       */
      Models::ModifyRouteDistributionStrategyResponse modifyRouteDistributionStrategy(const Models::ModifyRouteDistributionStrategyRequest &request);

      /**
       * @summary Modifies the password that is used to log on to a smart access gateway (SAG) device.
       *
       * @param request ModifySAGAdminPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySAGAdminPasswordResponse
       */
      Models::ModifySAGAdminPasswordResponse modifySAGAdminPasswordWithOptions(const Models::ModifySAGAdminPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password that is used to log on to a smart access gateway (SAG) device.
       *
       * @param request ModifySAGAdminPasswordRequest
       * @return ModifySAGAdminPasswordResponse
       */
      Models::ModifySAGAdminPasswordResponse modifySAGAdminPassword(const Models::ModifySAGAdminPasswordRequest &request);

      /**
       * @summary Modifies the sub-interface information of an Express Connect circuit port.
       *
       * @param request ModifySagExpressConnectInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagExpressConnectInterfaceResponse
       */
      Models::ModifySagExpressConnectInterfaceResponse modifySagExpressConnectInterfaceWithOptions(const Models::ModifySagExpressConnectInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the sub-interface information of an Express Connect circuit port.
       *
       * @param request ModifySagExpressConnectInterfaceRequest
       * @return ModifySagExpressConnectInterfaceResponse
       */
      Models::ModifySagExpressConnectInterfaceResponse modifySagExpressConnectInterface(const Models::ModifySagExpressConnectInterfaceRequest &request);

      /**
       * @summary Changes the routing protocol of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagGlobalRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagGlobalRouteProtocolResponse
       */
      Models::ModifySagGlobalRouteProtocolResponse modifySagGlobalRouteProtocolWithOptions(const Models::ModifySagGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the routing protocol of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagGlobalRouteProtocolRequest
       * @return ModifySagGlobalRouteProtocolResponse
       */
      Models::ModifySagGlobalRouteProtocolResponse modifySagGlobalRouteProtocol(const Models::ModifySagGlobalRouteProtocolRequest &request);

      /**
       * @summary Modifies the high availability (HA) settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagHaResponse
       */
      Models::ModifySagHaResponse modifySagHaWithOptions(const Models::ModifySagHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the high availability (HA) settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagHaRequest
       * @return ModifySagHaResponse
       */
      Models::ModifySagHaResponse modifySagHa(const Models::ModifySagHaRequest &request);

      /**
       * @summary Modifies the LAN port configurations of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagLanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagLanResponse
       */
      Models::ModifySagLanResponse modifySagLanWithOptions(const Models::ModifySagLanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the LAN port configurations of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagLanRequest
       * @return ModifySagLanResponse
       */
      Models::ModifySagLanResponse modifySagLan(const Models::ModifySagLanRequest &request);

      /**
       * @summary Updates the settings of a Smart Access Gateway (SAG) device port.
       *
       * @param request ModifySagManagementPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagManagementPortResponse
       */
      Models::ModifySagManagementPortResponse modifySagManagementPortWithOptions(const Models::ModifySagManagementPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of a Smart Access Gateway (SAG) device port.
       *
       * @param request ModifySagManagementPortRequest
       * @return ModifySagManagementPortResponse
       */
      Models::ModifySagManagementPortResponse modifySagManagementPort(const Models::ModifySagManagementPortRequest &request);

      /**
       * @summary Modifies the role of a port.
       *
       * @description >  If you modify the role of a port, the current role configurations of the port are deleted.
       *
       * @param request ModifySagPortRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagPortRoleResponse
       */
      Models::ModifySagPortRoleResponse modifySagPortRoleWithOptions(const Models::ModifySagPortRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the role of a port.
       *
       * @description >  If you modify the role of a port, the current role configurations of the port are deleted.
       *
       * @param request ModifySagPortRoleRequest
       * @return ModifySagPortRoleResponse
       */
      Models::ModifySagPortRoleResponse modifySagPortRole(const Models::ModifySagPortRoleRequest &request);

      /**
       * @summary Modifies the routing protocol of a port.
       *
       * @param request ModifySagPortRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagPortRouteProtocolResponse
       */
      Models::ModifySagPortRouteProtocolResponse modifySagPortRouteProtocolWithOptions(const Models::ModifySagPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the routing protocol of a port.
       *
       * @param request ModifySagPortRouteProtocolRequest
       * @return ModifySagPortRouteProtocolResponse
       */
      Models::ModifySagPortRouteProtocolResponse modifySagPortRouteProtocol(const Models::ModifySagPortRouteProtocolRequest &request);

      /**
       * @summary Modifies the remote access IP address of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagRemoteAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagRemoteAccessResponse
       */
      Models::ModifySagRemoteAccessResponse modifySagRemoteAccessWithOptions(const Models::ModifySagRemoteAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remote access IP address of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagRemoteAccessRequest
       * @return ModifySagRemoteAccessResponse
       */
      Models::ModifySagRemoteAccessResponse modifySagRemoteAccess(const Models::ModifySagRemoteAccessRequest &request);

      /**
       * @summary Modifies the Border Gateway Protocol (BGP) settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagRouteProtocolBgpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagRouteProtocolBgpResponse
       */
      Models::ModifySagRouteProtocolBgpResponse modifySagRouteProtocolBgpWithOptions(const Models::ModifySagRouteProtocolBgpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Border Gateway Protocol (BGP) settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagRouteProtocolBgpRequest
       * @return ModifySagRouteProtocolBgpResponse
       */
      Models::ModifySagRouteProtocolBgpResponse modifySagRouteProtocolBgp(const Models::ModifySagRouteProtocolBgpRequest &request);

      /**
       * @summary Modifies the Open Shortest Path First (OSPF) settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagRouteProtocolOspfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagRouteProtocolOspfResponse
       */
      Models::ModifySagRouteProtocolOspfResponse modifySagRouteProtocolOspfWithOptions(const Models::ModifySagRouteProtocolOspfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Open Shortest Path First (OSPF) settings of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagRouteProtocolOspfRequest
       * @return ModifySagRouteProtocolOspfResponse
       */
      Models::ModifySagRouteProtocolOspfResponse modifySagRouteProtocolOspf(const Models::ModifySagRouteProtocolOspfRequest &request);

      /**
       * @summary Modifies a static route.
       *
       * @param request ModifySagStaticRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagStaticRouteResponse
       */
      Models::ModifySagStaticRouteResponse modifySagStaticRouteWithOptions(const Models::ModifySagStaticRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a static route.
       *
       * @param request ModifySagStaticRouteRequest
       * @return ModifySagStaticRouteResponse
       */
      Models::ModifySagStaticRouteResponse modifySagStaticRoute(const Models::ModifySagStaticRouteRequest &request);

      /**
       * @summary Modifies the DNS servers used by a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagUserDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagUserDnsResponse
       */
      Models::ModifySagUserDnsResponse modifySagUserDnsWithOptions(const Models::ModifySagUserDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DNS servers used by a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySagUserDnsRequest
       * @return ModifySagUserDnsResponse
       */
      Models::ModifySagUserDnsResponse modifySagUserDns(const Models::ModifySagUserDnsRequest &request);

      /**
       * @summary Modifies the WAN port configurations of a Smart Access Gateway (SAG) device.
       *
       * @description We recommend that you understand the functionality of a WAN port before you modify its settings. For more information, see [Configure a WAN port](https://help.aliyun.com/document_detail/163955.html).
       *
       * @param request ModifySagWanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagWanResponse
       */
      Models::ModifySagWanResponse modifySagWanWithOptions(const Models::ModifySagWanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the WAN port configurations of a Smart Access Gateway (SAG) device.
       *
       * @description We recommend that you understand the functionality of a WAN port before you modify its settings. For more information, see [Configure a WAN port](https://help.aliyun.com/document_detail/163955.html).
       *
       * @param request ModifySagWanRequest
       * @return ModifySagWanResponse
       */
      Models::ModifySagWanResponse modifySagWan(const Models::ModifySagWanRequest &request);

      /**
       * @summary Modifies the SNAT configurations of a WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagWanSnatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagWanSnatResponse
       */
      Models::ModifySagWanSnatResponse modifySagWanSnatWithOptions(const Models::ModifySagWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SNAT configurations of a WAN port of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagWanSnatRequest
       * @return ModifySagWanSnatResponse
       */
      Models::ModifySagWanSnatResponse modifySagWanSnat(const Models::ModifySagWanSnatRequest &request);

      /**
       * @summary Modifies the Wi-Fi settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagWifiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySagWifiResponse
       */
      Models::ModifySagWifiResponse modifySagWifiWithOptions(const Models::ModifySagWifiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Wi-Fi settings of a Smart Access Gateway (SAG) device.
       *
       * @param request ModifySagWifiRequest
       * @return ModifySagWifiResponse
       */
      Models::ModifySagWifiResponse modifySagWifi(const Models::ModifySagWifiRequest &request);

      /**
       * @summary Modifies the configuration of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmartAccessGatewayResponse
       */
      Models::ModifySmartAccessGatewayResponse modifySmartAccessGatewayWithOptions(const Models::ModifySmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySmartAccessGatewayRequest
       * @return ModifySmartAccessGatewayResponse
       */
      Models::ModifySmartAccessGatewayResponse modifySmartAccessGateway(const Models::ModifySmartAccessGatewayRequest &request);

      /**
       * @summary Modifies the maximum bandwidth and email address of a client account on a Smart Access Gateway (SAG) app instance.
       *
       * @param request ModifySmartAccessGatewayClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmartAccessGatewayClientUserResponse
       */
      Models::ModifySmartAccessGatewayClientUserResponse modifySmartAccessGatewayClientUserWithOptions(const Models::ModifySmartAccessGatewayClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth and email address of a client account on a Smart Access Gateway (SAG) app instance.
       *
       * @param request ModifySmartAccessGatewayClientUserRequest
       * @return ModifySmartAccessGatewayClientUserResponse
       */
      Models::ModifySmartAccessGatewayClientUserResponse modifySmartAccessGatewayClientUser(const Models::ModifySmartAccessGatewayClientUserRequest &request);

      /**
       * @summary Modifies the parameters of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySmartAccessGatewayUpBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmartAccessGatewayUpBandwidthResponse
       */
      Models::ModifySmartAccessGatewayUpBandwidthResponse modifySmartAccessGatewayUpBandwidthWithOptions(const Models::ModifySmartAccessGatewayUpBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a Smart Access Gateway (SAG) instance.
       *
       * @param request ModifySmartAccessGatewayUpBandwidthRequest
       * @return ModifySmartAccessGatewayUpBandwidthResponse
       */
      Models::ModifySmartAccessGatewayUpBandwidthResponse modifySmartAccessGatewayUpBandwidth(const Models::ModifySmartAccessGatewayUpBandwidthRequest &request);

      /**
       * @summary Moves Smart Access Gateway (SAG) resources from one resource group to another.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves Smart Access Gateway (SAG) resources from one resource group to another.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Probes the network connectivity between a Smart Access Gateway (SAG) instance and an access point.
       *
       * @description You can call this operation to test the connectivity between an SAG instance and a specified access point.
       * *   If the SAG instance can connect to the access point, the ID of the request is returned in this operation.
       * *   If the SAG instance cannot connect to the access point, the ID of the request and corresponding error messages are returned in this operation.
       *
       * @param request ProbeAccessPointNetworkQualityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProbeAccessPointNetworkQualityResponse
       */
      Models::ProbeAccessPointNetworkQualityResponse probeAccessPointNetworkQualityWithOptions(const Models::ProbeAccessPointNetworkQualityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Probes the network connectivity between a Smart Access Gateway (SAG) instance and an access point.
       *
       * @description You can call this operation to test the connectivity between an SAG instance and a specified access point.
       * *   If the SAG instance can connect to the access point, the ID of the request is returned in this operation.
       * *   If the SAG instance cannot connect to the access point, the ID of the request and corresponding error messages are returned in this operation.
       *
       * @param request ProbeAccessPointNetworkQualityRequest
       * @return ProbeAccessPointNetworkQualityResponse
       */
      Models::ProbeAccessPointNetworkQualityResponse probeAccessPointNetworkQuality(const Models::ProbeAccessPointNetworkQualityRequest &request);

      /**
       * @summary Restarts a Smart Access Gateway (SAG) instance.
       *
       * @param request RebootSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootSmartAccessGatewayResponse
       */
      Models::RebootSmartAccessGatewayResponse rebootSmartAccessGatewayWithOptions(const Models::RebootSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a Smart Access Gateway (SAG) instance.
       *
       * @param request RebootSmartAccessGatewayRequest
       * @return RebootSmartAccessGatewayResponse
       */
      Models::RebootSmartAccessGatewayResponse rebootSmartAccessGateway(const Models::RebootSmartAccessGatewayRequest &request);

      /**
       * @summary Resets the password that a client account uses to log on to the Smart Access Gateway (SAG) app.
       *
       * @param request ResetSmartAccessGatewayClientUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSmartAccessGatewayClientUserPasswordResponse
       */
      Models::ResetSmartAccessGatewayClientUserPasswordResponse resetSmartAccessGatewayClientUserPasswordWithOptions(const Models::ResetSmartAccessGatewayClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password that a client account uses to log on to the Smart Access Gateway (SAG) app.
       *
       * @param request ResetSmartAccessGatewayClientUserPasswordRequest
       * @return ResetSmartAccessGatewayClientUserPasswordResponse
       */
      Models::ResetSmartAccessGatewayClientUserPasswordResponse resetSmartAccessGatewayClientUserPassword(const Models::ResetSmartAccessGatewayClientUserPasswordRequest &request);

      /**
       * @summary Disallows a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeInstanceFromCbnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromCbnResponse
       */
      Models::RevokeInstanceFromCbnResponse revokeInstanceFromCbnWithOptions(const Models::RevokeInstanceFromCbnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disallows a Cloud Enterprise Network (CEN) instance to communicate with a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeInstanceFromCbnRequest
       * @return RevokeInstanceFromCbnResponse
       */
      Models::RevokeInstanceFromCbnResponse revokeInstanceFromCbn(const Models::RevokeInstanceFromCbnRequest &request);

      /**
       * @summary Revokes the permissions that a Smart Access Gateway (SAG) instance has on virtual border routers (VBRs) in a different Alibaba Cloud account.
       *
       * @param request RevokeInstanceFromVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbrWithOptions(const Models::RevokeInstanceFromVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions that a Smart Access Gateway (SAG) instance has on virtual border routers (VBRs) in a different Alibaba Cloud account.
       *
       * @param request RevokeInstanceFromVbrRequest
       * @return RevokeInstanceFromVbrResponse
       */
      Models::RevokeInstanceFromVbrResponse revokeInstanceFromVbr(const Models::RevokeInstanceFromVbrRequest &request);

      /**
       * @summary Disallows a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeSagInstanceFromCcnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSagInstanceFromCcnResponse
       */
      Models::RevokeSagInstanceFromCcnResponse revokeSagInstanceFromCcnWithOptions(const Models::RevokeSagInstanceFromCcnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disallows a Smart Access Gateway (SAG) instance to communicate with a Cloud Connect Network (CCN) instance.
       *
       * @param request RevokeSagInstanceFromCcnRequest
       * @return RevokeSagInstanceFromCcnResponse
       */
      Models::RevokeSagInstanceFromCcnResponse revokeSagInstanceFromCcn(const Models::RevokeSagInstanceFromCcnRequest &request);

      /**
       * @summary Enables roaming for the SAG app to allow clients to access Alibaba Cloud across regions.
       *
       * @description Before you call `RoamClientUser`, we recommend that you read and understand the features and usage notes of roaming. For more information, see [Configure roaming on clients](https://help.aliyun.com/document_detail/177220.html).
       *
       * @param request RoamClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RoamClientUserResponse
       */
      Models::RoamClientUserResponse roamClientUserWithOptions(const Models::RoamClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables roaming for the SAG app to allow clients to access Alibaba Cloud across regions.
       *
       * @description Before you call `RoamClientUser`, we recommend that you read and understand the features and usage notes of roaming. For more information, see [Configure roaming on clients](https://help.aliyun.com/document_detail/177220.html).
       *
       * @param request RoamClientUserRequest
       * @return RoamClientUserResponse
       */
      Models::RoamClientUserResponse roamClientUser(const Models::RoamClientUserRequest &request);

      /**
       * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request SetAdvancedMonitorStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAdvancedMonitorStateResponse
       */
      Models::SetAdvancedMonitorStateResponse setAdvancedMonitorStateWithOptions(const Models::SetAdvancedMonitorStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request SetAdvancedMonitorStateRequest
       * @return SetAdvancedMonitorStateResponse
       */
      Models::SetAdvancedMonitorStateResponse setAdvancedMonitorState(const Models::SetAdvancedMonitorStateRequest &request);

      /**
       * @summary Synchronizes the settings of a Smart Access Gateway (SAG) device to the associated SAG instance.
       *
       * @description **SynchronizeSmartAGWebConfig** is an asynchronous operation. After you send a request, the request ID is returned but the operation is still being performed in the system background. You can call the [DescribeSAGDeviceInfo](https://help.aliyun.com/document_detail/164279.html) operation to query the status of an SAG device.
       * *   If an SAG device is in the **Synchronizing** state, the settings of the SAG device are being synchronized to the associated SAG instance.
       * *   If an SAG device is in the **Synchronized** state, the settings of the SAG device are synchronized to the associated SAG instance.
       *
       * @param request SynchronizeSmartAGWebConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SynchronizeSmartAGWebConfigResponse
       */
      Models::SynchronizeSmartAGWebConfigResponse synchronizeSmartAGWebConfigWithOptions(const Models::SynchronizeSmartAGWebConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the settings of a Smart Access Gateway (SAG) device to the associated SAG instance.
       *
       * @description **SynchronizeSmartAGWebConfig** is an asynchronous operation. After you send a request, the request ID is returned but the operation is still being performed in the system background. You can call the [DescribeSAGDeviceInfo](https://help.aliyun.com/document_detail/164279.html) operation to query the status of an SAG device.
       * *   If an SAG device is in the **Synchronizing** state, the settings of the SAG device are being synchronized to the associated SAG instance.
       * *   If an SAG device is in the **Synchronized** state, the settings of the SAG device are synchronized to the associated SAG instance.
       *
       * @param request SynchronizeSmartAGWebConfigRequest
       * @return SynchronizeSmartAGWebConfigResponse
       */
      Models::SynchronizeSmartAGWebConfigResponse synchronizeSmartAGWebConfig(const Models::SynchronizeSmartAGWebConfigRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) device from the associated SAG instance.
       *
       * @param request UnbindSerialNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSerialNumberResponse
       */
      Models::UnbindSerialNumberResponse unbindSerialNumberWithOptions(const Models::UnbindSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) device from the associated SAG instance.
       *
       * @param request UnbindSerialNumberRequest
       * @return UnbindSerialNumberResponse
       */
      Models::UnbindSerialNumberResponse unbindSerialNumber(const Models::UnbindSerialNumberRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from the associated Cloud Connect Network (CCN) instance.
       *
       * @param request UnbindSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSmartAccessGatewayResponse
       */
      Models::UnbindSmartAccessGatewayResponse unbindSmartAccessGatewayWithOptions(const Models::UnbindSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from the associated Cloud Connect Network (CCN) instance.
       *
       * @param request UnbindSmartAccessGatewayRequest
       * @return UnbindSmartAccessGatewayResponse
       */
      Models::UnbindSmartAccessGatewayResponse unbindSmartAccessGateway(const Models::UnbindSmartAccessGatewayRequest &request);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a virtual border router (VBR).
       *
       * @param request UnbindVbrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindVbrResponse
       */
      Models::UnbindVbrResponse unbindVbrWithOptions(const Models::UnbindVbrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Smart Access Gateway (SAG) instance from a virtual border router (VBR).
       *
       * @param request UnbindVbrRequest
       * @return UnbindVbrResponse
       */
      Models::UnbindVbrResponse unbindVbr(const Models::UnbindVbrRequest &request);

      /**
       * @summary Unlocks a Smart Access Gateway (SAG) instance.
       *
       * @param request UnlockSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockSmartAccessGatewayResponse
       */
      Models::UnlockSmartAccessGatewayResponse unlockSmartAccessGatewayWithOptions(const Models::UnlockSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a Smart Access Gateway (SAG) instance.
       *
       * @param request UnlockSmartAccessGatewayRequest
       * @return UnlockSmartAccessGatewayResponse
       */
      Models::UnlockSmartAccessGatewayResponse unlockSmartAccessGateway(const Models::UnlockSmartAccessGatewayRequest &request);

      /**
       * @summary Modifies the attributes of a specified enterprise code.
       *
       * @param request UpdateEnterpriseCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnterpriseCodeResponse
       */
      Models::UpdateEnterpriseCodeResponse updateEnterpriseCodeWithOptions(const Models::UpdateEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a specified enterprise code.
       *
       * @param request UpdateEnterpriseCodeRequest
       * @return UpdateEnterpriseCodeResponse
       */
      Models::UpdateEnterpriseCodeResponse updateEnterpriseCode(const Models::UpdateEnterpriseCodeRequest &request);

      /**
       * @summary Modifies a probe task.
       *
       * @param request UpdateProbeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProbeTaskResponse
       */
      Models::UpdateProbeTaskResponse updateProbeTaskWithOptions(const Models::UpdateProbeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a probe task.
       *
       * @param request UpdateProbeTaskRequest
       * @return UpdateProbeTaskResponse
       */
      Models::UpdateProbeTaskResponse updateProbeTask(const Models::UpdateProbeTaskRequest &request);

      /**
       * @summary Switches the access point of a Smart Access Gateway (SAG) instance.
       *
       * @description ## Prerequisites
       * Before you call this operation, you can call the [ListAccessPoints](https://help.aliyun.com/document_detail/183876.html) operation to view the switchable access points of the SAG instance.
       *
       * @param request UpdateSmartAGAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAGAccessPointResponse
       */
      Models::UpdateSmartAGAccessPointResponse updateSmartAGAccessPointWithOptions(const Models::UpdateSmartAGAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the access point of a Smart Access Gateway (SAG) instance.
       *
       * @description ## Prerequisites
       * Before you call this operation, you can call the [ListAccessPoints](https://help.aliyun.com/document_detail/183876.html) operation to view the switchable access points of the SAG instance.
       *
       * @param request UpdateSmartAGAccessPointRequest
       * @return UpdateSmartAGAccessPointResponse
       */
      Models::UpdateSmartAGAccessPointResponse updateSmartAGAccessPoint(const Models::UpdateSmartAGAccessPointRequest &request);

      /**
       * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request UpdateSmartAGDpiAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAGDpiAttributeResponse
       */
      Models::UpdateSmartAGDpiAttributeResponse updateSmartAGDpiAttributeWithOptions(const Models::UpdateSmartAGDpiAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the deep packet inspection (DPI) feature for a Smart Access Gateway (SAG) instance.
       *
       * @param request UpdateSmartAGDpiAttributeRequest
       * @return UpdateSmartAGDpiAttributeResponse
       */
      Models::UpdateSmartAGDpiAttributeResponse updateSmartAGDpiAttribute(const Models::UpdateSmartAGDpiAttributeRequest &request);

      /**
       * @summary Associates a Smart Access Gateway (SAG) APP instance with another enterprise code.
       *
       * @param request UpdateSmartAGEnterpriseCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAGEnterpriseCodeResponse
       */
      Models::UpdateSmartAGEnterpriseCodeResponse updateSmartAGEnterpriseCodeWithOptions(const Models::UpdateSmartAGEnterpriseCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Smart Access Gateway (SAG) APP instance with another enterprise code.
       *
       * @param request UpdateSmartAGEnterpriseCodeRequest
       * @return UpdateSmartAGEnterpriseCodeResponse
       */
      Models::UpdateSmartAGEnterpriseCodeResponse updateSmartAGEnterpriseCode(const Models::UpdateSmartAGEnterpriseCodeRequest &request);

      /**
       * @summary Modifies the maximum bandwidth for application acceleration of client accounts on Smart Access Gateway (SAG) app.
       *
       * @description Before you set a maximum bandwidth value for a client, take note of the following rules:
       * *   The maximum bandwidth value of a client cannot exceed that of the SAG app instance to which the client belongs.
       * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is less than 5 Mbit/s, for example, 4 Mbit/s, the maximum bandwidth value of each client that belongs to the SAG app instance is 4 Mbit/s by default.
       * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is 5 Mbit/s or higher, the maximum bandwidth value of each client that belongs to the SAG app instance is 5 Mbit/s by default.
       *
       * @param request UpdateSmartAGUserAccelerateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAGUserAccelerateConfigResponse
       */
      Models::UpdateSmartAGUserAccelerateConfigResponse updateSmartAGUserAccelerateConfigWithOptions(const Models::UpdateSmartAGUserAccelerateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth for application acceleration of client accounts on Smart Access Gateway (SAG) app.
       *
       * @description Before you set a maximum bandwidth value for a client, take note of the following rules:
       * *   The maximum bandwidth value of a client cannot exceed that of the SAG app instance to which the client belongs.
       * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is less than 5 Mbit/s, for example, 4 Mbit/s, the maximum bandwidth value of each client that belongs to the SAG app instance is 4 Mbit/s by default.
       * *   If you have not set maximum bandwidth values for clients that belong to an SAG app instance, and the maximum bandwidth value of the instance is 5 Mbit/s or higher, the maximum bandwidth value of each client that belongs to the SAG app instance is 5 Mbit/s by default.
       *
       * @param request UpdateSmartAGUserAccelerateConfigRequest
       * @return UpdateSmartAGUserAccelerateConfigResponse
       */
      Models::UpdateSmartAGUserAccelerateConfigResponse updateSmartAGUserAccelerateConfig(const Models::UpdateSmartAGUserAccelerateConfigRequest &request);

      /**
       * @summary Modifies the password that is used to log on to an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify passwords that are used to log on to only SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayAdminPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayAdminPasswordResponse
       */
      Models::UpdateSmartAccessGatewayAdminPasswordResponse updateSmartAccessGatewayAdminPasswordWithOptions(const Models::UpdateSmartAccessGatewayAdminPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password that is used to log on to an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify passwords that are used to log on to only SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayAdminPasswordRequest
       * @return UpdateSmartAccessGatewayAdminPasswordResponse
       */
      Models::UpdateSmartAccessGatewayAdminPasswordResponse updateSmartAccessGatewayAdminPassword(const Models::UpdateSmartAccessGatewayAdminPasswordRequest &request);

      /**
       * @summary Modifies the BGP configurations of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayBgpRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayBgpRouteResponse
       */
      Models::UpdateSmartAccessGatewayBgpRouteResponse updateSmartAccessGatewayBgpRouteWithOptions(const Models::UpdateSmartAccessGatewayBgpRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the BGP configurations of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayBgpRouteRequest
       * @return UpdateSmartAccessGatewayBgpRouteResponse
       */
      Models::UpdateSmartAccessGatewayBgpRouteResponse updateSmartAccessGatewayBgpRoute(const Models::UpdateSmartAccessGatewayBgpRouteRequest &request);

      /**
       * @summary Modifies the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayDnsResponse
       */
      Models::UpdateSmartAccessGatewayDnsResponse updateSmartAccessGatewayDnsWithOptions(const Models::UpdateSmartAccessGatewayDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayDnsRequest
       * @return UpdateSmartAccessGatewayDnsResponse
       */
      Models::UpdateSmartAccessGatewayDnsResponse updateSmartAccessGatewayDns(const Models::UpdateSmartAccessGatewayDnsRequest &request);

      /**
       * @summary Modifies the DNS forwarding configurations for a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayDnsForwardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayDnsForwardResponse
       */
      Models::UpdateSmartAccessGatewayDnsForwardResponse updateSmartAccessGatewayDnsForwardWithOptions(const Models::UpdateSmartAccessGatewayDnsForwardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DNS forwarding configurations for a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayDnsForwardRequest
       * @return UpdateSmartAccessGatewayDnsForwardResponse
       */
      Models::UpdateSmartAccessGatewayDnsForwardResponse updateSmartAccessGatewayDnsForward(const Models::UpdateSmartAccessGatewayDnsForwardRequest &request);

      /**
       * @summary Modifies the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the global routing protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayGlobalRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayGlobalRouteProtocolResponse
       */
      Models::UpdateSmartAccessGatewayGlobalRouteProtocolResponse updateSmartAccessGatewayGlobalRouteProtocolWithOptions(const Models::UpdateSmartAccessGatewayGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the global routing protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayGlobalRouteProtocolRequest
       * @return UpdateSmartAccessGatewayGlobalRouteProtocolResponse
       */
      Models::UpdateSmartAccessGatewayGlobalRouteProtocolResponse updateSmartAccessGatewayGlobalRouteProtocol(const Models::UpdateSmartAccessGatewayGlobalRouteProtocolRequest &request);

      /**
       * @summary Modifies the Open Shortest Path First (OSPF) dynamic routing protocol configuration of a Smart Access Gateway (SAG) device. This operation is supported only for SAG instances that use the SCG5000 or SCG5000-5G device model and run device version 3.4.2 or later.
       *
       * @description You can modify the OSPF dynamic routing protocol configuration only for SCG5000 and SCG5000-5G devices that run device version 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayOspfRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayOspfRouteResponse
       */
      Models::UpdateSmartAccessGatewayOspfRouteResponse updateSmartAccessGatewayOspfRouteWithOptions(const Models::UpdateSmartAccessGatewayOspfRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Open Shortest Path First (OSPF) dynamic routing protocol configuration of a Smart Access Gateway (SAG) device. This operation is supported only for SAG instances that use the SCG5000 or SCG5000-5G device model and run device version 3.4.2 or later.
       *
       * @description You can modify the OSPF dynamic routing protocol configuration only for SCG5000 and SCG5000-5G devices that run device version 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayOspfRouteRequest
       * @return UpdateSmartAccessGatewayOspfRouteResponse
       */
      Models::UpdateSmartAccessGatewayOspfRouteResponse updateSmartAccessGatewayOspfRoute(const Models::UpdateSmartAccessGatewayOspfRouteRequest &request);

      /**
       * @summary Modifies the port protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the port protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayPortRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayPortRouteProtocolResponse
       */
      Models::UpdateSmartAccessGatewayPortRouteProtocolResponse updateSmartAccessGatewayPortRouteProtocolWithOptions(const Models::UpdateSmartAccessGatewayPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the port protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the port protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayPortRouteProtocolRequest
       * @return UpdateSmartAccessGatewayPortRouteProtocolResponse
       */
      Models::UpdateSmartAccessGatewayPortRouteProtocolResponse updateSmartAccessGatewayPortRouteProtocol(const Models::UpdateSmartAccessGatewayPortRouteProtocolRequest &request);

      /**
       * @summary Upgrades a SAG device to a later version.
       *
       * @param request UpdateSmartAccessGatewayVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayVersionResponse
       */
      Models::UpdateSmartAccessGatewayVersionResponse updateSmartAccessGatewayVersionWithOptions(const Models::UpdateSmartAccessGatewayVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a SAG device to a later version.
       *
       * @param request UpdateSmartAccessGatewayVersionRequest
       * @return UpdateSmartAccessGatewayVersionResponse
       */
      Models::UpdateSmartAccessGatewayVersionResponse updateSmartAccessGatewayVersion(const Models::UpdateSmartAccessGatewayVersionRequest &request);

      /**
       * @summary Modifies the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the SNAT configuration of the WAN port only on SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayWanSnatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmartAccessGatewayWanSnatResponse
       */
      Models::UpdateSmartAccessGatewayWanSnatResponse updateSmartAccessGatewayWanSnatWithOptions(const Models::UpdateSmartAccessGatewayWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can modify the SNAT configuration of the WAN port only on SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request UpdateSmartAccessGatewayWanSnatRequest
       * @return UpdateSmartAccessGatewayWanSnatResponse
       */
      Models::UpdateSmartAccessGatewayWanSnatResponse updateSmartAccessGatewayWanSnat(const Models::UpdateSmartAccessGatewayWanSnatRequest &request);

      /**
       * @summary Increases the bandwidth of a Smart Access Gateway (SAG) instance.
       *
       * @param request UpgradeSmartAccessGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeSmartAccessGatewayResponse
       */
      Models::UpgradeSmartAccessGatewayResponse upgradeSmartAccessGatewayWithOptions(const Models::UpgradeSmartAccessGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases the bandwidth of a Smart Access Gateway (SAG) instance.
       *
       * @param request UpgradeSmartAccessGatewayRequest
       * @return UpgradeSmartAccessGatewayResponse
       */
      Models::UpgradeSmartAccessGatewayResponse upgradeSmartAccessGateway(const Models::UpgradeSmartAccessGatewayRequest &request);

      /**
       * @summary Increases the maximum number of client accounts supported by a Smart Access Gateway (SAG) app instance.
       *
       * @param request UpgradeSmartAccessGatewaySoftwareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeSmartAccessGatewaySoftwareResponse
       */
      Models::UpgradeSmartAccessGatewaySoftwareResponse upgradeSmartAccessGatewaySoftwareWithOptions(const Models::UpgradeSmartAccessGatewaySoftwareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases the maximum number of client accounts supported by a Smart Access Gateway (SAG) app instance.
       *
       * @param request UpgradeSmartAccessGatewaySoftwareRequest
       * @return UpgradeSmartAccessGatewaySoftwareResponse
       */
      Models::UpgradeSmartAccessGatewaySoftwareResponse upgradeSmartAccessGatewaySoftware(const Models::UpgradeSmartAccessGatewaySoftwareRequest &request);

      /**
       * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayBgpRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayBgpRouteResponse
       */
      Models::ViewSmartAccessGatewayBgpRouteResponse viewSmartAccessGatewayBgpRouteWithOptions(const Models::ViewSmartAccessGatewayBgpRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayBgpRouteRequest
       * @return ViewSmartAccessGatewayBgpRouteResponse
       */
      Models::ViewSmartAccessGatewayBgpRouteResponse viewSmartAccessGatewayBgpRoute(const Models::ViewSmartAccessGatewayBgpRouteRequest &request);

      /**
       * @summary Queries the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayDnsResponse
       */
      Models::ViewSmartAccessGatewayDnsResponse viewSmartAccessGatewayDnsWithOptions(const Models::ViewSmartAccessGatewayDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the DNS configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayDnsRequest
       * @return ViewSmartAccessGatewayDnsResponse
       */
      Models::ViewSmartAccessGatewayDnsResponse viewSmartAccessGatewayDns(const Models::ViewSmartAccessGatewayDnsRequest &request);

      /**
       * @summary Queries the DNS forwarding list of a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayDnsForwardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayDnsForwardsResponse
       */
      Models::ViewSmartAccessGatewayDnsForwardsResponse viewSmartAccessGatewayDnsForwardsWithOptions(const Models::ViewSmartAccessGatewayDnsForwardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS forwarding list of a Smart Access Gateway (SAG) SCG5000 or SCG5000-5G instance. The version of the device must be 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayDnsForwardsRequest
       * @return ViewSmartAccessGatewayDnsForwardsResponse
       */
      Models::ViewSmartAccessGatewayDnsForwardsResponse viewSmartAccessGatewayDnsForwards(const Models::ViewSmartAccessGatewayDnsForwardsRequest &request);

      /**
       * @summary Queries the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the global protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayGlobalRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayGlobalRouteProtocolResponse
       */
      Models::ViewSmartAccessGatewayGlobalRouteProtocolResponse viewSmartAccessGatewayGlobalRouteProtocolWithOptions(const Models::ViewSmartAccessGatewayGlobalRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global routing protocol of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the global protocol only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayGlobalRouteProtocolRequest
       * @return ViewSmartAccessGatewayGlobalRouteProtocolResponse
       */
      Models::ViewSmartAccessGatewayGlobalRouteProtocolResponse viewSmartAccessGatewayGlobalRouteProtocol(const Models::ViewSmartAccessGatewayGlobalRouteProtocolRequest &request);

      /**
       * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later and has OSPF enabled.
       *
       * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later and have OSPF enabled.
       *
       * @param request ViewSmartAccessGatewayOspfRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayOspfRouteResponse
       */
      Models::ViewSmartAccessGatewayOspfRouteResponse viewSmartAccessGatewayOspfRouteWithOptions(const Models::ViewSmartAccessGatewayOspfRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the BGP configuration of an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later and has OSPF enabled.
       *
       * @description You can query the BGP configuration only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later and have OSPF enabled.
       *
       * @param request ViewSmartAccessGatewayOspfRouteRequest
       * @return ViewSmartAccessGatewayOspfRouteResponse
       */
      Models::ViewSmartAccessGatewayOspfRouteResponse viewSmartAccessGatewayOspfRoute(const Models::ViewSmartAccessGatewayOspfRouteRequest &request);

      /**
       * @summary Queries the list of ports on a Smart Access Gateway (SAG) device that have a routable protocol enabled. This operation is applicable to SAG instances that are associated with an SCG5000 or SCG5000-5G device of version 3.4.2 or later.
       *
       * @description You can query the list of ports that have a routable protocol enabled only on SCG5000 and SCG5000-5G devices of version 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayPortRouteProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayPortRouteProtocolResponse
       */
      Models::ViewSmartAccessGatewayPortRouteProtocolResponse viewSmartAccessGatewayPortRouteProtocolWithOptions(const Models::ViewSmartAccessGatewayPortRouteProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of ports on a Smart Access Gateway (SAG) device that have a routable protocol enabled. This operation is applicable to SAG instances that are associated with an SCG5000 or SCG5000-5G device of version 3.4.2 or later.
       *
       * @description You can query the list of ports that have a routable protocol enabled only on SCG5000 and SCG5000-5G devices of version 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayPortRouteProtocolRequest
       * @return ViewSmartAccessGatewayPortRouteProtocolResponse
       */
      Models::ViewSmartAccessGatewayPortRouteProtocolResponse viewSmartAccessGatewayPortRouteProtocol(const Models::ViewSmartAccessGatewayPortRouteProtocolRequest &request);

      /**
       * @summary Queries the route details about an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the route details only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayRoutesResponse
       */
      Models::ViewSmartAccessGatewayRoutesResponse viewSmartAccessGatewayRoutesWithOptions(const Models::ViewSmartAccessGatewayRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route details about an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the route details only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayRoutesRequest
       * @return ViewSmartAccessGatewayRoutesResponse
       */
      Models::ViewSmartAccessGatewayRoutesResponse viewSmartAccessGatewayRoutes(const Models::ViewSmartAccessGatewayRoutesRequest &request);

      /**
       * @summary Queries the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the SNAT configuration of the WAN port only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayWanSnatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewSmartAccessGatewayWanSnatResponse
       */
      Models::ViewSmartAccessGatewayWanSnatResponse viewSmartAccessGatewayWanSnatWithOptions(const Models::ViewSmartAccessGatewayWanSnatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Source Network Address Translation (SNAT) configuration of the WAN port on an SCG5000 or SCG5000-5G device whose version is 3.4.2 or later.
       *
       * @description You can query the SNAT configuration of the WAN port only of SCG5000 and SCG5000-5G devices whose version is 3.4.2 or later.
       *
       * @param request ViewSmartAccessGatewayWanSnatRequest
       * @return ViewSmartAccessGatewayWanSnatResponse
       */
      Models::ViewSmartAccessGatewayWanSnatResponse viewSmartAccessGatewayWanSnat(const Models::ViewSmartAccessGatewayWanSnatRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
