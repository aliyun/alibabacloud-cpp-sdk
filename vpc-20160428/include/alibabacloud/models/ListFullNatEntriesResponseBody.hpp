// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODY_HPP_
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
  class ListFullNatEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFullNatEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FullNatEntries, fullNatEntries_);
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFullNatEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FullNatEntries, fullNatEntries_);
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFullNatEntriesResponseBody() = default ;
    ListFullNatEntriesResponseBody(const ListFullNatEntriesResponseBody &) = default ;
    ListFullNatEntriesResponseBody(ListFullNatEntriesResponseBody &&) = default ;
    ListFullNatEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFullNatEntriesResponseBody() = default ;
    ListFullNatEntriesResponseBody& operator=(const ListFullNatEntriesResponseBody &) = default ;
    ListFullNatEntriesResponseBody& operator=(ListFullNatEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FullNatEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FullNatEntries& obj) { 
        DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_TO_JSON(AccessPort, accessPort_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(FullNatEntryDescription, fullNatEntryDescription_);
        DARABONBA_PTR_TO_JSON(FullNatEntryId, fullNatEntryId_);
        DARABONBA_PTR_TO_JSON(FullNatEntryName, fullNatEntryName_);
        DARABONBA_PTR_TO_JSON(FullNatEntryStatus, fullNatEntryStatus_);
        DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(NatIp, natIp_);
        DARABONBA_PTR_TO_JSON(NatIpPort, natIpPort_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceType, networkInterfaceType_);
      };
      friend void from_json(const Darabonba::Json& j, FullNatEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_FROM_JSON(AccessPort, accessPort_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(FullNatEntryDescription, fullNatEntryDescription_);
        DARABONBA_PTR_FROM_JSON(FullNatEntryId, fullNatEntryId_);
        DARABONBA_PTR_FROM_JSON(FullNatEntryName, fullNatEntryName_);
        DARABONBA_PTR_FROM_JSON(FullNatEntryStatus, fullNatEntryStatus_);
        DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
        DARABONBA_PTR_FROM_JSON(NatIpPort, natIpPort_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceType, networkInterfaceType_);
      };
      FullNatEntries() = default ;
      FullNatEntries(const FullNatEntries &) = default ;
      FullNatEntries(FullNatEntries &&) = default ;
      FullNatEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FullNatEntries() = default ;
      FullNatEntries& operator=(const FullNatEntries &) = default ;
      FullNatEntries& operator=(FullNatEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->accessPort_ == nullptr && this->creationTime_ == nullptr && this->fullNatEntryDescription_ == nullptr && this->fullNatEntryId_ == nullptr && this->fullNatEntryName_ == nullptr
        && this->fullNatEntryStatus_ == nullptr && this->fullNatTableId_ == nullptr && this->ipProtocol_ == nullptr && this->natIp_ == nullptr && this->natIpPort_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->networkInterfaceType_ == nullptr; };
      // accessIp Field Functions 
      bool hasAccessIp() const { return this->accessIp_ != nullptr;};
      void deleteAccessIp() { this->accessIp_ = nullptr;};
      inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
      inline FullNatEntries& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


      // accessPort Field Functions 
      bool hasAccessPort() const { return this->accessPort_ != nullptr;};
      void deleteAccessPort() { this->accessPort_ = nullptr;};
      inline string getAccessPort() const { DARABONBA_PTR_GET_DEFAULT(accessPort_, "") };
      inline FullNatEntries& setAccessPort(string accessPort) { DARABONBA_PTR_SET_VALUE(accessPort_, accessPort) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline FullNatEntries& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // fullNatEntryDescription Field Functions 
      bool hasFullNatEntryDescription() const { return this->fullNatEntryDescription_ != nullptr;};
      void deleteFullNatEntryDescription() { this->fullNatEntryDescription_ = nullptr;};
      inline string getFullNatEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryDescription_, "") };
      inline FullNatEntries& setFullNatEntryDescription(string fullNatEntryDescription) { DARABONBA_PTR_SET_VALUE(fullNatEntryDescription_, fullNatEntryDescription) };


      // fullNatEntryId Field Functions 
      bool hasFullNatEntryId() const { return this->fullNatEntryId_ != nullptr;};
      void deleteFullNatEntryId() { this->fullNatEntryId_ = nullptr;};
      inline string getFullNatEntryId() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryId_, "") };
      inline FullNatEntries& setFullNatEntryId(string fullNatEntryId) { DARABONBA_PTR_SET_VALUE(fullNatEntryId_, fullNatEntryId) };


      // fullNatEntryName Field Functions 
      bool hasFullNatEntryName() const { return this->fullNatEntryName_ != nullptr;};
      void deleteFullNatEntryName() { this->fullNatEntryName_ = nullptr;};
      inline string getFullNatEntryName() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryName_, "") };
      inline FullNatEntries& setFullNatEntryName(string fullNatEntryName) { DARABONBA_PTR_SET_VALUE(fullNatEntryName_, fullNatEntryName) };


      // fullNatEntryStatus Field Functions 
      bool hasFullNatEntryStatus() const { return this->fullNatEntryStatus_ != nullptr;};
      void deleteFullNatEntryStatus() { this->fullNatEntryStatus_ = nullptr;};
      inline string getFullNatEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryStatus_, "") };
      inline FullNatEntries& setFullNatEntryStatus(string fullNatEntryStatus) { DARABONBA_PTR_SET_VALUE(fullNatEntryStatus_, fullNatEntryStatus) };


      // fullNatTableId Field Functions 
      bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
      void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
      inline string getFullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
      inline FullNatEntries& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline FullNatEntries& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // natIp Field Functions 
      bool hasNatIp() const { return this->natIp_ != nullptr;};
      void deleteNatIp() { this->natIp_ = nullptr;};
      inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
      inline FullNatEntries& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


      // natIpPort Field Functions 
      bool hasNatIpPort() const { return this->natIpPort_ != nullptr;};
      void deleteNatIpPort() { this->natIpPort_ = nullptr;};
      inline string getNatIpPort() const { DARABONBA_PTR_GET_DEFAULT(natIpPort_, "") };
      inline FullNatEntries& setNatIpPort(string natIpPort) { DARABONBA_PTR_SET_VALUE(natIpPort_, natIpPort) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline FullNatEntries& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfaceType Field Functions 
      bool hasNetworkInterfaceType() const { return this->networkInterfaceType_ != nullptr;};
      void deleteNetworkInterfaceType() { this->networkInterfaceType_ = nullptr;};
      inline string getNetworkInterfaceType() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceType_, "") };
      inline FullNatEntries& setNetworkInterfaceType(string networkInterfaceType) { DARABONBA_PTR_SET_VALUE(networkInterfaceType_, networkInterfaceType) };


    protected:
      // The backend IP address that is used for FULLNAT address translation in FULLNAT entries.
      shared_ptr<string> accessIp_ {};
      // The backend port that is used for port mapping in FULLNAT entries. Valid values: **1** to **65535**.
      shared_ptr<string> accessPort_ {};
      // The time when the FULLNAT entry was created.
      shared_ptr<string> creationTime_ {};
      // The description of the FULLNAT entry.
      // 
      // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
      shared_ptr<string> fullNatEntryDescription_ {};
      // The ID of the FULLNAT entry.
      shared_ptr<string> fullNatEntryId_ {};
      // The name of the FULLNAT entry.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
      shared_ptr<string> fullNatEntryName_ {};
      // The status of the FULLNAT entry. Valid values:
      // 
      // *   **Pending**
      // *   **Available**
      // *   **Deleting**
      // *   **Deleted**
      shared_ptr<string> fullNatEntryStatus_ {};
      // The ID of the FULLNAT table to which the FULLNAT entry belongs.
      shared_ptr<string> fullNatTableId_ {};
      // The protocol of the packets that are forwarded. Valid values:
      // 
      // *   **TCP**
      // *   **UDP**
      shared_ptr<string> ipProtocol_ {};
      // The NAT IP address that is used for address translation in FULLNAT entries.
      shared_ptr<string> natIp_ {};
      // The frontend port that is used for port mapping in FULLNAT entries. Valid values: **1** to **65535**.
      shared_ptr<string> natIpPort_ {};
      // The ID of the elastic network interface (ENI).
      shared_ptr<string> networkInterfaceId_ {};
      // The type of the ENI. The value is set to **Endpoint**, which indicates a reverse endpoint.
      shared_ptr<string> networkInterfaceType_ {};
    };

    virtual bool empty() const override { return this->fullNatEntries_ == nullptr
        && this->fullNatTableId_ == nullptr && this->maxResults_ == nullptr && this->natGatewayId_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // fullNatEntries Field Functions 
    bool hasFullNatEntries() const { return this->fullNatEntries_ != nullptr;};
    void deleteFullNatEntries() { this->fullNatEntries_ = nullptr;};
    inline const vector<ListFullNatEntriesResponseBody::FullNatEntries> & getFullNatEntries() const { DARABONBA_PTR_GET_CONST(fullNatEntries_, vector<ListFullNatEntriesResponseBody::FullNatEntries>) };
    inline vector<ListFullNatEntriesResponseBody::FullNatEntries> getFullNatEntries() { DARABONBA_PTR_GET(fullNatEntries_, vector<ListFullNatEntriesResponseBody::FullNatEntries>) };
    inline ListFullNatEntriesResponseBody& setFullNatEntries(const vector<ListFullNatEntriesResponseBody::FullNatEntries> & fullNatEntries) { DARABONBA_PTR_SET_VALUE(fullNatEntries_, fullNatEntries) };
    inline ListFullNatEntriesResponseBody& setFullNatEntries(vector<ListFullNatEntriesResponseBody::FullNatEntries> && fullNatEntries) { DARABONBA_PTR_SET_RVALUE(fullNatEntries_, fullNatEntries) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string getFullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline ListFullNatEntriesResponseBody& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListFullNatEntriesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListFullNatEntriesResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFullNatEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFullNatEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFullNatEntriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the FULLNAT entries that are queried.
    shared_ptr<vector<ListFullNatEntriesResponseBody::FullNatEntries>> fullNatEntries_ {};
    // The ID of the FULLNAT table to which the queried FULLNAT entries belong.
    shared_ptr<string> fullNatTableId_ {};
    // The maximum number of entries returned.
    shared_ptr<int64_t> maxResults_ {};
    // The ID of the VPC NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // Indicates whether the token for the next query exists. Valid values:
    // 
    // *   If the value of **NextToken** is empty, no next queries are sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of FULLNAT entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
