// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupResponseBodyResourceGroupTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResponseBodyResourceGroupTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBodyResourceGroupTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBodyResourceGroupTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetResourceGroupResponseBodyResourceGroupTags() = default ;
    GetResourceGroupResponseBodyResourceGroupTags(const GetResourceGroupResponseBodyResourceGroupTags &) = default ;
    GetResourceGroupResponseBodyResourceGroupTags(GetResourceGroupResponseBodyResourceGroupTags &&) = default ;
    GetResourceGroupResponseBodyResourceGroupTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBodyResourceGroupTags() = default ;
    GetResourceGroupResponseBodyResourceGroupTags& operator=(const GetResourceGroupResponseBodyResourceGroupTags &) = default ;
    GetResourceGroupResponseBodyResourceGroupTags& operator=(GetResourceGroupResponseBodyResourceGroupTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag>) };
    inline vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag>) };
    inline GetResourceGroupResponseBodyResourceGroupTags& setTag(const vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetResourceGroupResponseBodyResourceGroupTags& setTag(vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::GetResourceGroupResponseBodyResourceGroupTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
