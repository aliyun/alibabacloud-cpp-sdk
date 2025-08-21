// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ANTIDDOSPUBLIC20170518_HPP_
#define ALIBABACLOUD_ANTIDDOSPUBLIC20170518_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AntiddosPublic20170518Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AntiddosPublic20170518.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Queries the configurations of the Anti-DDoS Origin instance that is associated with an asset. The asset is assigned a public IP address.
       *
       * @description You can call the DescribeBgpPackByIp operation to query the configurations of the Anti-DDoS Origin instance that is associated with an asset. The configurations include the basic protection threshold, burstable protection threshold, and expiration time.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBgpPackByIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBgpPackByIpResponse
       */
      Models::DescribeBgpPackByIpResponse describeBgpPackByIpWithOptions(const Models::DescribeBgpPackByIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the Anti-DDoS Origin instance that is associated with an asset. The asset is assigned a public IP address.
       *
       * @description You can call the DescribeBgpPackByIp operation to query the configurations of the Anti-DDoS Origin instance that is associated with an asset. The configurations include the basic protection threshold, burstable protection threshold, and expiration time.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBgpPackByIpRequest
       * @return DescribeBgpPackByIpResponse
       */
      Models::DescribeBgpPackByIpResponse describeBgpPackByIp(const Models::DescribeBgpPackByIpRequest &request);

      /**
       * @summary Queries the download link to the traffic data that is captured when a DDoS attack event occurs.
       *
       * @description You can call the DescribeCap operation to query the download link to the traffic data that is captured when a DDoS attack event occurs. You can download the traffic data from the download link and use the data as evidence.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeCapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapResponse
       */
      Models::DescribeCapResponse describeCapWithOptions(const Models::DescribeCapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download link to the traffic data that is captured when a DDoS attack event occurs.
       *
       * @description You can call the DescribeCap operation to query the download link to the traffic data that is captured when a DDoS attack event occurs. You can download the traffic data from the download link and use the data as evidence.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeCapRequest
       * @return DescribeCapResponse
       */
      Models::DescribeCapResponse describeCap(const Models::DescribeCapRequest &request);

      /**
       * @summary Queries the number of assets that are under DDoS attacks in a specific region. The assets are assigned public IP addresses.
       *
       * @description ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosCountResponse
       */
      Models::DescribeDdosCountResponse describeDdosCountWithOptions(const Models::DescribeDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets that are under DDoS attacks in a specific region. The assets are assigned public IP addresses.
       *
       * @description ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosCountRequest
       * @return DescribeDdosCountResponse
       */
      Models::DescribeDdosCountResponse describeDdosCount(const Models::DescribeDdosCountRequest &request);

      /**
       * @summary Queries the details of the security credit score of the current Alibaba Cloud account in a specific region.
       *
       * @description You can call the DescribeDdosCredit operation to query the details of the security credit score of the current Alibaba Cloud account in a specific region. The details include the security credit score, security credit level, and the time period after which blackhole filtering is automatically deactivated.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosCreditResponse
       */
      Models::DescribeDdosCreditResponse describeDdosCreditWithOptions(const Models::DescribeDdosCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the security credit score of the current Alibaba Cloud account in a specific region.
       *
       * @description You can call the DescribeDdosCredit operation to query the details of the security credit score of the current Alibaba Cloud account in a specific region. The details include the security credit score, security credit level, and the time period after which blackhole filtering is automatically deactivated.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosCreditRequest
       * @return DescribeDdosCreditResponse
       */
      Models::DescribeDdosCreditResponse describeDdosCredit(const Models::DescribeDdosCreditRequest &request);

      /**
       * @summary Queries the details of the DDoS attack events that occur on an asset. The asset is assigned a public IP address.
       *
       * @description You can call the DescribeDdosEventList operation to query the details of the DDoS attack events that occur on an asset by page. The details include the start time, end time, and status of each DDoS attack event.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosEventListResponse
       */
      Models::DescribeDdosEventListResponse describeDdosEventListWithOptions(const Models::DescribeDdosEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the DDoS attack events that occur on an asset. The asset is assigned a public IP address.
       *
       * @description You can call the DescribeDdosEventList operation to query the details of the DDoS attack events that occur on an asset by page. The details include the start time, end time, and status of each DDoS attack event.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosEventListRequest
       * @return DescribeDdosEventListResponse
       */
      Models::DescribeDdosEventListResponse describeDdosEventList(const Models::DescribeDdosEventListRequest &request);

      /**
       * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description You can call the DescribeDdosThreshold operation to query the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The details include the current traffic scrubbing threshold, maximum traffic scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosThresholdResponse
       */
      Models::DescribeDdosThresholdResponse describeDdosThresholdWithOptions(const Models::DescribeDdosThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description You can call the DescribeDdosThreshold operation to query the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The details include the current traffic scrubbing threshold, maximum traffic scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDdosThresholdRequest
       * @return DescribeDdosThresholdResponse
       */
      Models::DescribeDdosThresholdResponse describeDdosThreshold(const Models::DescribeDdosThresholdRequest &request);

      /**
       * @summary Queries the details of the assets within the current Alibaba Cloud account. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses. This operation is phased out. We recommend that you use the DescribeInstanceIpAddress operation.
       *
       * @description You can call the DescribeInstance operation to query the details of the assets that are within the current Alibaba Cloud account by page. The details include the IDs and IP addresses of the assets, the basic protection thresholds and traffic scrubbing thresholds that are configured for the assets in Anti-DDoS Origin, and whether the assets are associated with Anti-DDoS Origin instances.
       * ### [](#qps-)Limits
       * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the assets within the current Alibaba Cloud account. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses. This operation is phased out. We recommend that you use the DescribeInstanceIpAddress operation.
       *
       * @description You can call the DescribeInstance operation to query the details of the assets that are within the current Alibaba Cloud account by page. The details include the IDs and IP addresses of the assets, the basic protection thresholds and traffic scrubbing thresholds that are configured for the assets in Anti-DDoS Origin, and whether the assets are associated with Anti-DDoS Origin instances.
       * ### [](#qps-)Limits
       * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Queries the details of the assets within the current Alibaba Cloud account and the details of the Anti-DDoS Origin instance to which the assets belong. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
       * ## Limits
       * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIpAddressResponse
       */
      Models::DescribeInstanceIpAddressResponse describeInstanceIpAddressWithOptions(const Models::DescribeInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the assets within the current Alibaba Cloud account and the details of the Anti-DDoS Origin instance to which the assets belong. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
       * ## Limits
       * You can call this operation up to 200 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceIpAddressRequest
       * @return DescribeInstanceIpAddressResponse
       */
      Models::DescribeInstanceIpAddressResponse describeInstanceIpAddress(const Models::DescribeInstanceIpAddressRequest &request);

      /**
       * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeIpDdosThreshold operation to query the details of the DDoS mitigation threshold or traffic scrubbing threshold for a specific asset. The details include the current traffic scrubbing threshold, maximum scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeIpDdosThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpDdosThresholdResponse
       */
      Models::DescribeIpDdosThresholdResponse describeIpDdosThresholdWithOptions(const Models::DescribeIpDdosThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the DDoS mitigation thresholds or traffic scrubbing thresholds for specified assets. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description If one or more assets of the current Alibaba Cloud account are added to an Anti-DDoS Origin instance, you can call the DescribeIpDdosThreshold operation to query the details of the DDoS mitigation threshold or traffic scrubbing threshold for a specific asset. The details include the current traffic scrubbing threshold, maximum scrubbing threshold, current DDoS mitigation threshold, and maximum DDoS mitigation threshold.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeIpDdosThresholdRequest
       * @return DescribeIpDdosThresholdResponse
       */
      Models::DescribeIpDdosThresholdResponse describeIpDdosThreshold(const Models::DescribeIpDdosThresholdRequest &request);

      /**
       * @summary Queries the region to which the public IP address of the asset within the current Alibaba Cloud account belongs. The asset can be an elastic IP address (EIP). The asset can also be an Elastic Compute Service (ECS) instance or Server Load Balancer (SLB) instance that is assigned a public IP address.
       *
       * @description You can call the DescribeIpLocationService operation to query the region of the public IP address for a specified asset that is within the current Alibaba Cloud account. You can also query the details of the Anti-DDoS Origin instance to which the asset is added. The details include the ID and name.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeIpLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpLocationServiceResponse
       */
      Models::DescribeIpLocationServiceResponse describeIpLocationServiceWithOptions(const Models::DescribeIpLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region to which the public IP address of the asset within the current Alibaba Cloud account belongs. The asset can be an elastic IP address (EIP). The asset can also be an Elastic Compute Service (ECS) instance or Server Load Balancer (SLB) instance that is assigned a public IP address.
       *
       * @description You can call the DescribeIpLocationService operation to query the region of the public IP address for a specified asset that is within the current Alibaba Cloud account. You can also query the details of the Anti-DDoS Origin instance to which the asset is added. The details include the ID and name.
       * ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeIpLocationServiceRequest
       * @return DescribeIpLocationServiceResponse
       */
      Models::DescribeIpLocationServiceResponse describeIpLocationService(const Models::DescribeIpLocationServiceRequest &request);

      /**
       * @summary Queries the regions in which Anti-DDoS Origin Basic is available.
       *
       * @description You can call this operation to query information about the regions in which Anti-DDoS Origin Basic is available. The information includes the region ID, region name, and code.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which Anti-DDoS Origin Basic is available.
       *
       * @description You can call this operation to query information about the regions in which Anti-DDoS Origin Basic is available. The information includes the region ID, region name, and code.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Changes the scrubbing thresholds for an asset that is assigned a public IP address.
       *
       * @description ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDefenseThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseThresholdResponse
       */
      Models::ModifyDefenseThresholdResponse modifyDefenseThresholdWithOptions(const Models::ModifyDefenseThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the scrubbing thresholds for an asset that is assigned a public IP address.
       *
       * @description ## [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDefenseThresholdRequest
       * @return ModifyDefenseThresholdResponse
       */
      Models::ModifyDefenseThresholdResponse modifyDefenseThreshold(const Models::ModifyDefenseThresholdRequest &request);

      /**
       * @summary Modifies the scrubbing thresholds for an asset that is assigned a public IP address. This operation is a synchronous operation that supports Terraform.
       *
       * @description ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyIpDefenseThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpDefenseThresholdResponse
       */
      Models::ModifyIpDefenseThresholdResponse modifyIpDefenseThresholdWithOptions(const Models::ModifyIpDefenseThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scrubbing thresholds for an asset that is assigned a public IP address. This operation is a synchronous operation that supports Terraform.
       *
       * @description ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyIpDefenseThresholdRequest
       * @return ModifyIpDefenseThresholdResponse
       */
      Models::ModifyIpDefenseThresholdResponse modifyIpDefenseThreshold(const Models::ModifyIpDefenseThresholdRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
