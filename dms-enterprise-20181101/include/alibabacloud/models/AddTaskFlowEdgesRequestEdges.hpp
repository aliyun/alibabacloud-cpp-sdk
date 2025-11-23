// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESREQUESTEDGES_HPP_
#define ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESREQUESTEDGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddTaskFlowEdgesRequestEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTaskFlowEdgesRequestEdges& obj) { 
      DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
    };
    friend void from_json(const Darabonba::Json& j, AddTaskFlowEdgesRequestEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
    };
    AddTaskFlowEdgesRequestEdges() = default ;
    AddTaskFlowEdgesRequestEdges(const AddTaskFlowEdgesRequestEdges &) = default ;
    AddTaskFlowEdgesRequestEdges(AddTaskFlowEdgesRequestEdges &&) = default ;
    AddTaskFlowEdgesRequestEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTaskFlowEdgesRequestEdges() = default ;
    AddTaskFlowEdgesRequestEdges& operator=(const AddTaskFlowEdgesRequestEdges &) = default ;
    AddTaskFlowEdgesRequestEdges& operator=(AddTaskFlowEdgesRequestEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeEnd_ == nullptr
        && return this->nodeFrom_ == nullptr; };
    // nodeEnd Field Functions 
    bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
    void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
    inline int64_t nodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
    inline AddTaskFlowEdgesRequestEdges& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


    // nodeFrom Field Functions 
    bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
    void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
    inline int64_t nodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
    inline AddTaskFlowEdgesRequestEdges& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


  protected:
    // The ID of the node where the end node of the edge is located.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeEnd_ = nullptr;
    // The ID of the node where the start node of the edge is located.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
