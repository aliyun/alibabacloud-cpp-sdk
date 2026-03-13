// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNODESOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookNodesOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookNodesOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookNodesOutput, playbookNodesOutput_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookNodesOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookNodesOutput, playbookNodesOutput_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookNodesOutputResponseBody() = default ;
    DescribePlaybookNodesOutputResponseBody(const DescribePlaybookNodesOutputResponseBody &) = default ;
    DescribePlaybookNodesOutputResponseBody(DescribePlaybookNodesOutputResponseBody &&) = default ;
    DescribePlaybookNodesOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookNodesOutputResponseBody() = default ;
    DescribePlaybookNodesOutputResponseBody& operator=(const DescribePlaybookNodesOutputResponseBody &) = default ;
    DescribePlaybookNodesOutputResponseBody& operator=(DescribePlaybookNodesOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlaybookNodesOutput : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlaybookNodesOutput& obj) { 
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
      };
      friend void from_json(const Darabonba::Json& j, PlaybookNodesOutput& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
      };
      PlaybookNodesOutput() = default ;
      PlaybookNodesOutput(const PlaybookNodesOutput &) = default ;
      PlaybookNodesOutput(PlaybookNodesOutput &&) = default ;
      PlaybookNodesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlaybookNodesOutput() = default ;
      PlaybookNodesOutput& operator=(const PlaybookNodesOutput &) = default ;
      PlaybookNodesOutput& operator=(PlaybookNodesOutput &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeName_ == nullptr
        && this->nodeOutput_ == nullptr; };
      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline PlaybookNodesOutput& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeOutput Field Functions 
      bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
      void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
      inline string getNodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
      inline PlaybookNodesOutput& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


    protected:
      // The name of the component node.
      shared_ptr<string> nodeName_ {};
      // The historical output data of the component node. The value is in the JSON string format. If no data is found, the parameter is left empty.
      shared_ptr<string> nodeOutput_ {};
    };

    virtual bool empty() const override { return this->playbookNodesOutput_ == nullptr
        && this->requestId_ == nullptr; };
    // playbookNodesOutput Field Functions 
    bool hasPlaybookNodesOutput() const { return this->playbookNodesOutput_ != nullptr;};
    void deletePlaybookNodesOutput() { this->playbookNodesOutput_ = nullptr;};
    inline const DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput & getPlaybookNodesOutput() const { DARABONBA_PTR_GET_CONST(playbookNodesOutput_, DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput getPlaybookNodesOutput() { DARABONBA_PTR_GET(playbookNodesOutput_, DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBody& setPlaybookNodesOutput(const DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput & playbookNodesOutput) { DARABONBA_PTR_SET_VALUE(playbookNodesOutput_, playbookNodesOutput) };
    inline DescribePlaybookNodesOutputResponseBody& setPlaybookNodesOutput(DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput && playbookNodesOutput) { DARABONBA_PTR_SET_RVALUE(playbookNodesOutput_, playbookNodesOutput) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookNodesOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The output data of the component node.
    shared_ptr<DescribePlaybookNodesOutputResponseBody::PlaybookNodesOutput> playbookNodesOutput_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
