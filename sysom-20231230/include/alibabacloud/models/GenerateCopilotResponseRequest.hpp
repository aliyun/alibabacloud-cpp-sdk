// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOPILOTRESPONSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOPILOTRESPONSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GenerateCopilotResponseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCopilotResponseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(llmParamString, llmParamString_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCopilotResponseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(llmParamString, llmParamString_);
    };
    GenerateCopilotResponseRequest() = default ;
    GenerateCopilotResponseRequest(const GenerateCopilotResponseRequest &) = default ;
    GenerateCopilotResponseRequest(GenerateCopilotResponseRequest &&) = default ;
    GenerateCopilotResponseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCopilotResponseRequest() = default ;
    GenerateCopilotResponseRequest& operator=(const GenerateCopilotResponseRequest &) = default ;
    GenerateCopilotResponseRequest& operator=(GenerateCopilotResponseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmParamString_ == nullptr; };
    // llmParamString Field Functions 
    bool hasLlmParamString() const { return this->llmParamString_ != nullptr;};
    void deleteLlmParamString() { this->llmParamString_ = nullptr;};
    inline string llmParamString() const { DARABONBA_PTR_GET_DEFAULT(llmParamString_, "") };
    inline GenerateCopilotResponseRequest& setLlmParamString(string llmParamString) { DARABONBA_PTR_SET_VALUE(llmParamString_, llmParamString) };


  protected:
    std::shared_ptr<string> llmParamString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
