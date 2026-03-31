// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
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
  class ListTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody(ListTagKeysResponseBody &&) = default ;
    ListTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody& operator=(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody& operator=(ListTagKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keys_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline ListTagKeysResponseBody& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ListTagKeysResponseBody& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTagKeysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tag keys.
    shared_ptr<vector<string>> keys_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
