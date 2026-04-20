// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLCIDRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLCIDRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolCidrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolCidrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamPoolCidrs, ipamPoolCidrs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolCidrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamPoolCidrs, ipamPoolCidrs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamPoolCidrsResponseBody() = default ;
    ListIpamPoolCidrsResponseBody(const ListIpamPoolCidrsResponseBody &) = default ;
    ListIpamPoolCidrsResponseBody(ListIpamPoolCidrsResponseBody &&) = default ;
    ListIpamPoolCidrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolCidrsResponseBody() = default ;
    ListIpamPoolCidrsResponseBody& operator=(const ListIpamPoolCidrsResponseBody &) = default ;
    ListIpamPoolCidrsResponseBody& operator=(ListIpamPoolCidrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamPoolCidrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamPoolCidrs& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IpamPoolCidrs& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IpamPoolCidrs() = default ;
      IpamPoolCidrs(const IpamPoolCidrs &) = default ;
      IpamPoolCidrs(IpamPoolCidrs &&) = default ;
      IpamPoolCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamPoolCidrs() = default ;
      IpamPoolCidrs& operator=(const IpamPoolCidrs &) = default ;
      IpamPoolCidrs& operator=(IpamPoolCidrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->ipamPoolId_ == nullptr && this->status_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline IpamPoolCidrs& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // ipamPoolId Field Functions 
      bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
      void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
      inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
      inline IpamPoolCidrs& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamPoolCidrs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The provisioned CIDR block.
      shared_ptr<string> cidr_ {};
      // The ID of the IPAM pool.
      shared_ptr<string> ipamPoolId_ {};
      // The status of the CIDR block provisioned to the IPAM pool. Valid values:
      // 
      // *   **Created**
      // *   **Deleted**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamPoolCidrs_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamPoolCidrsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamPoolCidrs Field Functions 
    bool hasIpamPoolCidrs() const { return this->ipamPoolCidrs_ != nullptr;};
    void deleteIpamPoolCidrs() { this->ipamPoolCidrs_ = nullptr;};
    inline const vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs> & getIpamPoolCidrs() const { DARABONBA_PTR_GET_CONST(ipamPoolCidrs_, vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs>) };
    inline vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs> getIpamPoolCidrs() { DARABONBA_PTR_GET(ipamPoolCidrs_, vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs>) };
    inline ListIpamPoolCidrsResponseBody& setIpamPoolCidrs(const vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs> & ipamPoolCidrs) { DARABONBA_PTR_SET_VALUE(ipamPoolCidrs_, ipamPoolCidrs) };
    inline ListIpamPoolCidrsResponseBody& setIpamPoolCidrs(vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs> && ipamPoolCidrs) { DARABONBA_PTR_SET_RVALUE(ipamPoolCidrs_, ipamPoolCidrs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamPoolCidrsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamPoolCidrsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamPoolCidrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamPoolCidrsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned.
    shared_ptr<int64_t> count_ {};
    // The IDs of IPAM pools.
    shared_ptr<vector<ListIpamPoolCidrsResponseBody::IpamPoolCidrs>> ipamPoolCidrs_ {};
    // The number of entries per page.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
