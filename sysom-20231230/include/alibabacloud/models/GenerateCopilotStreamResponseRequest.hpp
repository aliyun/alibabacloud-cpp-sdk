// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOPILOTSTREAMRESPONSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOPILOTSTREAMRESPONSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GenerateCopilotStreamResponseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCopilotStreamResponseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(llmParamString, llmParamString_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCopilotStreamResponseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(llmParamString, llmParamString_);
    };
    GenerateCopilotStreamResponseRequest() = default ;
    GenerateCopilotStreamResponseRequest(const GenerateCopilotStreamResponseRequest &) = default ;
    GenerateCopilotStreamResponseRequest(GenerateCopilotStreamResponseRequest &&) = default ;
    GenerateCopilotStreamResponseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCopilotStreamResponseRequest() = default ;
    GenerateCopilotStreamResponseRequest& operator=(const GenerateCopilotStreamResponseRequest &) = default ;
    GenerateCopilotStreamResponseRequest& operator=(GenerateCopilotStreamResponseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmParamString_ == nullptr; };
    // llmParamString Field Functions 
    bool hasLlmParamString() const { return this->llmParamString_ != nullptr;};
    void deleteLlmParamString() { this->llmParamString_ = nullptr;};
    inline string getLlmParamString() const { DARABONBA_PTR_GET_DEFAULT(llmParamString_, "") };
    inline GenerateCopilotStreamResponseRequest& setLlmParamString(string llmParamString) { DARABONBA_PTR_SET_VALUE(llmParamString_, llmParamString) };


  protected:
    shared_ptr<string> llmParamString_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
