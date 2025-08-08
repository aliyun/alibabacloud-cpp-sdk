// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWEDGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWEDGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTaskFlowEdgesRequestEdges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowEdgesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowEdgesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowEdgesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowEdgesRequest() = default ;
    UpdateTaskFlowEdgesRequest(const UpdateTaskFlowEdgesRequest &) = default ;
    UpdateTaskFlowEdgesRequest(UpdateTaskFlowEdgesRequest &&) = default ;
    UpdateTaskFlowEdgesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowEdgesRequest() = default ;
    UpdateTaskFlowEdgesRequest& operator=(const UpdateTaskFlowEdgesRequest &) = default ;
    UpdateTaskFlowEdgesRequest& operator=(UpdateTaskFlowEdgesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->edges_ != nullptr && this->tid_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowEdgesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<UpdateTaskFlowEdgesRequestEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<UpdateTaskFlowEdgesRequestEdges>) };
    inline vector<UpdateTaskFlowEdgesRequestEdges> edges() { DARABONBA_PTR_GET(edges_, vector<UpdateTaskFlowEdgesRequestEdges>) };
    inline UpdateTaskFlowEdgesRequest& setEdges(const vector<UpdateTaskFlowEdgesRequestEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline UpdateTaskFlowEdgesRequest& setEdges(vector<UpdateTaskFlowEdgesRequestEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowEdgesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The task flow ID. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The list of updated task flow edges.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateTaskFlowEdgesRequestEdges>> edges_ = nullptr;
    // The tenant ID.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
