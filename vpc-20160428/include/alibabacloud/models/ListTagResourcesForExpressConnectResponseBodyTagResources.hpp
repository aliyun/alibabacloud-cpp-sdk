// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESFOREXPRESSCONNECTRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESFOREXPRESSCONNECTRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTagResourcesForExpressConnectResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesForExpressConnectResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesForExpressConnectResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    ListTagResourcesForExpressConnectResponseBodyTagResources() = default ;
    ListTagResourcesForExpressConnectResponseBodyTagResources(const ListTagResourcesForExpressConnectResponseBodyTagResources &) = default ;
    ListTagResourcesForExpressConnectResponseBodyTagResources(ListTagResourcesForExpressConnectResponseBodyTagResources &&) = default ;
    ListTagResourcesForExpressConnectResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesForExpressConnectResponseBodyTagResources() = default ;
    ListTagResourcesForExpressConnectResponseBodyTagResources& operator=(const ListTagResourcesForExpressConnectResponseBodyTagResources &) = default ;
    ListTagResourcesForExpressConnectResponseBodyTagResources& operator=(ListTagResourcesForExpressConnectResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagResource_ != nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource>) };
    inline vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource>) };
    inline ListTagResourcesForExpressConnectResponseBodyTagResources& setTagResource(const vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline ListTagResourcesForExpressConnectResponseBodyTagResources& setTagResource(vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::ListTagResourcesForExpressConnectResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
