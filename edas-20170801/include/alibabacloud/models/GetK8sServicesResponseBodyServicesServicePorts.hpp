// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODYSERVICESSERVICEPORTS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODYSERVICESSERVICEPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sServicesResponseBodyServicesServicePorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sServicesResponseBodyServicesServicePorts& obj) { 
      DARABONBA_PTR_TO_JSON(NodePort, nodePort_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sServicesResponseBodyServicesServicePorts& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePort, nodePort_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    GetK8sServicesResponseBodyServicesServicePorts() = default ;
    GetK8sServicesResponseBodyServicesServicePorts(const GetK8sServicesResponseBodyServicesServicePorts &) = default ;
    GetK8sServicesResponseBodyServicesServicePorts(GetK8sServicesResponseBodyServicesServicePorts &&) = default ;
    GetK8sServicesResponseBodyServicesServicePorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sServicesResponseBodyServicesServicePorts() = default ;
    GetK8sServicesResponseBodyServicesServicePorts& operator=(const GetK8sServicesResponseBodyServicesServicePorts &) = default ;
    GetK8sServicesResponseBodyServicesServicePorts& operator=(GetK8sServicesResponseBodyServicesServicePorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodePort_ == nullptr
        && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->targetPort_ == nullptr; };
    // nodePort Field Functions 
    bool hasNodePort() const { return this->nodePort_ != nullptr;};
    void deleteNodePort() { this->nodePort_ = nullptr;};
    inline int32_t nodePort() const { DARABONBA_PTR_GET_DEFAULT(nodePort_, 0) };
    inline GetK8sServicesResponseBodyServicesServicePorts& setNodePort(int32_t nodePort) { DARABONBA_PTR_SET_VALUE(nodePort_, nodePort) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetK8sServicesResponseBodyServicesServicePorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetK8sServicesResponseBodyServicesServicePorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline GetK8sServicesResponseBodyServicesServicePorts& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // The port of the node.
    std::shared_ptr<int32_t> nodePort_ = nullptr;
    // The frontend service port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol of the service.
    std::shared_ptr<string> protocol_ = nullptr;
    // The backend container port.
    std::shared_ptr<string> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
