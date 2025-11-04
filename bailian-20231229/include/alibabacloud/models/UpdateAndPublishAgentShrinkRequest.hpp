// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfigShrink_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibraryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfigShrink_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibraryShrink_);
    };
    UpdateAndPublishAgentShrinkRequest() = default ;
    UpdateAndPublishAgentShrinkRequest(const UpdateAndPublishAgentShrinkRequest &) = default ;
    UpdateAndPublishAgentShrinkRequest(UpdateAndPublishAgentShrinkRequest &&) = default ;
    UpdateAndPublishAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentShrinkRequest() = default ;
    UpdateAndPublishAgentShrinkRequest& operator=(const UpdateAndPublishAgentShrinkRequest &) = default ;
    UpdateAndPublishAgentShrinkRequest& operator=(UpdateAndPublishAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigShrink_ == nullptr
        && return this->instructions_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->sampleLibraryShrink_ == nullptr; };
    // applicationConfigShrink Field Functions 
    bool hasApplicationConfigShrink() const { return this->applicationConfigShrink_ != nullptr;};
    void deleteApplicationConfigShrink() { this->applicationConfigShrink_ = nullptr;};
    inline string applicationConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationConfigShrink_, "") };
    inline UpdateAndPublishAgentShrinkRequest& setApplicationConfigShrink(string applicationConfigShrink) { DARABONBA_PTR_SET_VALUE(applicationConfigShrink_, applicationConfigShrink) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateAndPublishAgentShrinkRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline UpdateAndPublishAgentShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAndPublishAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibraryShrink Field Functions 
    bool hasSampleLibraryShrink() const { return this->sampleLibraryShrink_ != nullptr;};
    void deleteSampleLibraryShrink() { this->sampleLibraryShrink_ = nullptr;};
    inline string sampleLibraryShrink() const { DARABONBA_PTR_GET_DEFAULT(sampleLibraryShrink_, "") };
    inline UpdateAndPublishAgentShrinkRequest& setSampleLibraryShrink(string sampleLibraryShrink) { DARABONBA_PTR_SET_VALUE(sampleLibraryShrink_, sampleLibraryShrink) };


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
