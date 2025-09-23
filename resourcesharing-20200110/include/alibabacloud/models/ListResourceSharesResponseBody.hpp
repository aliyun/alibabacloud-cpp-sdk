// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceSharesResponseBodyResourceShares.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShares, resourceShares_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShares, resourceShares_);
    };
    ListResourceSharesResponseBody() = default ;
    ListResourceSharesResponseBody(const ListResourceSharesResponseBody &) = default ;
    ListResourceSharesResponseBody(ListResourceSharesResponseBody &&) = default ;
    ListResourceSharesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharesResponseBody() = default ;
    ListResourceSharesResponseBody& operator=(const ListResourceSharesResponseBody &) = default ;
    ListResourceSharesResponseBody& operator=(ListResourceSharesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->resourceShares_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceSharesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceSharesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShares Field Functions 
    bool hasResourceShares() const { return this->resourceShares_ != nullptr;};
    void deleteResourceShares() { this->resourceShares_ = nullptr;};
    inline const vector<ListResourceSharesResponseBodyResourceShares> & resourceShares() const { DARABONBA_PTR_GET_CONST(resourceShares_, vector<ListResourceSharesResponseBodyResourceShares>) };
    inline vector<ListResourceSharesResponseBodyResourceShares> resourceShares() { DARABONBA_PTR_GET(resourceShares_, vector<ListResourceSharesResponseBodyResourceShares>) };
    inline ListResourceSharesResponseBody& setResourceShares(const vector<ListResourceSharesResponseBodyResourceShares> & resourceShares) { DARABONBA_PTR_SET_VALUE(resourceShares_, resourceShares) };
    inline ListResourceSharesResponseBody& setResourceShares(vector<ListResourceSharesResponseBodyResourceShares> && resourceShares) { DARABONBA_PTR_SET_RVALUE(resourceShares_, resourceShares) };


  protected:
    // The `token` that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource shares.
    std::shared_ptr<vector<ListResourceSharesResponseBodyResourceShares>> resourceShares_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
