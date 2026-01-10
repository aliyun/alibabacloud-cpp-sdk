// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWCOOPERATORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWCOOPERATORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowCooperatorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowCooperatorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CooperatorIds, cooperatorIdsShrink_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowCooperatorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CooperatorIds, cooperatorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowCooperatorsShrinkRequest() = default ;
    UpdateTaskFlowCooperatorsShrinkRequest(const UpdateTaskFlowCooperatorsShrinkRequest &) = default ;
    UpdateTaskFlowCooperatorsShrinkRequest(UpdateTaskFlowCooperatorsShrinkRequest &&) = default ;
    UpdateTaskFlowCooperatorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowCooperatorsShrinkRequest() = default ;
    UpdateTaskFlowCooperatorsShrinkRequest& operator=(const UpdateTaskFlowCooperatorsShrinkRequest &) = default ;
    UpdateTaskFlowCooperatorsShrinkRequest& operator=(UpdateTaskFlowCooperatorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cooperatorIdsShrink_ == nullptr
        && this->dagId_ == nullptr && this->tid_ == nullptr; };
    // cooperatorIdsShrink Field Functions 
    bool hasCooperatorIdsShrink() const { return this->cooperatorIdsShrink_ != nullptr;};
    void deleteCooperatorIdsShrink() { this->cooperatorIdsShrink_ = nullptr;};
    inline string getCooperatorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(cooperatorIdsShrink_, "") };
    inline UpdateTaskFlowCooperatorsShrinkRequest& setCooperatorIdsShrink(string cooperatorIdsShrink) { DARABONBA_PTR_SET_VALUE(cooperatorIdsShrink_, cooperatorIdsShrink) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowCooperatorsShrinkRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowCooperatorsShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The IDs of the users who are involved in the task flow to be updated.
    shared_ptr<string> cooperatorIdsShrink_ {};
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
