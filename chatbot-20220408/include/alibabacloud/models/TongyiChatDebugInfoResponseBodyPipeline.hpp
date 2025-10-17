// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class TongyiChatDebugInfoResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TongyiChatDebugInfoResponseBodyPipeline& obj) { 
      DARABONBA_ANY_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_ANY_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, TongyiChatDebugInfoResponseBodyPipeline& obj) { 
      DARABONBA_ANY_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_ANY_FROM_JSON(Output, output_);
    };
    TongyiChatDebugInfoResponseBodyPipeline() = default ;
    TongyiChatDebugInfoResponseBodyPipeline(const TongyiChatDebugInfoResponseBodyPipeline &) = default ;
    TongyiChatDebugInfoResponseBodyPipeline(TongyiChatDebugInfoResponseBodyPipeline &&) = default ;
    TongyiChatDebugInfoResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TongyiChatDebugInfoResponseBodyPipeline() = default ;
    TongyiChatDebugInfoResponseBodyPipeline& operator=(const TongyiChatDebugInfoResponseBodyPipeline &) = default ;
    TongyiChatDebugInfoResponseBodyPipeline& operator=(TongyiChatDebugInfoResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->name_ == nullptr && return this->nodeType_ == nullptr && return this->output_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & input() const { DARABONBA_GET(input_) };
    Darabonba::Json & input() { DARABONBA_GET(input_) };
    inline TongyiChatDebugInfoResponseBodyPipeline& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline TongyiChatDebugInfoResponseBodyPipeline& setInput(Darabonba::Json & input) { DARABONBA_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TongyiChatDebugInfoResponseBodyPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline TongyiChatDebugInfoResponseBodyPipeline& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline     const Darabonba::Json & output() const { DARABONBA_GET(output_) };
    Darabonba::Json & output() { DARABONBA_GET(output_) };
    inline TongyiChatDebugInfoResponseBodyPipeline& setOutput(const Darabonba::Json & output) { DARABONBA_SET_VALUE(output_, output) };
    inline TongyiChatDebugInfoResponseBodyPipeline& setOutput(Darabonba::Json & output) { DARABONBA_SET_RVALUE(output_, output) };


  protected:
    Darabonba::Json input_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    Darabonba::Json output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
