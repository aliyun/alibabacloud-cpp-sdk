// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListLiveTagResourcesResponseBody() = default ;
    ListLiveTagResourcesResponseBody(const ListLiveTagResourcesResponseBody &) = default ;
    ListLiveTagResourcesResponseBody(ListLiveTagResourcesResponseBody &&) = default ;
    ListLiveTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTagResourcesResponseBody() = default ;
    ListLiveTagResourcesResponseBody& operator=(const ListLiveTagResourcesResponseBody &) = default ;
    ListLiveTagResourcesResponseBody& operator=(ListLiveTagResourcesResponseBody &&) = default ;
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
    inline ListLiveTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const ListLiveTagResourcesResponseBodyTagResources & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, ListLiveTagResourcesResponseBodyTagResources) };
    inline ListLiveTagResourcesResponseBodyTagResources tagResources() { DARABONBA_PTR_GET(tagResources_, ListLiveTagResourcesResponseBodyTagResources) };
    inline ListLiveTagResourcesResponseBody& setTagResources(const ListLiveTagResourcesResponseBodyTagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListLiveTagResourcesResponseBody& setTagResources(ListLiveTagResourcesResponseBodyTagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListLiveTagResourcesResponseBodyTagResources> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
