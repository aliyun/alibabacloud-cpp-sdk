// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONSERVICESSPECNETWORKACL_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONSERVICESSPECNETWORKACL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBodyAddonServicesSpecNetworkACL : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyAddonServicesSpecNetworkACL& obj) { 
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyAddonServicesSpecNetworkACL& obj) { 
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
    };
    GetAddonResponseBodyAddonServicesSpecNetworkACL() = default ;
    GetAddonResponseBodyAddonServicesSpecNetworkACL(const GetAddonResponseBodyAddonServicesSpecNetworkACL &) = default ;
    GetAddonResponseBodyAddonServicesSpecNetworkACL(GetAddonResponseBodyAddonServicesSpecNetworkACL &&) = default ;
    GetAddonResponseBodyAddonServicesSpecNetworkACL(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyAddonServicesSpecNetworkACL() = default ;
    GetAddonResponseBodyAddonServicesSpecNetworkACL& operator=(const GetAddonResponseBodyAddonServicesSpecNetworkACL &) = default ;
    GetAddonResponseBodyAddonServicesSpecNetworkACL& operator=(GetAddonResponseBodyAddonServicesSpecNetworkACL &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipProtocol_ == nullptr
        && return this->port_ == nullptr && return this->sourceCidrIp_ == nullptr; };
    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline GetAddonResponseBodyAddonServicesSpecNetworkACL& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline float port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0.0) };
    inline GetAddonResponseBodyAddonServicesSpecNetworkACL& setPort(float port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline GetAddonResponseBodyAddonServicesSpecNetworkACL& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


  protected:
    // The protocol type. Valid values:
    // 
    // TCP: forwards TCP packets.
    // 
    // UDP: forwards UDP packets.
    // 
    // Any: forwards all packets.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The port number.
    // 
    // This parameter is required.
    std::shared_ptr<float> port_ = nullptr;
    // The source CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
