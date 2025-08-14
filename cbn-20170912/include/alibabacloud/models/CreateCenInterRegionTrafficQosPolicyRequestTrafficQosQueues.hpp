// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUESTTRAFFICQOSQUEUES_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUESTTRAFFICQOSQUEUES_HPP_
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
  class CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Dscps, dscps_);
      DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
      DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_FROM_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
    };
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues() = default ;
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues(const CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues &) = default ;
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues(CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues &&) = default ;
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues() = default ;
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& operator=(const CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues &) = default ;
    CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& operator=(CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->dscps_ != nullptr && this->qosQueueDescription_ != nullptr && this->qosQueueName_ != nullptr && this->remainBandwidthPercent_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // dscps Field Functions 
    bool hasDscps() const { return this->dscps_ != nullptr;};
    void deleteDscps() { this->dscps_ = nullptr;};
    inline const vector<int32_t> & dscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
    inline vector<int32_t> dscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


    // qosQueueDescription Field Functions 
    bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
    void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
    inline string qosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


    // qosQueueName Field Functions 
    bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
    void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
    inline string qosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


    // remainBandwidthPercent Field Functions 
    bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
    void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
    inline string remainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues& setRemainBandwidthPercent(string remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


  protected:
    // The absolute bandwidth that can be consumed by the QoS queue. Unit: Mbit/s.
    // 
    // Each QoS policy supports at most 10 queues. You can specify a valid bandwidth value for each queue.
    // 
    // For example, a value of 1 specifies that the queue can consume 1 Mbit/s of the inter-region bandwidth.
    // 
    // >  The sum of the absolute bandwidth values of all the queues in a QoS policy cannot exceed the total bandwidth of the inter-region connection.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The Differentiated Services Code Point (DSCP) value that matches the current queue.
    // 
    // Each QoS policy supports at most three queues. You can specify at most 60 DSCP values for each queue. Separate multiple DCSP values with commas (,).
    std::shared_ptr<vector<int32_t>> dscps_ = nullptr;
    // The description of the current queue.
    // 
    // Each QoS policy supports at most 10 queues. You can specify a description for each queue.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> qosQueueDescription_ = nullptr;
    // The name of the current queue.
    // 
    // Each QoS policy supports at most three queues. You can specify a name for each queue.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> qosQueueName_ = nullptr;
    // The percentage of the inter-region bandwidth that can be used by the queue.
    // 
    // Each QoS policy supports at most 10 queues. You can specify a valid percentage for each queue.
    // 
    // For example, a value of **1** specifies that the queue can consume 1% of the inter-region bandwidth.
    // 
    // >  The sum of the percentage values of all the queues in a QoS policy cannot exceed 100%.
    std::shared_ptr<string> remainBandwidthPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
