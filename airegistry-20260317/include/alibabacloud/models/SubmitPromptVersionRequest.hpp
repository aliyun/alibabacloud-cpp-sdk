// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROMPTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROMPTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class SubmitPromptVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPromptVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_TO_JSON(PromptVersion, promptVersion_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPromptVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_FROM_JSON(PromptVersion, promptVersion_);
    };
    SubmitPromptVersionRequest() = default ;
    SubmitPromptVersionRequest(const SubmitPromptVersionRequest &) = default ;
    SubmitPromptVersionRequest(SubmitPromptVersionRequest &&) = default ;
    SubmitPromptVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPromptVersionRequest() = default ;
    SubmitPromptVersionRequest& operator=(const SubmitPromptVersionRequest &) = default ;
    SubmitPromptVersionRequest& operator=(SubmitPromptVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->promptKey_ == nullptr && this->promptVersion_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline SubmitPromptVersionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline SubmitPromptVersionRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


    // promptVersion Field Functions 
    bool hasPromptVersion() const { return this->promptVersion_ != nullptr;};
    void deletePromptVersion() { this->promptVersion_ = nullptr;};
    inline string getPromptVersion() const { DARABONBA_PTR_GET_DEFAULT(promptVersion_, "") };
    inline SubmitPromptVersionRequest& setPromptVersion(string promptVersion) { DARABONBA_PTR_SET_VALUE(promptVersion_, promptVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
    shared_ptr<string> promptVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
