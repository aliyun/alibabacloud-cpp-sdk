// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSRESPONSEBODYACCOUNTSACCOUNTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSRESPONSEBODYACCOUNTSACCOUNTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsResponseBodyAccountsAccountTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAccountsResponseBodyAccountsAccountTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsResponseBodyAccountsAccountTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsResponseBodyAccountsAccountTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAccountsResponseBodyAccountsAccountTags() = default ;
    ListAccountsResponseBodyAccountsAccountTags(const ListAccountsResponseBodyAccountsAccountTags &) = default ;
    ListAccountsResponseBodyAccountsAccountTags(ListAccountsResponseBodyAccountsAccountTags &&) = default ;
    ListAccountsResponseBodyAccountsAccountTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsResponseBodyAccountsAccountTags() = default ;
    ListAccountsResponseBodyAccountsAccountTags& operator=(const ListAccountsResponseBodyAccountsAccountTags &) = default ;
    ListAccountsResponseBodyAccountsAccountTags& operator=(ListAccountsResponseBodyAccountsAccountTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag>) };
    inline vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag>) };
    inline ListAccountsResponseBodyAccountsAccountTags& setTag(const vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAccountsResponseBodyAccountsAccountTags& setTag(vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::ListAccountsResponseBodyAccountsAccountTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
