// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeResponse, nodeResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeResponse, nodeResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ChangeNodeTypesResponseBody() = default ;
    ChangeNodeTypesResponseBody(const ChangeNodeTypesResponseBody &) = default ;
    ChangeNodeTypesResponseBody(ChangeNodeTypesResponseBody &&) = default ;
    ChangeNodeTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeTypesResponseBody() = default ;
    ChangeNodeTypesResponseBody& operator=(const ChangeNodeTypesResponseBody &) = default ;
    ChangeNodeTypesResponseBody& operator=(ChangeNodeTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      };
      NodeResponse() = default ;
      NodeResponse(const NodeResponse &) = default ;
      NodeResponse(NodeResponse &&) = default ;
      NodeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeResponse() = default ;
      NodeResponse& operator=(const NodeResponse &) = default ;
      NodeResponse& operator=(NodeResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nodeId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline NodeResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline NodeResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeResponse& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> nodeId_ {};
    };

    virtual bool empty() const override { return this->nodeResponse_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // nodeResponse Field Functions 
    bool hasNodeResponse() const { return this->nodeResponse_ != nullptr;};
    void deleteNodeResponse() { this->nodeResponse_ = nullptr;};
    inline const vector<ChangeNodeTypesResponseBody::NodeResponse> & getNodeResponse() const { DARABONBA_PTR_GET_CONST(nodeResponse_, vector<ChangeNodeTypesResponseBody::NodeResponse>) };
    inline vector<ChangeNodeTypesResponseBody::NodeResponse> getNodeResponse() { DARABONBA_PTR_GET(nodeResponse_, vector<ChangeNodeTypesResponseBody::NodeResponse>) };
    inline ChangeNodeTypesResponseBody& setNodeResponse(const vector<ChangeNodeTypesResponseBody::NodeResponse> & nodeResponse) { DARABONBA_PTR_SET_VALUE(nodeResponse_, nodeResponse) };
    inline ChangeNodeTypesResponseBody& setNodeResponse(vector<ChangeNodeTypesResponseBody::NodeResponse> && nodeResponse) { DARABONBA_PTR_SET_RVALUE(nodeResponse_, nodeResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeNodeTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ChangeNodeTypesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<ChangeNodeTypesResponseBody::NodeResponse>> nodeResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
