// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATACONTROLNODE_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATACONTROLNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotProbeResponseBodyDataControlNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBodyDataControlNode& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBodyDataControlNode& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetHoneypotProbeResponseBodyDataControlNode() = default ;
    GetHoneypotProbeResponseBodyDataControlNode(const GetHoneypotProbeResponseBodyDataControlNode &) = default ;
    GetHoneypotProbeResponseBodyDataControlNode(GetHoneypotProbeResponseBodyDataControlNode &&) = default ;
    GetHoneypotProbeResponseBodyDataControlNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBodyDataControlNode() = default ;
    GetHoneypotProbeResponseBodyDataControlNode& operator=(const GetHoneypotProbeResponseBodyDataControlNode &) = default ;
    GetHoneypotProbeResponseBodyDataControlNode& operator=(GetHoneypotProbeResponseBodyDataControlNode &&) = default ;
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
    inline GetHoneypotProbeResponseBodyDataControlNode& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetHoneypotProbeResponseBodyDataControlNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetHoneypotProbeResponseBodyDataControlNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    // The instance ID of the management node.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the management node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The name of the management node.
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
