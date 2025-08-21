// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERRESPONSEBODYUSERTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERRESPONSEBODYUSERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUserResponseBodyUserTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateUserResponseBodyUserTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserResponseBodyUserTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserResponseBodyUserTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateUserResponseBodyUserTags() = default ;
    CreateUserResponseBodyUserTags(const CreateUserResponseBodyUserTags &) = default ;
    CreateUserResponseBodyUserTags(CreateUserResponseBodyUserTags &&) = default ;
    CreateUserResponseBodyUserTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserResponseBodyUserTags() = default ;
    CreateUserResponseBodyUserTags& operator=(const CreateUserResponseBodyUserTags &) = default ;
    CreateUserResponseBodyUserTags& operator=(CreateUserResponseBodyUserTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::CreateUserResponseBodyUserTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::CreateUserResponseBodyUserTagsTag>) };
    inline vector<Models::CreateUserResponseBodyUserTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::CreateUserResponseBodyUserTagsTag>) };
    inline CreateUserResponseBodyUserTags& setTag(const vector<Models::CreateUserResponseBodyUserTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateUserResponseBodyUserTags& setTag(vector<Models::CreateUserResponseBodyUserTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::CreateUserResponseBodyUserTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
