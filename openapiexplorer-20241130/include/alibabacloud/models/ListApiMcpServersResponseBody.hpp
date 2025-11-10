// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiMcpServersResponseBodyApiMcpServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiMcpServers, apiMcpServers_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiMcpServers, apiMcpServers_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListApiMcpServersResponseBody() = default ;
    ListApiMcpServersResponseBody(const ListApiMcpServersResponseBody &) = default ;
    ListApiMcpServersResponseBody(ListApiMcpServersResponseBody &&) = default ;
    ListApiMcpServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServersResponseBody() = default ;
    ListApiMcpServersResponseBody& operator=(const ListApiMcpServersResponseBody &) = default ;
    ListApiMcpServersResponseBody& operator=(ListApiMcpServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiMcpServers_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiMcpServers Field Functions 
    bool hasApiMcpServers() const { return this->apiMcpServers_ != nullptr;};
    void deleteApiMcpServers() { this->apiMcpServers_ = nullptr;};
    inline const vector<ListApiMcpServersResponseBodyApiMcpServers> & apiMcpServers() const { DARABONBA_PTR_GET_CONST(apiMcpServers_, vector<ListApiMcpServersResponseBodyApiMcpServers>) };
    inline vector<ListApiMcpServersResponseBodyApiMcpServers> apiMcpServers() { DARABONBA_PTR_GET(apiMcpServers_, vector<ListApiMcpServersResponseBodyApiMcpServers>) };
    inline ListApiMcpServersResponseBody& setApiMcpServers(const vector<ListApiMcpServersResponseBodyApiMcpServers> & apiMcpServers) { DARABONBA_PTR_SET_VALUE(apiMcpServers_, apiMcpServers) };
    inline ListApiMcpServersResponseBody& setApiMcpServers(vector<ListApiMcpServersResponseBodyApiMcpServers> && apiMcpServers) { DARABONBA_PTR_SET_RVALUE(apiMcpServers_, apiMcpServers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiMcpServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiMcpServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiMcpServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiMcpServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListApiMcpServersResponseBodyApiMcpServers>> apiMcpServers_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
