// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class CreatePromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    CreatePromptRequest() = default ;
    CreatePromptRequest(const CreatePromptRequest &) = default ;
    CreatePromptRequest(CreatePromptRequest &&) = default ;
    CreatePromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptRequest() = default ;
    CreatePromptRequest& operator=(const CreatePromptRequest &) = default ;
    CreatePromptRequest& operator=(CreatePromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->commitMsg_ == nullptr && this->description_ == nullptr && this->namespaceId_ == nullptr && this->promptKey_ == nullptr && this->targetVersion_ == nullptr
        && this->template_ == nullptr && this->variables_ == nullptr; };
    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
    inline CreatePromptRequest& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline CreatePromptRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePromptRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreatePromptRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline CreatePromptRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreatePromptRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreatePromptRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline CreatePromptRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    shared_ptr<string> bizTags_ {};
    shared_ptr<string> commitMsg_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
    shared_ptr<string> targetVersion_ {};
    // This parameter is required.
    shared_ptr<string> template_ {};
    shared_ptr<string> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
