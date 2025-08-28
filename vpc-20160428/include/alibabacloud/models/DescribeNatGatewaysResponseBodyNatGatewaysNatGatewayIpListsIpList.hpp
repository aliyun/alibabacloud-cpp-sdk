// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPLISTSIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPLISTSIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(SnatEntryEnabled, snatEntryEnabled_);
      DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(SnatEntryEnabled, snatEntryEnabled_);
      DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->ipAddress_ != nullptr && this->privateIpAddress_ != nullptr && this->snatEntryEnabled_ != nullptr && this->usingStatus_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // snatEntryEnabled Field Functions 
    bool hasSnatEntryEnabled() const { return this->snatEntryEnabled_ != nullptr;};
    void deleteSnatEntryEnabled() { this->snatEntryEnabled_ = nullptr;};
    inline bool snatEntryEnabled() const { DARABONBA_PTR_GET_DEFAULT(snatEntryEnabled_, false) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& setSnatEntryEnabled(bool snatEntryEnabled) { DARABONBA_PTR_SET_VALUE(snatEntryEnabled_, snatEntryEnabled) };


    // usingStatus Field Functions 
    bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
    void deleteUsingStatus() { this->usingStatus_ = nullptr;};
    inline string usingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


  protected:
    // The ID of the EIP associated with the NAT gateway.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The IP address of the EIP associated with the NAT gateway.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The private IP address of the NAT gateway.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // Indicates whether IP addresses that are used in DNAT entries can be specified in SNAT entries. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> snatEntryEnabled_ = nullptr;
    // The association between the EIP and the Internet NAT gateway. Valid values:
    // 
    // *   **UsedByForwardTable**: The EIP is specified in a DNAT entry.
    // *   **UsedBySnatTable**: The EIP is specified in an SNAT entry.
    // *   **UsedByForwardSnatTable**: The EIP is specified in both an SNAT entry and a DNAT entry.
    // *   **Idle**: The EIP is not specified in a DNAT or SNAT entry.
    std::shared_ptr<string> usingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
