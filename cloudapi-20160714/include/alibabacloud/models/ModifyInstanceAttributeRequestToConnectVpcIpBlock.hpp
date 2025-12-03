// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUESTTOCONNECTVPCIPBLOCK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUESTTOCONNECTVPCIPBLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyInstanceAttributeRequestToConnectVpcIpBlock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequestToConnectVpcIpBlock& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Customized, customized_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequestToConnectVpcIpBlock& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Customized, customized_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ModifyInstanceAttributeRequestToConnectVpcIpBlock() = default ;
    ModifyInstanceAttributeRequestToConnectVpcIpBlock(const ModifyInstanceAttributeRequestToConnectVpcIpBlock &) = default ;
    ModifyInstanceAttributeRequestToConnectVpcIpBlock(ModifyInstanceAttributeRequestToConnectVpcIpBlock &&) = default ;
    ModifyInstanceAttributeRequestToConnectVpcIpBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequestToConnectVpcIpBlock() = default ;
    ModifyInstanceAttributeRequestToConnectVpcIpBlock& operator=(const ModifyInstanceAttributeRequestToConnectVpcIpBlock &) = default ;
    ModifyInstanceAttributeRequestToConnectVpcIpBlock& operator=(ModifyInstanceAttributeRequestToConnectVpcIpBlock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->customized_ == nullptr && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ModifyInstanceAttributeRequestToConnectVpcIpBlock& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // customized Field Functions 
    bool hasCustomized() const { return this->customized_ != nullptr;};
    void deleteCustomized() { this->customized_ = nullptr;};
    inline bool customized() const { DARABONBA_PTR_GET_DEFAULT(customized_, false) };
    inline ModifyInstanceAttributeRequestToConnectVpcIpBlock& setCustomized(bool customized) { DARABONBA_PTR_SET_VALUE(customized_, customized) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ModifyInstanceAttributeRequestToConnectVpcIpBlock& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyInstanceAttributeRequestToConnectVpcIpBlock& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The CIDR block of the VSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // Specifies whether the CIDR block is a custom CIDR block.
    std::shared_ptr<bool> customized_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
