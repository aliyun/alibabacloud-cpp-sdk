// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_TO_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_FROM_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    UpdateSkillShrinkRequest() = default ;
    UpdateSkillShrinkRequest(const UpdateSkillShrinkRequest &) = default ;
    UpdateSkillShrinkRequest(UpdateSkillShrinkRequest &&) = default ;
    UpdateSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillShrinkRequest() = default ;
    UpdateSkillShrinkRequest& operator=(const UpdateSkillShrinkRequest &) = default ;
    UpdateSkillShrinkRequest& operator=(UpdateSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleUrl_ == nullptr
        && this->description_ == nullptr && this->expectedVersion_ == nullptr && this->extraShrink_ == nullptr && this->name_ == nullptr && this->skillMdOverride_ == nullptr
        && this->versionNote_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
    // bundleUrl Field Functions 
    bool hasBundleUrl() const { return this->bundleUrl_ != nullptr;};
    void deleteBundleUrl() { this->bundleUrl_ = nullptr;};
    inline string getBundleUrl() const { DARABONBA_PTR_GET_DEFAULT(bundleUrl_, "") };
    inline UpdateSkillShrinkRequest& setBundleUrl(string bundleUrl) { DARABONBA_PTR_SET_VALUE(bundleUrl_, bundleUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int32_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0) };
    inline UpdateSkillShrinkRequest& setExpectedVersion(int32_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline UpdateSkillShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSkillShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillMdOverride Field Functions 
    bool hasSkillMdOverride() const { return this->skillMdOverride_ != nullptr;};
    void deleteSkillMdOverride() { this->skillMdOverride_ = nullptr;};
    inline string getSkillMdOverride() const { DARABONBA_PTR_GET_DEFAULT(skillMdOverride_, "") };
    inline UpdateSkillShrinkRequest& setSkillMdOverride(string skillMdOverride) { DARABONBA_PTR_SET_VALUE(skillMdOverride_, skillMdOverride) };


    // versionNote Field Functions 
    bool hasVersionNote() const { return this->versionNote_ != nullptr;};
    void deleteVersionNote() { this->versionNote_ = nullptr;};
    inline string getVersionNote() const { DARABONBA_PTR_GET_DEFAULT(versionNote_, "") };
    inline UpdateSkillShrinkRequest& setVersionNote(string versionNote) { DARABONBA_PTR_SET_VALUE(versionNote_, versionNote) };


    // visibilityScopeShrink Field Functions 
    bool hasVisibilityScopeShrink() const { return this->visibilityScopeShrink_ != nullptr;};
    void deleteVisibilityScopeShrink() { this->visibilityScopeShrink_ = nullptr;};
    inline string getVisibilityScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityScopeShrink_, "") };
    inline UpdateSkillShrinkRequest& setVisibilityScopeShrink(string visibilityScopeShrink) { DARABONBA_PTR_SET_VALUE(visibilityScopeShrink_, visibilityScopeShrink) };


  protected:
    // The downloadable URL (HTTP/HTTPS) of the bundle.zip file. Mutually exclusive with SkillMdOverride. If provided, the bundle is replaced.
    shared_ptr<string> bundleUrl_ {};
    // The Skill description.
    shared_ptr<string> description_ {};
    // The expected version number for optimistic locking. If not specified, the update is based on the current highest version.
    shared_ptr<int32_t> expectedVersion_ {};
    // The extended metadata (key-value pairs).
    shared_ptr<string> extraShrink_ {};
    // The name of the Skill to update.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The SKILL.md body content. Mutually exclusive with BundleUrl.
    shared_ptr<string> skillMdOverride_ {};
    // The version note.
    shared_ptr<string> versionNote_ {};
    // The visibility scope. The corresponding field is used based on the visibility level.
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
