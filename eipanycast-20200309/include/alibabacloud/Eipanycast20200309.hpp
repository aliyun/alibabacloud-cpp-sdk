// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EIPANYCAST20200309_HPP_
#define ALIBABACLOUD_EIPANYCAST20200309_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eipanycast20200309Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eipanycast20200309.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an Anycast elastic IP address (Anycast EIP).
       *
       * @param request AllocateAnycastEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateAnycastEipAddressResponse
       */
      Models::AllocateAnycastEipAddressResponse allocateAnycastEipAddressWithOptions(const Models::AllocateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Anycast elastic IP address (Anycast EIP).
       *
       * @param request AllocateAnycastEipAddressRequest
       * @return AllocateAnycastEipAddressResponse
       */
      Models::AllocateAnycastEipAddressResponse allocateAnycastEipAddress(const Models::AllocateAnycastEipAddressRequest &request);

      /**
       * @summary Associates an Anycast elastic IP address (Anycast EIP) with an endpoint.
       *
       * @param request AssociateAnycastEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAnycastEipAddressResponse
       */
      Models::AssociateAnycastEipAddressResponse associateAnycastEipAddressWithOptions(const Models::AssociateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an Anycast elastic IP address (Anycast EIP) with an endpoint.
       *
       * @param request AssociateAnycastEipAddressRequest
       * @return AssociateAnycastEipAddressResponse
       */
      Models::AssociateAnycastEipAddressResponse associateAnycastEipAddress(const Models::AssociateAnycastEipAddressRequest &request);

      /**
       * @summary 修改AnycastEIp实例资源组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改AnycastEIp实例资源组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Queries Anycast elastic IP addresses (Anycast EIPs) associated with specified instance IP addresses or instance IDs, including instance status, maximum bandwidth, and associated resources.
       *
       * @param request DescribeAnycastEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnycastEipAddressResponse
       */
      Models::DescribeAnycastEipAddressResponse describeAnycastEipAddressWithOptions(const Models::DescribeAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Anycast elastic IP addresses (Anycast EIPs) associated with specified instance IP addresses or instance IDs, including instance status, maximum bandwidth, and associated resources.
       *
       * @param request DescribeAnycastEipAddressRequest
       * @return DescribeAnycastEipAddressResponse
       */
      Models::DescribeAnycastEipAddressResponse describeAnycastEipAddress(const Models::DescribeAnycastEipAddressRequest &request);

      /**
       * @summary Queries the information about the access points in an area.
       *
       * @param request DescribeAnycastPopLocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnycastPopLocationsResponse
       */
      Models::DescribeAnycastPopLocationsResponse describeAnycastPopLocationsWithOptions(const Models::DescribeAnycastPopLocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the access points in an area.
       *
       * @param request DescribeAnycastPopLocationsRequest
       * @return DescribeAnycastPopLocationsResponse
       */
      Models::DescribeAnycastPopLocationsResponse describeAnycastPopLocations(const Models::DescribeAnycastPopLocationsRequest &request);

      /**
       * @summary Queries the regions where you can associate Anycast elastic IP addresses (Anycast EIPs) with endpoints.
       *
       * @param request DescribeAnycastServerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnycastServerRegionsResponse
       */
      Models::DescribeAnycastServerRegionsResponse describeAnycastServerRegionsWithOptions(const Models::DescribeAnycastServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where you can associate Anycast elastic IP addresses (Anycast EIPs) with endpoints.
       *
       * @param request DescribeAnycastServerRegionsRequest
       * @return DescribeAnycastServerRegionsResponse
       */
      Models::DescribeAnycastServerRegionsResponse describeAnycastServerRegions(const Models::DescribeAnycastServerRegionsRequest &request);

      /**
       * @summary Queries information about Anycast elastic IP addresses (Anycast EIPs) in an access area, including instance status, maximum bandwidth, and associated resources.
       *
       * @param request ListAnycastEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnycastEipAddressesResponse
       */
      Models::ListAnycastEipAddressesResponse listAnycastEipAddressesWithOptions(const Models::ListAnycastEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Anycast elastic IP addresses (Anycast EIPs) in an access area, including instance status, maximum bandwidth, and associated resources.
       *
       * @param request ListAnycastEipAddressesRequest
       * @return ListAnycastEipAddressesResponse
       */
      Models::ListAnycastEipAddressesResponse listAnycastEipAddresses(const Models::ListAnycastEipAddressesRequest &request);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the name and description of an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ModifyAnycastEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAnycastEipAddressAttributeResponse
       */
      Models::ModifyAnycastEipAddressAttributeResponse modifyAnycastEipAddressAttributeWithOptions(const Models::ModifyAnycastEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ModifyAnycastEipAddressAttributeRequest
       * @return ModifyAnycastEipAddressAttributeResponse
       */
      Models::ModifyAnycastEipAddressAttributeResponse modifyAnycastEipAddressAttribute(const Models::ModifyAnycastEipAddressAttributeRequest &request);

      /**
       * @summary Modifies the maximum bandwidth of an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ModifyAnycastEipAddressSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAnycastEipAddressSpecResponse
       */
      Models::ModifyAnycastEipAddressSpecResponse modifyAnycastEipAddressSpecWithOptions(const Models::ModifyAnycastEipAddressSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maximum bandwidth of an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ModifyAnycastEipAddressSpecRequest
       * @return ModifyAnycastEipAddressSpecResponse
       */
      Models::ModifyAnycastEipAddressSpecResponse modifyAnycastEipAddressSpec(const Models::ModifyAnycastEipAddressSpecRequest &request);

      /**
       * @summary Releases an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ReleaseAnycastEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseAnycastEipAddressResponse
       */
      Models::ReleaseAnycastEipAddressResponse releaseAnycastEipAddressWithOptions(const Models::ReleaseAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an Anycast elastic IP address (Anycast EIP).
       *
       * @param request ReleaseAnycastEipAddressRequest
       * @return ReleaseAnycastEipAddressResponse
       */
      Models::ReleaseAnycastEipAddressResponse releaseAnycastEipAddress(const Models::ReleaseAnycastEipAddressRequest &request);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Disassociates an Anycast elastic IP address (Anycast EIP) from an endpoint.
       *
       * @param request UnassociateAnycastEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateAnycastEipAddressResponse
       */
      Models::UnassociateAnycastEipAddressResponse unassociateAnycastEipAddressWithOptions(const Models::UnassociateAnycastEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an Anycast elastic IP address (Anycast EIP) from an endpoint.
       *
       * @param request UnassociateAnycastEipAddressRequest
       * @return UnassociateAnycastEipAddressResponse
       */
      Models::UnassociateAnycastEipAddressResponse unassociateAnycastEipAddress(const Models::UnassociateAnycastEipAddressRequest &request);

      /**
       * @summary Removes tags from Anycast EIPs.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Anycast EIPs.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary If an Anycast EIP is associated with endpoints in different regions, you can change the access points that are mapped to an endpoint. You can call UpdateAnycastEipAddressAssociations to add or delete endpoints to modify the mappings between endpoints and access points.
       *
       * @param request UpdateAnycastEipAddressAssociationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAnycastEipAddressAssociationsResponse
       */
      Models::UpdateAnycastEipAddressAssociationsResponse updateAnycastEipAddressAssociationsWithOptions(const Models::UpdateAnycastEipAddressAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If an Anycast EIP is associated with endpoints in different regions, you can change the access points that are mapped to an endpoint. You can call UpdateAnycastEipAddressAssociations to add or delete endpoints to modify the mappings between endpoints and access points.
       *
       * @param request UpdateAnycastEipAddressAssociationsRequest
       * @return UpdateAnycastEipAddressAssociationsResponse
       */
      Models::UpdateAnycastEipAddressAssociationsResponse updateAnycastEipAddressAssociations(const Models::UpdateAnycastEipAddressAssociationsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
