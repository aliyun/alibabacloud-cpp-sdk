// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYNETWORKINTERFACETRAFFICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYNETWORKINTERFACETRAFFICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig(const DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig(DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& operator=(const DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& operator=(DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceTrafficMode_ == nullptr
        && return this->queueNumber_ == nullptr && return this->queuePairNumber_ == nullptr; };
    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


  protected:
    // The communication mode of the ENI.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The number of queues supported by the ENI.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // The number of queues supported by the ERI.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
