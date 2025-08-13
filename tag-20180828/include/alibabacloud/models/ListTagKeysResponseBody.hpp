// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTagKeysResponseBodyKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
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
    virtual bool empty() const override { this->keys_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const ListTagKeysResponseBodyKeys & keys() const { DARABONBA_PTR_GET_CONST(keys_, ListTagKeysResponseBodyKeys) };
    inline ListTagKeysResponseBodyKeys keys() { DARABONBA_PTR_GET(keys_, ListTagKeysResponseBodyKeys) };
    inline ListTagKeysResponseBody& setKeys(const ListTagKeysResponseBodyKeys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ListTagKeysResponseBody& setKeys(ListTagKeysResponseBodyKeys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the tag keys.
    std::shared_ptr<ListTagKeysResponseBodyKeys> keys_ = nullptr;
    // Indicates whether the next query is required. The value of this parameter may be empty.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
