// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFullNatEntriesResponseBodyFullNatEntries.hpp>
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
    virtual bool empty() const override { return this->fullNatEntries_ == nullptr
        && return this->fullNatTableId_ == nullptr && return this->maxResults_ == nullptr && return this->natGatewayId_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // fullNatEntries Field Functions 
    bool hasFullNatEntries() const { return this->fullNatEntries_ != nullptr;};
    void deleteFullNatEntries() { this->fullNatEntries_ = nullptr;};
    inline const vector<ListFullNatEntriesResponseBodyFullNatEntries> & fullNatEntries() const { DARABONBA_PTR_GET_CONST(fullNatEntries_, vector<ListFullNatEntriesResponseBodyFullNatEntries>) };
    inline vector<ListFullNatEntriesResponseBodyFullNatEntries> fullNatEntries() { DARABONBA_PTR_GET(fullNatEntries_, vector<ListFullNatEntriesResponseBodyFullNatEntries>) };
    inline ListFullNatEntriesResponseBody& setFullNatEntries(const vector<ListFullNatEntriesResponseBodyFullNatEntries> & fullNatEntries) { DARABONBA_PTR_SET_VALUE(fullNatEntries_, fullNatEntries) };
    inline ListFullNatEntriesResponseBody& setFullNatEntries(vector<ListFullNatEntriesResponseBodyFullNatEntries> && fullNatEntries) { DARABONBA_PTR_SET_RVALUE(fullNatEntries_, fullNatEntries) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string fullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline ListFullNatEntriesResponseBody& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListFullNatEntriesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListFullNatEntriesResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFullNatEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFullNatEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFullNatEntriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the FULLNAT entries that are queried.
    std::shared_ptr<vector<ListFullNatEntriesResponseBodyFullNatEntries>> fullNatEntries_ = nullptr;
    // The ID of the FULLNAT table to which the queried FULLNAT entries belong.
    std::shared_ptr<string> fullNatTableId_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The ID of the VPC NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // Indicates whether the token for the next query exists. Valid values:
    // 
    // *   If the value of **NextToken** is empty, no next queries are sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of FULLNAT entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
