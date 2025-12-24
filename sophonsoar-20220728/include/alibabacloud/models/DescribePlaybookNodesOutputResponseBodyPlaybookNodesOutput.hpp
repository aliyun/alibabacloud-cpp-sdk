// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODYPLAYBOOKNODESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODYPLAYBOOKNODESOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
    };
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput() = default ;
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput(const DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput &) = default ;
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput(DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput &&) = default ;
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput() = default ;
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& operator=(const DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput &) = default ;
    DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& operator=(DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeName_ == nullptr
        && return this->nodeOutput_ == nullptr; };
    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOutput Field Functions 
    bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
    void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
    inline string nodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
    inline DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


  protected:
    // The name of the component node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The historical output data of the component node. The value is in the JSON string format. If no data is found, the parameter is left empty.
    std::shared_ptr<string> nodeOutput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
