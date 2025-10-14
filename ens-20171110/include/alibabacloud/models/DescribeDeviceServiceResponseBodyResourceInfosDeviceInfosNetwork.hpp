// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSDEVICEINFOSNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSDEVICEINFOSNETWORK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerPorts, containerPorts_);
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(HostPorts, hostPorts_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerPorts, containerPorts_);
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(HostPorts, hostPorts_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork(const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork(DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork &&) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& operator=(const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& operator=(DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerPorts_ == nullptr
        && return this->externalIp_ == nullptr && return this->hostPorts_ == nullptr && return this->protocol_ == nullptr; };
    // containerPorts Field Functions 
    bool hasContainerPorts() const { return this->containerPorts_ != nullptr;};
    void deleteContainerPorts() { this->containerPorts_ = nullptr;};
    inline string containerPorts() const { DARABONBA_PTR_GET_DEFAULT(containerPorts_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& setContainerPorts(string containerPorts) { DARABONBA_PTR_SET_VALUE(containerPorts_, containerPorts) };


    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // hostPorts Field Functions 
    bool hasHostPorts() const { return this->hostPorts_ != nullptr;};
    void deleteHostPorts() { this->hostPorts_ = nullptr;};
    inline string hostPorts() const { DARABONBA_PTR_GET_DEFAULT(hostPorts_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& setHostPorts(string hostPorts) { DARABONBA_PTR_SET_VALUE(hostPorts_, hostPorts) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port of the container.
    std::shared_ptr<string> containerPorts_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> externalIp_ = nullptr;
    // The port range.
    std::shared_ptr<string> hostPorts_ = nullptr;
    // The protocol of the gateway. The value is of the enumeration type. Valid values:
    // 
    // *   TCP
    // *   UDP
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
