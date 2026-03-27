// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListWorkspacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(workspaceNameList, workspaceNameListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(workspaceNameList, workspaceNameListShrink_);
    };
    ListWorkspacesShrinkRequest() = default ;
    ListWorkspacesShrinkRequest(const ListWorkspacesShrinkRequest &) = default ;
    ListWorkspacesShrinkRequest(ListWorkspacesShrinkRequest &&) = default ;
    ListWorkspacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesShrinkRequest() = default ;
    ListWorkspacesShrinkRequest& operator=(const ListWorkspacesShrinkRequest &) = default ;
    ListWorkspacesShrinkRequest& operator=(ListWorkspacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->region_ == nullptr && this->workspaceName_ == nullptr && this->workspaceNameListShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListWorkspacesShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesShrinkRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceNameListShrink Field Functions 
    bool hasWorkspaceNameListShrink() const { return this->workspaceNameListShrink_ != nullptr;};
    void deleteWorkspaceNameListShrink() { this->workspaceNameListShrink_ = nullptr;};
    inline string getWorkspaceNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(workspaceNameListShrink_, "") };
    inline ListWorkspacesShrinkRequest& setWorkspaceNameListShrink(string workspaceNameListShrink) { DARABONBA_PTR_SET_VALUE(workspaceNameListShrink_, workspaceNameListShrink) };


  protected:
    // Page size
    // Default value:
    // 	50
    // Maximum value:
    // 	50
    shared_ptr<int32_t> maxResults_ {};
    // Pagination Token
    shared_ptr<string> nextToken_ {};
    // Region
    shared_ptr<string> region_ {};
    // Workspace name, fuzzy search
    shared_ptr<string> workspaceName_ {};
    // Workspace name, exact match
    shared_ptr<string> workspaceNameListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
