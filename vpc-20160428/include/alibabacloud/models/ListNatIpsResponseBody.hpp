// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListNatIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatIps, natIps_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIps, natIps_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNatIpsResponseBody() = default ;
    ListNatIpsResponseBody(const ListNatIpsResponseBody &) = default ;
    ListNatIpsResponseBody(ListNatIpsResponseBody &&) = default ;
    ListNatIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpsResponseBody() = default ;
    ListNatIpsResponseBody& operator=(const ListNatIpsResponseBody &) = default ;
    ListNatIpsResponseBody& operator=(ListNatIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatIps& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatIp, natIp_);
        DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
        DARABONBA_PTR_TO_JSON(NatIpDescription, natIpDescription_);
        DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
        DARABONBA_PTR_TO_JSON(NatIpName, natIpName_);
        DARABONBA_PTR_TO_JSON(NatIpStatus, natIpStatus_);
      };
      friend void from_json(const Darabonba::Json& j, NatIps& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
        DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
        DARABONBA_PTR_FROM_JSON(NatIpDescription, natIpDescription_);
        DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
        DARABONBA_PTR_FROM_JSON(NatIpName, natIpName_);
        DARABONBA_PTR_FROM_JSON(NatIpStatus, natIpStatus_);
      };
      NatIps() = default ;
      NatIps(const NatIps &) = default ;
      NatIps(NatIps &&) = default ;
      NatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatIps() = default ;
      NatIps& operator=(const NatIps &) = default ;
      NatIps& operator=(NatIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipv4Prefix_ == nullptr
        && this->isDefault_ == nullptr && this->natGatewayId_ == nullptr && this->natIp_ == nullptr && this->natIpCidr_ == nullptr && this->natIpDescription_ == nullptr
        && this->natIpId_ == nullptr && this->natIpName_ == nullptr && this->natIpStatus_ == nullptr; };
      // ipv4Prefix Field Functions 
      bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
      void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
      inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
      inline NatIps& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline NatIps& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline NatIps& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natIp Field Functions 
      bool hasNatIp() const { return this->natIp_ != nullptr;};
      void deleteNatIp() { this->natIp_ = nullptr;};
      inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
      inline NatIps& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


      // natIpCidr Field Functions 
      bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
      void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
      inline string getNatIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
      inline NatIps& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


      // natIpDescription Field Functions 
      bool hasNatIpDescription() const { return this->natIpDescription_ != nullptr;};
      void deleteNatIpDescription() { this->natIpDescription_ = nullptr;};
      inline string getNatIpDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpDescription_, "") };
      inline NatIps& setNatIpDescription(string natIpDescription) { DARABONBA_PTR_SET_VALUE(natIpDescription_, natIpDescription) };


      // natIpId Field Functions 
      bool hasNatIpId() const { return this->natIpId_ != nullptr;};
      void deleteNatIpId() { this->natIpId_ = nullptr;};
      inline string getNatIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
      inline NatIps& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


      // natIpName Field Functions 
      bool hasNatIpName() const { return this->natIpName_ != nullptr;};
      void deleteNatIpName() { this->natIpName_ = nullptr;};
      inline string getNatIpName() const { DARABONBA_PTR_GET_DEFAULT(natIpName_, "") };
      inline NatIps& setNatIpName(string natIpName) { DARABONBA_PTR_SET_VALUE(natIpName_, natIpName) };


      // natIpStatus Field Functions 
      bool hasNatIpStatus() const { return this->natIpStatus_ != nullptr;};
      void deleteNatIpStatus() { this->natIpStatus_ = nullptr;};
      inline string getNatIpStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpStatus_, "") };
      inline NatIps& setNatIpStatus(string natIpStatus) { DARABONBA_PTR_SET_VALUE(natIpStatus_, natIpStatus) };


    protected:
      // The IP prefix address range to which the queried NAT IP address belongs.
      shared_ptr<string> ipv4Prefix_ {};
      // Indicates whether the IP address is the default IP address of the NAT gateway. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> isDefault_ {};
      // The ID of the Virtual Private Cloud (VPC) NAT gateway to which the IP address is assigned.
      shared_ptr<string> natGatewayId_ {};
      // The IP address.
      shared_ptr<string> natIp_ {};
      // The CIDR block to which the IP address belongs.
      shared_ptr<string> natIpCidr_ {};
      // The description of the IP address.
      shared_ptr<string> natIpDescription_ {};
      // The ID of the IP address.
      shared_ptr<string> natIpId_ {};
      // The name of the IP address.
      shared_ptr<string> natIpName_ {};
      // The status of the IP address. Valid values:
      // 
      // *   **Available**: available
      // *   **Deleted**: deleted
      // *   **Deleting**: deleting
      // *   **Creating**: creating
      // *   **Associated**: specified in an SNAT or DNAT entry
      // *   **Associating**: being specified in an SNAT or DNAT entry
      shared_ptr<string> natIpStatus_ {};
    };

    virtual bool empty() const override { return this->natIps_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natIps Field Functions 
    bool hasNatIps() const { return this->natIps_ != nullptr;};
    void deleteNatIps() { this->natIps_ = nullptr;};
    inline const vector<ListNatIpsResponseBody::NatIps> & getNatIps() const { DARABONBA_PTR_GET_CONST(natIps_, vector<ListNatIpsResponseBody::NatIps>) };
    inline vector<ListNatIpsResponseBody::NatIps> getNatIps() { DARABONBA_PTR_GET(natIps_, vector<ListNatIpsResponseBody::NatIps>) };
    inline ListNatIpsResponseBody& setNatIps(const vector<ListNatIpsResponseBody::NatIps> & natIps) { DARABONBA_PTR_SET_VALUE(natIps_, natIps) };
    inline ListNatIpsResponseBody& setNatIps(vector<ListNatIpsResponseBody::NatIps> && natIps) { DARABONBA_PTR_SET_RVALUE(natIps_, natIps) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNatIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNatIpsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IP addresses of the NAT gateway.
    shared_ptr<vector<ListNatIpsResponseBody::NatIps>> natIps_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of IP addresses that are returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
