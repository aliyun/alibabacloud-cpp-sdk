// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYIPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyIpList& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
    };
    GetNatGatewayAttributeResponseBodyIpList() = default ;
    GetNatGatewayAttributeResponseBodyIpList(const GetNatGatewayAttributeResponseBodyIpList &) = default ;
    GetNatGatewayAttributeResponseBodyIpList(GetNatGatewayAttributeResponseBodyIpList &&) = default ;
    GetNatGatewayAttributeResponseBodyIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyIpList() = default ;
    GetNatGatewayAttributeResponseBodyIpList& operator=(const GetNatGatewayAttributeResponseBodyIpList &) = default ;
    GetNatGatewayAttributeResponseBodyIpList& operator=(GetNatGatewayAttributeResponseBodyIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->ipAddress_ == nullptr && return this->usingStatus_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline GetNatGatewayAttributeResponseBodyIpList& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline GetNatGatewayAttributeResponseBodyIpList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // usingStatus Field Functions 
    bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
    void deleteUsingStatus() { this->usingStatus_ = nullptr;};
    inline string usingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
    inline GetNatGatewayAttributeResponseBodyIpList& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


  protected:
    // The ID of the EIP.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The IP address of the EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The association status of the EIP.
    // 
    // *   **idle**: The EIP is not specified in an SNAT entry or a DNAT entry.
    // *   **UsedBySnatTable**: The EIP is specified in an SNAT entry.
    // *   **UsedByForwardTable**: The EIP is specified in a DNAT entry.
    std::shared_ptr<string> usingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
