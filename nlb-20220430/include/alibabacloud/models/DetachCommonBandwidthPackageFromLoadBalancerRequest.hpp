// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHCOMMONBANDWIDTHPACKAGEFROMLOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHCOMMONBANDWIDTHPACKAGEFROMLOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class DetachCommonBandwidthPackageFromLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachCommonBandwidthPackageFromLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachCommonBandwidthPackageFromLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachCommonBandwidthPackageFromLoadBalancerRequest() = default ;
    DetachCommonBandwidthPackageFromLoadBalancerRequest(const DetachCommonBandwidthPackageFromLoadBalancerRequest &) = default ;
    DetachCommonBandwidthPackageFromLoadBalancerRequest(DetachCommonBandwidthPackageFromLoadBalancerRequest &&) = default ;
    DetachCommonBandwidthPackageFromLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachCommonBandwidthPackageFromLoadBalancerRequest() = default ;
    DetachCommonBandwidthPackageFromLoadBalancerRequest& operator=(const DetachCommonBandwidthPackageFromLoadBalancerRequest &) = default ;
    DetachCommonBandwidthPackageFromLoadBalancerRequest& operator=(DetachCommonBandwidthPackageFromLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->regionId_ == nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DetachCommonBandwidthPackageFromLoadBalancerRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachCommonBandwidthPackageFromLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DetachCommonBandwidthPackageFromLoadBalancerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DetachCommonBandwidthPackageFromLoadBalancerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachCommonBandwidthPackageFromLoadBalancerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Internet Shared Bandwidth plan to remove.
    // 
    // This parameter is required.
    shared_ptr<string> bandwidthPackageId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a value for this parameter on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: sends a check request and does not disassociate the bandwidth plan. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the check, an error is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a regular request. If the request passes the check, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the Network Load Balancer (NLB) instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The region ID of the Network Load Balancer (NLB) instance. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
