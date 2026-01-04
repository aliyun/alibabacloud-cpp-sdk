// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODY_HPP_
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
  class ListNatIpCidrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpCidrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpCidrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNatIpCidrsResponseBody() = default ;
    ListNatIpCidrsResponseBody(const ListNatIpCidrsResponseBody &) = default ;
    ListNatIpCidrsResponseBody(ListNatIpCidrsResponseBody &&) = default ;
    ListNatIpCidrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpCidrsResponseBody() = default ;
    ListNatIpCidrsResponseBody& operator=(const ListNatIpCidrsResponseBody &) = default ;
    ListNatIpCidrsResponseBody& operator=(ListNatIpCidrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatIpCidrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatIpCidrs& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
        DARABONBA_PTR_TO_JSON(NatIpCidrDescription, natIpCidrDescription_);
        DARABONBA_PTR_TO_JSON(NatIpCidrId, natIpCidrId_);
        DARABONBA_PTR_TO_JSON(NatIpCidrName, natIpCidrName_);
        DARABONBA_PTR_TO_JSON(NatIpCidrStatus, natIpCidrStatus_);
      };
      friend void from_json(const Darabonba::Json& j, NatIpCidrs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
        DARABONBA_PTR_FROM_JSON(NatIpCidrDescription, natIpCidrDescription_);
        DARABONBA_PTR_FROM_JSON(NatIpCidrId, natIpCidrId_);
        DARABONBA_PTR_FROM_JSON(NatIpCidrName, natIpCidrName_);
        DARABONBA_PTR_FROM_JSON(NatIpCidrStatus, natIpCidrStatus_);
      };
      NatIpCidrs() = default ;
      NatIpCidrs(const NatIpCidrs &) = default ;
      NatIpCidrs(NatIpCidrs &&) = default ;
      NatIpCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatIpCidrs() = default ;
      NatIpCidrs& operator=(const NatIpCidrs &) = default ;
      NatIpCidrs& operator=(NatIpCidrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->isDefault_ == nullptr && this->natGatewayId_ == nullptr && this->natIpCidr_ == nullptr && this->natIpCidrDescription_ == nullptr && this->natIpCidrId_ == nullptr
        && this->natIpCidrName_ == nullptr && this->natIpCidrStatus_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline NatIpCidrs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline NatIpCidrs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline NatIpCidrs& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natIpCidr Field Functions 
      bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
      void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
      inline string getNatIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
      inline NatIpCidrs& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


      // natIpCidrDescription Field Functions 
      bool hasNatIpCidrDescription() const { return this->natIpCidrDescription_ != nullptr;};
      void deleteNatIpCidrDescription() { this->natIpCidrDescription_ = nullptr;};
      inline string getNatIpCidrDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrDescription_, "") };
      inline NatIpCidrs& setNatIpCidrDescription(string natIpCidrDescription) { DARABONBA_PTR_SET_VALUE(natIpCidrDescription_, natIpCidrDescription) };


      // natIpCidrId Field Functions 
      bool hasNatIpCidrId() const { return this->natIpCidrId_ != nullptr;};
      void deleteNatIpCidrId() { this->natIpCidrId_ = nullptr;};
      inline string getNatIpCidrId() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrId_, "") };
      inline NatIpCidrs& setNatIpCidrId(string natIpCidrId) { DARABONBA_PTR_SET_VALUE(natIpCidrId_, natIpCidrId) };


      // natIpCidrName Field Functions 
      bool hasNatIpCidrName() const { return this->natIpCidrName_ != nullptr;};
      void deleteNatIpCidrName() { this->natIpCidrName_ = nullptr;};
      inline string getNatIpCidrName() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrName_, "") };
      inline NatIpCidrs& setNatIpCidrName(string natIpCidrName) { DARABONBA_PTR_SET_VALUE(natIpCidrName_, natIpCidrName) };


      // natIpCidrStatus Field Functions 
      bool hasNatIpCidrStatus() const { return this->natIpCidrStatus_ != nullptr;};
      void deleteNatIpCidrStatus() { this->natIpCidrStatus_ = nullptr;};
      inline string getNatIpCidrStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrStatus_, "") };
      inline NatIpCidrs& setNatIpCidrStatus(string natIpCidrStatus) { DARABONBA_PTR_SET_VALUE(natIpCidrStatus_, natIpCidrStatus) };


    protected:
      // The time when the CIDR block was created.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the CIDR block is the default CIDR block of the NAT gateway. Valid values:
      // 
      // *   **true**: The CIDR block is the default CIDR block of the NAT gateway.
      // *   **false**: The CIDR block is not the default CIDR block of the NAT gateway.
      shared_ptr<bool> isDefault_ {};
      // The ID of the VPC NAT gateway.
      shared_ptr<string> natGatewayId_ {};
      // The CIDR block of the NAT gateway.
      shared_ptr<string> natIpCidr_ {};
      // The description of the CIDR block of the NAT gateway.
      shared_ptr<string> natIpCidrDescription_ {};
      // The ID of the CIDR block of the NAT gateway.
      shared_ptr<string> natIpCidrId_ {};
      // The name of the CIDR block of the NAT gateway.
      shared_ptr<string> natIpCidrName_ {};
      // The status of the CIDR block of the NAT gateway. If **Available** is returned, it indicates that the CIDR block is available.
      shared_ptr<string> natIpCidrStatus_ {};
    };

    virtual bool empty() const override { return this->natIpCidrs_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natIpCidrs Field Functions 
    bool hasNatIpCidrs() const { return this->natIpCidrs_ != nullptr;};
    void deleteNatIpCidrs() { this->natIpCidrs_ = nullptr;};
    inline const vector<ListNatIpCidrsResponseBody::NatIpCidrs> & getNatIpCidrs() const { DARABONBA_PTR_GET_CONST(natIpCidrs_, vector<ListNatIpCidrsResponseBody::NatIpCidrs>) };
    inline vector<ListNatIpCidrsResponseBody::NatIpCidrs> getNatIpCidrs() { DARABONBA_PTR_GET(natIpCidrs_, vector<ListNatIpCidrsResponseBody::NatIpCidrs>) };
    inline ListNatIpCidrsResponseBody& setNatIpCidrs(const vector<ListNatIpCidrsResponseBody::NatIpCidrs> & natIpCidrs) { DARABONBA_PTR_SET_VALUE(natIpCidrs_, natIpCidrs) };
    inline ListNatIpCidrsResponseBody& setNatIpCidrs(vector<ListNatIpCidrsResponseBody::NatIpCidrs> && natIpCidrs) { DARABONBA_PTR_SET_RVALUE(natIpCidrs_, natIpCidrs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpCidrsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNatIpCidrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNatIpCidrsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The CIDR blocks of the NAT gateway.
    shared_ptr<vector<ListNatIpCidrsResponseBody::NatIpCidrs>> natIpCidrs_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of CIDR blocks that are returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
