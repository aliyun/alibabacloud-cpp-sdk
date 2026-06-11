// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class CreateSkillDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasedOnVersion, basedOnVersion_);
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SkillCard, skillCard_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasedOnVersion, basedOnVersion_);
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SkillCard, skillCard_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
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
    virtual bool empty() const override { return this->basedOnVersion_ == nullptr
        && this->commitMsg_ == nullptr && this->namespaceId_ == nullptr && this->skillCard_ == nullptr && this->skillName_ == nullptr && this->targetVersion_ == nullptr; };
    // basedOnVersion Field Functions 
    bool hasBasedOnVersion() const { return this->basedOnVersion_ != nullptr;};
    void deleteBasedOnVersion() { this->basedOnVersion_ = nullptr;};
    inline string getBasedOnVersion() const { DARABONBA_PTR_GET_DEFAULT(basedOnVersion_, "") };
    inline CreateSkillDraftRequest& setBasedOnVersion(string basedOnVersion) { DARABONBA_PTR_SET_VALUE(basedOnVersion_, basedOnVersion) };


    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline CreateSkillDraftRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateSkillDraftRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // skillCard Field Functions 
    bool hasSkillCard() const { return this->skillCard_ != nullptr;};
    void deleteSkillCard() { this->skillCard_ = nullptr;};
    inline string getSkillCard() const { DARABONBA_PTR_GET_DEFAULT(skillCard_, "") };
    inline CreateSkillDraftRequest& setSkillCard(string skillCard) { DARABONBA_PTR_SET_VALUE(skillCard_, skillCard) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreateSkillDraftRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreateSkillDraftRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    shared_ptr<string> basedOnVersion_ {};
    shared_ptr<string> commitMsg_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    shared_ptr<string> skillCard_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
    shared_ptr<string> targetVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
