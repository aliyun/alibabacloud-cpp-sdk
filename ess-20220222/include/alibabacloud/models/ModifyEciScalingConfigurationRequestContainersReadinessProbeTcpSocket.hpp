// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBETCPSOCKET_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBETCPSOCKET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket(const ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket(ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket &&) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket& operator=(const ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket& operator=(ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbeTcpSocket& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
