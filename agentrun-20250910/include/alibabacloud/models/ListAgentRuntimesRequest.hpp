// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_TO_JSON(discoveryResourceGroupId, discoveryResourceGroupId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(searchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(systemTags, systemTags_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(discoveryResourceGroupId, discoveryResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(searchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(systemTags, systemTags_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceIds, workspaceIds_);
    };
    ListAgentRuntimesRequest() = default ;
    ListAgentRuntimesRequest(const ListAgentRuntimesRequest &) = default ;
    ListAgentRuntimesRequest(ListAgentRuntimesRequest &&) = default ;
    ListAgentRuntimesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimesRequest() = default ;
    ListAgentRuntimesRequest& operator=(const ListAgentRuntimesRequest &) = default ;
    ListAgentRuntimesRequest& operator=(ListAgentRuntimesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeName_ == nullptr
        && this->discoveryResourceGroupId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr && this->searchMode_ == nullptr
        && this->status_ == nullptr && this->systemTags_ == nullptr && this->workspaceId_ == nullptr && this->workspaceIds_ == nullptr; };
    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string getAgentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline ListAgentRuntimesRequest& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // discoveryResourceGroupId Field Functions 
    bool hasDiscoveryResourceGroupId() const { return this->discoveryResourceGroupId_ != nullptr;};
    void deleteDiscoveryResourceGroupId() { this->discoveryResourceGroupId_ = nullptr;};
    inline string getDiscoveryResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(discoveryResourceGroupId_, "") };
    inline ListAgentRuntimesRequest& setDiscoveryResourceGroupId(string discoveryResourceGroupId) { DARABONBA_PTR_SET_VALUE(discoveryResourceGroupId_, discoveryResourceGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAgentRuntimesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline ListAgentRuntimesRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAgentRuntimesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemTags Field Functions 
    bool hasSystemTags() const { return this->systemTags_ != nullptr;};
    void deleteSystemTags() { this->systemTags_ = nullptr;};
    inline string getSystemTags() const { DARABONBA_PTR_GET_DEFAULT(systemTags_, "") };
    inline ListAgentRuntimesRequest& setSystemTags(string systemTags) { DARABONBA_PTR_SET_VALUE(systemTags_, systemTags) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListAgentRuntimesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string getWorkspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline ListAgentRuntimesRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    // Filters the results by agent runtime name.
    shared_ptr<string> agentRuntimeName_ {};
    // The service discovery resource group ID.
    shared_ptr<string> discoveryResourceGroupId_ {};
    // The page number to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the resource group. This parameter is deprecated.
    shared_ptr<string> resourceGroupId_ {};
    // The search mode.
    shared_ptr<string> searchMode_ {};
    // Filters the results by status.
    shared_ptr<string> status_ {};
    // Filters the results by system tags. Separate multiple tags with commas. This parameter supports only exact matches.
    shared_ptr<string> systemTags_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // A comma-separated string of workspace IDs.
    shared_ptr<string> workspaceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
