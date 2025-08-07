// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfig.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestSampleLibrary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibrary_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibrary_);
    };
    CreateAndPulishAgentRequest() = default ;
    CreateAndPulishAgentRequest(const CreateAndPulishAgentRequest &) = default ;
    CreateAndPulishAgentRequest(CreateAndPulishAgentRequest &&) = default ;
    CreateAndPulishAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentRequest() = default ;
    CreateAndPulishAgentRequest& operator=(const CreateAndPulishAgentRequest &) = default ;
    CreateAndPulishAgentRequest& operator=(CreateAndPulishAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfig_ != nullptr
        && this->instructions_ != nullptr && this->modelId_ != nullptr && this->name_ != nullptr && this->sampleLibrary_ != nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const CreateAndPulishAgentRequestApplicationConfig & applicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, CreateAndPulishAgentRequestApplicationConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig applicationConfig() { DARABONBA_PTR_GET(applicationConfig_, CreateAndPulishAgentRequestApplicationConfig) };
    inline CreateAndPulishAgentRequest& setApplicationConfig(const CreateAndPulishAgentRequestApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline CreateAndPulishAgentRequest& setApplicationConfig(CreateAndPulishAgentRequestApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateAndPulishAgentRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateAndPulishAgentRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAndPulishAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibrary Field Functions 
    bool hasSampleLibrary() const { return this->sampleLibrary_ != nullptr;};
    void deleteSampleLibrary() { this->sampleLibrary_ = nullptr;};
    inline const CreateAndPulishAgentRequestSampleLibrary & sampleLibrary() const { DARABONBA_PTR_GET_CONST(sampleLibrary_, CreateAndPulishAgentRequestSampleLibrary) };
    inline CreateAndPulishAgentRequestSampleLibrary sampleLibrary() { DARABONBA_PTR_GET(sampleLibrary_, CreateAndPulishAgentRequestSampleLibrary) };
    inline CreateAndPulishAgentRequest& setSampleLibrary(const CreateAndPulishAgentRequestSampleLibrary & sampleLibrary) { DARABONBA_PTR_SET_VALUE(sampleLibrary_, sampleLibrary) };
    inline CreateAndPulishAgentRequest& setSampleLibrary(CreateAndPulishAgentRequestSampleLibrary && sampleLibrary) { DARABONBA_PTR_SET_RVALUE(sampleLibrary_, sampleLibrary) };


  protected:
    std::shared_ptr<CreateAndPulishAgentRequestApplicationConfig> applicationConfig_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateAndPulishAgentRequestSampleLibrary> sampleLibrary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
