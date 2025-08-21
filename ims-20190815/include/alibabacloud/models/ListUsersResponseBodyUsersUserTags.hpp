// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERSUSERTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERSUSERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyUsersUserTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersResponseBodyUsersUserTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsersUserTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsersUserTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListUsersResponseBodyUsersUserTags() = default ;
    ListUsersResponseBodyUsersUserTags(const ListUsersResponseBodyUsersUserTags &) = default ;
    ListUsersResponseBodyUsersUserTags(ListUsersResponseBodyUsersUserTags &&) = default ;
    ListUsersResponseBodyUsersUserTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsersUserTags() = default ;
    ListUsersResponseBodyUsersUserTags& operator=(const ListUsersResponseBodyUsersUserTags &) = default ;
    ListUsersResponseBodyUsersUserTags& operator=(ListUsersResponseBodyUsersUserTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyUsersUserTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ListUsersResponseBodyUsersUserTagsTag>) };
    inline vector<Models::ListUsersResponseBodyUsersUserTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ListUsersResponseBodyUsersUserTagsTag>) };
    inline ListUsersResponseBodyUsersUserTags& setTag(const vector<Models::ListUsersResponseBodyUsersUserTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListUsersResponseBodyUsersUserTags& setTag(vector<Models::ListUsersResponseBodyUsersUserTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::ListUsersResponseBodyUsersUserTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
