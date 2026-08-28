// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateSkillDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSkillDraftRequest() = default ;
    CreateSkillDraftRequest(const CreateSkillDraftRequest &) = default ;
    CreateSkillDraftRequest(CreateSkillDraftRequest &&) = default ;
    CreateSkillDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillDraftRequest() = default ;
    CreateSkillDraftRequest& operator=(const CreateSkillDraftRequest &) = default ;
    CreateSkillDraftRequest& operator=(CreateSkillDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(basedOnVersion, basedOnVersion_);
        DARABONBA_PTR_TO_JSON(commitMsg, commitMsg_);
        DARABONBA_PTR_TO_JSON(skillCard, skillCard_);
        DARABONBA_PTR_TO_JSON(skillName, skillName_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(basedOnVersion, basedOnVersion_);
        DARABONBA_PTR_FROM_JSON(commitMsg, commitMsg_);
        DARABONBA_PTR_FROM_JSON(skillCard, skillCard_);
        DARABONBA_PTR_FROM_JSON(skillName, skillName_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->basedOnVersion_ == nullptr
        && this->commitMsg_ == nullptr && this->skillCard_ == nullptr && this->skillName_ == nullptr && this->targetVersion_ == nullptr; };
      // basedOnVersion Field Functions 
      bool hasBasedOnVersion() const { return this->basedOnVersion_ != nullptr;};
      void deleteBasedOnVersion() { this->basedOnVersion_ = nullptr;};
      inline string getBasedOnVersion() const { DARABONBA_PTR_GET_DEFAULT(basedOnVersion_, "") };
      inline Body& setBasedOnVersion(string basedOnVersion) { DARABONBA_PTR_SET_VALUE(basedOnVersion_, basedOnVersion) };


      // commitMsg Field Functions 
      bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
      void deleteCommitMsg() { this->commitMsg_ = nullptr;};
      inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
      inline Body& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


      // skillCard Field Functions 
      bool hasSkillCard() const { return this->skillCard_ != nullptr;};
      void deleteSkillCard() { this->skillCard_ = nullptr;};
      inline string getSkillCard() const { DARABONBA_PTR_GET_DEFAULT(skillCard_, "") };
      inline Body& setSkillCard(string skillCard) { DARABONBA_PTR_SET_VALUE(skillCard_, skillCard) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Body& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Body& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    protected:
      // The version from which to fork the draft. If not specified, a new Skill is created.
      shared_ptr<string> basedOnVersion_ {};
      // The commit message.
      shared_ptr<string> commitMsg_ {};
      // The Skill card JSON string that contains the complete Skill information.
      shared_ptr<string> skillCard_ {};
      // The Skill name.
      // 
      // This parameter is required.
      shared_ptr<string> skillName_ {};
      // The draft version number to assign. If not specified, the version number is automatically incremented.
      shared_ptr<string> targetVersion_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSkillDraftRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateSkillDraftRequest::Body) };
    inline CreateSkillDraftRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateSkillDraftRequest::Body) };
    inline CreateSkillDraftRequest& setBody(const CreateSkillDraftRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSkillDraftRequest& setBody(CreateSkillDraftRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<CreateSkillDraftRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
