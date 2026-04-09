// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(toolName, toolName_);
      DARABONBA_PTR_TO_JSON(toolType, toolType_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(toolName, toolName_);
      DARABONBA_PTR_FROM_JSON(toolType, toolType_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceIds, workspaceIds_);
    };
    ListToolsRequest() = default ;
    ListToolsRequest(const ListToolsRequest &) = default ;
    ListToolsRequest(ListToolsRequest &&) = default ;
    ListToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListToolsRequest() = default ;
    ListToolsRequest& operator=(const ListToolsRequest &) = default ;
    ListToolsRequest& operator=(ListToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->toolName_ == nullptr && this->toolType_ == nullptr && this->workspaceId_ == nullptr && this->workspaceIds_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListToolsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListToolsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline ListToolsRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolType Field Functions 
    bool hasToolType() const { return this->toolType_ != nullptr;};
    void deleteToolType() { this->toolType_ = nullptr;};
    inline string getToolType() const { DARABONBA_PTR_GET_DEFAULT(toolType_, "") };
    inline ListToolsRequest& setToolType(string toolType) { DARABONBA_PTR_SET_VALUE(toolType_, toolType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListToolsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string getWorkspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline ListToolsRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    // 当前页码，从 1 开始
    shared_ptr<int32_t> pageNumber_ {};
    // 每页返回的工具数量，用于分页查询
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> toolName_ {};
    // 按工具类型过滤，可选值：MCP、FUNCTIONCALL、SKILL
    shared_ptr<string> toolType_ {};
    // 按工作空间ID过滤，查询指定工作空间下的工具
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> workspaceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
