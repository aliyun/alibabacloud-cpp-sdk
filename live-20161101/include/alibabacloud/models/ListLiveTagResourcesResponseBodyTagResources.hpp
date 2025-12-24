// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveTagResourcesResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    ListLiveTagResourcesResponseBodyTagResources() = default ;
    ListLiveTagResourcesResponseBodyTagResources(const ListLiveTagResourcesResponseBodyTagResources &) = default ;
    ListLiveTagResourcesResponseBodyTagResources(ListLiveTagResourcesResponseBodyTagResources &&) = default ;
    ListLiveTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTagResourcesResponseBodyTagResources() = default ;
    ListLiveTagResourcesResponseBodyTagResources& operator=(const ListLiveTagResourcesResponseBodyTagResources &) = default ;
    ListLiveTagResourcesResponseBodyTagResources& operator=(ListLiveTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagResource_ == nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource>) };
    inline vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource>) };
    inline ListLiveTagResourcesResponseBodyTagResources& setTagResource(const vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline ListLiveTagResourcesResponseBodyTagResources& setTagResource(vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::ListLiveTagResourcesResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
