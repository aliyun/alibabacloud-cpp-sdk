// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETASKFLOWEDGESBYCONDITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETASKFLOWEDGESBYCONDITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteTaskFlowEdgesByConditionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTaskFlowEdgesByConditionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTaskFlowEdgesByConditionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteTaskFlowEdgesByConditionRequest() = default ;
    DeleteTaskFlowEdgesByConditionRequest(const DeleteTaskFlowEdgesByConditionRequest &) = default ;
    DeleteTaskFlowEdgesByConditionRequest(DeleteTaskFlowEdgesByConditionRequest &&) = default ;
    DeleteTaskFlowEdgesByConditionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTaskFlowEdgesByConditionRequest() = default ;
    DeleteTaskFlowEdgesByConditionRequest& operator=(const DeleteTaskFlowEdgesByConditionRequest &) = default ;
    DeleteTaskFlowEdgesByConditionRequest& operator=(DeleteTaskFlowEdgesByConditionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && return this->id_ == nullptr && return this->nodeEnd_ == nullptr && return this->nodeFrom_ == nullptr && return this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline DeleteTaskFlowEdgesByConditionRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteTaskFlowEdgesByConditionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeEnd Field Functions 
    bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
    void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
    inline int64_t nodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
    inline DeleteTaskFlowEdgesByConditionRequest& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


    // nodeFrom Field Functions 
    bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
    void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
    inline int64_t nodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
    inline DeleteTaskFlowEdgesByConditionRequest& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteTaskFlowEdgesByConditionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the task flow edge to delete.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the end node of the edge to delete.
    std::shared_ptr<int64_t> nodeEnd_ = nullptr;
    // The ID of the start node on the edge to delete.
    std::shared_ptr<int64_t> nodeFrom_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
