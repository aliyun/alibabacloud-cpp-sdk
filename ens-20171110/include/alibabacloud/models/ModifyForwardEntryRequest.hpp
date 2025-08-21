// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyForwardEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
    };
    ModifyForwardEntryRequest() = default ;
    ModifyForwardEntryRequest(const ModifyForwardEntryRequest &) = default ;
    ModifyForwardEntryRequest(ModifyForwardEntryRequest &&) = default ;
    ModifyForwardEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardEntryRequest() = default ;
    ModifyForwardEntryRequest& operator=(const ModifyForwardEntryRequest &) = default ;
    ModifyForwardEntryRequest& operator=(ModifyForwardEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalIp_ != nullptr
        && this->externalPort_ != nullptr && this->forwardEntryId_ != nullptr && this->forwardEntryName_ != nullptr && this->healthCheckPort_ != nullptr && this->internalIp_ != nullptr
        && this->internalPort_ != nullptr && this->ipProtocol_ != nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline ModifyForwardEntryRequest& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline ModifyForwardEntryRequest& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string forwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline ModifyForwardEntryRequest& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string forwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline ModifyForwardEntryRequest& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t healthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline ModifyForwardEntryRequest& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline ModifyForwardEntryRequest& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline ModifyForwardEntryRequest& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifyForwardEntryRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


  protected:
    // The EIP in the DNAT entry. The public IP address is used to access the Internet.
    std::shared_ptr<string> externalIp_ = nullptr;
    // The external port or port range that is used for port forwarding.
    // 
    // *   Valid values: 1 to 65535.
    // *   To specify a port range, separate the first port and the last port with a forward slash (/), such as 10/20. The first port and the last port are included.
    // *   If you set ExternalPort to a port range, you must also set InternalPort to a port range. The number of ports in the port ranges must be the same. For example, if you set ExternalPort to 10/20, you can set InternalPort to 80/90.
    // *   The maximum port range is 1000.
    std::shared_ptr<string> externalPort_ = nullptr;
    // The ID of the DNAT entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> forwardEntryId_ = nullptr;
    // The name of the DNAT entry. The name must be 2 to 128 characters in length. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> forwardEntryName_ = nullptr;
    // The probe port. The port must be within the internal port range. By default, this parameter is left empty.
    std::shared_ptr<int32_t> healthCheckPort_ = nullptr;
    // The private IP address of the instance that uses the DNAT entry for Internet communication.
    std::shared_ptr<string> internalIp_ = nullptr;
    // The private port or port range that is used in port forwarding.
    // 
    // *   Valid values: 1 to 65535.
    // *   To specify a port range, separate the first port and the last port with a forward slash (/), such as 10/20. The first port and the last port are included.
    // *   If you set InternalPort to a port range, you must also set ExternalPort to a port range. The number of ports in the port ranges must be the same. For example, if you set ExternalPort to 10/20, you can set InternalPort to 80/90.
    // *   The maximum port range is 1000.
    std::shared_ptr<string> internalPort_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **TCP**: forwards TCP packets.
    // *   **UDP**: forwards UDP packets.
    // *   **Any** (default): forwards all packets.
    std::shared_ptr<string> ipProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
