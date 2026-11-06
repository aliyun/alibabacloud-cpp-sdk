// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAPROCESSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAPROCESSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDataProcessJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataProcessJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationConfig, destinationConfig_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(DestinationPath, destinationPath_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ProcessingMode, processingMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceConfig, sourceConfig_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataProcessJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationConfig, destinationConfig_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(DestinationPath, destinationPath_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ProcessingMode, processingMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceConfig, sourceConfig_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateDataProcessJobRequest() = default ;
    CreateDataProcessJobRequest(const CreateDataProcessJobRequest &) = default ;
    CreateDataProcessJobRequest(CreateDataProcessJobRequest &&) = default ;
    CreateDataProcessJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataProcessJobRequest() = default ;
    CreateDataProcessJobRequest& operator=(const CreateDataProcessJobRequest &) = default ;
    CreateDataProcessJobRequest& operator=(CreateDataProcessJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationConfig_ == nullptr && this->destinationId_ == nullptr && this->destinationPath_ == nullptr && this->destinationType_ == nullptr && this->modelName_ == nullptr
        && this->processingMode_ == nullptr && this->regionId_ == nullptr && this->sourceConfig_ == nullptr && this->sourceId_ == nullptr && this->sourcePath_ == nullptr
        && this->sourceType_ == nullptr && this->templateId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataProcessJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationConfig Field Functions 
    bool hasDestinationConfig() const { return this->destinationConfig_ != nullptr;};
    void deleteDestinationConfig() { this->destinationConfig_ = nullptr;};
    inline string getDestinationConfig() const { DARABONBA_PTR_GET_DEFAULT(destinationConfig_, "") };
    inline CreateDataProcessJobRequest& setDestinationConfig(string destinationConfig) { DARABONBA_PTR_SET_VALUE(destinationConfig_, destinationConfig) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline CreateDataProcessJobRequest& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // destinationPath Field Functions 
    bool hasDestinationPath() const { return this->destinationPath_ != nullptr;};
    void deleteDestinationPath() { this->destinationPath_ = nullptr;};
    inline string getDestinationPath() const { DARABONBA_PTR_GET_DEFAULT(destinationPath_, "") };
    inline CreateDataProcessJobRequest& setDestinationPath(string destinationPath) { DARABONBA_PTR_SET_VALUE(destinationPath_, destinationPath) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline CreateDataProcessJobRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateDataProcessJobRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // processingMode Field Functions 
    bool hasProcessingMode() const { return this->processingMode_ != nullptr;};
    void deleteProcessingMode() { this->processingMode_ = nullptr;};
    inline string getProcessingMode() const { DARABONBA_PTR_GET_DEFAULT(processingMode_, "") };
    inline CreateDataProcessJobRequest& setProcessingMode(string processingMode) { DARABONBA_PTR_SET_VALUE(processingMode_, processingMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataProcessJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceConfig Field Functions 
    bool hasSourceConfig() const { return this->sourceConfig_ != nullptr;};
    void deleteSourceConfig() { this->sourceConfig_ = nullptr;};
    inline string getSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(sourceConfig_, "") };
    inline CreateDataProcessJobRequest& setSourceConfig(string sourceConfig) { DARABONBA_PTR_SET_VALUE(sourceConfig_, sourceConfig) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateDataProcessJobRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline CreateDataProcessJobRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateDataProcessJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateDataProcessJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The description of the data processing task.
    shared_ptr<string> description_ {};
    // The JSON string for the destination database connection configuration, including Account and Password.
    shared_ptr<string> destinationConfig_ {};
    // The ID of the destination PolarDB cluster.
    // 
    // This parameter is required.
    shared_ptr<string> destinationId_ {};
    // The name of the destination database.
    // 
    // This parameter is required.
    shared_ptr<string> destinationPath_ {};
    // The type of the destination. Only PolarDB is supported.
    // 
    // This parameter is required.
    shared_ptr<string> destinationType_ {};
    // The name of the model used for feature extraction.
    shared_ptr<string> modelName_ {};
    // The processing mode. Valid values: Full, Incremental, and Both.
    // 
    // This parameter is required.
    shared_ptr<string> processingMode_ {};
    // The ID of the region where the task resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The additional configuration for the data source in JSON string format. This parameter can be left empty.
    shared_ptr<string> sourceConfig_ {};
    // The ID of the PolarFS instance that serves as the data source.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The source data path in PolarFS. An empty string indicates the default path.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePath_ {};
    // The type of the data source. Only PolarFS is supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The ID of the task template used to process data.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
