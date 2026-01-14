// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODY_HPP_
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
  class ListPromptTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(promptTemplates, promptTemplates_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(promptTemplates, promptTemplates_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListPromptTemplatesResponseBody() = default ;
    ListPromptTemplatesResponseBody(const ListPromptTemplatesResponseBody &) = default ;
    ListPromptTemplatesResponseBody(ListPromptTemplatesResponseBody &&) = default ;
    ListPromptTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptTemplatesResponseBody() = default ;
    ListPromptTemplatesResponseBody& operator=(const ListPromptTemplatesResponseBody &) = default ;
    ListPromptTemplatesResponseBody& operator=(ListPromptTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PromptTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PromptTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(promptTemplateId, promptTemplateId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, PromptTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(promptTemplateId, promptTemplateId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
      };
      PromptTemplates() = default ;
      PromptTemplates(const PromptTemplates &) = default ;
      PromptTemplates(PromptTemplates &&) = default ;
      PromptTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PromptTemplates() = default ;
      PromptTemplates& operator=(const PromptTemplates &) = default ;
      PromptTemplates& operator=(PromptTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr && this->promptTemplateId_ == nullptr && this->type_ == nullptr && this->variables_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline PromptTemplates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PromptTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // promptTemplateId Field Functions 
      bool hasPromptTemplateId() const { return this->promptTemplateId_ != nullptr;};
      void deletePromptTemplateId() { this->promptTemplateId_ = nullptr;};
      inline string getPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(promptTemplateId_, "") };
      inline PromptTemplates& setPromptTemplateId(string promptTemplateId) { DARABONBA_PTR_SET_VALUE(promptTemplateId_, promptTemplateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PromptTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<string> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<string>) };
      inline vector<string> getVariables() { DARABONBA_PTR_GET(variables_, vector<string>) };
      inline PromptTemplates& setVariables(const vector<string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline PromptTemplates& setVariables(vector<string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      // The template content
      shared_ptr<string> content_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The template ID.
      shared_ptr<string> promptTemplateId_ {};
      // The template type.
      shared_ptr<string> type_ {};
      // The variables of the template.
      shared_ptr<vector<string>> variables_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->promptTemplates_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->workspaceId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromptTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromptTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // promptTemplates Field Functions 
    bool hasPromptTemplates() const { return this->promptTemplates_ != nullptr;};
    void deletePromptTemplates() { this->promptTemplates_ = nullptr;};
    inline const vector<ListPromptTemplatesResponseBody::PromptTemplates> & getPromptTemplates() const { DARABONBA_PTR_GET_CONST(promptTemplates_, vector<ListPromptTemplatesResponseBody::PromptTemplates>) };
    inline vector<ListPromptTemplatesResponseBody::PromptTemplates> getPromptTemplates() { DARABONBA_PTR_GET(promptTemplates_, vector<ListPromptTemplatesResponseBody::PromptTemplates>) };
    inline ListPromptTemplatesResponseBody& setPromptTemplates(const vector<ListPromptTemplatesResponseBody::PromptTemplates> & promptTemplates) { DARABONBA_PTR_SET_VALUE(promptTemplates_, promptTemplates) };
    inline ListPromptTemplatesResponseBody& setPromptTemplates(vector<ListPromptTemplatesResponseBody::PromptTemplates> && promptTemplates) { DARABONBA_PTR_SET_RVALUE(promptTemplates_, promptTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromptTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPromptTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListPromptTemplatesResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The maximum number of returned entries.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start position of the next query.
    shared_ptr<string> nextToken_ {};
    // The templates.
    shared_ptr<vector<ListPromptTemplatesResponseBody::PromptTemplates>> promptTemplates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
