// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTaskFlowEdgesRequestEdges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddTaskFlowEdgesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTaskFlowEdgesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddTaskFlowEdgesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddTaskFlowEdgesRequest() = default ;
    AddTaskFlowEdgesRequest(const AddTaskFlowEdgesRequest &) = default ;
    AddTaskFlowEdgesRequest(AddTaskFlowEdgesRequest &&) = default ;
    AddTaskFlowEdgesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTaskFlowEdgesRequest() = default ;
    AddTaskFlowEdgesRequest& operator=(const AddTaskFlowEdgesRequest &) = default ;
    AddTaskFlowEdgesRequest& operator=(AddTaskFlowEdgesRequest &&) = default ;
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
    inline AddTaskFlowEdgesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<AddTaskFlowEdgesRequestEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<AddTaskFlowEdgesRequestEdges>) };
    inline vector<AddTaskFlowEdgesRequestEdges> edges() { DARABONBA_PTR_GET(edges_, vector<AddTaskFlowEdgesRequestEdges>) };
    inline AddTaskFlowEdgesRequest& setEdges(const vector<AddTaskFlowEdgesRequestEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline AddTaskFlowEdgesRequest& setEdges(vector<AddTaskFlowEdgesRequestEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddTaskFlowEdgesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The list of edges of the task flow.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddTaskFlowEdgesRequestEdges>> edges_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
