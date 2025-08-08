// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(NewOwnerId, newOwnerId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(NewOwnerId, newOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowOwnerRequest() = default ;
    UpdateTaskFlowOwnerRequest(const UpdateTaskFlowOwnerRequest &) = default ;
    UpdateTaskFlowOwnerRequest(UpdateTaskFlowOwnerRequest &&) = default ;
    UpdateTaskFlowOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowOwnerRequest() = default ;
    UpdateTaskFlowOwnerRequest& operator=(const UpdateTaskFlowOwnerRequest &) = default ;
    UpdateTaskFlowOwnerRequest& operator=(UpdateTaskFlowOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->newOwnerId_ != nullptr && this->tid_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowOwnerRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // newOwnerId Field Functions 
    bool hasNewOwnerId() const { return this->newOwnerId_ != nullptr;};
    void deleteNewOwnerId() { this->newOwnerId_ = nullptr;};
    inline string newOwnerId() const { DARABONBA_PTR_GET_DEFAULT(newOwnerId_, "") };
    inline UpdateTaskFlowOwnerRequest& setNewOwnerId(string newOwnerId) { DARABONBA_PTR_SET_VALUE(newOwnerId_, newOwnerId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowOwnerRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlowInstance](https://help.aliyun.com/document_detail/424689.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The user ID of the new owner. You can call the [GetUser](https://help.aliyun.com/document_detail/147098.html) or [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> newOwnerId_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
