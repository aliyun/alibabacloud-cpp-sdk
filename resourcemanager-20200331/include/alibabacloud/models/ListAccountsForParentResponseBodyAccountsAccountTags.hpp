// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTSACCOUNTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTSACCOUNTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsForParentResponseBodyAccountsAccountTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAccountsForParentResponseBodyAccountsAccountTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsForParentResponseBodyAccountsAccountTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsForParentResponseBodyAccountsAccountTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAccountsForParentResponseBodyAccountsAccountTags() = default ;
    ListAccountsForParentResponseBodyAccountsAccountTags(const ListAccountsForParentResponseBodyAccountsAccountTags &) = default ;
    ListAccountsForParentResponseBodyAccountsAccountTags(ListAccountsForParentResponseBodyAccountsAccountTags &&) = default ;
    ListAccountsForParentResponseBodyAccountsAccountTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsForParentResponseBodyAccountsAccountTags() = default ;
    ListAccountsForParentResponseBodyAccountsAccountTags& operator=(const ListAccountsForParentResponseBodyAccountsAccountTags &) = default ;
    ListAccountsForParentResponseBodyAccountsAccountTags& operator=(ListAccountsForParentResponseBodyAccountsAccountTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag>) };
    inline vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag>) };
    inline ListAccountsForParentResponseBodyAccountsAccountTags& setTag(const vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAccountsForParentResponseBodyAccountsAccountTags& setTag(vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::ListAccountsForParentResponseBodyAccountsAccountTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
