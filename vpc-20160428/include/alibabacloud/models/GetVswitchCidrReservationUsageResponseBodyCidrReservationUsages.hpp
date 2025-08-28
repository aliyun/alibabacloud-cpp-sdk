// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODYCIDRRESERVATIONUSAGES_HPP_
#define ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODYCIDRRESERVATIONUSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& obj) { 
      DARABONBA_PTR_TO_JSON(IpPrefixCidr, ipPrefixCidr_);
      DARABONBA_PTR_TO_JSON(IpPrefixId, ipPrefixId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPrefixCidr, ipPrefixCidr_);
      DARABONBA_PTR_FROM_JSON(IpPrefixId, ipPrefixId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages() = default ;
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages(const GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages &) = default ;
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages(GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages &&) = default ;
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages() = default ;
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& operator=(const GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages &) = default ;
    GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& operator=(GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipPrefixCidr_ != nullptr
        && this->ipPrefixId_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->vSwitchCidrReservationId_ != nullptr && this->vSwitchId_ != nullptr; };
    // ipPrefixCidr Field Functions 
    bool hasIpPrefixCidr() const { return this->ipPrefixCidr_ != nullptr;};
    void deleteIpPrefixCidr() { this->ipPrefixCidr_ = nullptr;};
    inline string ipPrefixCidr() const { DARABONBA_PTR_GET_DEFAULT(ipPrefixCidr_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setIpPrefixCidr(string ipPrefixCidr) { DARABONBA_PTR_SET_VALUE(ipPrefixCidr_, ipPrefixCidr) };


    // ipPrefixId Field Functions 
    bool hasIpPrefixId() const { return this->ipPrefixId_ != nullptr;};
    void deleteIpPrefixId() { this->ipPrefixId_ = nullptr;};
    inline string ipPrefixId() const { DARABONBA_PTR_GET_DEFAULT(ipPrefixId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setIpPrefixId(string ipPrefixId) { DARABONBA_PTR_SET_VALUE(ipPrefixId_, ipPrefixId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // vSwitchCidrReservationId Field Functions 
    bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
    void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
    inline string vSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The CIDR block allocated to the ENI from the reserved CIDR block.
    std::shared_ptr<string> ipPrefixCidr_ = nullptr;
    // The ID of the reserved CIDR block.
    std::shared_ptr<string> ipPrefixId_ = nullptr;
    // The ID of the elastic network interface (ENI) whose CIDR block is allocated from the reserved CIDR block.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource to which a CIDR block is allocated from the reserved CIDR block. Only **NetworkInterface** may be returned, which indicates an ENI.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationId_ = nullptr;
    // The ID of the vSwitch to which the reserved CIDR block belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
