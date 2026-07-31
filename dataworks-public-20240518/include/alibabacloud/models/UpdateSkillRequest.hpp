// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_TO_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleUrl, bundleUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillMdOverride, skillMdOverride_);
      DARABONBA_PTR_FROM_JSON(VersionNote, versionNote_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
    };
    UpdateSkillRequest() = default ;
    UpdateSkillRequest(const UpdateSkillRequest &) = default ;
    UpdateSkillRequest(UpdateSkillRequest &&) = default ;
    UpdateSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillRequest() = default ;
    UpdateSkillRequest& operator=(const UpdateSkillRequest &) = default ;
    UpdateSkillRequest& operator=(UpdateSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VisibilityScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisibilityScope& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, VisibilityScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      VisibilityScope() = default ;
      VisibilityScope(const VisibilityScope &) = default ;
      VisibilityScope(VisibilityScope &&) = default ;
      VisibilityScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisibilityScope() = default ;
      VisibilityScope& operator=(const VisibilityScope &) = default ;
      VisibilityScope& operator=(VisibilityScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectIds_ == nullptr
        && this->userIds_ == nullptr; };
      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<string> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<string>) };
      inline vector<string> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<string>) };
      inline VisibilityScope& setProjectIds(const vector<string> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline VisibilityScope& setProjectIds(vector<string> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline VisibilityScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline VisibilityScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The list of visible project IDs.
      shared_ptr<vector<string>> projectIds_ {};
      // The list of visible user IDs.
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->bundleUrl_ == nullptr
        && this->description_ == nullptr && this->expectedVersion_ == nullptr && this->extra_ == nullptr && this->name_ == nullptr && this->skillMdOverride_ == nullptr
        && this->versionNote_ == nullptr && this->visibilityScope_ == nullptr; };
    // bundleUrl Field Functions 
    bool hasBundleUrl() const { return this->bundleUrl_ != nullptr;};
    void deleteBundleUrl() { this->bundleUrl_ = nullptr;};
    inline string getBundleUrl() const { DARABONBA_PTR_GET_DEFAULT(bundleUrl_, "") };
    inline UpdateSkillRequest& setBundleUrl(string bundleUrl) { DARABONBA_PTR_SET_VALUE(bundleUrl_, bundleUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSkillRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int32_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0) };
    inline UpdateSkillRequest& setExpectedVersion(int32_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
    inline UpdateSkillRequest& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline UpdateSkillRequest& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSkillRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillMdOverride Field Functions 
    bool hasSkillMdOverride() const { return this->skillMdOverride_ != nullptr;};
    void deleteSkillMdOverride() { this->skillMdOverride_ = nullptr;};
    inline string getSkillMdOverride() const { DARABONBA_PTR_GET_DEFAULT(skillMdOverride_, "") };
    inline UpdateSkillRequest& setSkillMdOverride(string skillMdOverride) { DARABONBA_PTR_SET_VALUE(skillMdOverride_, skillMdOverride) };


    // versionNote Field Functions 
    bool hasVersionNote() const { return this->versionNote_ != nullptr;};
    void deleteVersionNote() { this->versionNote_ = nullptr;};
    inline string getVersionNote() const { DARABONBA_PTR_GET_DEFAULT(versionNote_, "") };
    inline UpdateSkillRequest& setVersionNote(string versionNote) { DARABONBA_PTR_SET_VALUE(versionNote_, versionNote) };


    // visibilityScope Field Functions 
    bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
    void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
    inline const UpdateSkillRequest::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, UpdateSkillRequest::VisibilityScope) };
    inline UpdateSkillRequest::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, UpdateSkillRequest::VisibilityScope) };
    inline UpdateSkillRequest& setVisibilityScope(const UpdateSkillRequest::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
    inline UpdateSkillRequest& setVisibilityScope(UpdateSkillRequest::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


  protected:
    // The downloadable URL (HTTP/HTTPS) of the bundle.zip file. Mutually exclusive with SkillMdOverride. If specified, the bundle is replaced.
    shared_ptr<string> bundleUrl_ {};
    // The Skill description.
    shared_ptr<string> description_ {};
    // The expected version number for optimistic locking. If not specified, the update is based on the current highest version.
    shared_ptr<int32_t> expectedVersion_ {};
    // The extended metadata (key-value pairs).
    Darabonba::Json extra_ {};
    // The name of the Skill to update.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The SKILL.md body content. Mutually exclusive with BundleUrl.
    shared_ptr<string> skillMdOverride_ {};
    // The version note.
    shared_ptr<string> versionNote_ {};
    // The visibility scope. The corresponding field is used based on the visibility level.
    shared_ptr<UpdateSkillRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
