// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATORSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATORSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetEvaluatorSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluatorSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skill, skill_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluatorSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skill, skill_);
    };
    GetEvaluatorSkillResponseBody() = default ;
    GetEvaluatorSkillResponseBody(const GetEvaluatorSkillResponseBody &) = default ;
    GetEvaluatorSkillResponseBody(GetEvaluatorSkillResponseBody &&) = default ;
    GetEvaluatorSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluatorSkillResponseBody() = default ;
    GetEvaluatorSkillResponseBody& operator=(const GetEvaluatorSkillResponseBody &) = default ;
    GetEvaluatorSkillResponseBody& operator=(GetEvaluatorSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Skill : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skill& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(files, files_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(skillName, skillName_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Skill& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(files, files_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(skillName, skillName_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
      };
      Skill() = default ;
      Skill(const Skill &) = default ;
      Skill(Skill &&) = default ;
      Skill(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skill() = default ;
      Skill& operator=(const Skill &) = default ;
      Skill& operator=(Skill &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->version_ == nullptr && this->versionDescription_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
        inline Versions& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionDescription Field Functions 
        bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
        void deleteVersionDescription() { this->versionDescription_ = nullptr;};
        inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
        inline Versions& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


      protected:
        // The time when the version was created. This value is a UNIX timestamp in seconds.
        shared_ptr<int64_t> createdAt_ {};
        // The version number.
        shared_ptr<string> version_ {};
        // The version description.
        shared_ptr<string> versionDescription_ {};
      };

      class Files : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Files& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, Files& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
        };
        Files() = default ;
        Files(const Files &) = default ;
        Files(Files &&) = default ;
        Files(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Files() = default ;
        Files& operator=(const Files &) = default ;
        Files& operator=(Files &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr && this->remark_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Files& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Files& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        // The file content.
        shared_ptr<string> content_ {};
        // The file name.
        shared_ptr<string> name_ {};
        // The file remarks.
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->currentVersion_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->enable_ == nullptr && this->files_ == nullptr
        && this->latestVersion_ == nullptr && this->skillName_ == nullptr && this->updatedAt_ == nullptr && this->versions_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Skill& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Skill& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Skill& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Skill& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Skill& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline const vector<Skill::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Skill::Files>) };
      inline vector<Skill::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<Skill::Files>) };
      inline Skill& setFiles(const vector<Skill::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
      inline Skill& setFiles(vector<Skill::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Skill& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Skill& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Skill& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<Skill::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Skill::Versions>) };
      inline vector<Skill::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Skill::Versions>) };
      inline Skill& setVersions(const vector<Skill::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Skill& setVersions(vector<Skill::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      // The time when the skill was created. This value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> createdAt_ {};
      // The current version.
      shared_ptr<string> currentVersion_ {};
      // The skill description.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // Indicates whether the skill is enabled.
      shared_ptr<bool> enable_ {};
      // The list of skill files.
      shared_ptr<vector<Skill::Files>> files_ {};
      // The latest version.
      shared_ptr<string> latestVersion_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The time when the skill was last updated. This value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updatedAt_ {};
      // The list of skill versions.
      shared_ptr<vector<Skill::Versions>> versions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skill_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEvaluatorSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline const GetEvaluatorSkillResponseBody::Skill & getSkill() const { DARABONBA_PTR_GET_CONST(skill_, GetEvaluatorSkillResponseBody::Skill) };
    inline GetEvaluatorSkillResponseBody::Skill getSkill() { DARABONBA_PTR_GET(skill_, GetEvaluatorSkillResponseBody::Skill) };
    inline GetEvaluatorSkillResponseBody& setSkill(const GetEvaluatorSkillResponseBody::Skill & skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };
    inline GetEvaluatorSkillResponseBody& setSkill(GetEvaluatorSkillResponseBody::Skill && skill) { DARABONBA_PTR_SET_RVALUE(skill_, skill) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill details.
    shared_ptr<GetEvaluatorSkillResponseBody::Skill> skill_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
