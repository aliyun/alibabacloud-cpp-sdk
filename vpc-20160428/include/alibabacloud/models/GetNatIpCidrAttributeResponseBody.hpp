// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATIPCIDRATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATIPCIDRATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatIpCidrAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatIpCidrAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_TO_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_TO_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_TO_JSON(NatIpCidrStatus, natIpCidrStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatIpCidrAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrDescription, natIpCidrDescription_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrStatus, natIpCidrStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNatIpCidrAttributeResponseBody() = default ;
    GetNatIpCidrAttributeResponseBody(const GetNatIpCidrAttributeResponseBody &) = default ;
    GetNatIpCidrAttributeResponseBody(GetNatIpCidrAttributeResponseBody &&) = default ;
    GetNatIpCidrAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatIpCidrAttributeResponseBody() = default ;
    GetNatIpCidrAttributeResponseBody& operator=(const GetNatIpCidrAttributeResponseBody &) = default ;
    GetNatIpCidrAttributeResponseBody& operator=(GetNatIpCidrAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natGatewayId_ == nullptr
        && this->natIpCidr_ == nullptr && this->natIpCidrDescription_ == nullptr && this->natIpCidrId_ == nullptr && this->natIpCidrName_ == nullptr && this->natIpCidrStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string getNatIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpCidrDescription Field Functions 
    bool hasNatIpCidrDescription() const { return this->natIpCidrDescription_ != nullptr;};
    void deleteNatIpCidrDescription() { this->natIpCidrDescription_ = nullptr;};
    inline string getNatIpCidrDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrDescription_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatIpCidrDescription(string natIpCidrDescription) { DARABONBA_PTR_SET_VALUE(natIpCidrDescription_, natIpCidrDescription) };


    // natIpCidrId Field Functions 
    bool hasNatIpCidrId() const { return this->natIpCidrId_ != nullptr;};
    void deleteNatIpCidrId() { this->natIpCidrId_ = nullptr;};
    inline string getNatIpCidrId() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrId_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatIpCidrId(string natIpCidrId) { DARABONBA_PTR_SET_VALUE(natIpCidrId_, natIpCidrId) };


    // natIpCidrName Field Functions 
    bool hasNatIpCidrName() const { return this->natIpCidrName_ != nullptr;};
    void deleteNatIpCidrName() { this->natIpCidrName_ = nullptr;};
    inline string getNatIpCidrName() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrName_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatIpCidrName(string natIpCidrName) { DARABONBA_PTR_SET_VALUE(natIpCidrName_, natIpCidrName) };


    // natIpCidrStatus Field Functions 
    bool hasNatIpCidrStatus() const { return this->natIpCidrStatus_ != nullptr;};
    void deleteNatIpCidrStatus() { this->natIpCidrStatus_ = nullptr;};
    inline string getNatIpCidrStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrStatus_, "") };
    inline GetNatIpCidrAttributeResponseBody& setNatIpCidrStatus(string natIpCidrStatus) { DARABONBA_PTR_SET_VALUE(natIpCidrStatus_, natIpCidrStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatIpCidrAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the VPC NAT gateway instance to which the queried NAT IP address range belongs.
    shared_ptr<string> natGatewayId_ {};
    // The queried NAT IP address range.
    shared_ptr<string> natIpCidr_ {};
    // Description of the queried NAT IP address range.
    shared_ptr<string> natIpCidrDescription_ {};
    // The instance ID of the queried NAT IP address range.
    shared_ptr<string> natIpCidrId_ {};
    // The name of the queried NAT IP address range.
    shared_ptr<string> natIpCidrName_ {};
    // The status of the queried NAT IP address segment. Values:
    // - Available: Available status.
    // - Deleting: In the process of being deleted.
    // - Creating: In the process of being created.
    shared_ptr<string> natIpCidrStatus_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
