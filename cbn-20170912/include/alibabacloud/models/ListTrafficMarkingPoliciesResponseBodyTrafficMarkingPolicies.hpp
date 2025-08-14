// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODYTRAFFICMARKINGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODYTRAFFICMARKINGPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyStatus, trafficMarkingPolicyStatus_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyStatus, trafficMarkingPolicyStatus_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies() = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies(const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies &) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies(ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies &&) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies() = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& operator=(const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies &) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& operator=(ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->markingDscp_ != nullptr
        && this->priority_ != nullptr && this->trafficMarkingPolicyDescription_ != nullptr && this->trafficMarkingPolicyId_ != nullptr && this->trafficMarkingPolicyName_ != nullptr && this->trafficMarkingPolicyStatus_ != nullptr
        && this->trafficMatchRules_ != nullptr && this->transitRouterId_ != nullptr; };
    // markingDscp Field Functions 
    bool hasMarkingDscp() const { return this->markingDscp_ != nullptr;};
    void deleteMarkingDscp() { this->markingDscp_ = nullptr;};
    inline int32_t markingDscp() const { DARABONBA_PTR_GET_DEFAULT(markingDscp_, 0) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setMarkingDscp(int32_t markingDscp) { DARABONBA_PTR_SET_VALUE(markingDscp_, markingDscp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string trafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string trafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


    // trafficMarkingPolicyStatus Field Functions 
    bool hasTrafficMarkingPolicyStatus() const { return this->trafficMarkingPolicyStatus_ != nullptr;};
    void deleteTrafficMarkingPolicyStatus() { this->trafficMarkingPolicyStatus_ = nullptr;};
    inline string trafficMarkingPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyStatus_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMarkingPolicyStatus(string trafficMarkingPolicyStatus) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyStatus_, trafficMarkingPolicyStatus) };


    // trafficMatchRules Field Functions 
    bool hasTrafficMatchRules() const { return this->trafficMatchRules_ != nullptr;};
    void deleteTrafficMatchRules() { this->trafficMatchRules_ = nullptr;};
    inline const vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules> & trafficMatchRules() const { DARABONBA_PTR_GET_CONST(trafficMatchRules_, vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules>) };
    inline vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules> trafficMatchRules() { DARABONBA_PTR_GET(trafficMatchRules_, vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules>) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMatchRules(const vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules> & trafficMatchRules) { DARABONBA_PTR_SET_VALUE(trafficMatchRules_, trafficMatchRules) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTrafficMatchRules(vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules> && trafficMatchRules) { DARABONBA_PTR_SET_RVALUE(trafficMatchRules_, trafficMatchRules) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The Differentiated Service Code Point (DSCP) value of the traffic marking policy.
    std::shared_ptr<int32_t> markingDscp_ = nullptr;
    // The priority of the traffic marking policy.
    // 
    // A lower value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The description of the traffic marking policy.
    std::shared_ptr<string> trafficMarkingPolicyDescription_ = nullptr;
    // The ID of the traffic marking policy.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
    // The name of the traffic marking policy.
    std::shared_ptr<string> trafficMarkingPolicyName_ = nullptr;
    // The status of the traffic marking policy. Valid values:
    // 
    // *   **Creating**: The policy is being created.
    // *   **Active**: The policy is available.
    // *   **Modifying**: The policy is being modified.
    // *   **Deleting**: The policy is being deleted.
    std::shared_ptr<string> trafficMarkingPolicyStatus_ = nullptr;
    // The traffic classification rules.
    std::shared_ptr<vector<Models::ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules>> trafficMatchRules_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
