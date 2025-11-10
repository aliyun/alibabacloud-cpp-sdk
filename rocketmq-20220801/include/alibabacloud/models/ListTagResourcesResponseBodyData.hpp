// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesResponseBodyDataTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTagResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tagResources, tagResources_);
    };
    ListTagResourcesResponseBodyData() = default ;
    ListTagResourcesResponseBodyData(const ListTagResourcesResponseBodyData &) = default ;
    ListTagResourcesResponseBodyData(ListTagResourcesResponseBodyData &&) = default ;
    ListTagResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBodyData() = default ;
    ListTagResourcesResponseBodyData& operator=(const ListTagResourcesResponseBodyData &) = default ;
    ListTagResourcesResponseBodyData& operator=(ListTagResourcesResponseBodyData &&) = default ;
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
    inline ListTagResourcesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<Models::ListTagResourcesResponseBodyDataTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<Models::ListTagResourcesResponseBodyDataTagResources>) };
    inline vector<Models::ListTagResourcesResponseBodyDataTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<Models::ListTagResourcesResponseBodyDataTagResources>) };
    inline ListTagResourcesResponseBodyData& setTagResources(const vector<Models::ListTagResourcesResponseBodyDataTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBodyData& setTagResources(vector<Models::ListTagResourcesResponseBodyDataTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The position from which the next query starts.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Resource tag relationships.
    std::shared_ptr<vector<Models::ListTagResourcesResponseBodyDataTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
