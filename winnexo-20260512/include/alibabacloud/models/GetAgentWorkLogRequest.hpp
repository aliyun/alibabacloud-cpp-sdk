// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTWORKLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTWORKLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetAgentWorkLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentWorkLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentWorkLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    GetAgentWorkLogRequest() = default ;
    GetAgentWorkLogRequest(const GetAgentWorkLogRequest &) = default ;
    GetAgentWorkLogRequest(GetAgentWorkLogRequest &&) = default ;
    GetAgentWorkLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentWorkLogRequest() = default ;
    GetAgentWorkLogRequest& operator=(const GetAgentWorkLogRequest &) = default ;
    GetAgentWorkLogRequest& operator=(GetAgentWorkLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetAgentWorkLogRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline GetAgentWorkLogRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAgentWorkLogRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetAgentWorkLogRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline GetAgentWorkLogRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The optional node key.
    shared_ptr<string> nodeId_ {};
    // The page number. Pages start from 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Maximum value: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The tenant ID. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The work item ID.
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
