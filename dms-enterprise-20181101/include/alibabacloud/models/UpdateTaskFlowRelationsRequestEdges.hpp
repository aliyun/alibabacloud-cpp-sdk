// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWRELATIONSREQUESTEDGES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWRELATIONSREQUESTEDGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowRelationsRequestEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowRelationsRequestEdges& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowRelationsRequestEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
    };
    UpdateTaskFlowRelationsRequestEdges() = default ;
    UpdateTaskFlowRelationsRequestEdges(const UpdateTaskFlowRelationsRequestEdges &) = default ;
    UpdateTaskFlowRelationsRequestEdges(UpdateTaskFlowRelationsRequestEdges &&) = default ;
    UpdateTaskFlowRelationsRequestEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowRelationsRequestEdges() = default ;
    UpdateTaskFlowRelationsRequestEdges& operator=(const UpdateTaskFlowRelationsRequestEdges &) = default ;
    UpdateTaskFlowRelationsRequestEdges& operator=(UpdateTaskFlowRelationsRequestEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->nodeEnd_ != nullptr && this->nodeFrom_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateTaskFlowRelationsRequestEdges& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeEnd Field Functions 
    bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
    void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
    inline int64_t nodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
    inline UpdateTaskFlowRelationsRequestEdges& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


    // nodeFrom Field Functions 
    bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
    void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
    inline int64_t nodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
    inline UpdateTaskFlowRelationsRequestEdges& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


  protected:
    // The ID of the task flow edge.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the end node on the edge.
    std::shared_ptr<int64_t> nodeEnd_ = nullptr;
    // The ID of the start node on the edge.
    std::shared_ptr<int64_t> nodeFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
