// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchInfoResponseBodyKnowledgeBaseSearchResults.hpp>
#include <alibabacloud/models/SearchInfoResponseBodyWebSearchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseSearchResults, knowledgeBaseSearchResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebSearchResults, webSearchResults_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseSearchResults, knowledgeBaseSearchResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebSearchResults, webSearchResults_);
    };
    SearchInfoResponseBody() = default ;
    SearchInfoResponseBody(const SearchInfoResponseBody &) = default ;
    SearchInfoResponseBody(SearchInfoResponseBody &&) = default ;
    SearchInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoResponseBody() = default ;
    SearchInfoResponseBody& operator=(const SearchInfoResponseBody &) = default ;
    SearchInfoResponseBody& operator=(SearchInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseSearchResults_ == nullptr
        && return this->requestId_ == nullptr && return this->webSearchResults_ == nullptr; };
    // knowledgeBaseSearchResults Field Functions 
    bool hasKnowledgeBaseSearchResults() const { return this->knowledgeBaseSearchResults_ != nullptr;};
    void deleteKnowledgeBaseSearchResults() { this->knowledgeBaseSearchResults_ = nullptr;};
    inline const vector<SearchInfoResponseBodyKnowledgeBaseSearchResults> & knowledgeBaseSearchResults() const { DARABONBA_PTR_GET_CONST(knowledgeBaseSearchResults_, vector<SearchInfoResponseBodyKnowledgeBaseSearchResults>) };
    inline vector<SearchInfoResponseBodyKnowledgeBaseSearchResults> knowledgeBaseSearchResults() { DARABONBA_PTR_GET(knowledgeBaseSearchResults_, vector<SearchInfoResponseBodyKnowledgeBaseSearchResults>) };
    inline SearchInfoResponseBody& setKnowledgeBaseSearchResults(const vector<SearchInfoResponseBodyKnowledgeBaseSearchResults> & knowledgeBaseSearchResults) { DARABONBA_PTR_SET_VALUE(knowledgeBaseSearchResults_, knowledgeBaseSearchResults) };
    inline SearchInfoResponseBody& setKnowledgeBaseSearchResults(vector<SearchInfoResponseBodyKnowledgeBaseSearchResults> && knowledgeBaseSearchResults) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseSearchResults_, knowledgeBaseSearchResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webSearchResults Field Functions 
    bool hasWebSearchResults() const { return this->webSearchResults_ != nullptr;};
    void deleteWebSearchResults() { this->webSearchResults_ = nullptr;};
    inline const vector<SearchInfoResponseBodyWebSearchResults> & webSearchResults() const { DARABONBA_PTR_GET_CONST(webSearchResults_, vector<SearchInfoResponseBodyWebSearchResults>) };
    inline vector<SearchInfoResponseBodyWebSearchResults> webSearchResults() { DARABONBA_PTR_GET(webSearchResults_, vector<SearchInfoResponseBodyWebSearchResults>) };
    inline SearchInfoResponseBody& setWebSearchResults(const vector<SearchInfoResponseBodyWebSearchResults> & webSearchResults) { DARABONBA_PTR_SET_VALUE(webSearchResults_, webSearchResults) };
    inline SearchInfoResponseBody& setWebSearchResults(vector<SearchInfoResponseBodyWebSearchResults> && webSearchResults) { DARABONBA_PTR_SET_RVALUE(webSearchResults_, webSearchResults) };


  protected:
    std::shared_ptr<vector<SearchInfoResponseBodyKnowledgeBaseSearchResults>> knowledgeBaseSearchResults_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SearchInfoResponseBodyWebSearchResults>> webSearchResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
