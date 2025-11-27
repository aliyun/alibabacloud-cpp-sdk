// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchInfoRequestKnowledgeBaseFilters.hpp>
#include <alibabacloud/models/SearchInfoRequestWebFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseFilters, knowledgeBaseFilters_);
      DARABONBA_PTR_TO_JSON(WebFilters, webFilters_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseFilters, knowledgeBaseFilters_);
      DARABONBA_PTR_FROM_JSON(WebFilters, webFilters_);
    };
    SearchInfoRequest() = default ;
    SearchInfoRequest(const SearchInfoRequest &) = default ;
    SearchInfoRequest(SearchInfoRequest &&) = default ;
    SearchInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoRequest() = default ;
    SearchInfoRequest& operator=(const SearchInfoRequest &) = default ;
    SearchInfoRequest& operator=(SearchInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseFilters_ == nullptr
        && return this->webFilters_ == nullptr; };
    // knowledgeBaseFilters Field Functions 
    bool hasKnowledgeBaseFilters() const { return this->knowledgeBaseFilters_ != nullptr;};
    void deleteKnowledgeBaseFilters() { this->knowledgeBaseFilters_ = nullptr;};
    inline const vector<SearchInfoRequestKnowledgeBaseFilters> & knowledgeBaseFilters() const { DARABONBA_PTR_GET_CONST(knowledgeBaseFilters_, vector<SearchInfoRequestKnowledgeBaseFilters>) };
    inline vector<SearchInfoRequestKnowledgeBaseFilters> knowledgeBaseFilters() { DARABONBA_PTR_GET(knowledgeBaseFilters_, vector<SearchInfoRequestKnowledgeBaseFilters>) };
    inline SearchInfoRequest& setKnowledgeBaseFilters(const vector<SearchInfoRequestKnowledgeBaseFilters> & knowledgeBaseFilters) { DARABONBA_PTR_SET_VALUE(knowledgeBaseFilters_, knowledgeBaseFilters) };
    inline SearchInfoRequest& setKnowledgeBaseFilters(vector<SearchInfoRequestKnowledgeBaseFilters> && knowledgeBaseFilters) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseFilters_, knowledgeBaseFilters) };


    // webFilters Field Functions 
    bool hasWebFilters() const { return this->webFilters_ != nullptr;};
    void deleteWebFilters() { this->webFilters_ = nullptr;};
    inline const vector<SearchInfoRequestWebFilters> & webFilters() const { DARABONBA_PTR_GET_CONST(webFilters_, vector<SearchInfoRequestWebFilters>) };
    inline vector<SearchInfoRequestWebFilters> webFilters() { DARABONBA_PTR_GET(webFilters_, vector<SearchInfoRequestWebFilters>) };
    inline SearchInfoRequest& setWebFilters(const vector<SearchInfoRequestWebFilters> & webFilters) { DARABONBA_PTR_SET_VALUE(webFilters_, webFilters) };
    inline SearchInfoRequest& setWebFilters(vector<SearchInfoRequestWebFilters> && webFilters) { DARABONBA_PTR_SET_RVALUE(webFilters_, webFilters) };


  protected:
    std::shared_ptr<vector<SearchInfoRequestKnowledgeBaseFilters>> knowledgeBaseFilters_ = nullptr;
    std::shared_ptr<vector<SearchInfoRequestWebFilters>> webFilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
