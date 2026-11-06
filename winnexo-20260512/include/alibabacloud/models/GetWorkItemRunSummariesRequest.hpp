// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetWorkItemRunSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemRunSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(nodeKey, nodeKey_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemRunSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(nodeKey, nodeKey_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    GetWorkItemRunSummariesRequest() = default ;
    GetWorkItemRunSummariesRequest(const GetWorkItemRunSummariesRequest &) = default ;
    GetWorkItemRunSummariesRequest(GetWorkItemRunSummariesRequest &&) = default ;
    GetWorkItemRunSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemRunSummariesRequest() = default ;
    GetWorkItemRunSummariesRequest& operator=(const GetWorkItemRunSummariesRequest &) = default ;
    GetWorkItemRunSummariesRequest& operator=(GetWorkItemRunSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->nodeKey_ == nullptr && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetWorkItemRunSummariesRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // nodeKey Field Functions 
    bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
    void deleteNodeKey() { this->nodeKey_ = nullptr;};
    inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
    inline GetWorkItemRunSummariesRequest& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetWorkItemRunSummariesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline GetWorkItemRunSummariesRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // 协作空间ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 可选节点key；传入后只返回该节点当前轮次的总结
    shared_ptr<string> nodeKey_ {};
    // 租户ID；缺省使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 工作项ID
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
