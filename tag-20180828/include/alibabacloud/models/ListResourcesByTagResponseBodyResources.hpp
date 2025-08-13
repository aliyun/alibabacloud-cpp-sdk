// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesByTagResponseBodyResourcesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListResourcesByTagResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByTagResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByTagResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListResourcesByTagResponseBodyResources() = default ;
    ListResourcesByTagResponseBodyResources(const ListResourcesByTagResponseBodyResources &) = default ;
    ListResourcesByTagResponseBodyResources(ListResourcesByTagResponseBodyResources &&) = default ;
    ListResourcesByTagResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByTagResponseBodyResources() = default ;
    ListResourcesByTagResponseBodyResources& operator=(const ListResourcesByTagResponseBodyResources &) = default ;
    ListResourcesByTagResponseBodyResources& operator=(ListResourcesByTagResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->tags_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourcesByTagResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListResourcesByTagResponseBodyResourcesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListResourcesByTagResponseBodyResourcesTags>) };
    inline vector<Models::ListResourcesByTagResponseBodyResourcesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListResourcesByTagResponseBodyResourcesTags>) };
    inline ListResourcesByTagResponseBodyResources& setTags(const vector<Models::ListResourcesByTagResponseBodyResourcesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourcesByTagResponseBodyResources& setTags(vector<Models::ListResourcesByTagResponseBodyResourcesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The information of the tags.
    // 
    // This parameter is returned only if the `IncludeAllTags` parameter is set to `True`.
    std::shared_ptr<vector<Models::ListResourcesByTagResponseBodyResourcesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
