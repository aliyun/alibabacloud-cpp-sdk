// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestSampleLibrary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentSelectiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentSelectiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibrary_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentSelectiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibrary_);
    };
    UpdateAndPublishAgentSelectiveRequest() = default ;
    UpdateAndPublishAgentSelectiveRequest(const UpdateAndPublishAgentSelectiveRequest &) = default ;
    UpdateAndPublishAgentSelectiveRequest(UpdateAndPublishAgentSelectiveRequest &&) = default ;
    UpdateAndPublishAgentSelectiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentSelectiveRequest() = default ;
    UpdateAndPublishAgentSelectiveRequest& operator=(const UpdateAndPublishAgentSelectiveRequest &) = default ;
    UpdateAndPublishAgentSelectiveRequest& operator=(UpdateAndPublishAgentSelectiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfig_ == nullptr
        && return this->instructions_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->sampleLibrary_ == nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const UpdateAndPublishAgentSelectiveRequestApplicationConfig & applicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, UpdateAndPublishAgentSelectiveRequestApplicationConfig) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig applicationConfig() { DARABONBA_PTR_GET(applicationConfig_, UpdateAndPublishAgentSelectiveRequestApplicationConfig) };
    inline UpdateAndPublishAgentSelectiveRequest& setApplicationConfig(const UpdateAndPublishAgentSelectiveRequestApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline UpdateAndPublishAgentSelectiveRequest& setApplicationConfig(UpdateAndPublishAgentSelectiveRequestApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateAndPublishAgentSelectiveRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline UpdateAndPublishAgentSelectiveRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAndPublishAgentSelectiveRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibrary Field Functions 
    bool hasSampleLibrary() const { return this->sampleLibrary_ != nullptr;};
    void deleteSampleLibrary() { this->sampleLibrary_ = nullptr;};
    inline const UpdateAndPublishAgentSelectiveRequestSampleLibrary & sampleLibrary() const { DARABONBA_PTR_GET_CONST(sampleLibrary_, UpdateAndPublishAgentSelectiveRequestSampleLibrary) };
    inline UpdateAndPublishAgentSelectiveRequestSampleLibrary sampleLibrary() { DARABONBA_PTR_GET(sampleLibrary_, UpdateAndPublishAgentSelectiveRequestSampleLibrary) };
    inline UpdateAndPublishAgentSelectiveRequest& setSampleLibrary(const UpdateAndPublishAgentSelectiveRequestSampleLibrary & sampleLibrary) { DARABONBA_PTR_SET_VALUE(sampleLibrary_, sampleLibrary) };
    inline UpdateAndPublishAgentSelectiveRequest& setSampleLibrary(UpdateAndPublishAgentSelectiveRequestSampleLibrary && sampleLibrary) { DARABONBA_PTR_SET_RVALUE(sampleLibrary_, sampleLibrary) };


  protected:
    std::shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfig> applicationConfig_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<UpdateAndPublishAgentSelectiveRequestSampleLibrary> sampleLibrary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
