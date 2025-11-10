// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOVPCINFOVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOVPCINFOVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches() = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches(const GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches &) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches(GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches &&) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches() = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& operator=(const GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches &) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& operator=(GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
