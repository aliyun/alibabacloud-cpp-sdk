// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTNETWORKINTERFACETRAFFICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTNETWORKINTERFACETRAFFICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
    };
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig() = default ;
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig(const ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig &) = default ;
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig(ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig &&) = default ;
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig() = default ;
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& operator=(const ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig &) = default ;
    ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& operator=(ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterfaceTrafficMode_ != nullptr
        && this->queueNumber_ != nullptr && this->queuePairNumber_ != nullptr && this->rxQueueSize_ != nullptr && this->txQueueSize_ != nullptr; };
    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t rxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t txQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


  protected:
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: uses the TCP communication mode.
    // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
    // 
    // When the ENI is in the InUse state, take note of the following items:
    // 
    // *   The total number of ERIs attached to the instance cannot exceed the ERI quota for the instance type. To query the ERI quota for an instance type, call the DescribeInstanceTypes operation and check the EriQuantity value in the response.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The number of queues supported by the ENI. When the ENI is in the InUse state, take note of the following items:
    // 
    // *   The value of this parameter cannot exceed the maximum number of queues allowed per ENI for the instance type.
    // *   The total number of queues for all ENIs on the instance cannot exceed the queue quota for the instance type. To query the maximum number of queues per ENI and the queue quota for an instance type, call the DescribeInstanceTypes operation and check the MaximumQueueNumberPerEnig and TotalEniQueueQuantity values in the response.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // The number of queues supported by the ERI. When the ERI is in the InUse state, take note of the following items:
    // 
    // *   The value of this parameter cannot exceed the maximum number of queues allowed per ERI for the instance type. To query the maximum number of queues allowed per ERI for an instance type, call the DescribeInstanceTypes operation and check the QueuePairNumber value in the response.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
    // The receive (Rx) queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Rx queue depth of an ENI must be the same as the transmit (Tx) queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> rxQueueSize_ = nullptr;
    // The Tx queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> txQueueSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
