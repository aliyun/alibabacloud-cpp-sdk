// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSREQUESTPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSREQUESTPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSecurityGroupPermissionsRequestPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityGroupPermissionsRequestPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityGroupPermissionsRequestPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    DeleteSecurityGroupPermissionsRequestPermissions() = default ;
    DeleteSecurityGroupPermissionsRequestPermissions(const DeleteSecurityGroupPermissionsRequestPermissions &) = default ;
    DeleteSecurityGroupPermissionsRequestPermissions(DeleteSecurityGroupPermissionsRequestPermissions &&) = default ;
    DeleteSecurityGroupPermissionsRequestPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityGroupPermissionsRequestPermissions() = default ;
    DeleteSecurityGroupPermissionsRequestPermissions& operator=(const DeleteSecurityGroupPermissionsRequestPermissions &) = default ;
    DeleteSecurityGroupPermissionsRequestPermissions& operator=(DeleteSecurityGroupPermissionsRequestPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCidrIp_ == nullptr
        && return this->direction_ == nullptr && return this->ipProtocol_ == nullptr && return this->ipv6DestCidrIp_ == nullptr && return this->ipv6SourceCidrIp_ == nullptr && return this->policy_ == nullptr
        && return this->portRange_ == nullptr && return this->priority_ == nullptr && return this->sourceCidrIp_ == nullptr && return this->sourcePortRange_ == nullptr; };
    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string ipv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline DeleteSecurityGroupPermissionsRequestPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<string> ipv6DestCidrIp_ = nullptr;
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> portRange_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
