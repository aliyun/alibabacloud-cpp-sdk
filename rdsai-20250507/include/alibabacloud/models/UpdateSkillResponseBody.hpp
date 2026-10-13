// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(BundleHash, bundleHash_);
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(BundleHash, bundleHash_);
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateSkillResponseBody() = default ;
    UpdateSkillResponseBody(const UpdateSkillResponseBody &) = default ;
    UpdateSkillResponseBody(UpdateSkillResponseBody &&) = default ;
    UpdateSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillResponseBody() = default ;
    UpdateSkillResponseBody& operator=(const UpdateSkillResponseBody &) = default ;
    UpdateSkillResponseBody& operator=(UpdateSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->bundleHash_ == nullptr && this->content_ == nullptr && this->dbtypes_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->requestId_ == nullptr && this->skillId_ == nullptr && this->skillType_ == nullptr && this->updatedAt_ == nullptr
        && this->versionId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateSkillResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // bundleHash Field Functions 
    bool hasBundleHash() const { return this->bundleHash_ != nullptr;};
    void deleteBundleHash() { this->bundleHash_ = nullptr;};
    inline string getBundleHash() const { DARABONBA_PTR_GET_DEFAULT(bundleHash_, "") };
    inline UpdateSkillResponseBody& setBundleHash(string bundleHash) { DARABONBA_PTR_SET_VALUE(bundleHash_, bundleHash) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline UpdateSkillResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline UpdateSkillResponseBody& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // dbtypes Field Functions 
    bool hasDbtypes() const { return this->dbtypes_ != nullptr;};
    void deleteDbtypes() { this->dbtypes_ = nullptr;};
    inline const vector<string> & getDbtypes() const { DARABONBA_PTR_GET_CONST(dbtypes_, vector<string>) };
    inline vector<string> getDbtypes() { DARABONBA_PTR_GET(dbtypes_, vector<string>) };
    inline UpdateSkillResponseBody& setDbtypes(const vector<string> & dbtypes) { DARABONBA_PTR_SET_VALUE(dbtypes_, dbtypes) };
    inline UpdateSkillResponseBody& setDbtypes(vector<string> && dbtypes) { DARABONBA_PTR_SET_RVALUE(dbtypes_, dbtypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSkillResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateSkillResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSkillResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline UpdateSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
    inline UpdateSkillResponseBody& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline UpdateSkillResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateSkillResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The update action performed.
    shared_ptr<string> action_ {};
    // The content digest of the Skill package.
    shared_ptr<string> bundleHash_ {};
    // The content.
    Darabonba::Json content_ {};
    // The list of database types.
    shared_ptr<vector<string>> dbtypes_ {};
    // The description of the Skill. The description can be up to 1000 characters in length.
    shared_ptr<string> description_ {};
    // The unique identifier of the Skill.
    shared_ptr<string> id_ {};
    // The name of the Skill. The name can contain only lowercase letters, digits, and hyphens.
    shared_ptr<string> name_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the updated Skill.
    shared_ptr<string> skillId_ {};
    // The Skill type.
    shared_ptr<string> skillType_ {};
    // The time when the Skill was updated.
    shared_ptr<string> updatedAt_ {};
    // The ID of the Skill version created in this update.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
