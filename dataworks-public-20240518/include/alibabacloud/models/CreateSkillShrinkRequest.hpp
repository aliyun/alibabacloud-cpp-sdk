// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_TO_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_FROM_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScopeShrink_);
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
    virtual bool empty() const override { return this->bundleUrl_ == nullptr
        && this->description_ == nullptr && this->extraShrink_ == nullptr && this->name_ == nullptr && this->skillMdOverride_ == nullptr && this->versionNote_ == nullptr
        && this->visibility_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
    // bundleUrl Field Functions 
    bool hasBundleUrl() const { return this->bundleUrl_ != nullptr;};
    void deleteBundleUrl() { this->bundleUrl_ = nullptr;};
    inline string getBundleUrl() const { DARABONBA_PTR_GET_DEFAULT(bundleUrl_, "") };
    inline CreateSkillShrinkRequest& setBundleUrl(string bundleUrl) { DARABONBA_PTR_SET_VALUE(bundleUrl_, bundleUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline CreateSkillShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSkillShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillMdOverride Field Functions 
    bool hasSkillMdOverride() const { return this->skillMdOverride_ != nullptr;};
    void deleteSkillMdOverride() { this->skillMdOverride_ = nullptr;};
    inline string getSkillMdOverride() const { DARABONBA_PTR_GET_DEFAULT(skillMdOverride_, "") };
    inline CreateSkillShrinkRequest& setSkillMdOverride(string skillMdOverride) { DARABONBA_PTR_SET_VALUE(skillMdOverride_, skillMdOverride) };


    // versionNote Field Functions 
    bool hasVersionNote() const { return this->versionNote_ != nullptr;};
    void deleteVersionNote() { this->versionNote_ = nullptr;};
    inline string getVersionNote() const { DARABONBA_PTR_GET_DEFAULT(versionNote_, "") };
    inline CreateSkillShrinkRequest& setVersionNote(string versionNote) { DARABONBA_PTR_SET_VALUE(versionNote_, versionNote) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateSkillShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScopeShrink Field Functions 
    bool hasVisibilityScopeShrink() const { return this->visibilityScopeShrink_ != nullptr;};
    void deleteVisibilityScopeShrink() { this->visibilityScopeShrink_ = nullptr;};
    inline string getVisibilityScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityScopeShrink_, "") };
    inline CreateSkillShrinkRequest& setVisibilityScopeShrink(string visibilityScopeShrink) { DARABONBA_PTR_SET_VALUE(visibilityScopeShrink_, visibilityScopeShrink) };


  protected:
    shared_ptr<string> bundleUrl_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> extraShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> skillMdOverride_ {};
    shared_ptr<string> versionNote_ {};
    shared_ptr<string> visibility_ {};
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
