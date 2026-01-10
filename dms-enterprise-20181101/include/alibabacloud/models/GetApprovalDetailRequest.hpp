// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    GetApprovalDetailRequest() = default ;
    GetApprovalDetailRequest(const GetApprovalDetailRequest &) = default ;
    GetApprovalDetailRequest(GetApprovalDetailRequest &&) = default ;
    GetApprovalDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailRequest() = default ;
    GetApprovalDetailRequest& operator=(const GetApprovalDetailRequest &) = default ;
    GetApprovalDetailRequest& operator=(GetApprovalDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tid_ == nullptr
        && this->workflowInstanceId_ == nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetApprovalDetailRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline GetApprovalDetailRequest& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


  protected:
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The ID of the approval process. You can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/144642.html) operation to obtain the ID of the approval process.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workflowInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
