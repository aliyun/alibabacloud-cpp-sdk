// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESRESPONSEBODYSECONDARYPUBLICIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESRESPONSEBODYSECONDARYPUBLICIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
      DARABONBA_PTR_TO_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
      DARABONBA_PTR_FROM_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
    };
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses() = default ;
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses(const DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses &) = default ;
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses(DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses &&) = default ;
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses() = default ;
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& operator=(const DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses &) = default ;
    DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& operator=(DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrMask_ == nullptr
        && return this->creationTime_ == nullptr && return this->ensRegionId_ == nullptr && return this->gateway_ == nullptr && return this->ipVersion_ == nullptr && return this->isp_ == nullptr
        && return this->secondaryPublicIpAddress_ == nullptr && return this->secondaryPublicIpId_ == nullptr; };
    // cidrMask Field Functions 
    bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
    void deleteCidrMask() { this->cidrMask_ = nullptr;};
    inline int32_t cidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // secondaryPublicIpAddress Field Functions 
    bool hasSecondaryPublicIpAddress() const { return this->secondaryPublicIpAddress_ != nullptr;};
    void deleteSecondaryPublicIpAddress() { this->secondaryPublicIpAddress_ = nullptr;};
    inline string secondaryPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpAddress_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setSecondaryPublicIpAddress(string secondaryPublicIpAddress) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpAddress_, secondaryPublicIpAddress) };


    // secondaryPublicIpId Field Functions 
    bool hasSecondaryPublicIpId() const { return this->secondaryPublicIpId_ != nullptr;};
    void deleteSecondaryPublicIpId() { this->secondaryPublicIpId_ = nullptr;};
    inline string secondaryPublicIpId() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpId_, "") };
    inline DescribeSecondaryPublicIpAddressesResponseBodySecondaryPublicIpAddresses& setSecondaryPublicIpId(string secondaryPublicIpId) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpId_, secondaryPublicIpId) };


  protected:
    // The subnet mask of the CIDR block.
    std::shared_ptr<int32_t> cidrMask_ = nullptr;
    // The time when the secondary public IP address was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The gateway.
    std::shared_ptr<string> gateway_ = nullptr;
    // The version of the IP address. Valid values:
    // 
    // *   **ipv4**
    // *   **ipv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The Internet service provider. Valid values:
    // 
    // *   cmcc: China Mobile.
    // *   unicom: China Unicom.
    // *   telecom: China Telecom.
    std::shared_ptr<string> isp_ = nullptr;
    // The secondary public IP address.
    std::shared_ptr<string> secondaryPublicIpAddress_ = nullptr;
    // The ID of the secondary public IP address.
    std::shared_ptr<string> secondaryPublicIpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
