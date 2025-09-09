// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODYHOSTPROTOCOLS_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODYHOSTPROTOCOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostResponseBodyHostProtocols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostResponseBodyHostProtocols& obj) { 
      DARABONBA_PTR_TO_JSON(HostFingerPrint, hostFingerPrint_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostResponseBodyHostProtocols& obj) { 
      DARABONBA_PTR_FROM_JSON(HostFingerPrint, hostFingerPrint_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
    };
    GetHostResponseBodyHostProtocols() = default ;
    GetHostResponseBodyHostProtocols(const GetHostResponseBodyHostProtocols &) = default ;
    GetHostResponseBodyHostProtocols(GetHostResponseBodyHostProtocols &&) = default ;
    GetHostResponseBodyHostProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostResponseBodyHostProtocols() = default ;
    GetHostResponseBodyHostProtocols& operator=(const GetHostResponseBodyHostProtocols &) = default ;
    GetHostResponseBodyHostProtocols& operator=(GetHostResponseBodyHostProtocols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostFingerPrint_ != nullptr
        && this->port_ != nullptr && this->protocolName_ != nullptr; };
    // hostFingerPrint Field Functions 
    bool hasHostFingerPrint() const { return this->hostFingerPrint_ != nullptr;};
    void deleteHostFingerPrint() { this->hostFingerPrint_ = nullptr;};
    inline string hostFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(hostFingerPrint_, "") };
    inline GetHostResponseBodyHostProtocols& setHostFingerPrint(string hostFingerPrint) { DARABONBA_PTR_SET_VALUE(hostFingerPrint_, hostFingerPrint) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetHostResponseBodyHostProtocols& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline GetHostResponseBodyHostProtocols& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


  protected:
    // The fingerprint of the host. This parameter uniquely identifies a host. A value is returned for this parameter only if you have performed O\\&M operations on the host by using the bastion host. Otherwise, no value is returned.
    std::shared_ptr<string> hostFingerPrint_ = nullptr;
    // The service port of the host.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol that is used to connect to the host. Valid values:
    // 
    // *   **SSH**
    // *   **RDP**
    std::shared_ptr<string> protocolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
