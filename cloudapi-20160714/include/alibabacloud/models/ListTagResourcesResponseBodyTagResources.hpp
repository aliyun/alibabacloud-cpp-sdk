// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    ListTagResourcesResponseBodyTagResources() = default ;
    ListTagResourcesResponseBodyTagResources(const ListTagResourcesResponseBodyTagResources &) = default ;
    ListTagResourcesResponseBodyTagResources(ListTagResourcesResponseBodyTagResources &&) = default ;
    ListTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBodyTagResources() = default ;
    ListTagResourcesResponseBodyTagResources& operator=(const ListTagResourcesResponseBodyTagResources &) = default ;
    ListTagResourcesResponseBodyTagResources& operator=(ListTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagResource_ == nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource>) };
    inline vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource>) };
    inline ListTagResourcesResponseBodyTagResources& setTagResource(const vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline ListTagResourcesResponseBodyTagResources& setTagResource(vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
