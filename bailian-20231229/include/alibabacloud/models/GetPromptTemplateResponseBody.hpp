// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMPTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMPTTEMPLATERESPONSEBODY_HPP_
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
  class GetPromptTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPromptTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPromptTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetPromptTemplateResponseBody() = default ;
    GetPromptTemplateResponseBody(const GetPromptTemplateResponseBody &) = default ;
    GetPromptTemplateResponseBody(GetPromptTemplateResponseBody &&) = default ;
    GetPromptTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPromptTemplateResponseBody() = default ;
    GetPromptTemplateResponseBody& operator=(const GetPromptTemplateResponseBody &) = default ;
    GetPromptTemplateResponseBody& operator=(GetPromptTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->name_ != nullptr && this->promptTemplateId_ != nullptr && this->requestId_ != nullptr && this->variables_ != nullptr && this->workspaceId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetPromptTemplateResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPromptTemplateResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // promptTemplateId Field Functions 
    bool hasPromptTemplateId() const { return this->promptTemplateId_ != nullptr;};
    void deletePromptTemplateId() { this->promptTemplateId_ = nullptr;};
    inline string promptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(promptTemplateId_, "") };
    inline GetPromptTemplateResponseBody& setPromptTemplateId(string promptTemplateId) { DARABONBA_PTR_SET_VALUE(promptTemplateId_, promptTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPromptTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<string> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<string>) };
    inline vector<string> variables() { DARABONBA_PTR_GET(variables_, vector<string>) };
    inline GetPromptTemplateResponseBody& setVariables(const vector<string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetPromptTemplateResponseBody& setVariables(vector<string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetPromptTemplateResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The template content.
    std::shared_ptr<string> content_ = nullptr;
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The template ID.
    std::shared_ptr<string> promptTemplateId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The variables of the template.
    std::shared_ptr<vector<string>> variables_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
