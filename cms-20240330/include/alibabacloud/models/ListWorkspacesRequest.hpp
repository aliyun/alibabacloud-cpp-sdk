// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(workspaceNameList, workspaceNameList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(workspaceNameList, workspaceNameList_);
    };
    ListWorkspacesRequest() = default ;
    ListWorkspacesRequest(const ListWorkspacesRequest &) = default ;
    ListWorkspacesRequest(ListWorkspacesRequest &&) = default ;
    ListWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesRequest() = default ;
    ListWorkspacesRequest& operator=(const ListWorkspacesRequest &) = default ;
    ListWorkspacesRequest& operator=(ListWorkspacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->workspaceName_ == nullptr
        && this->workspaceNameList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListWorkspacesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListWorkspacesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListWorkspacesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListWorkspacesRequest::Tags>) };
    inline vector<ListWorkspacesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListWorkspacesRequest::Tags>) };
    inline ListWorkspacesRequest& setTags(const vector<ListWorkspacesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListWorkspacesRequest& setTags(vector<ListWorkspacesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceNameList Field Functions 
    bool hasWorkspaceNameList() const { return this->workspaceNameList_ != nullptr;};
    void deleteWorkspaceNameList() { this->workspaceNameList_ = nullptr;};
    inline const vector<string> & getWorkspaceNameList() const { DARABONBA_PTR_GET_CONST(workspaceNameList_, vector<string>) };
    inline vector<string> getWorkspaceNameList() { DARABONBA_PTR_GET(workspaceNameList_, vector<string>) };
    inline ListWorkspacesRequest& setWorkspaceNameList(const vector<string> & workspaceNameList) { DARABONBA_PTR_SET_VALUE(workspaceNameList_, workspaceNameList) };
    inline ListWorkspacesRequest& setWorkspaceNameList(vector<string> && workspaceNameList) { DARABONBA_PTR_SET_RVALUE(workspaceNameList_, workspaceNameList) };


  protected:
    // The number of entries per page.
    // Default value:
    // 	50
    // Maximum value:
    // 	50
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The region.
    shared_ptr<string> region_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<ListWorkspacesRequest::Tags>> tags_ {};
    // The workspace name. Fuzzy match is used.
    shared_ptr<string> workspaceName_ {};
    // The workspace name. Exact match is used.
    shared_ptr<vector<string>> workspaceNameList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
