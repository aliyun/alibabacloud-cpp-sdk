// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateSkillShrinkRequest() = default ;
    CreateSkillShrinkRequest(const CreateSkillShrinkRequest &) = default ;
    CreateSkillShrinkRequest(CreateSkillShrinkRequest &&) = default ;
    CreateSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillShrinkRequest() = default ;
    CreateSkillShrinkRequest& operator=(const CreateSkillShrinkRequest &) = default ;
    CreateSkillShrinkRequest& operator=(CreateSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->dbtypesShrink_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline CreateSkillShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // dbtypesShrink Field Functions 
    bool hasDbtypesShrink() const { return this->dbtypesShrink_ != nullptr;};
    void deleteDbtypesShrink() { this->dbtypesShrink_ = nullptr;};
    inline string getDbtypesShrink() const { DARABONBA_PTR_GET_DEFAULT(dbtypesShrink_, "") };
    inline CreateSkillShrinkRequest& setDbtypesShrink(string dbtypesShrink) { DARABONBA_PTR_SET_VALUE(dbtypesShrink_, dbtypesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSkillShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> contentShrink_ {};
    // This parameter is required.
    shared_ptr<string> dbtypesShrink_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
