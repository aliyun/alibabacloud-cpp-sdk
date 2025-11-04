// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERPORTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestInitContainersInitContainerPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts() = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts(const CreateEciScalingConfigurationRequestInitContainersInitContainerPorts &) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts(CreateEciScalingConfigurationRequestInitContainersInitContainerPorts &&) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestInitContainersInitContainerPorts() = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& operator=(const CreateEciScalingConfigurationRequestInitContainersInitContainerPorts &) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& operator=(CreateEciScalingConfigurationRequestInitContainersInitContainerPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->protocol_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateEciScalingConfigurationRequestInitContainersInitContainerPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port number. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   TCP
    // *   UDP
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
