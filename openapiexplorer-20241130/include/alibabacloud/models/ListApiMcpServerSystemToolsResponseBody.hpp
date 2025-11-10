// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiMcpServerSystemToolsResponseBodySystemTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServerSystemToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServerSystemToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServerSystemToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListApiMcpServerSystemToolsResponseBody() = default ;
    ListApiMcpServerSystemToolsResponseBody(const ListApiMcpServerSystemToolsResponseBody &) = default ;
    ListApiMcpServerSystemToolsResponseBody(ListApiMcpServerSystemToolsResponseBody &&) = default ;
    ListApiMcpServerSystemToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServerSystemToolsResponseBody() = default ;
    ListApiMcpServerSystemToolsResponseBody& operator=(const ListApiMcpServerSystemToolsResponseBody &) = default ;
    ListApiMcpServerSystemToolsResponseBody& operator=(ListApiMcpServerSystemToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->systemTools_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiMcpServerSystemToolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiMcpServerSystemToolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiMcpServerSystemToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<ListApiMcpServerSystemToolsResponseBodySystemTools> & systemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<ListApiMcpServerSystemToolsResponseBodySystemTools>) };
    inline vector<ListApiMcpServerSystemToolsResponseBodySystemTools> systemTools() { DARABONBA_PTR_GET(systemTools_, vector<ListApiMcpServerSystemToolsResponseBodySystemTools>) };
    inline ListApiMcpServerSystemToolsResponseBody& setSystemTools(const vector<ListApiMcpServerSystemToolsResponseBodySystemTools> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline ListApiMcpServerSystemToolsResponseBody& setSystemTools(vector<ListApiMcpServerSystemToolsResponseBodySystemTools> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiMcpServerSystemToolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListApiMcpServerSystemToolsResponseBodySystemTools>> systemTools_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
