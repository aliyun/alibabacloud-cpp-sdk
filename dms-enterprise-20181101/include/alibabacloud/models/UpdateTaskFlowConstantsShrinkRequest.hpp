// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWCONSTANTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWCONSTANTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowConstantsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowConstantsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagConstants, dagConstantsShrink_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowConstantsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagConstants, dagConstantsShrink_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowConstantsShrinkRequest() = default ;
    UpdateTaskFlowConstantsShrinkRequest(const UpdateTaskFlowConstantsShrinkRequest &) = default ;
    UpdateTaskFlowConstantsShrinkRequest(UpdateTaskFlowConstantsShrinkRequest &&) = default ;
    UpdateTaskFlowConstantsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowConstantsShrinkRequest() = default ;
    UpdateTaskFlowConstantsShrinkRequest& operator=(const UpdateTaskFlowConstantsShrinkRequest &) = default ;
    UpdateTaskFlowConstantsShrinkRequest& operator=(UpdateTaskFlowConstantsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagConstantsShrink_ != nullptr
        && this->dagId_ != nullptr && this->tid_ != nullptr; };
    // dagConstantsShrink Field Functions 
    bool hasDagConstantsShrink() const { return this->dagConstantsShrink_ != nullptr;};
    void deleteDagConstantsShrink() { this->dagConstantsShrink_ = nullptr;};
    inline string dagConstantsShrink() const { DARABONBA_PTR_GET_DEFAULT(dagConstantsShrink_, "") };
    inline UpdateTaskFlowConstantsShrinkRequest& setDagConstantsShrink(string dagConstantsShrink) { DARABONBA_PTR_SET_VALUE(dagConstantsShrink_, dagConstantsShrink) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowConstantsShrinkRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowConstantsShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The constants for the task flow.
    std::shared_ptr<string> dagConstantsShrink_ = nullptr;
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
