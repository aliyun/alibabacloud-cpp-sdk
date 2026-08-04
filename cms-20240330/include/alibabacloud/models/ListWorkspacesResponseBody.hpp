// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
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
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(workspaces, workspaces_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(lastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(lastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      };
      Workspaces() = default ;
      Workspaces(const Workspaces &) = default ;
      Workspaces(Workspaces &&) = default ;
      Workspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workspaces() = default ;
      Workspaces& operator=(const Workspaces &) = default ;
      Workspaces& operator=(Workspaces &&) = default ;
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

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->lastModifyTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->slsProject_ == nullptr && this->tags_ == nullptr && this->workspaceName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Workspaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Workspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Workspaces& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
      inline Workspaces& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Workspaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Workspaces& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline Workspaces& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Workspaces::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Workspaces::Tags>) };
      inline vector<Workspaces::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Workspaces::Tags>) };
      inline Workspaces& setTags(const vector<Workspaces::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Workspaces& setTags(vector<Workspaces::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Workspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The time when the workspace was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      // The description of the workspace.
      shared_ptr<string> description_ {};
      // The display name of the workspace.
      shared_ptr<string> displayName_ {};
      // The time when the workspace was last modified.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> lastModifyTime_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The Simple Log Service project name.
      shared_ptr<string> slsProject_ {};
      // The tags.
      shared_ptr<vector<Workspaces::Tags>> tags_ {};
      // The workspace name.
      // 
      // This parameter is required.
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr && this->workspaces_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListWorkspacesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline vector<ListWorkspacesResponseBody::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline ListWorkspacesResponseBody& setWorkspaces(const vector<ListWorkspacesResponseBody::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline ListWorkspacesResponseBody& setWorkspaces(vector<ListWorkspacesResponseBody::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    // The number of entries per page.
    // Default value:
    // 	50
    // Maximum value:
    // 	50
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
    // The list of workspaces.
    shared_ptr<vector<ListWorkspacesResponseBody::Workspaces>> workspaces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
