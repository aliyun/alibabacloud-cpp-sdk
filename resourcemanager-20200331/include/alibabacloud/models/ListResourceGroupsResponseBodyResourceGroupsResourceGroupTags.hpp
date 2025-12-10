// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPSRESOURCEGROUPTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPSRESOURCEGROUPTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags() = default ;
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags(const ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags &) = default ;
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags(ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags &&) = default ;
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags() = default ;
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& operator=(const ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags &) = default ;
    ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& operator=(ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag>) };
    inline vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag>) };
    inline ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& setTag(const vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags& setTag(vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
