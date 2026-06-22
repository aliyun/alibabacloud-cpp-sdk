// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunApplicationActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunApplicationActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnInstances, abnInstances_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunApplicationActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnInstances, abnInstances_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunApplicationActionResponseBody() = default ;
    RunApplicationActionResponseBody(const RunApplicationActionResponseBody &) = default ;
    RunApplicationActionResponseBody(RunApplicationActionResponseBody &&) = default ;
    RunApplicationActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunApplicationActionResponseBody() = default ;
    RunApplicationActionResponseBody& operator=(const RunApplicationActionResponseBody &) = default ;
    RunApplicationActionResponseBody& operator=(RunApplicationActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AbnInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AbnInstances& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      };
      friend void from_json(const Darabonba::Json& j, AbnInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      };
      AbnInstances() = default ;
      AbnInstances(const AbnInstances &) = default ;
      AbnInstances(AbnInstances &&) = default ;
      AbnInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AbnInstances() = default ;
      AbnInstances& operator=(const AbnInstances &) = default ;
      AbnInstances& operator=(AbnInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->nodeName_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline AbnInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline AbnInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    protected:
      // The ID of the abnormal node.
      shared_ptr<string> nodeId_ {};
      // The name of the abnormal node.
      shared_ptr<string> nodeName_ {};
    };

    virtual bool empty() const override { return this->abnInstances_ == nullptr
        && this->operationId_ == nullptr && this->requestId_ == nullptr; };
    // abnInstances Field Functions 
    bool hasAbnInstances() const { return this->abnInstances_ != nullptr;};
    void deleteAbnInstances() { this->abnInstances_ = nullptr;};
    inline const vector<RunApplicationActionResponseBody::AbnInstances> & getAbnInstances() const { DARABONBA_PTR_GET_CONST(abnInstances_, vector<RunApplicationActionResponseBody::AbnInstances>) };
    inline vector<RunApplicationActionResponseBody::AbnInstances> getAbnInstances() { DARABONBA_PTR_GET(abnInstances_, vector<RunApplicationActionResponseBody::AbnInstances>) };
    inline RunApplicationActionResponseBody& setAbnInstances(const vector<RunApplicationActionResponseBody::AbnInstances> & abnInstances) { DARABONBA_PTR_SET_VALUE(abnInstances_, abnInstances) };
    inline RunApplicationActionResponseBody& setAbnInstances(vector<RunApplicationActionResponseBody::AbnInstances> && abnInstances) { DARABONBA_PTR_SET_RVALUE(abnInstances_, abnInstances) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline RunApplicationActionResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunApplicationActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The abnormal nodes.
    shared_ptr<vector<RunApplicationActionResponseBody::AbnInstances>> abnInstances_ {};
    // The operation ID.
    shared_ptr<string> operationId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
