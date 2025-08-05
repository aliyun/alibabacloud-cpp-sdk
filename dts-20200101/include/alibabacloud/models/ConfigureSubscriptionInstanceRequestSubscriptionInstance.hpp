// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSUBSCRIPTIONINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSUBSCRIPTIONINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceRequestSubscriptionInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceRequestSubscriptionInstance& obj) { 
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceRequestSubscriptionInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ConfigureSubscriptionInstanceRequestSubscriptionInstance() = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionInstance(const ConfigureSubscriptionInstanceRequestSubscriptionInstance &) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionInstance(ConfigureSubscriptionInstanceRequestSubscriptionInstance &&) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceRequestSubscriptionInstance() = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionInstance& operator=(const ConfigureSubscriptionInstanceRequestSubscriptionInstance &) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionInstance& operator=(ConfigureSubscriptionInstanceRequestSubscriptionInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->VPCId_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline ConfigureSubscriptionInstanceRequestSubscriptionInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ConfigureSubscriptionInstanceRequestSubscriptionInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the VPC in which the change tracking instance is deployed.
    // 
    // > This parameter is available and required only if the **SubscriptionInstanceNetworkType** parameter is set to **vpc**.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The ID of the vSwitch in the specified VPC.
    // 
    // > This parameter is available and required only if the **SubscriptionInstanceNetworkType** parameter is set to **vpc**.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
