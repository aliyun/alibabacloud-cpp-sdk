// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODYABNINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODYABNINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunApplicationActionResponseBodyAbnInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunApplicationActionResponseBodyAbnInstances& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, RunApplicationActionResponseBodyAbnInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    RunApplicationActionResponseBodyAbnInstances() = default ;
    RunApplicationActionResponseBodyAbnInstances(const RunApplicationActionResponseBodyAbnInstances &) = default ;
    RunApplicationActionResponseBodyAbnInstances(RunApplicationActionResponseBodyAbnInstances &&) = default ;
    RunApplicationActionResponseBodyAbnInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunApplicationActionResponseBodyAbnInstances() = default ;
    RunApplicationActionResponseBodyAbnInstances& operator=(const RunApplicationActionResponseBodyAbnInstances &) = default ;
    RunApplicationActionResponseBodyAbnInstances& operator=(RunApplicationActionResponseBodyAbnInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && return this->nodeName_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline RunApplicationActionResponseBodyAbnInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunApplicationActionResponseBodyAbnInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    // The ID of the abnormal node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The name of the abnormal node.
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
