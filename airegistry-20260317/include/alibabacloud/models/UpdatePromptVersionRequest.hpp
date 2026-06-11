// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMPTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMPTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdatePromptVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePromptVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePromptVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdatePromptVersionRequest() = default ;
    UpdatePromptVersionRequest(const UpdatePromptVersionRequest &) = default ;
    UpdatePromptVersionRequest(UpdatePromptVersionRequest &&) = default ;
    UpdatePromptVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePromptVersionRequest() = default ;
    UpdatePromptVersionRequest& operator=(const UpdatePromptVersionRequest &) = default ;
    UpdatePromptVersionRequest& operator=(UpdatePromptVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->namespaceId_ == nullptr && this->promptKey_ == nullptr && this->template_ == nullptr && this->variables_ == nullptr; };
    // commitMsg Field Functions 
    bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
    void deleteCommitMsg() { this->commitMsg_ = nullptr;};
    inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
    inline UpdatePromptVersionRequest& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdatePromptVersionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline UpdatePromptVersionRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdatePromptVersionRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline UpdatePromptVersionRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    shared_ptr<string> commitMsg_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
    // This parameter is required.
    shared_ptr<string> template_ {};
    shared_ptr<string> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
