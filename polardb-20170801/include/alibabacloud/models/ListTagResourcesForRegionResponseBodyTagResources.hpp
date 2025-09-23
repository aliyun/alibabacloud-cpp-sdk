// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESFORREGIONRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESFORREGIONRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesForRegionResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListTagResourcesForRegionResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesForRegionResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesForRegionResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    ListTagResourcesForRegionResponseBodyTagResources() = default ;
    ListTagResourcesForRegionResponseBodyTagResources(const ListTagResourcesForRegionResponseBodyTagResources &) = default ;
    ListTagResourcesForRegionResponseBodyTagResources(ListTagResourcesForRegionResponseBodyTagResources &&) = default ;
    ListTagResourcesForRegionResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesForRegionResponseBodyTagResources() = default ;
    ListTagResourcesForRegionResponseBodyTagResources& operator=(const ListTagResourcesForRegionResponseBodyTagResources &) = default ;
    ListTagResourcesForRegionResponseBodyTagResources& operator=(ListTagResourcesForRegionResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagResource_ != nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource>) };
    inline vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource>) };
    inline ListTagResourcesForRegionResponseBodyTagResources& setTagResource(const vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline ListTagResourcesForRegionResponseBodyTagResources& setTagResource(vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::ListTagResourcesForRegionResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
