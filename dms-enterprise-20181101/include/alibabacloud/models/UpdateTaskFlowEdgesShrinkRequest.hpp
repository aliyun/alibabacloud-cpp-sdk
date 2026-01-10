// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWEDGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWEDGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowEdgesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowEdgesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Edges, edgesShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowEdgesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Edges, edgesShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowEdgesShrinkRequest() = default ;
    UpdateTaskFlowEdgesShrinkRequest(const UpdateTaskFlowEdgesShrinkRequest &) = default ;
    UpdateTaskFlowEdgesShrinkRequest(UpdateTaskFlowEdgesShrinkRequest &&) = default ;
    UpdateTaskFlowEdgesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowEdgesShrinkRequest() = default ;
    UpdateTaskFlowEdgesShrinkRequest& operator=(const UpdateTaskFlowEdgesShrinkRequest &) = default ;
    UpdateTaskFlowEdgesShrinkRequest& operator=(UpdateTaskFlowEdgesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->edgesShrink_ == nullptr && this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowEdgesShrinkRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // edgesShrink Field Functions 
    bool hasEdgesShrink() const { return this->edgesShrink_ != nullptr;};
    void deleteEdgesShrink() { this->edgesShrink_ = nullptr;};
    inline string getEdgesShrink() const { DARABONBA_PTR_GET_DEFAULT(edgesShrink_, "") };
    inline UpdateTaskFlowEdgesShrinkRequest& setEdgesShrink(string edgesShrink) { DARABONBA_PTR_SET_VALUE(edgesShrink_, edgesShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowEdgesShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The task flow ID. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The list of updated task flow edges.
    // 
    // This parameter is required.
    shared_ptr<string> edgesShrink_ {};
    // The tenant ID.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
