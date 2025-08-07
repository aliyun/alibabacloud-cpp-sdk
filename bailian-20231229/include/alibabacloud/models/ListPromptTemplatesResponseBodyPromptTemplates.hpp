// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODYPROMPTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODYPROMPTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPromptTemplatesResponseBodyPromptTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptTemplatesResponseBodyPromptTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptTemplatesResponseBodyPromptTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ListPromptTemplatesResponseBodyPromptTemplates() = default ;
    ListPromptTemplatesResponseBodyPromptTemplates(const ListPromptTemplatesResponseBodyPromptTemplates &) = default ;
    ListPromptTemplatesResponseBodyPromptTemplates(ListPromptTemplatesResponseBodyPromptTemplates &&) = default ;
    ListPromptTemplatesResponseBodyPromptTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptTemplatesResponseBodyPromptTemplates() = default ;
    ListPromptTemplatesResponseBodyPromptTemplates& operator=(const ListPromptTemplatesResponseBodyPromptTemplates &) = default ;
    ListPromptTemplatesResponseBodyPromptTemplates& operator=(ListPromptTemplatesResponseBodyPromptTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->name_ != nullptr && this->promptTemplateId_ != nullptr && this->type_ != nullptr && this->variables_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // promptTemplateId Field Functions 
    bool hasPromptTemplateId() const { return this->promptTemplateId_ != nullptr;};
    void deletePromptTemplateId() { this->promptTemplateId_ = nullptr;};
    inline string promptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(promptTemplateId_, "") };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setPromptTemplateId(string promptTemplateId) { DARABONBA_PTR_SET_VALUE(promptTemplateId_, promptTemplateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<string> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<string>) };
    inline vector<string> variables() { DARABONBA_PTR_GET(variables_, vector<string>) };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setVariables(const vector<string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListPromptTemplatesResponseBodyPromptTemplates& setVariables(vector<string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The template content
    std::shared_ptr<string> content_ = nullptr;
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The template ID.
    std::shared_ptr<string> promptTemplateId_ = nullptr;
    // The template type.
    std::shared_ptr<string> type_ = nullptr;
    // The variables of the template.
    std::shared_ptr<vector<string>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
