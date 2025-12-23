// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelationships, resourceRelationships_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationships, resourceRelationships_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ListMultiAccountResourceRelationshipsResponseBody() = default ;
    ListMultiAccountResourceRelationshipsResponseBody(const ListMultiAccountResourceRelationshipsResponseBody &) = default ;
    ListMultiAccountResourceRelationshipsResponseBody(ListMultiAccountResourceRelationshipsResponseBody &&) = default ;
    ListMultiAccountResourceRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceRelationshipsResponseBody() = default ;
    ListMultiAccountResourceRelationshipsResponseBody& operator=(const ListMultiAccountResourceRelationshipsResponseBody &) = default ;
    ListMultiAccountResourceRelationshipsResponseBody& operator=(ListMultiAccountResourceRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->resourceRelationships_ == nullptr && return this->scope_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelationships Field Functions 
    bool hasResourceRelationships() const { return this->resourceRelationships_ != nullptr;};
    void deleteResourceRelationships() { this->resourceRelationships_ = nullptr;};
    inline const vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships> & resourceRelationships() const { DARABONBA_PTR_GET_CONST(resourceRelationships_, vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships>) };
    inline vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships> resourceRelationships() { DARABONBA_PTR_GET(resourceRelationships_, vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships>) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setResourceRelationships(const vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships> & resourceRelationships) { DARABONBA_PTR_SET_VALUE(resourceRelationships_, resourceRelationships) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setResourceRelationships(vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships> && resourceRelationships) { DARABONBA_PTR_SET_RVALUE(resourceRelationships_, resourceRelationships) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource relationships.
    std::shared_ptr<vector<ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships>> resourceRelationships_ = nullptr;
    // The search scope. Valid values:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched.
    // *   ID of a folder: Resources within all members in the folder are searched.
    // *   ID of a member: Resources within the member are searched.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
