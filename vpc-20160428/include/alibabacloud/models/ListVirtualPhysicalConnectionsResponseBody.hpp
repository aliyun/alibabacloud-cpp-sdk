// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVirtualPhysicalConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualPhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnections, virtualPhysicalConnections_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualPhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnections, virtualPhysicalConnections_);
    };
    ListVirtualPhysicalConnectionsResponseBody() = default ;
    ListVirtualPhysicalConnectionsResponseBody(const ListVirtualPhysicalConnectionsResponseBody &) = default ;
    ListVirtualPhysicalConnectionsResponseBody(ListVirtualPhysicalConnectionsResponseBody &&) = default ;
    ListVirtualPhysicalConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualPhysicalConnectionsResponseBody() = default ;
    ListVirtualPhysicalConnectionsResponseBody& operator=(const ListVirtualPhysicalConnectionsResponseBody &) = default ;
    ListVirtualPhysicalConnectionsResponseBody& operator=(ListVirtualPhysicalConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->virtualPhysicalConnections_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListVirtualPhysicalConnectionsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualPhysicalConnectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualPhysicalConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVirtualPhysicalConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualPhysicalConnections Field Functions 
    bool hasVirtualPhysicalConnections() const { return this->virtualPhysicalConnections_ != nullptr;};
    void deleteVirtualPhysicalConnections() { this->virtualPhysicalConnections_ = nullptr;};
    inline const vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections> & virtualPhysicalConnections() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnections_, vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections>) };
    inline vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections> virtualPhysicalConnections() { DARABONBA_PTR_GET(virtualPhysicalConnections_, vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections>) };
    inline ListVirtualPhysicalConnectionsResponseBody& setVirtualPhysicalConnections(const vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections> & virtualPhysicalConnections) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnections_, virtualPhysicalConnections) };
    inline ListVirtualPhysicalConnectionsResponseBody& setVirtualPhysicalConnections(vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections> && virtualPhysicalConnections) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnections_, virtualPhysicalConnections) };


  protected:
    // The number of entries returned in this query.
    std::shared_ptr<int32_t> count_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of hosted connections returned.
    std::shared_ptr<vector<ListVirtualPhysicalConnectionsResponseBodyVirtualPhysicalConnections>> virtualPhysicalConnections_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
