// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTINSTANCEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTINSTANCEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAgentInstanceMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentInstanceMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludedEndUserIds, excludedEndUserIds_);
      DARABONBA_PTR_TO_JSON(MemoryStatuses, memoryStatuses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentInstanceMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludedEndUserIds, excludedEndUserIds_);
      DARABONBA_PTR_FROM_JSON(MemoryStatuses, memoryStatuses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
    };
    ListAgentInstanceMemoryRequest() = default ;
    ListAgentInstanceMemoryRequest(const ListAgentInstanceMemoryRequest &) = default ;
    ListAgentInstanceMemoryRequest(ListAgentInstanceMemoryRequest &&) = default ;
    ListAgentInstanceMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentInstanceMemoryRequest() = default ;
    ListAgentInstanceMemoryRequest& operator=(const ListAgentInstanceMemoryRequest &) = default ;
    ListAgentInstanceMemoryRequest& operator=(ListAgentInstanceMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->endUserIds_ == nullptr && this->excludedEndUserIds_ == nullptr && this->memoryStatuses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchKeyword_ == nullptr && this->searchType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListAgentInstanceMemoryRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListAgentInstanceMemoryRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListAgentInstanceMemoryRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline ListAgentInstanceMemoryRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline ListAgentInstanceMemoryRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // excludedEndUserIds Field Functions 
    bool hasExcludedEndUserIds() const { return this->excludedEndUserIds_ != nullptr;};
    void deleteExcludedEndUserIds() { this->excludedEndUserIds_ = nullptr;};
    inline const vector<string> & getExcludedEndUserIds() const { DARABONBA_PTR_GET_CONST(excludedEndUserIds_, vector<string>) };
    inline vector<string> getExcludedEndUserIds() { DARABONBA_PTR_GET(excludedEndUserIds_, vector<string>) };
    inline ListAgentInstanceMemoryRequest& setExcludedEndUserIds(const vector<string> & excludedEndUserIds) { DARABONBA_PTR_SET_VALUE(excludedEndUserIds_, excludedEndUserIds) };
    inline ListAgentInstanceMemoryRequest& setExcludedEndUserIds(vector<string> && excludedEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludedEndUserIds_, excludedEndUserIds) };


    // memoryStatuses Field Functions 
    bool hasMemoryStatuses() const { return this->memoryStatuses_ != nullptr;};
    void deleteMemoryStatuses() { this->memoryStatuses_ = nullptr;};
    inline const vector<string> & getMemoryStatuses() const { DARABONBA_PTR_GET_CONST(memoryStatuses_, vector<string>) };
    inline vector<string> getMemoryStatuses() { DARABONBA_PTR_GET(memoryStatuses_, vector<string>) };
    inline ListAgentInstanceMemoryRequest& setMemoryStatuses(const vector<string> & memoryStatuses) { DARABONBA_PTR_SET_VALUE(memoryStatuses_, memoryStatuses) };
    inline ListAgentInstanceMemoryRequest& setMemoryStatuses(vector<string> && memoryStatuses) { DARABONBA_PTR_SET_RVALUE(memoryStatuses_, memoryStatuses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentInstanceMemoryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentInstanceMemoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKeyword Field Functions 
    bool hasSearchKeyword() const { return this->searchKeyword_ != nullptr;};
    void deleteSearchKeyword() { this->searchKeyword_ = nullptr;};
    inline string getSearchKeyword() const { DARABONBA_PTR_GET_DEFAULT(searchKeyword_, "") };
    inline ListAgentInstanceMemoryRequest& setSearchKeyword(string searchKeyword) { DARABONBA_PTR_SET_VALUE(searchKeyword_, searchKeyword) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListAgentInstanceMemoryRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


  protected:
    // Filters results by the business platform to which the agent belongs. If this parameter is omitted, no restriction is applied to the business platform.
    shared_ptr<string> agentPlatform_ {};
    // Filters results by agent provider. If this parameter is omitted, the system queries providers that support memory management. `JVSCopilot` is not supported for memory management in this API operation.
    shared_ptr<string> agentProvider_ {};
    // Filters results by business type code. If this parameter is omitted, no restriction is applied to the business type.
    shared_ptr<int32_t> bizType_ {};
    // The list of end user IDs to be included in the query results. Exact matching is applied. Maximum value: 200.
    shared_ptr<vector<string>> endUserIds_ {};
    // The list of end user IDs to be excluded from the query results. Maximum value: 200. When used together with EndUserIds, these users are removed from the inclusion scope.
    shared_ptr<vector<string>> excludedEndUserIds_ {};
    // Filters results by the memory switch configured for the instance.
    // - `ENABLED`: The instance memory switch is turned on.
    // - `DISABLED`: The instance memory switch is turned off.
    // If both values are passed, instances matching either status are returned.
    shared_ptr<vector<string>> memoryStatuses_ {};
    // The page number. Pages start from 1. If this parameter is not specified or is set to 0, the first page is queried.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The keyword used for inclusion matching. Use SearchType to specify the search field. If this parameter is left empty, no keyword filtering is applied.
    shared_ptr<string> searchKeyword_ {};
    // The scope of the keyword search. Default value: `ALL`.
    // - `ALL`: Searches resource IDs, resource names, runtime IDs, and end user IDs.
    // - `RESOURCE_ID`: Searches resource IDs.
    // - `RESOURCE_NAME`: Searches resource names.
    // - `RUNTIME_ID`: Searches runtime IDs.
    // - `END_USER_ID`: Searches end user IDs.
    shared_ptr<string> searchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
