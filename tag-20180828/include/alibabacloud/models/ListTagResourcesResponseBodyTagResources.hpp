// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesResponseBodyTagResourcesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { this->resourceARN_ != nullptr
        && this->tags_ != nullptr; };
    // resourceARN Field Functions 
    bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
    void deleteResourceARN() { this->resourceARN_ = nullptr;};
    inline string resourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
    inline ListTagResourcesResponseBodyTagResources& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTagResourcesResponseBodyTagResourcesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTagResourcesResponseBodyTagResourcesTags>) };
    inline vector<Models::ListTagResourcesResponseBodyTagResourcesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTagResourcesResponseBodyTagResourcesTags>) };
    inline ListTagResourcesResponseBodyTagResources& setTags(const vector<Models::ListTagResourcesResponseBodyTagResourcesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagResourcesResponseBodyTagResources& setTags(vector<Models::ListTagResourcesResponseBodyTagResourcesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ARN of the resource.
    std::shared_ptr<string> resourceARN_ = nullptr;
    // The information of the tags.
    std::shared_ptr<vector<Models::ListTagResourcesResponseBodyTagResourcesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
