// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreatePromptTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreatePromptTemplateRequest() = default ;
    CreatePromptTemplateRequest(const CreatePromptTemplateRequest &) = default ;
    CreatePromptTemplateRequest(CreatePromptTemplateRequest &&) = default ;
    CreatePromptTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptTemplateRequest() = default ;
    CreatePromptTemplateRequest& operator=(const CreatePromptTemplateRequest &) = default ;
    CreatePromptTemplateRequest& operator=(CreatePromptTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->name_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreatePromptTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePromptTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
