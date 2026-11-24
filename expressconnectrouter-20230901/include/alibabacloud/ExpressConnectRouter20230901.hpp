// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EXPRESSCONNECTROUTER20230901_HPP_
#define ALIBABACLOUD_EXPRESSCONNECTROUTER20230901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ExpressConnectRouter20230901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ExpressConnectRouter20230901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enables log delivery for a flow log.
       *
       * @param request ActivateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateFlowLogResponse
       */
      Models::ActivateFlowLogResponse activateFlowLogWithOptions(const Models::ActivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables log delivery for a flow log.
       *
       * @param request ActivateFlowLogRequest
       * @return ActivateFlowLogResponse
       */
      Models::ActivateFlowLogResponse activateFlowLog(const Models::ActivateFlowLogRequest &request);

      /**
       * @summary Attaches a child instance (VBR) to an Express Connect Router (ECR).
       *
       * @description Before you invoke the **AttachExpressConnectRouterChildInstance** operation to load a child instance (VBR) to an Express Connect Router (ECR), make sure that the Express Connect Router (ECR) is in the **Active** state.
       *
       * @param request AttachExpressConnectRouterChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachExpressConnectRouterChildInstanceResponse
       */
      Models::AttachExpressConnectRouterChildInstanceResponse attachExpressConnectRouterChildInstanceWithOptions(const Models::AttachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a child instance (VBR) to an Express Connect Router (ECR).
       *
       * @description Before you invoke the **AttachExpressConnectRouterChildInstance** operation to load a child instance (VBR) to an Express Connect Router (ECR), make sure that the Express Connect Router (ECR) is in the **Active** state.
       *
       * @param request AttachExpressConnectRouterChildInstanceRequest
       * @return AttachExpressConnectRouterChildInstanceResponse
       */
      Models::AttachExpressConnectRouterChildInstanceResponse attachExpressConnectRouterChildInstance(const Models::AttachExpressConnectRouterChildInstanceRequest &request);

      /**
       * @summary Checks the Cloud Data Transfer (CDT) service required to add a specified region to an Express Connect Router (ECR).
       *
       * @param request CheckAddRegionToExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAddRegionToExpressConnectRouterResponse
       */
      Models::CheckAddRegionToExpressConnectRouterResponse checkAddRegionToExpressConnectRouterWithOptions(const Models::CheckAddRegionToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the Cloud Data Transfer (CDT) service required to add a specified region to an Express Connect Router (ECR).
       *
       * @param request CheckAddRegionToExpressConnectRouterRequest
       * @return CheckAddRegionToExpressConnectRouterResponse
       */
      Models::CheckAddRegionToExpressConnectRouterResponse checkAddRegionToExpressConnectRouter(const Models::CheckAddRegionToExpressConnectRouterRequest &request);

      /**
       * @summary Creates an Express Connect Router (ECR).
       *
       * @description After you create an Express Connect Router (ECR) instance, the instance status is **Active**.
       *
       * @param request CreateExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectRouterResponse
       */
      Models::CreateExpressConnectRouterResponse createExpressConnectRouterWithOptions(const Models::CreateExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Express Connect Router (ECR).
       *
       * @description After you create an Express Connect Router (ECR) instance, the instance status is **Active**.
       *
       * @param request CreateExpressConnectRouterRequest
       * @return CreateExpressConnectRouterResponse
       */
      Models::CreateExpressConnectRouterResponse createExpressConnectRouter(const Models::CreateExpressConnectRouterRequest &request);

      /**
       * @summary Associates an Express Connect Router (ECR) with a virtual private cloud (VPC) or a transit router (TR).
       *
       * @param request CreateExpressConnectRouterAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressConnectRouterAssociationResponse
       */
      Models::CreateExpressConnectRouterAssociationResponse createExpressConnectRouterAssociationWithOptions(const Models::CreateExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an Express Connect Router (ECR) with a virtual private cloud (VPC) or a transit router (TR).
       *
       * @param request CreateExpressConnectRouterAssociationRequest
       * @return CreateExpressConnectRouterAssociationResponse
       */
      Models::CreateExpressConnectRouterAssociationResponse createExpressConnectRouterAssociation(const Models::CreateExpressConnectRouterAssociationRequest &request);

      /**
       * @summary Creates a flow log and enables log delivery by default.
       *
       * @param request CreateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLogWithOptions(const Models::CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow log and enables log delivery by default.
       *
       * @param request CreateFlowLogRequest
       * @return CreateFlowLogResponse
       */
      Models::CreateFlowLogResponse createFlowLog(const Models::CreateFlowLogRequest &request);

      /**
       * @summary Creates an association between an Express Connect Router (ECR) and a route map.
       *
       * @param request CreateRouteMapAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteMapAssociationResponse
       */
      Models::CreateRouteMapAssociationResponse createRouteMapAssociationWithOptions(const Models::CreateRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an association between an Express Connect Router (ECR) and a route map.
       *
       * @param request CreateRouteMapAssociationRequest
       * @return CreateRouteMapAssociationResponse
       */
      Models::CreateRouteMapAssociationResponse createRouteMapAssociation(const Models::CreateRouteMapAssociationRequest &request);

      /**
       * @summary Stops log delivery for a flow log.
       *
       * @param request DeactivateFlowLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateFlowLogResponse
       */
      Models::DeactivateFlowLogResponse deactivateFlowLogWithOptions(const Models::DeactivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops log delivery for a flow log.
       *
       * @param request DeactivateFlowLogRequest
       * @return DeactivateFlowLogResponse
       */
      Models::DeactivateFlowLogResponse deactivateFlowLog(const Models::DeactivateFlowLogRequest &request);

      /**
       * @summary Deletes an Express Connect Router (ECR).
       *
       * @description Before you invoke the DeleteExpressConnectRouter operation to delete an Express Connect Router (ECR) instance, note the following:
       * - Before you delete an Express Connect Router (ECR) instance, you must delete the resources associated with the Express Connect Router (ECR) instance.
       * - You can delete only Express Connect Router (ECR) instances that are in the **Active** state.
       *
       * @param request DeleteExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectRouterResponse
       */
      Models::DeleteExpressConnectRouterResponse deleteExpressConnectRouterWithOptions(const Models::DeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Express Connect Router (ECR).
       *
       * @description Before you invoke the DeleteExpressConnectRouter operation to delete an Express Connect Router (ECR) instance, note the following:
       * - Before you delete an Express Connect Router (ECR) instance, you must delete the resources associated with the Express Connect Router (ECR) instance.
       * - You can delete only Express Connect Router (ECR) instances that are in the **Active** state.
       *
       * @param request DeleteExpressConnectRouterRequest
       * @return DeleteExpressConnectRouterResponse
       */
      Models::DeleteExpressConnectRouterResponse deleteExpressConnectRouter(const Models::DeleteExpressConnectRouterRequest &request);

      /**
       * @summary Disassociates an Express Connect Router (ECR) from a virtual private cloud (VPC) or a transit router.
       *
       * @param request DeleteExpressConnectRouterAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressConnectRouterAssociationResponse
       */
      Models::DeleteExpressConnectRouterAssociationResponse deleteExpressConnectRouterAssociationWithOptions(const Models::DeleteExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an Express Connect Router (ECR) from a virtual private cloud (VPC) or a transit router.
       *
       * @param request DeleteExpressConnectRouterAssociationRequest
       * @return DeleteExpressConnectRouterAssociationResponse
       */
      Models::DeleteExpressConnectRouterAssociationResponse deleteExpressConnectRouterAssociation(const Models::DeleteExpressConnectRouterAssociationRequest &request);

      /**
       * @summary Deletes a flow log.
       *
       * @param request DeleteFlowlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlogWithOptions(const Models::DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow log.
       *
       * @param request DeleteFlowlogRequest
       * @return DeleteFlowlogResponse
       */
      Models::DeleteFlowlogResponse deleteFlowlog(const Models::DeleteFlowlogRequest &request);

      /**
       * @summary Deletes the association between an Express Connect Router (ECR) and a route policy.
       *
       * @param request DeleteRouteMapAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteMapAssociationResponse
       */
      Models::DeleteRouteMapAssociationResponse deleteRouteMapAssociationWithOptions(const Models::DeleteRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the association between an Express Connect Router (ECR) and a route policy.
       *
       * @param request DeleteRouteMapAssociationRequest
       * @return DeleteRouteMapAssociationResponse
       */
      Models::DeleteRouteMapAssociationResponse deleteRouteMapAssociation(const Models::DeleteRouteMapAssociationRequest &request);

      /**
       * @summary Queries the disabled route entry of an Express Connect Router (ECR).
       *
       * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
       */
      Models::DescribeDisabledExpressConnectRouterRouteEntriesResponse describeDisabledExpressConnectRouterRouteEntriesWithOptions(const Models::DescribeDisabledExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disabled route entry of an Express Connect Router (ECR).
       *
       * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
       * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
       */
      Models::DescribeDisabledExpressConnectRouterRouteEntriesResponse describeDisabledExpressConnectRouterRouteEntries(const Models::DescribeDisabledExpressConnectRouterRouteEntriesRequest &request);

      /**
       * @summary Queries a list of Express Connect Router (ECR) instances.
       *
       * @param request DescribeExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterResponse
       */
      Models::DescribeExpressConnectRouterResponse describeExpressConnectRouterWithOptions(const Models::DescribeExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Express Connect Router (ECR) instances.
       *
       * @param request DescribeExpressConnectRouterRequest
       * @return DescribeExpressConnectRouterResponse
       */
      Models::DescribeExpressConnectRouterResponse describeExpressConnectRouter(const Models::DescribeExpressConnectRouterRequest &request);

      /**
       * @summary Queries the history of prefix routes for an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
       */
      Models::DescribeExpressConnectRouterAllowedPrefixHistoryResponse describeExpressConnectRouterAllowedPrefixHistoryWithOptions(const Models::DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the history of prefix routes for an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
       * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
       */
      Models::DescribeExpressConnectRouterAllowedPrefixHistoryResponse describeExpressConnectRouterAllowedPrefixHistory(const Models::DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request);

      /**
       * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterAssociationResponse
       */
      Models::DescribeExpressConnectRouterAssociationResponse describeExpressConnectRouterAssociationWithOptions(const Models::DescribeExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterAssociationRequest
       * @return DescribeExpressConnectRouterAssociationResponse
       */
      Models::DescribeExpressConnectRouterAssociationResponse describeExpressConnectRouterAssociation(const Models::DescribeExpressConnectRouterAssociationRequest &request);

      /**
       * @summary Queries the virtual border routers (VBRs) associated with an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterChildInstanceResponse
       */
      Models::DescribeExpressConnectRouterChildInstanceResponse describeExpressConnectRouterChildInstanceWithOptions(const Models::DescribeExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual border routers (VBRs) associated with an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterChildInstanceRequest
       * @return DescribeExpressConnectRouterChildInstanceResponse
       */
      Models::DescribeExpressConnectRouterChildInstanceResponse describeExpressConnectRouterChildInstance(const Models::DescribeExpressConnectRouterChildInstanceRequest &request);

      /**
       * @summary Queries the cross-region forwarding mode of an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
       */
      Models::DescribeExpressConnectRouterInterRegionTransitModeResponse describeExpressConnectRouterInterRegionTransitModeWithOptions(const Models::DescribeExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region forwarding mode of an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
       * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
       */
      Models::DescribeExpressConnectRouterInterRegionTransitModeResponse describeExpressConnectRouterInterRegionTransitMode(const Models::DescribeExpressConnectRouterInterRegionTransitModeRequest &request);

      /**
       * @summary Queries the regions where Express Connect Router (ECR) resources are located.
       *
       * @param request DescribeExpressConnectRouterRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterRegionResponse
       */
      Models::DescribeExpressConnectRouterRegionResponse describeExpressConnectRouterRegionWithOptions(const Models::DescribeExpressConnectRouterRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where Express Connect Router (ECR) resources are located.
       *
       * @param request DescribeExpressConnectRouterRegionRequest
       * @return DescribeExpressConnectRouterRegionResponse
       */
      Models::DescribeExpressConnectRouterRegionResponse describeExpressConnectRouterRegion(const Models::DescribeExpressConnectRouterRegionRequest &request);

      /**
       * @summary Queries the route entries of an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressConnectRouterRouteEntriesResponse
       */
      Models::DescribeExpressConnectRouterRouteEntriesResponse describeExpressConnectRouterRouteEntriesWithOptions(const Models::DescribeExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route entries of an Express Connect Router (ECR).
       *
       * @param request DescribeExpressConnectRouterRouteEntriesRequest
       * @return DescribeExpressConnectRouterRouteEntriesResponse
       */
      Models::DescribeExpressConnectRouterRouteEntriesResponse describeExpressConnectRouterRouteEntries(const Models::DescribeExpressConnectRouterRouteEntriesRequest &request);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogsWithOptions(const Models::DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flow logs.
       *
       * @param request DescribeFlowLogsRequest
       * @return DescribeFlowLogsResponse
       */
      Models::DescribeFlowLogsResponse describeFlowLogs(const Models::DescribeFlowLogsRequest &request);

      /**
       * @summary Queries the network instances authorized to an Express Connect Router (ECR).
       *
       * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceGrantedToExpressConnectRouterResponse
       */
      Models::DescribeInstanceGrantedToExpressConnectRouterResponse describeInstanceGrantedToExpressConnectRouterWithOptions(const Models::DescribeInstanceGrantedToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network instances authorized to an Express Connect Router (ECR).
       *
       * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
       * @return DescribeInstanceGrantedToExpressConnectRouterResponse
       */
      Models::DescribeInstanceGrantedToExpressConnectRouterResponse describeInstanceGrantedToExpressConnectRouter(const Models::DescribeInstanceGrantedToExpressConnectRouterRequest &request);

      /**
       * @summary Detaches a virtual border router (VBR) from an Express Connect Router (ECR).
       *
       * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to detach a VBR instance from an Express Connect Router (ECR), ensure that the ECR is in the **Active** state.
       *
       * @param request DetachExpressConnectRouterChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachExpressConnectRouterChildInstanceResponse
       */
      Models::DetachExpressConnectRouterChildInstanceResponse detachExpressConnectRouterChildInstanceWithOptions(const Models::DetachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a virtual border router (VBR) from an Express Connect Router (ECR).
       *
       * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to detach a VBR instance from an Express Connect Router (ECR), ensure that the ECR is in the **Active** state.
       *
       * @param request DetachExpressConnectRouterChildInstanceRequest
       * @return DetachExpressConnectRouterChildInstanceResponse
       */
      Models::DetachExpressConnectRouterChildInstanceResponse detachExpressConnectRouterChildInstance(const Models::DetachExpressConnectRouterChildInstanceRequest &request);

      /**
       * @summary Disables a route entry of an Express Connect Router (ECR).
       *
       * @param request DisableExpressConnectRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableExpressConnectRouterRouteEntriesResponse
       */
      Models::DisableExpressConnectRouterRouteEntriesResponse disableExpressConnectRouterRouteEntriesWithOptions(const Models::DisableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a route entry of an Express Connect Router (ECR).
       *
       * @param request DisableExpressConnectRouterRouteEntriesRequest
       * @return DisableExpressConnectRouterRouteEntriesResponse
       */
      Models::DisableExpressConnectRouterRouteEntriesResponse disableExpressConnectRouterRouteEntries(const Models::DisableExpressConnectRouterRouteEntriesRequest &request);

      /**
       * @summary Enables route entries for an Express Connect Router (ECR).
       *
       * @param request EnableExpressConnectRouterRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableExpressConnectRouterRouteEntriesResponse
       */
      Models::EnableExpressConnectRouterRouteEntriesResponse enableExpressConnectRouterRouteEntriesWithOptions(const Models::EnableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables route entries for an Express Connect Router (ECR).
       *
       * @param request EnableExpressConnectRouterRouteEntriesRequest
       * @return EnableExpressConnectRouterRouteEntriesResponse
       */
      Models::EnableExpressConnectRouterRouteEntriesResponse enableExpressConnectRouterRouteEntries(const Models::EnableExpressConnectRouterRouteEntriesRequest &request);

      /**
       * @summary Force deletes an Express Connect Router (ECR) and detaches its associated virtual private clouds (VPCs), Transit Routers (TRs), and virtual border routers (VBRs).
       *
       * @description - Force deleting an Express Connect Router (ECR) instance detaches all associated resources. Before you proceed, confirm that this operation does not disrupt your services.
       * - You can delete only ECR instances that are in the **Active** state.
       *
       * @param request ForceDeleteExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForceDeleteExpressConnectRouterResponse
       */
      Models::ForceDeleteExpressConnectRouterResponse forceDeleteExpressConnectRouterWithOptions(const Models::ForceDeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Force deletes an Express Connect Router (ECR) and detaches its associated virtual private clouds (VPCs), Transit Routers (TRs), and virtual border routers (VBRs).
       *
       * @description - Force deleting an Express Connect Router (ECR) instance detaches all associated resources. Before you proceed, confirm that this operation does not disrupt your services.
       * - You can delete only ECR instances that are in the **Active** state.
       *
       * @param request ForceDeleteExpressConnectRouterRequest
       * @return ForceDeleteExpressConnectRouterResponse
       */
      Models::ForceDeleteExpressConnectRouterResponse forceDeleteExpressConnectRouter(const Models::ForceDeleteExpressConnectRouterRequest &request);

      /**
       * @summary Grants a virtual private cloud (VPC) or virtual border router (VBR) authorization to a cross-account Express Connect Router (ECR).
       *
       * @description To associate a cross-account network instance with an Express Connect Router (ECR) instance, you must grant the network instance authorization to the Express Connect Router (ECR) instance.
       *
       * @param request GrantInstanceToExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantInstanceToExpressConnectRouterResponse
       */
      Models::GrantInstanceToExpressConnectRouterResponse grantInstanceToExpressConnectRouterWithOptions(const Models::GrantInstanceToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a virtual private cloud (VPC) or virtual border router (VBR) authorization to a cross-account Express Connect Router (ECR).
       *
       * @description To associate a cross-account network instance with an Express Connect Router (ECR) instance, you must grant the network instance authorization to the Express Connect Router (ECR) instance.
       *
       * @param request GrantInstanceToExpressConnectRouterRequest
       * @return GrantInstanceToExpressConnectRouterResponse
       */
      Models::GrantInstanceToExpressConnectRouterResponse grantInstanceToExpressConnectRouter(const Models::GrantInstanceToExpressConnectRouterRequest &request);

      /**
       * @summary Queries the regions that support Express Connect Router (ECR).
       *
       * @param request ListExpressConnectRouterSupportedRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExpressConnectRouterSupportedRegionResponse
       */
      Models::ListExpressConnectRouterSupportedRegionResponse listExpressConnectRouterSupportedRegionWithOptions(const Models::ListExpressConnectRouterSupportedRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that support Express Connect Router (ECR).
       *
       * @param request ListExpressConnectRouterSupportedRegionRequest
       * @return ListExpressConnectRouterSupportedRegionResponse
       */
      Models::ListExpressConnectRouterSupportedRegionResponse listExpressConnectRouterSupportedRegion(const Models::ListExpressConnectRouterSupportedRegionRequest &request);

      /**
       * @summary Queries the association between an Express Connect Router (ECR) and a route map.
       *
       * @param request ListRouteMapAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRouteMapAssociationsResponse
       */
      Models::ListRouteMapAssociationsResponse listRouteMapAssociationsWithOptions(const Models::ListRouteMapAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between an Express Connect Router (ECR) and a route map.
       *
       * @param request ListRouteMapAssociationsRequest
       * @return ListRouteMapAssociationsResponse
       */
      Models::ListRouteMapAssociationsResponse listRouteMapAssociations(const Models::ListRouteMapAssociationsRequest &request);

      /**
       * @summary Queries the list of tags bound to an Express Connect Router (ECR).
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tags bound to an Express Connect Router (ECR).
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the properties of an Express Connect Router (ECR), such as its name.
       *
       * @description You can modify an Express Connect Router (ECR) instance only when it is in the **Active** state.
       *
       * @param request ModifyExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectRouterResponse
       */
      Models::ModifyExpressConnectRouterResponse modifyExpressConnectRouterWithOptions(const Models::ModifyExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of an Express Connect Router (ECR), such as its name.
       *
       * @description You can modify an Express Connect Router (ECR) instance only when it is in the **Active** state.
       *
       * @param request ModifyExpressConnectRouterRequest
       * @return ModifyExpressConnectRouterResponse
       */
      Models::ModifyExpressConnectRouterResponse modifyExpressConnectRouter(const Models::ModifyExpressConnectRouterRequest &request);

      /**
       * @summary Modifies the attributes of a child instance associated with an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectRouterAssociationResponse
       */
      Models::ModifyExpressConnectRouterAssociationResponse modifyExpressConnectRouterAssociationWithOptions(const Models::ModifyExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a child instance associated with an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterAssociationRequest
       * @return ModifyExpressConnectRouterAssociationResponse
       */
      Models::ModifyExpressConnectRouterAssociationResponse modifyExpressConnectRouterAssociation(const Models::ModifyExpressConnectRouterAssociationRequest &request);

      /**
       * @summary Modifies the prefixes for a virtual private cloud (VPC) or a transit router that is attached to an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
       */
      Models::ModifyExpressConnectRouterAssociationAllowedPrefixResponse modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(const Models::ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the prefixes for a virtual private cloud (VPC) or a transit router that is attached to an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
       * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
       */
      Models::ModifyExpressConnectRouterAssociationAllowedPrefixResponse modifyExpressConnectRouterAssociationAllowedPrefix(const Models::ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request);

      /**
       * @summary Modifies the attributes of a child instance (VBR) associated with an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterChildInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectRouterChildInstanceResponse
       */
      Models::ModifyExpressConnectRouterChildInstanceResponse modifyExpressConnectRouterChildInstanceWithOptions(const Models::ModifyExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a child instance (VBR) associated with an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterChildInstanceRequest
       * @return ModifyExpressConnectRouterChildInstanceResponse
       */
      Models::ModifyExpressConnectRouterChildInstanceResponse modifyExpressConnectRouterChildInstance(const Models::ModifyExpressConnectRouterChildInstanceRequest &request);

      /**
       * @summary Modifies the inter-region forwarding mode of an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
       */
      Models::ModifyExpressConnectRouterInterRegionTransitModeResponse modifyExpressConnectRouterInterRegionTransitModeWithOptions(const Models::ModifyExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the inter-region forwarding mode of an Express Connect Router (ECR).
       *
       * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
       * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
       */
      Models::ModifyExpressConnectRouterInterRegionTransitModeResponse modifyExpressConnectRouterInterRegionTransitMode(const Models::ModifyExpressConnectRouterInterRegionTransitModeRequest &request);

      /**
       * @summary Modifies the name, description, sampling rate, and sampling interval of a flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(const Models::ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, sampling rate, and sampling interval of a flow log.
       *
       * @param request ModifyFlowLogAttributeRequest
       * @return ModifyFlowLogAttributeResponse
       */
      Models::ModifyFlowLogAttributeResponse modifyFlowLogAttribute(const Models::ModifyFlowLogAttributeRequest &request);

      /**
       * @summary Modifies the resource group to which an Express Connect Router (ECR) belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which an Express Connect Router (ECR) belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Revokes the authorization of a virtual private cloud (VPC) or virtual border router (VBR) on a cross-account Express Connect Router (ECR).
       *
       * @param request RevokeInstanceFromExpressConnectRouterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeInstanceFromExpressConnectRouterResponse
       */
      Models::RevokeInstanceFromExpressConnectRouterResponse revokeInstanceFromExpressConnectRouterWithOptions(const Models::RevokeInstanceFromExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the authorization of a virtual private cloud (VPC) or virtual border router (VBR) on a cross-account Express Connect Router (ECR).
       *
       * @param request RevokeInstanceFromExpressConnectRouterRequest
       * @return RevokeInstanceFromExpressConnectRouterResponse
       */
      Models::RevokeInstanceFromExpressConnectRouterResponse revokeInstanceFromExpressConnectRouter(const Models::RevokeInstanceFromExpressConnectRouterRequest &request);

      /**
       * @summary Synchronizes the inter-region bandwidth limits for an Express Connect Router (ECR).
       *
       * @description You can update an ECR instance only when it is in the **Active** state.
       *
       * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
       */
      Models::SynchronizeExpressConnectRouterInterRegionBandwidthResponse synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(const Models::SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the inter-region bandwidth limits for an Express Connect Router (ECR).
       *
       * @description You can update an ECR instance only when it is in the **Active** state.
       *
       * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
       * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
       */
      Models::SynchronizeExpressConnectRouterInterRegionBandwidthResponse synchronizeExpressConnectRouterInterRegionBandwidth(const Models::SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request);

      /**
       * @summary Binds tags to an Express Connect Router (ECR). Each call to this operation binds tags to a single ECR instance, but you can bind multiple tags at a time.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to an Express Connect Router (ECR). Each call to this operation binds tags to a single ECR instance, but you can bind multiple tags at a time.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds tags from an Express Connect Router (ECR).
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from an Express Connect Router (ECR).
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the association between an Express Connect Router (ECR) and a routing policy.
       *
       * @param request UpdateRouteMapAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRouteMapAssociationResponse
       */
      Models::UpdateRouteMapAssociationResponse updateRouteMapAssociationWithOptions(const Models::UpdateRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the association between an Express Connect Router (ECR) and a routing policy.
       *
       * @param request UpdateRouteMapAssociationRequest
       * @return UpdateRouteMapAssociationResponse
       */
      Models::UpdateRouteMapAssociationResponse updateRouteMapAssociation(const Models::UpdateRouteMapAssociationRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
