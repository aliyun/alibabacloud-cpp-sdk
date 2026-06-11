// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class CreatePromptVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasedOnVersion, basedOnVersion_);
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasedOnVersion, basedOnVersion_);
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    CreatePromptVersionRequest() = default ;
    CreatePromptVersionRequest(const CreatePromptVersionRequest &) = default ;
    CreatePromptVersionRequest(CreatePromptVersionRequest &&) = default ;
    CreatePromptVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptVersionRequest() = default ;
    CreatePromptVersionRequest& operator=(const CreatePromptVersionRequest &) = default ;
    CreatePromptVersionRequest& operator=(CreatePromptVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basedOnVersion_ == nullptr
        && this->commitMsg_ == nullptr && this->namespaceId_ == nullptr && this->promptKey_ == nullptr && this->targetVersion_ == nullptr && this->template_ == nullptr
        && this->variables_ == nullptr; };
    // basedOnVersion Field Functions 
    bool hasBasedOnVersion() const { return this->basedOnVersion_ != nullptr;};
    void deleteBasedOnVersion() { this->basedOnVersion_ = nullptr;};
    inline string getBasedOnVersion() const { DARABONBA_PTR_GET_DEFAULT(basedOnVersion_, "") };
    inline CreatePromptVersionRequest& setBasedOnVersion(string basedOnVersion) { DARABONBA_PTR_SET_VALUE(basedOnVersion_, basedOnVersion) };


    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline CreatePromptVersionRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreatePromptVersionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline CreatePromptVersionRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreatePromptVersionRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreatePromptVersionRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline CreatePromptVersionRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    shared_ptr<string> basedOnVersion_ {};
    shared_ptr<string> commitMsg_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
    shared_ptr<string> targetVersion_ {};
    shared_ptr<string> template_ {};
    shared_ptr<string> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
