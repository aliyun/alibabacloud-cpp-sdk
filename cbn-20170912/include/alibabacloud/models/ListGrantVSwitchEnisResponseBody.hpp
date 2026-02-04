// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchEnisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchEnisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantVSwitchEnis, grantVSwitchEnis_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchEnisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantVSwitchEnis, grantVSwitchEnis_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGrantVSwitchEnisResponseBody() = default ;
    ListGrantVSwitchEnisResponseBody(const ListGrantVSwitchEnisResponseBody &) = default ;
    ListGrantVSwitchEnisResponseBody(ListGrantVSwitchEnisResponseBody &&) = default ;
    ListGrantVSwitchEnisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchEnisResponseBody() = default ;
    ListGrantVSwitchEnisResponseBody& operator=(const ListGrantVSwitchEnisResponseBody &) = default ;
    ListGrantVSwitchEnisResponseBody& operator=(ListGrantVSwitchEnisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantVSwitchEnis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantVSwitchEnis& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_TO_JSON(TransitRouterFlag, transitRouterFlag_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, GrantVSwitchEnis& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_FROM_JSON(TransitRouterFlag, transitRouterFlag_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      GrantVSwitchEnis() = default ;
      GrantVSwitchEnis(const GrantVSwitchEnis &) = default ;
      GrantVSwitchEnis(GrantVSwitchEnis &&) = default ;
      GrantVSwitchEnis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantVSwitchEnis() = default ;
      GrantVSwitchEnis& operator=(const GrantVSwitchEnis &) = default ;
      GrantVSwitchEnis& operator=(GrantVSwitchEnis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->networkInterfaceName_ == nullptr && this->primaryIpAddress_ == nullptr && this->transitRouterFlag_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GrantVSwitchEnis& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline GrantVSwitchEnis& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfaceName Field Functions 
      bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
      void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
      inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
      inline GrantVSwitchEnis& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


      // primaryIpAddress Field Functions 
      bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
      void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
      inline string getPrimaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
      inline GrantVSwitchEnis& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


      // transitRouterFlag Field Functions 
      bool hasTransitRouterFlag() const { return this->transitRouterFlag_ != nullptr;};
      void deleteTransitRouterFlag() { this->transitRouterFlag_ = nullptr;};
      inline bool getTransitRouterFlag() const { DARABONBA_PTR_GET_DEFAULT(transitRouterFlag_, false) };
      inline GrantVSwitchEnis& setTransitRouterFlag(bool transitRouterFlag) { DARABONBA_PTR_SET_VALUE(transitRouterFlag_, transitRouterFlag) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline GrantVSwitchEnis& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline GrantVSwitchEnis& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ENI description.
      shared_ptr<string> description_ {};
      // The ENI ID.
      shared_ptr<string> networkInterfaceId_ {};
      // The ENI name.
      shared_ptr<string> networkInterfaceName_ {};
      // The primary private IPv4 address of the ENI.
      shared_ptr<string> primaryIpAddress_ {};
      // Indicates whether the ENI is created by a transit router. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // ENIs that are created by transit routers cannot be used as multicast sources or members.
      shared_ptr<bool> transitRouterFlag_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->grantVSwitchEnis_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // grantVSwitchEnis Field Functions 
    bool hasGrantVSwitchEnis() const { return this->grantVSwitchEnis_ != nullptr;};
    void deleteGrantVSwitchEnis() { this->grantVSwitchEnis_ = nullptr;};
    inline const vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis> & getGrantVSwitchEnis() const { DARABONBA_PTR_GET_CONST(grantVSwitchEnis_, vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis>) };
    inline vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis> getGrantVSwitchEnis() { DARABONBA_PTR_GET(grantVSwitchEnis_, vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis>) };
    inline ListGrantVSwitchEnisResponseBody& setGrantVSwitchEnis(const vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis> & grantVSwitchEnis) { DARABONBA_PTR_SET_VALUE(grantVSwitchEnis_, grantVSwitchEnis) };
    inline ListGrantVSwitchEnisResponseBody& setGrantVSwitchEnis(vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis> && grantVSwitchEnis) { DARABONBA_PTR_SET_RVALUE(grantVSwitchEnis_, grantVSwitchEnis) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListGrantVSwitchEnisResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGrantVSwitchEnisResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGrantVSwitchEnisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListGrantVSwitchEnisResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the ENI.
    shared_ptr<vector<ListGrantVSwitchEnisResponseBody::GrantVSwitchEnis>> grantVSwitchEnis_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    // 
    // > If MaxResults and NextToken are sued to query results by page, ignore this parameter.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
