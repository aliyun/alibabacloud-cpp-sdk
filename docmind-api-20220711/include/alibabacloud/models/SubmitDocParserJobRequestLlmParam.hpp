// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTLLMPARAM_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTLLMPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocParserJobRequestLLMParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParserJobRequestLLMParam& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobRequestLLMParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
    };
    SubmitDocParserJobRequestLLMParam() = default ;
    SubmitDocParserJobRequestLLMParam(const SubmitDocParserJobRequestLLMParam &) = default ;
    SubmitDocParserJobRequestLLMParam(SubmitDocParserJobRequestLLMParam &&) = default ;
    SubmitDocParserJobRequestLLMParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParserJobRequestLLMParam() = default ;
    SubmitDocParserJobRequestLLMParam& operator=(const SubmitDocParserJobRequestLLMParam &) = default ;
    SubmitDocParserJobRequestLLMParam& operator=(SubmitDocParserJobRequestLLMParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->model_ == nullptr
        && return this->prompt_ == nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SubmitDocParserJobRequestLLMParam& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitDocParserJobRequestLLMParam& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


  protected:
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
