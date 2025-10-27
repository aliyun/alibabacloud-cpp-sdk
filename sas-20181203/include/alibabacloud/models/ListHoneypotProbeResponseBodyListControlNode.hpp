// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODYLISTCONTROLNODE_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODYLISTCONTROLNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotProbeResponseBodyListControlNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotProbeResponseBodyListControlNode& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotProbeResponseBodyListControlNode& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    ListHoneypotProbeResponseBodyListControlNode() = default ;
    ListHoneypotProbeResponseBodyListControlNode(const ListHoneypotProbeResponseBodyListControlNode &) = default ;
    ListHoneypotProbeResponseBodyListControlNode(ListHoneypotProbeResponseBodyListControlNode &&) = default ;
    ListHoneypotProbeResponseBodyListControlNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotProbeResponseBodyListControlNode() = default ;
    ListHoneypotProbeResponseBodyListControlNode& operator=(const ListHoneypotProbeResponseBodyListControlNode &) = default ;
    ListHoneypotProbeResponseBodyListControlNode& operator=(ListHoneypotProbeResponseBodyListControlNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListHoneypotProbeResponseBodyListControlNode& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListHoneypotProbeResponseBodyListControlNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListHoneypotProbeResponseBodyListControlNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    // The ID of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
