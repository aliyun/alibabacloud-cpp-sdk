// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class TongyiChatDebugInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody(TongyiChatDebugInfoResponseBody &&) = default ;
    TongyiChatDebugInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody& operator=(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody& operator=(TongyiChatDebugInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
        DARABONBA_ANY_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_ANY_TO_JSON(Output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_ANY_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_ANY_FROM_JSON(Output, output_);
      };
      Pipeline() = default ;
      Pipeline(const Pipeline &) = default ;
      Pipeline(Pipeline &&) = default ;
      Pipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipeline() = default ;
      Pipeline& operator=(const Pipeline &) = default ;
      Pipeline& operator=(Pipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->input_ == nullptr
        && this->name_ == nullptr && this->nodeType_ == nullptr && this->output_ == nullptr; };
      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline       const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
      Darabonba::Json & getInput() { DARABONBA_GET(input_) };
      inline Pipeline& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
      inline Pipeline& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Pipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Pipeline& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline       const Darabonba::Json & getOutput() const { DARABONBA_GET(output_) };
      Darabonba::Json & getOutput() { DARABONBA_GET(output_) };
      inline Pipeline& setOutput(const Darabonba::Json & output) { DARABONBA_SET_VALUE(output_, output) };
      inline Pipeline& setOutput(Darabonba::Json && output) { DARABONBA_SET_RVALUE(output_, output) };


    protected:
      Darabonba::Json input_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nodeType_ {};
      Darabonba::Json output_ {};
    };

    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->pipeline_ == nullptr && this->requestId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline TongyiChatDebugInfoResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const vector<TongyiChatDebugInfoResponseBody::Pipeline> & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<TongyiChatDebugInfoResponseBody::Pipeline>) };
    inline vector<TongyiChatDebugInfoResponseBody::Pipeline> getPipeline() { DARABONBA_PTR_GET(pipeline_, vector<TongyiChatDebugInfoResponseBody::Pipeline>) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(const vector<TongyiChatDebugInfoResponseBody::Pipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(vector<TongyiChatDebugInfoResponseBody::Pipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TongyiChatDebugInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> messageId_ {};
    shared_ptr<vector<TongyiChatDebugInfoResponseBody::Pipeline>> pipeline_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
