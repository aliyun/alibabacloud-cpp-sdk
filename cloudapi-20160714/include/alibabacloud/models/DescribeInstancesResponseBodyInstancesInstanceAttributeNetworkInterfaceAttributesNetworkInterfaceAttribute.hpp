// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTENETWORKINTERFACEATTRIBUTESNETWORKINTERFACEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTENETWORKINTERFACEATTRIBUTESNETWORKINTERFACEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute(const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute(DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The CIDR block of the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The security group ID. Services in the same security group can access each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
