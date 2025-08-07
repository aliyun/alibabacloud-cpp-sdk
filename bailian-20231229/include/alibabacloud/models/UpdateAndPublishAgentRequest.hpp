// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestSampleLibrary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibrary_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibrary_);
    };
    UpdateAndPublishAgentRequest() = default ;
    UpdateAndPublishAgentRequest(const UpdateAndPublishAgentRequest &) = default ;
    UpdateAndPublishAgentRequest(UpdateAndPublishAgentRequest &&) = default ;
    UpdateAndPublishAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentRequest() = default ;
    UpdateAndPublishAgentRequest& operator=(const UpdateAndPublishAgentRequest &) = default ;
    UpdateAndPublishAgentRequest& operator=(UpdateAndPublishAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfig_ != nullptr
        && this->instructions_ != nullptr && this->modelId_ != nullptr && this->name_ != nullptr && this->sampleLibrary_ != nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const UpdateAndPublishAgentRequestApplicationConfig & applicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, UpdateAndPublishAgentRequestApplicationConfig) };
    inline UpdateAndPublishAgentRequestApplicationConfig applicationConfig() { DARABONBA_PTR_GET(applicationConfig_, UpdateAndPublishAgentRequestApplicationConfig) };
    inline UpdateAndPublishAgentRequest& setApplicationConfig(const UpdateAndPublishAgentRequestApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline UpdateAndPublishAgentRequest& setApplicationConfig(UpdateAndPublishAgentRequestApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateAndPublishAgentRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline UpdateAndPublishAgentRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAndPublishAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibrary Field Functions 
    bool hasSampleLibrary() const { return this->sampleLibrary_ != nullptr;};
    void deleteSampleLibrary() { this->sampleLibrary_ = nullptr;};
    inline const UpdateAndPublishAgentRequestSampleLibrary & sampleLibrary() const { DARABONBA_PTR_GET_CONST(sampleLibrary_, UpdateAndPublishAgentRequestSampleLibrary) };
    inline UpdateAndPublishAgentRequestSampleLibrary sampleLibrary() { DARABONBA_PTR_GET(sampleLibrary_, UpdateAndPublishAgentRequestSampleLibrary) };
    inline UpdateAndPublishAgentRequest& setSampleLibrary(const UpdateAndPublishAgentRequestSampleLibrary & sampleLibrary) { DARABONBA_PTR_SET_VALUE(sampleLibrary_, sampleLibrary) };
    inline UpdateAndPublishAgentRequest& setSampleLibrary(UpdateAndPublishAgentRequestSampleLibrary && sampleLibrary) { DARABONBA_PTR_SET_RVALUE(sampleLibrary_, sampleLibrary) };


  protected:
    std::shared_ptr<UpdateAndPublishAgentRequestApplicationConfig> applicationConfig_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<UpdateAndPublishAgentRequestSampleLibrary> sampleLibrary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
