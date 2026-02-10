// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotNode, honeypotNode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotNode, honeypotNode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateHoneypotNodeResponseBody() = default ;
    CreateHoneypotNodeResponseBody(const CreateHoneypotNodeResponseBody &) = default ;
    CreateHoneypotNodeResponseBody(CreateHoneypotNodeResponseBody &&) = default ;
    CreateHoneypotNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotNodeResponseBody() = default ;
    CreateHoneypotNodeResponseBody& operator=(const CreateHoneypotNodeResponseBody &) = default ;
    CreateHoneypotNodeResponseBody& operator=(CreateHoneypotNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HoneypotNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotNode& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotNode& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      };
      HoneypotNode() = default ;
      HoneypotNode(const HoneypotNode &) = default ;
      HoneypotNode(HoneypotNode &&) = default ;
      HoneypotNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotNode() = default ;
      HoneypotNode& operator=(const HoneypotNode &) = default ;
      HoneypotNode& operator=(HoneypotNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeId_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline HoneypotNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->honeypotNode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHoneypotNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotNode Field Functions 
    bool hasHoneypotNode() const { return this->honeypotNode_ != nullptr;};
    void deleteHoneypotNode() { this->honeypotNode_ = nullptr;};
    inline const CreateHoneypotNodeResponseBody::HoneypotNode & getHoneypotNode() const { DARABONBA_PTR_GET_CONST(honeypotNode_, CreateHoneypotNodeResponseBody::HoneypotNode) };
    inline CreateHoneypotNodeResponseBody::HoneypotNode getHoneypotNode() { DARABONBA_PTR_GET(honeypotNode_, CreateHoneypotNodeResponseBody::HoneypotNode) };
    inline CreateHoneypotNodeResponseBody& setHoneypotNode(const CreateHoneypotNodeResponseBody::HoneypotNode & honeypotNode) { DARABONBA_PTR_SET_VALUE(honeypotNode_, honeypotNode) };
    inline CreateHoneypotNodeResponseBody& setHoneypotNode(CreateHoneypotNodeResponseBody::HoneypotNode && honeypotNode) { DARABONBA_PTR_SET_RVALUE(honeypotNode_, honeypotNode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateHoneypotNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHoneypotNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHoneypotNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateHoneypotNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<CreateHoneypotNodeResponseBody::HoneypotNode> honeypotNode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
