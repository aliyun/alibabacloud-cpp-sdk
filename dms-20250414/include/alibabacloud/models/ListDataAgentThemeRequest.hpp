// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTTHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTTHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentThemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ThemeFrom, themeFrom_);
      DARABONBA_PTR_TO_JSON(ThemeType, themeType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ThemeFrom, themeFrom_);
      DARABONBA_PTR_FROM_JSON(ThemeType, themeType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentThemeRequest() = default ;
    ListDataAgentThemeRequest(const ListDataAgentThemeRequest &) = default ;
    ListDataAgentThemeRequest(ListDataAgentThemeRequest &&) = default ;
    ListDataAgentThemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentThemeRequest() = default ;
    ListDataAgentThemeRequest& operator=(const ListDataAgentThemeRequest &) = default ;
    ListDataAgentThemeRequest& operator=(ListDataAgentThemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->themeFrom_ == nullptr
        && this->themeType_ == nullptr && this->workspaceId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListDataAgentThemeRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentThemeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentThemeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAgentThemeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAgentThemeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // themeFrom Field Functions 
    bool hasThemeFrom() const { return this->themeFrom_ != nullptr;};
    void deleteThemeFrom() { this->themeFrom_ = nullptr;};
    inline string getThemeFrom() const { DARABONBA_PTR_GET_DEFAULT(themeFrom_, "") };
    inline ListDataAgentThemeRequest& setThemeFrom(string themeFrom) { DARABONBA_PTR_SET_VALUE(themeFrom_, themeFrom) };


    // themeType Field Functions 
    bool hasThemeType() const { return this->themeType_ != nullptr;};
    void deleteThemeType() { this->themeType_ = nullptr;};
    inline string getThemeType() const { DARABONBA_PTR_GET_DEFAULT(themeType_, "") };
    inline ListDataAgentThemeRequest& setThemeType(string themeType) { DARABONBA_PTR_SET_VALUE(themeType_, themeType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentThemeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The common scenario of the theme. Valid values: report, infographic, and others.
    shared_ptr<string> category_ {};
    // **[Not currently supported]** The maximum number of entries per page. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // **[Not currently supported]** The pagination token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query exists.
    // - If **NextToken** has a return value, the value is the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The source of the theme. Valid values:
    // 
    // - system
    // - custom
    // - derived
    shared_ptr<string> themeFrom_ {};
    // The theme stage. Valid values:
    // 
    // - design: The theme contains only design.md.
    // - template: The theme is complete and renderable.
    shared_ptr<string> themeType_ {};
    // The workspace context. If this parameter is left empty or set to personal, the personal workspace is used. To query themes in a collaborative workspace, specify the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
