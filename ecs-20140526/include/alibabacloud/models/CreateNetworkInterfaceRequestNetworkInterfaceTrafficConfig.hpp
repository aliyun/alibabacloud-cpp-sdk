// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUESTNETWORKINTERFACETRAFFICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUESTNETWORKINTERFACETRAFFICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
    };
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig() = default ;
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig(const CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig &) = default ;
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig(CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig &&) = default ;
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig() = default ;
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& operator=(const CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig &) = default ;
    CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& operator=(CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceTrafficMode_ == nullptr
        && return this->queueNumber_ == nullptr && return this->queuePairNumber_ == nullptr && return this->rxQueueSize_ == nullptr && return this->txQueueSize_ == nullptr; };
    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t rxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t txQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


  protected:
    // The communication mode of the ENI.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The number of queues supported by the ENI.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // The number of QPs supported by the ERI.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
    // The Rx queue depth of the ENI.
    // 
    // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   This parameter is applicable only to 7th-generation or later ECS instance types.
    // *   This parameter is applicable to Linux images.
    // *   A larger Rx queue depth yields higher inbound throughput and reduces packet loss rates but consumes more memory.
    std::shared_ptr<int32_t> rxQueueSize_ = nullptr;
    // The Tx queue depth of the ENI.
    // 
    // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   This parameter is applicable only to 7th-generation or later ECS instance types.
    // *   This parameter is applicable to Linux images.
    // *   A larger Tx queue depth yields higher outbound throughput and reduces packet loss rates but consumes more memory.
    std::shared_ptr<int32_t> txQueueSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
