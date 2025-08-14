// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODYTRAFFICQOSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODYTRAFFICQOSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyStatus, trafficQosPolicyStatus_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueues, trafficQosQueues_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyStatus, trafficQosPolicyStatus_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueues, trafficQosQueues_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies(const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies(ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies &&) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& operator=(const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& operator=(ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthGuaranteeMode_ != nullptr
        && this->trafficQosPolicyDescription_ != nullptr && this->trafficQosPolicyId_ != nullptr && this->trafficQosPolicyName_ != nullptr && this->trafficQosPolicyStatus_ != nullptr && this->trafficQosQueues_ != nullptr
        && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // bandwidthGuaranteeMode Field Functions 
    bool hasBandwidthGuaranteeMode() const { return this->bandwidthGuaranteeMode_ != nullptr;};
    void deleteBandwidthGuaranteeMode() { this->bandwidthGuaranteeMode_ = nullptr;};
    inline string bandwidthGuaranteeMode() const { DARABONBA_PTR_GET_DEFAULT(bandwidthGuaranteeMode_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setBandwidthGuaranteeMode(string bandwidthGuaranteeMode) { DARABONBA_PTR_SET_VALUE(bandwidthGuaranteeMode_, bandwidthGuaranteeMode) };


    // trafficQosPolicyDescription Field Functions 
    bool hasTrafficQosPolicyDescription() const { return this->trafficQosPolicyDescription_ != nullptr;};
    void deleteTrafficQosPolicyDescription() { this->trafficQosPolicyDescription_ = nullptr;};
    inline string trafficQosPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyDescription_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosPolicyDescription(string trafficQosPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyDescription_, trafficQosPolicyDescription) };


    // trafficQosPolicyId Field Functions 
    bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
    void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
    inline string trafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


    // trafficQosPolicyName Field Functions 
    bool hasTrafficQosPolicyName() const { return this->trafficQosPolicyName_ != nullptr;};
    void deleteTrafficQosPolicyName() { this->trafficQosPolicyName_ = nullptr;};
    inline string trafficQosPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyName_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosPolicyName(string trafficQosPolicyName) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyName_, trafficQosPolicyName) };


    // trafficQosPolicyStatus Field Functions 
    bool hasTrafficQosPolicyStatus() const { return this->trafficQosPolicyStatus_ != nullptr;};
    void deleteTrafficQosPolicyStatus() { this->trafficQosPolicyStatus_ = nullptr;};
    inline string trafficQosPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyStatus_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosPolicyStatus(string trafficQosPolicyStatus) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyStatus_, trafficQosPolicyStatus) };


    // trafficQosQueues Field Functions 
    bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
    void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
    inline const vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues> & trafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues>) };
    inline vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues> trafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues>) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosQueues(const vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTrafficQosQueues(vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The guaranteed bandwidth mode.
    // 
    // *   **byBandwidth**: allocates absolute bandwidth values to QoS queues.
    // *   **byBandwidthPercent**: assigns bandwidth percentages to QoS queues.
    std::shared_ptr<string> bandwidthGuaranteeMode_ = nullptr;
    // The description of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyDescription_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyId_ = nullptr;
    // The name of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyName_ = nullptr;
    // The status of the QoS policy.
    // 
    // *   **Creating**: The QoS policy is being created.
    // *   **Active**: The QoS policy is available.
    // *   **Modifying**: The policy is being modified.
    // *   **Deleting**: The QoS policy is being deleted.
    std::shared_ptr<string> trafficQosPolicyStatus_ = nullptr;
    // A list of queues.
    std::shared_ptr<vector<Models::ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues>> trafficQosQueues_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
