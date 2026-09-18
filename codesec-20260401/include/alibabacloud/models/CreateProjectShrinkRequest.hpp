// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(engines, enginesShrink_);
      DARABONBA_PTR_TO_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, sourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(engines, enginesShrink_);
      DARABONBA_PTR_FROM_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, sourceShrink_);
    };
    CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest(CreateProjectShrinkRequest &&) = default ;
    CreateProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest& operator=(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest& operator=(CreateProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enginesShrink_ == nullptr && this->instructionPrompt_ == nullptr && this->name_ == nullptr && this->sourceShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enginesShrink Field Functions 
    bool hasEnginesShrink() const { return this->enginesShrink_ != nullptr;};
    void deleteEnginesShrink() { this->enginesShrink_ = nullptr;};
    inline string getEnginesShrink() const { DARABONBA_PTR_GET_DEFAULT(enginesShrink_, "") };
    inline CreateProjectShrinkRequest& setEnginesShrink(string enginesShrink) { DARABONBA_PTR_SET_VALUE(enginesShrink_, enginesShrink) };


    // instructionPrompt Field Functions 
    bool hasInstructionPrompt() const { return this->instructionPrompt_ != nullptr;};
    void deleteInstructionPrompt() { this->instructionPrompt_ = nullptr;};
    inline string getInstructionPrompt() const { DARABONBA_PTR_GET_DEFAULT(instructionPrompt_, "") };
    inline CreateProjectShrinkRequest& setInstructionPrompt(string instructionPrompt) { DARABONBA_PTR_SET_VALUE(instructionPrompt_, instructionPrompt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceShrink Field Functions 
    bool hasSourceShrink() const { return this->sourceShrink_ != nullptr;};
    void deleteSourceShrink() { this->sourceShrink_ = nullptr;};
    inline string getSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceShrink_, "") };
    inline CreateProjectShrinkRequest& setSourceShrink(string sourceShrink) { DARABONBA_PTR_SET_VALUE(sourceShrink_, sourceShrink) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The engine switches for the project or scan snapshot. Only SAST and SCA are supported.
    shared_ptr<string> enginesShrink_ {};
    // The natural language prompt that describes scanning or result processing preferences, such as ignoring low-risk vulnerabilities.
    shared_ptr<string> instructionPrompt_ {};
    // The project name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The project source.
    shared_ptr<string> sourceShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
