// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPromptTemplatesResponseBodyPromptTemplates.hpp>
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
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->promptTemplates_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->workspaceId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromptTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromptTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // promptTemplates Field Functions 
    bool hasPromptTemplates() const { return this->promptTemplates_ != nullptr;};
    void deletePromptTemplates() { this->promptTemplates_ = nullptr;};
    inline const vector<ListPromptTemplatesResponseBodyPromptTemplates> & promptTemplates() const { DARABONBA_PTR_GET_CONST(promptTemplates_, vector<ListPromptTemplatesResponseBodyPromptTemplates>) };
    inline vector<ListPromptTemplatesResponseBodyPromptTemplates> promptTemplates() { DARABONBA_PTR_GET(promptTemplates_, vector<ListPromptTemplatesResponseBodyPromptTemplates>) };
    inline ListPromptTemplatesResponseBody& setPromptTemplates(const vector<ListPromptTemplatesResponseBodyPromptTemplates> & promptTemplates) { DARABONBA_PTR_SET_VALUE(promptTemplates_, promptTemplates) };
    inline ListPromptTemplatesResponseBody& setPromptTemplates(vector<ListPromptTemplatesResponseBodyPromptTemplates> && promptTemplates) { DARABONBA_PTR_SET_RVALUE(promptTemplates_, promptTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromptTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPromptTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListPromptTemplatesResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The maximum number of returned entries.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start position of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The templates.
    std::shared_ptr<vector<ListPromptTemplatesResponseBodyPromptTemplates>> promptTemplates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
