// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODYTRAFFICQOSPOLICIESTRAFFICQOSQUEUES_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODYTRAFFICQOSPOLICIESTRAFFICQOSQUEUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Dscps, dscps_);
      DARABONBA_PTR_TO_JSON(EffectiveBandwidth, effectiveBandwidth_);
      DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_TO_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
      DARABONBA_PTR_FROM_JSON(EffectiveBandwidth, effectiveBandwidth_);
      DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_FROM_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_FROM_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
    };
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues(const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues(ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues &&) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& operator=(const ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& operator=(ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->dscps_ != nullptr && this->effectiveBandwidth_ != nullptr && this->qosQueueDescription_ != nullptr && this->qosQueueId_ != nullptr && this->qosQueueName_ != nullptr
        && this->remainBandwidthPercent_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // dscps Field Functions 
    bool hasDscps() const { return this->dscps_ != nullptr;};
    void deleteDscps() { this->dscps_ = nullptr;};
    inline const vector<int32_t> & dscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
    inline vector<int32_t> dscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


    // effectiveBandwidth Field Functions 
    bool hasEffectiveBandwidth() const { return this->effectiveBandwidth_ != nullptr;};
    void deleteEffectiveBandwidth() { this->effectiveBandwidth_ = nullptr;};
    inline string effectiveBandwidth() const { DARABONBA_PTR_GET_DEFAULT(effectiveBandwidth_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setEffectiveBandwidth(string effectiveBandwidth) { DARABONBA_PTR_SET_VALUE(effectiveBandwidth_, effectiveBandwidth) };


    // qosQueueDescription Field Functions 
    bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
    void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
    inline string qosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


    // qosQueueId Field Functions 
    bool hasQosQueueId() const { return this->qosQueueId_ != nullptr;};
    void deleteQosQueueId() { this->qosQueueId_ = nullptr;};
    inline string qosQueueId() const { DARABONBA_PTR_GET_DEFAULT(qosQueueId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setQosQueueId(string qosQueueId) { DARABONBA_PTR_SET_VALUE(qosQueueId_, qosQueueId) };


    // qosQueueName Field Functions 
    bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
    void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
    inline string qosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


    // remainBandwidthPercent Field Functions 
    bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
    void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
    inline int32_t remainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, 0) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues& setRemainBandwidthPercent(int32_t remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


  protected:
    // If the QoS queues are assigned absolute bandwidth values, this parameter indicates the absolute bandwidth value that is allocated to the queue.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The differentiated services code point (DSCP) value that is used to match packets.
    std::shared_ptr<vector<int32_t>> dscps_ = nullptr;
    // The actual bandwidth value of the current queue.
    std::shared_ptr<string> effectiveBandwidth_ = nullptr;
    // The description of the queue.
    std::shared_ptr<string> qosQueueDescription_ = nullptr;
    // The queue ID.
    std::shared_ptr<string> qosQueueId_ = nullptr;
    // The name of the queue.
    std::shared_ptr<string> qosQueueName_ = nullptr;
    // If the QoS queues are assigned bandwidth percentages, this parameter indicates the percentage of bandwidth that is allocated to the queue.
    std::shared_ptr<int32_t> remainBandwidthPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
