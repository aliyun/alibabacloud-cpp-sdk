// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATIPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATIPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatIpAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatIpAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpDescription, natIpDescription_);
      DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_TO_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_TO_JSON(NatIpStatus, natIpStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatIpAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpDescription, natIpDescription_);
      DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_FROM_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_FROM_JSON(NatIpStatus, natIpStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNatIpAttributeResponseBody() = default ;
    GetNatIpAttributeResponseBody(const GetNatIpAttributeResponseBody &) = default ;
    GetNatIpAttributeResponseBody(GetNatIpAttributeResponseBody &&) = default ;
    GetNatIpAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatIpAttributeResponseBody() = default ;
    GetNatIpAttributeResponseBody& operator=(const GetNatIpAttributeResponseBody &) = default ;
    GetNatIpAttributeResponseBody& operator=(GetNatIpAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->natGatewayId_ == nullptr && this->natIp_ == nullptr && this->natIpCidr_ == nullptr && this->natIpDescription_ == nullptr && this->natIpId_ == nullptr
        && this->natIpName_ == nullptr && this->natIpStatus_ == nullptr && this->requestId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetNatIpAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline GetNatIpAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline GetNatIpAttributeResponseBody& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string getNatIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline GetNatIpAttributeResponseBody& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpDescription Field Functions 
    bool hasNatIpDescription() const { return this->natIpDescription_ != nullptr;};
    void deleteNatIpDescription() { this->natIpDescription_ = nullptr;};
    inline string getNatIpDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpDescription_, "") };
    inline GetNatIpAttributeResponseBody& setNatIpDescription(string natIpDescription) { DARABONBA_PTR_SET_VALUE(natIpDescription_, natIpDescription) };


    // natIpId Field Functions 
    bool hasNatIpId() const { return this->natIpId_ != nullptr;};
    void deleteNatIpId() { this->natIpId_ = nullptr;};
    inline string getNatIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
    inline GetNatIpAttributeResponseBody& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


    // natIpName Field Functions 
    bool hasNatIpName() const { return this->natIpName_ != nullptr;};
    void deleteNatIpName() { this->natIpName_ = nullptr;};
    inline string getNatIpName() const { DARABONBA_PTR_GET_DEFAULT(natIpName_, "") };
    inline GetNatIpAttributeResponseBody& setNatIpName(string natIpName) { DARABONBA_PTR_SET_VALUE(natIpName_, natIpName) };


    // natIpStatus Field Functions 
    bool hasNatIpStatus() const { return this->natIpStatus_ != nullptr;};
    void deleteNatIpStatus() { this->natIpStatus_ = nullptr;};
    inline string getNatIpStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpStatus_, "") };
    inline GetNatIpAttributeResponseBody& setNatIpStatus(string natIpStatus) { DARABONBA_PTR_SET_VALUE(natIpStatus_, natIpStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatIpAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The creation time of the queried NAT IP address.
    shared_ptr<string> creationTime_ {};
    // The ID of the VPC NAT gateway instance to which the queried NAT IP address belongs.
    shared_ptr<string> natGatewayId_ {};
    // The queried NAT IP address.
    shared_ptr<string> natIp_ {};
    // The address range where the queried NAT IP address is located.
    shared_ptr<string> natIpCidr_ {};
    // Description of the queried NAT IP address.
    shared_ptr<string> natIpDescription_ {};
    // The ID of the queried NAT IP address instance.
    shared_ptr<string> natIpId_ {};
    // Name of the queried NAT IP address.
    shared_ptr<string> natIpName_ {};
    // The status of the queried NAT IP address. Values:
    // - **Available**: Available.
    //  - **Deleting**: Deleting.
    //  - **Creating**: Creating.
    shared_ptr<string> natIpStatus_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
