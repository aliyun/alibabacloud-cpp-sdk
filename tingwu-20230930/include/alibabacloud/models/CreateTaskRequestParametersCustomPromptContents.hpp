// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCUSTOMPROMPTCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCUSTOMPROMPTCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersCustomPromptContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersCustomPromptContents& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TransType, transType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersCustomPromptContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TransType, transType_);
    };
    CreateTaskRequestParametersCustomPromptContents() = default ;
    CreateTaskRequestParametersCustomPromptContents(const CreateTaskRequestParametersCustomPromptContents &) = default ;
    CreateTaskRequestParametersCustomPromptContents(CreateTaskRequestParametersCustomPromptContents &&) = default ;
    CreateTaskRequestParametersCustomPromptContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersCustomPromptContents() = default ;
    CreateTaskRequestParametersCustomPromptContents& operator=(const CreateTaskRequestParametersCustomPromptContents &) = default ;
    CreateTaskRequestParametersCustomPromptContents& operator=(CreateTaskRequestParametersCustomPromptContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->model_ != nullptr
        && this->name_ != nullptr && this->prompt_ != nullptr && this->transType_ != nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateTaskRequestParametersCustomPromptContents& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTaskRequestParametersCustomPromptContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateTaskRequestParametersCustomPromptContents& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // transType Field Functions 
    bool hasTransType() const { return this->transType_ != nullptr;};
    void deleteTransType() { this->transType_ = nullptr;};
    inline string transType() const { DARABONBA_PTR_GET_DEFAULT(transType_, "") };
    inline CreateTaskRequestParametersCustomPromptContents& setTransType(string transType) { DARABONBA_PTR_SET_VALUE(transType_, transType) };


  protected:
    std::shared_ptr<string> model_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> transType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
