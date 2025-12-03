// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTZONEVSWITCHSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTZONEVSWITCHSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateInstanceRequestZoneVSwitchSecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestZoneVSwitchSecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestZoneVSwitchSecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceRequestZoneVSwitchSecurityGroup() = default ;
    CreateInstanceRequestZoneVSwitchSecurityGroup(const CreateInstanceRequestZoneVSwitchSecurityGroup &) = default ;
    CreateInstanceRequestZoneVSwitchSecurityGroup(CreateInstanceRequestZoneVSwitchSecurityGroup &&) = default ;
    CreateInstanceRequestZoneVSwitchSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestZoneVSwitchSecurityGroup() = default ;
    CreateInstanceRequestZoneVSwitchSecurityGroup& operator=(const CreateInstanceRequestZoneVSwitchSecurityGroup &) = default ;
    CreateInstanceRequestZoneVSwitchSecurityGroup& operator=(CreateInstanceRequestZoneVSwitchSecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateInstanceRequestZoneVSwitchSecurityGroup& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateInstanceRequestZoneVSwitchSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequestZoneVSwitchSecurityGroup& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequestZoneVSwitchSecurityGroup& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The IPv4 CIDR block for the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The ID of the security group. Services in the same security group can access each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
