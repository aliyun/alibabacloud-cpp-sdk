// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHNEWSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHNEWSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SearchNewsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchNewsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(FilterNotNull, filterNotNull_);
      DARABONBA_PTR_TO_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSourcesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SearchNewsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(FilterNotNull, filterNotNull_);
      DARABONBA_PTR_FROM_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSourcesShrink_);
    };
    SearchNewsShrinkRequest() = default ;
    SearchNewsShrinkRequest(const SearchNewsShrinkRequest &) = default ;
    SearchNewsShrinkRequest(SearchNewsShrinkRequest &&) = default ;
    SearchNewsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchNewsShrinkRequest() = default ;
    SearchNewsShrinkRequest& operator=(const SearchNewsShrinkRequest &) = default ;
    SearchNewsShrinkRequest& operator=(SearchNewsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->filterNotNull_ == nullptr && return this->includeContent_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr
        && return this->searchSourcesShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SearchNewsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // filterNotNull Field Functions 
    bool hasFilterNotNull() const { return this->filterNotNull_ != nullptr;};
    void deleteFilterNotNull() { this->filterNotNull_ = nullptr;};
    inline bool filterNotNull() const { DARABONBA_PTR_GET_DEFAULT(filterNotNull_, false) };
    inline SearchNewsShrinkRequest& setFilterNotNull(bool filterNotNull) { DARABONBA_PTR_SET_VALUE(filterNotNull_, filterNotNull) };


    // includeContent Field Functions 
    bool hasIncludeContent() const { return this->includeContent_ != nullptr;};
    void deleteIncludeContent() { this->includeContent_ = nullptr;};
    inline bool includeContent() const { DARABONBA_PTR_GET_DEFAULT(includeContent_, false) };
    inline SearchNewsShrinkRequest& setIncludeContent(bool includeContent) { DARABONBA_PTR_SET_VALUE(includeContent_, includeContent) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline SearchNewsShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchNewsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchNewsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchSourcesShrink Field Functions 
    bool hasSearchSourcesShrink() const { return this->searchSourcesShrink_ != nullptr;};
    void deleteSearchSourcesShrink() { this->searchSourcesShrink_ = nullptr;};
    inline string searchSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(searchSourcesShrink_, "") };
    inline SearchNewsShrinkRequest& setSearchSourcesShrink(string searchSourcesShrink) { DARABONBA_PTR_SET_VALUE(searchSourcesShrink_, searchSourcesShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<bool> filterNotNull_ = nullptr;
    std::shared_ptr<bool> includeContent_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> searchSourcesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
