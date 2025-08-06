// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTVODTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodTagResourcesResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    ListVodTagResourcesResponseBodyTagResources() = default ;
    ListVodTagResourcesResponseBodyTagResources(const ListVodTagResourcesResponseBodyTagResources &) = default ;
    ListVodTagResourcesResponseBodyTagResources(ListVodTagResourcesResponseBodyTagResources &&) = default ;
    ListVodTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodTagResourcesResponseBodyTagResources() = default ;
    ListVodTagResourcesResponseBodyTagResources& operator=(const ListVodTagResourcesResponseBodyTagResources &) = default ;
    ListVodTagResourcesResponseBodyTagResources& operator=(ListVodTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagResource_ != nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource>) };
    inline vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource>) };
    inline ListVodTagResourcesResponseBodyTagResources& setTagResource(const vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline ListVodTagResourcesResponseBodyTagResources& setTagResource(vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::ListVodTagResourcesResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
