// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMPTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMPTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdatePromptTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePromptTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePromptTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdatePromptTemplateRequest() = default ;
    UpdatePromptTemplateRequest(const UpdatePromptTemplateRequest &) = default ;
    UpdatePromptTemplateRequest(UpdatePromptTemplateRequest &&) = default ;
    UpdatePromptTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePromptTemplateRequest() = default ;
    UpdatePromptTemplateRequest& operator=(const UpdatePromptTemplateRequest &) = default ;
    UpdatePromptTemplateRequest& operator=(UpdatePromptTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdatePromptTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePromptTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The template content.
    shared_ptr<string> content_ {};
    // The template name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
