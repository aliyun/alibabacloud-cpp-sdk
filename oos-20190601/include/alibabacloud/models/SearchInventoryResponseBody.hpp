// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINVENTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINVENTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class SearchInventoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInventoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInventoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchInventoryResponseBody() = default ;
    SearchInventoryResponseBody(const SearchInventoryResponseBody &) = default ;
    SearchInventoryResponseBody(SearchInventoryResponseBody &&) = default ;
    SearchInventoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInventoryResponseBody() = default ;
    SearchInventoryResponseBody& operator=(const SearchInventoryResponseBody &) = default ;
    SearchInventoryResponseBody& operator=(SearchInventoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entities_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<Darabonba::Json> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getEntities() { DARABONBA_PTR_GET(entities_, vector<Darabonba::Json>) };
    inline SearchInventoryResponseBody& setEntities(const vector<Darabonba::Json> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline SearchInventoryResponseBody& setEntities(vector<Darabonba::Json> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchInventoryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchInventoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchInventoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Darabonba::Json>> entities_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
