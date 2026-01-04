// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateLoadBalancerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLoadBalancerAttributeRequest() = default ;
    UpdateLoadBalancerAttributeRequest(const UpdateLoadBalancerAttributeRequest &) = default ;
    UpdateLoadBalancerAttributeRequest(UpdateLoadBalancerAttributeRequest &&) = default ;
    UpdateLoadBalancerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerAttributeRequest() = default ;
    UpdateLoadBalancerAttributeRequest& operator=(const UpdateLoadBalancerAttributeRequest &) = default ;
    UpdateLoadBalancerAttributeRequest& operator=(UpdateLoadBalancerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cps_ == nullptr && this->crossZoneEnabled_ == nullptr && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr
        && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLoadBalancerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline UpdateLoadBalancerAttributeRequest& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool getCrossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline UpdateLoadBalancerAttributeRequest& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateLoadBalancerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline UpdateLoadBalancerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline UpdateLoadBalancerAttributeRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLoadBalancerAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system uses the **request ID** as the **client token**. The **request ID** is different for each request.
    shared_ptr<string> clientToken_ {};
    // The maximum number of new connections per second in each zone supported by the NLB instance (virtual IP address). Valid values: **1** to **1000000**.
    shared_ptr<int32_t> cps_ {};
    // Specifies whether to enable cross-zone load balancing for the NLB instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> crossZoneEnabled_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The NLB instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The NLB instance name.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
