// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody(ListTagResourcesResponseBody &&) = default ;
    ListTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody& operator=(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody& operator=(ListTagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->tagResources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const ListTagResourcesResponseBodyTagResources & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, ListTagResourcesResponseBodyTagResources) };
    inline ListTagResourcesResponseBodyTagResources tagResources() { DARABONBA_PTR_GET(tagResources_, ListTagResourcesResponseBodyTagResources) };
    inline ListTagResourcesResponseBody& setTagResources(const ListTagResourcesResponseBodyTagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBody& setTagResources(ListTagResourcesResponseBodyTagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The token that determines the start point of the next query.
    // 
    // A NextToken value of -1 indicates that a next query does not exist.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource list.
    std::shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
