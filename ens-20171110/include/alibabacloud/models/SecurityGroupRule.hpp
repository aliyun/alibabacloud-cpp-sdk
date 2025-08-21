// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECURITYGROUPRULE_HPP_
#define ALIBABACLOUD_MODELS_SECURITYGROUPRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SecurityGroupRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecurityGroupRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, SecurityGroupRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
    };
    SecurityGroupRule() = default ;
    SecurityGroupRule(const SecurityGroupRule &) = default ;
    SecurityGroupRule(SecurityGroupRule &&) = default ;
    SecurityGroupRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecurityGroupRule() = default ;
    SecurityGroupRule& operator=(const SecurityGroupRule &) = default ;
    SecurityGroupRule& operator=(SecurityGroupRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->destCidrIp_ != nullptr && this->direction_ != nullptr && this->ipProtocol_ != nullptr && this->policy_ != nullptr && this->portRange_ != nullptr
        && this->sourceCidrIp_ != nullptr && this->sourcePortRange_ != nullptr && this->priority_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SecurityGroupRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline SecurityGroupRule& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline SecurityGroupRule& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline SecurityGroupRule& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline SecurityGroupRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline SecurityGroupRule& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline SecurityGroupRule& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline SecurityGroupRule& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline SecurityGroupRule& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destCidrIp_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> portRange_ = nullptr;
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    std::shared_ptr<string> sourcePortRange_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
