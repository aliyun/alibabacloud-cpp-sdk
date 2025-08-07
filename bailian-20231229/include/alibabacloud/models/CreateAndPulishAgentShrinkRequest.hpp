// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfigShrink_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibraryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfigShrink_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibraryShrink_);
    };
    CreateAndPulishAgentShrinkRequest() = default ;
    CreateAndPulishAgentShrinkRequest(const CreateAndPulishAgentShrinkRequest &) = default ;
    CreateAndPulishAgentShrinkRequest(CreateAndPulishAgentShrinkRequest &&) = default ;
    CreateAndPulishAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentShrinkRequest() = default ;
    CreateAndPulishAgentShrinkRequest& operator=(const CreateAndPulishAgentShrinkRequest &) = default ;
    CreateAndPulishAgentShrinkRequest& operator=(CreateAndPulishAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigShrink_ != nullptr
        && this->instructions_ != nullptr && this->modelId_ != nullptr && this->name_ != nullptr && this->sampleLibraryShrink_ != nullptr; };
    // applicationConfigShrink Field Functions 
    bool hasApplicationConfigShrink() const { return this->applicationConfigShrink_ != nullptr;};
    void deleteApplicationConfigShrink() { this->applicationConfigShrink_ = nullptr;};
    inline string applicationConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationConfigShrink_, "") };
    inline CreateAndPulishAgentShrinkRequest& setApplicationConfigShrink(string applicationConfigShrink) { DARABONBA_PTR_SET_VALUE(applicationConfigShrink_, applicationConfigShrink) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateAndPulishAgentShrinkRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateAndPulishAgentShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAndPulishAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibraryShrink Field Functions 
    bool hasSampleLibraryShrink() const { return this->sampleLibraryShrink_ != nullptr;};
    void deleteSampleLibraryShrink() { this->sampleLibraryShrink_ = nullptr;};
    inline string sampleLibraryShrink() const { DARABONBA_PTR_GET_DEFAULT(sampleLibraryShrink_, "") };
    inline CreateAndPulishAgentShrinkRequest& setSampleLibraryShrink(string sampleLibraryShrink) { DARABONBA_PTR_SET_VALUE(sampleLibraryShrink_, sampleLibraryShrink) };


  protected:
    std::shared_ptr<string> applicationConfigShrink_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sampleLibraryShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
