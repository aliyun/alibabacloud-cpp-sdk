// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceRelationshipsResponseBodyResourceRelationships.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelationships, resourceRelationships_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationships, resourceRelationships_);
    };
    ListResourceRelationshipsResponseBody() = default ;
    ListResourceRelationshipsResponseBody(const ListResourceRelationshipsResponseBody &) = default ;
    ListResourceRelationshipsResponseBody(ListResourceRelationshipsResponseBody &&) = default ;
    ListResourceRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRelationshipsResponseBody() = default ;
    ListResourceRelationshipsResponseBody& operator=(const ListResourceRelationshipsResponseBody &) = default ;
    ListResourceRelationshipsResponseBody& operator=(ListResourceRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->resourceRelationships_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceRelationshipsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceRelationshipsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelationships Field Functions 
    bool hasResourceRelationships() const { return this->resourceRelationships_ != nullptr;};
    void deleteResourceRelationships() { this->resourceRelationships_ = nullptr;};
    inline const vector<ListResourceRelationshipsResponseBodyResourceRelationships> & resourceRelationships() const { DARABONBA_PTR_GET_CONST(resourceRelationships_, vector<ListResourceRelationshipsResponseBodyResourceRelationships>) };
    inline vector<ListResourceRelationshipsResponseBodyResourceRelationships> resourceRelationships() { DARABONBA_PTR_GET(resourceRelationships_, vector<ListResourceRelationshipsResponseBodyResourceRelationships>) };
    inline ListResourceRelationshipsResponseBody& setResourceRelationships(const vector<ListResourceRelationshipsResponseBodyResourceRelationships> & resourceRelationships) { DARABONBA_PTR_SET_VALUE(resourceRelationships_, resourceRelationships) };
    inline ListResourceRelationshipsResponseBody& setResourceRelationships(vector<ListResourceRelationshipsResponseBodyResourceRelationships> && resourceRelationships) { DARABONBA_PTR_SET_RVALUE(resourceRelationships_, resourceRelationships) };


  protected:
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource relationships.
    std::shared_ptr<vector<ListResourceRelationshipsResponseBodyResourceRelationships>> resourceRelationships_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
