// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifySecurityGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizeEgress, authorizeEgress_);
      DARABONBA_PTR_TO_JSON(AuthorizeIngress, authorizeIngress_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RevokeEgress, revokeEgress_);
      DARABONBA_PTR_TO_JSON(RevokeIngress, revokeIngress_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizeEgress, authorizeEgress_);
      DARABONBA_PTR_FROM_JSON(AuthorizeIngress, authorizeIngress_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RevokeEgress, revokeEgress_);
      DARABONBA_PTR_FROM_JSON(RevokeIngress, revokeIngress_);
    };
    ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest(ModifySecurityGroupAttributeRequest &&) = default ;
    ModifySecurityGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest& operator=(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest& operator=(ModifySecurityGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RevokeIngress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeIngress& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NicType, nicType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeIngress& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NicType, nicType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      RevokeIngress() = default ;
      RevokeIngress(const RevokeIngress &) = default ;
      RevokeIngress(RevokeIngress &&) = default ;
      RevokeIngress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeIngress() = default ;
      RevokeIngress& operator=(const RevokeIngress &) = default ;
      RevokeIngress& operator=(RevokeIngress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->nicType_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RevokeIngress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline RevokeIngress& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline RevokeIngress& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // nicType Field Functions 
      bool hasNicType() const { return this->nicType_ != nullptr;};
      void deleteNicType() { this->nicType_ = nullptr;};
      inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
      inline RevokeIngress& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline RevokeIngress& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline RevokeIngress& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline RevokeIngress& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline RevokeIngress& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline RevokeIngress& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destCidrIp_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> nicType_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> portRange_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> sourceCidrIp_ {};
      shared_ptr<string> sourcePortRange_ {};
    };

    class RevokeEgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeEgress& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NicType, nicType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeEgress& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NicType, nicType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      RevokeEgress() = default ;
      RevokeEgress(const RevokeEgress &) = default ;
      RevokeEgress(RevokeEgress &&) = default ;
      RevokeEgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeEgress() = default ;
      RevokeEgress& operator=(const RevokeEgress &) = default ;
      RevokeEgress& operator=(RevokeEgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->nicType_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RevokeEgress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline RevokeEgress& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline RevokeEgress& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // nicType Field Functions 
      bool hasNicType() const { return this->nicType_ != nullptr;};
      void deleteNicType() { this->nicType_ = nullptr;};
      inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
      inline RevokeEgress& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline RevokeEgress& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline RevokeEgress& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline RevokeEgress& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline RevokeEgress& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline RevokeEgress& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destCidrIp_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> nicType_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> portRange_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> sourceCidrIp_ {};
      shared_ptr<string> sourcePortRange_ {};
    };

    class AuthorizeIngress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizeIngress& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NicType, nicType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizeIngress& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NicType, nicType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      AuthorizeIngress() = default ;
      AuthorizeIngress(const AuthorizeIngress &) = default ;
      AuthorizeIngress(AuthorizeIngress &&) = default ;
      AuthorizeIngress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizeIngress() = default ;
      AuthorizeIngress& operator=(const AuthorizeIngress &) = default ;
      AuthorizeIngress& operator=(AuthorizeIngress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->nicType_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizeIngress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline AuthorizeIngress& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline AuthorizeIngress& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // nicType Field Functions 
      bool hasNicType() const { return this->nicType_ != nullptr;};
      void deleteNicType() { this->nicType_ = nullptr;};
      inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
      inline AuthorizeIngress& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline AuthorizeIngress& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline AuthorizeIngress& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline AuthorizeIngress& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline AuthorizeIngress& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline AuthorizeIngress& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destCidrIp_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> nicType_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> portRange_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> sourceCidrIp_ {};
      shared_ptr<string> sourcePortRange_ {};
    };

    class AuthorizeEgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizeEgress& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NicType, nicType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizeEgress& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NicType, nicType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      AuthorizeEgress() = default ;
      AuthorizeEgress(const AuthorizeEgress &) = default ;
      AuthorizeEgress(AuthorizeEgress &&) = default ;
      AuthorizeEgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizeEgress() = default ;
      AuthorizeEgress& operator=(const AuthorizeEgress &) = default ;
      AuthorizeEgress& operator=(AuthorizeEgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->nicType_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizeEgress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline AuthorizeEgress& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline AuthorizeEgress& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // nicType Field Functions 
      bool hasNicType() const { return this->nicType_ != nullptr;};
      void deleteNicType() { this->nicType_ = nullptr;};
      inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
      inline AuthorizeEgress& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline AuthorizeEgress& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline AuthorizeEgress& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline AuthorizeEgress& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline AuthorizeEgress& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline AuthorizeEgress& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destCidrIp_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> nicType_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> portRange_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> sourceCidrIp_ {};
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->authorizeEgress_ == nullptr
        && this->authorizeIngress_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->revokeEgress_ == nullptr && this->revokeIngress_ == nullptr; };
    // authorizeEgress Field Functions 
    bool hasAuthorizeEgress() const { return this->authorizeEgress_ != nullptr;};
    void deleteAuthorizeEgress() { this->authorizeEgress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress> & getAuthorizeEgress() const { DARABONBA_PTR_GET_CONST(authorizeEgress_, vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress>) };
    inline vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress> getAuthorizeEgress() { DARABONBA_PTR_GET(authorizeEgress_, vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress>) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeEgress(const vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress> & authorizeEgress) { DARABONBA_PTR_SET_VALUE(authorizeEgress_, authorizeEgress) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeEgress(vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress> && authorizeEgress) { DARABONBA_PTR_SET_RVALUE(authorizeEgress_, authorizeEgress) };


    // authorizeIngress Field Functions 
    bool hasAuthorizeIngress() const { return this->authorizeIngress_ != nullptr;};
    void deleteAuthorizeIngress() { this->authorizeIngress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress> & getAuthorizeIngress() const { DARABONBA_PTR_GET_CONST(authorizeIngress_, vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress>) };
    inline vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress> getAuthorizeIngress() { DARABONBA_PTR_GET(authorizeIngress_, vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress>) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeIngress(const vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress> & authorizeIngress) { DARABONBA_PTR_SET_VALUE(authorizeIngress_, authorizeIngress) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeIngress(vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress> && authorizeIngress) { DARABONBA_PTR_SET_RVALUE(authorizeIngress_, authorizeIngress) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifySecurityGroupAttributeRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySecurityGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revokeEgress Field Functions 
    bool hasRevokeEgress() const { return this->revokeEgress_ != nullptr;};
    void deleteRevokeEgress() { this->revokeEgress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequest::RevokeEgress> & getRevokeEgress() const { DARABONBA_PTR_GET_CONST(revokeEgress_, vector<ModifySecurityGroupAttributeRequest::RevokeEgress>) };
    inline vector<ModifySecurityGroupAttributeRequest::RevokeEgress> getRevokeEgress() { DARABONBA_PTR_GET(revokeEgress_, vector<ModifySecurityGroupAttributeRequest::RevokeEgress>) };
    inline ModifySecurityGroupAttributeRequest& setRevokeEgress(const vector<ModifySecurityGroupAttributeRequest::RevokeEgress> & revokeEgress) { DARABONBA_PTR_SET_VALUE(revokeEgress_, revokeEgress) };
    inline ModifySecurityGroupAttributeRequest& setRevokeEgress(vector<ModifySecurityGroupAttributeRequest::RevokeEgress> && revokeEgress) { DARABONBA_PTR_SET_RVALUE(revokeEgress_, revokeEgress) };


    // revokeIngress Field Functions 
    bool hasRevokeIngress() const { return this->revokeIngress_ != nullptr;};
    void deleteRevokeIngress() { this->revokeIngress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequest::RevokeIngress> & getRevokeIngress() const { DARABONBA_PTR_GET_CONST(revokeIngress_, vector<ModifySecurityGroupAttributeRequest::RevokeIngress>) };
    inline vector<ModifySecurityGroupAttributeRequest::RevokeIngress> getRevokeIngress() { DARABONBA_PTR_GET(revokeIngress_, vector<ModifySecurityGroupAttributeRequest::RevokeIngress>) };
    inline ModifySecurityGroupAttributeRequest& setRevokeIngress(const vector<ModifySecurityGroupAttributeRequest::RevokeIngress> & revokeIngress) { DARABONBA_PTR_SET_VALUE(revokeIngress_, revokeIngress) };
    inline ModifySecurityGroupAttributeRequest& setRevokeIngress(vector<ModifySecurityGroupAttributeRequest::RevokeIngress> && revokeIngress) { DARABONBA_PTR_SET_RVALUE(revokeIngress_, revokeIngress) };


  protected:
    shared_ptr<vector<ModifySecurityGroupAttributeRequest::AuthorizeEgress>> authorizeEgress_ {};
    shared_ptr<vector<ModifySecurityGroupAttributeRequest::AuthorizeIngress>> authorizeIngress_ {};
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<ModifySecurityGroupAttributeRequest::RevokeEgress>> revokeEgress_ {};
    shared_ptr<vector<ModifySecurityGroupAttributeRequest::RevokeIngress>> revokeIngress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
