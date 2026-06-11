// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdateSkillDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SkillCard, skillCard_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SkillCard, skillCard_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    UpdateSkillDraftRequest() = default ;
    UpdateSkillDraftRequest(const UpdateSkillDraftRequest &) = default ;
    UpdateSkillDraftRequest(UpdateSkillDraftRequest &&) = default ;
    UpdateSkillDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillDraftRequest() = default ;
    UpdateSkillDraftRequest& operator=(const UpdateSkillDraftRequest &) = default ;
    UpdateSkillDraftRequest& operator=(UpdateSkillDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->namespaceId_ == nullptr && this->skillCard_ == nullptr && this->skillName_ == nullptr; };
    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline UpdateSkillDraftRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateSkillDraftRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // skillCard Field Functions 
    bool hasSkillCard() const { return this->skillCard_ != nullptr;};
    void deleteSkillCard() { this->skillCard_ = nullptr;};
    inline string getSkillCard() const { DARABONBA_PTR_GET_DEFAULT(skillCard_, "") };
    inline UpdateSkillDraftRequest& setSkillCard(string skillCard) { DARABONBA_PTR_SET_VALUE(skillCard_, skillCard) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline UpdateSkillDraftRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    shared_ptr<string> commitMsg_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> skillCard_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
