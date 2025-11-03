// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODYNATIPCIDRS_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODYNATIPCIDRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListNatIpCidrsResponseBodyNatIpCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpCidrsResponseBodyNatIpCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_TO_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_TO_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_TO_JSON(NatIpCidrStatus, natIpCidrStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpCidrsResponseBodyNatIpCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrStatus, natIpCidrStatus_);
    };
    ListNatIpCidrsResponseBodyNatIpCidrs() = default ;
    ListNatIpCidrsResponseBodyNatIpCidrs(const ListNatIpCidrsResponseBodyNatIpCidrs &) = default ;
    ListNatIpCidrsResponseBodyNatIpCidrs(ListNatIpCidrsResponseBodyNatIpCidrs &&) = default ;
    ListNatIpCidrsResponseBodyNatIpCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpCidrsResponseBodyNatIpCidrs() = default ;
    ListNatIpCidrsResponseBodyNatIpCidrs& operator=(const ListNatIpCidrsResponseBodyNatIpCidrs &) = default ;
    ListNatIpCidrsResponseBodyNatIpCidrs& operator=(ListNatIpCidrsResponseBodyNatIpCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->isDefault_ == nullptr && return this->natGatewayId_ == nullptr && return this->natIpCidr_ == nullptr && return this->natIpCidrDescription_ == nullptr && return this->natIpCidrId_ == nullptr
        && return this->natIpCidrName_ == nullptr && return this->natIpCidrStatus_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string natIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpCidrDescription Field Functions 
    bool hasNatIpCidrDescription() const { return this->natIpCidrDescription_ != nullptr;};
    void deleteNatIpCidrDescription() { this->natIpCidrDescription_ = nullptr;};
    inline string natIpCidrDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrDescription_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatIpCidrDescription(string natIpCidrDescription) { DARABONBA_PTR_SET_VALUE(natIpCidrDescription_, natIpCidrDescription) };


    // natIpCidrId Field Functions 
    bool hasNatIpCidrId() const { return this->natIpCidrId_ != nullptr;};
    void deleteNatIpCidrId() { this->natIpCidrId_ = nullptr;};
    inline string natIpCidrId() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrId_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatIpCidrId(string natIpCidrId) { DARABONBA_PTR_SET_VALUE(natIpCidrId_, natIpCidrId) };


    // natIpCidrName Field Functions 
    bool hasNatIpCidrName() const { return this->natIpCidrName_ != nullptr;};
    void deleteNatIpCidrName() { this->natIpCidrName_ = nullptr;};
    inline string natIpCidrName() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrName_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatIpCidrName(string natIpCidrName) { DARABONBA_PTR_SET_VALUE(natIpCidrName_, natIpCidrName) };


    // natIpCidrStatus Field Functions 
    bool hasNatIpCidrStatus() const { return this->natIpCidrStatus_ != nullptr;};
    void deleteNatIpCidrStatus() { this->natIpCidrStatus_ = nullptr;};
    inline string natIpCidrStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrStatus_, "") };
    inline ListNatIpCidrsResponseBodyNatIpCidrs& setNatIpCidrStatus(string natIpCidrStatus) { DARABONBA_PTR_SET_VALUE(natIpCidrStatus_, natIpCidrStatus) };


  protected:
    // The time when the CIDR block was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the CIDR block is the default CIDR block of the NAT gateway. Valid values:
    // 
    // *   **true**: The CIDR block is the default CIDR block of the NAT gateway.
    // *   **false**: The CIDR block is not the default CIDR block of the NAT gateway.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the VPC NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The CIDR block of the NAT gateway.
    std::shared_ptr<string> natIpCidr_ = nullptr;
    // The description of the CIDR block of the NAT gateway.
    std::shared_ptr<string> natIpCidrDescription_ = nullptr;
    // The ID of the CIDR block of the NAT gateway.
    std::shared_ptr<string> natIpCidrId_ = nullptr;
    // The name of the CIDR block of the NAT gateway.
    std::shared_ptr<string> natIpCidrName_ = nullptr;
    // The status of the CIDR block of the NAT gateway. If **Available** is returned, it indicates that the CIDR block is available.
    std::shared_ptr<string> natIpCidrStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
