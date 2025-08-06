// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTATTRIBUTEREQUESTNETWORKATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTATTRIBUTEREQUESTNETWORKATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostAttributeRequestNetworkAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostAttributeRequestNetworkAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(SlbUdpTimeout, slbUdpTimeout_);
      DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostAttributeRequestNetworkAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbUdpTimeout, slbUdpTimeout_);
      DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
    };
    ModifyDedicatedHostAttributeRequestNetworkAttributes() = default ;
    ModifyDedicatedHostAttributeRequestNetworkAttributes(const ModifyDedicatedHostAttributeRequestNetworkAttributes &) = default ;
    ModifyDedicatedHostAttributeRequestNetworkAttributes(ModifyDedicatedHostAttributeRequestNetworkAttributes &&) = default ;
    ModifyDedicatedHostAttributeRequestNetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostAttributeRequestNetworkAttributes() = default ;
    ModifyDedicatedHostAttributeRequestNetworkAttributes& operator=(const ModifyDedicatedHostAttributeRequestNetworkAttributes &) = default ;
    ModifyDedicatedHostAttributeRequestNetworkAttributes& operator=(ModifyDedicatedHostAttributeRequestNetworkAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->slbUdpTimeout_ != nullptr
        && this->udpTimeout_ != nullptr; };
    // slbUdpTimeout Field Functions 
    bool hasSlbUdpTimeout() const { return this->slbUdpTimeout_ != nullptr;};
    void deleteSlbUdpTimeout() { this->slbUdpTimeout_ = nullptr;};
    inline int32_t slbUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(slbUdpTimeout_, 0) };
    inline ModifyDedicatedHostAttributeRequestNetworkAttributes& setSlbUdpTimeout(int32_t slbUdpTimeout) { DARABONBA_PTR_SET_VALUE(slbUdpTimeout_, slbUdpTimeout) };


    // udpTimeout Field Functions 
    bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
    void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
    inline int32_t udpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
    inline ModifyDedicatedHostAttributeRequestNetworkAttributes& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


  protected:
    // The timeout period for a UDP session between a Server Load Balancer (SLB) instance and the dedicated host. Unit: seconds. Valid values: 15 to 310.
    std::shared_ptr<int32_t> slbUdpTimeout_ = nullptr;
    // The timeout period for a UDP session between a user and an Alibaba Cloud service on the dedicated host. Unit: seconds. Valid values: 15 to 310.
    std::shared_ptr<int32_t> udpTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
