// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOVPCINFOVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOVPCINFOVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequestNetworkInfoVpcInfoVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestNetworkInfoVpcInfoVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestNetworkInfoVpcInfoVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
    };
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches() = default ;
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches(const CreateInstanceRequestNetworkInfoVpcInfoVSwitches &) = default ;
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches(CreateInstanceRequestNetworkInfoVpcInfoVSwitches &&) = default ;
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestNetworkInfoVpcInfoVSwitches() = default ;
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches& operator=(const CreateInstanceRequestNetworkInfoVpcInfoVSwitches &) = default ;
    CreateInstanceRequestNetworkInfoVpcInfoVSwitches& operator=(CreateInstanceRequestNetworkInfoVpcInfoVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequestNetworkInfoVpcInfoVSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the vSwitch with which the instance is associated.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
