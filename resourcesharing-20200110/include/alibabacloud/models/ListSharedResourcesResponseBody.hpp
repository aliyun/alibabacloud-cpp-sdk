// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSharedResourcesResponseBodySharedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedResources, sharedResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedResources, sharedResources_);
    };
    ListSharedResourcesResponseBody() = default ;
    ListSharedResourcesResponseBody(const ListSharedResourcesResponseBody &) = default ;
    ListSharedResourcesResponseBody(ListSharedResourcesResponseBody &&) = default ;
    ListSharedResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedResourcesResponseBody() = default ;
    ListSharedResourcesResponseBody& operator=(const ListSharedResourcesResponseBody &) = default ;
    ListSharedResourcesResponseBody& operator=(ListSharedResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->sharedResources_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedResources Field Functions 
    bool hasSharedResources() const { return this->sharedResources_ != nullptr;};
    void deleteSharedResources() { this->sharedResources_ = nullptr;};
    inline const vector<ListSharedResourcesResponseBodySharedResources> & sharedResources() const { DARABONBA_PTR_GET_CONST(sharedResources_, vector<ListSharedResourcesResponseBodySharedResources>) };
    inline vector<ListSharedResourcesResponseBodySharedResources> sharedResources() { DARABONBA_PTR_GET(sharedResources_, vector<ListSharedResourcesResponseBodySharedResources>) };
    inline ListSharedResourcesResponseBody& setSharedResources(const vector<ListSharedResourcesResponseBodySharedResources> & sharedResources) { DARABONBA_PTR_SET_VALUE(sharedResources_, sharedResources) };
    inline ListSharedResourcesResponseBody& setSharedResources(vector<ListSharedResourcesResponseBodySharedResources> && sharedResources) { DARABONBA_PTR_SET_RVALUE(sharedResources_, sharedResources) };


  protected:
    // The token that is used to initiate the next request. If the response of the current request is truncated, you can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the shared resources.
    std::shared_ptr<vector<ListSharedResourcesResponseBodySharedResources>> sharedResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
