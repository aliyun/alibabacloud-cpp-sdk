// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDataProcessJobAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataProcessJobAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DestinationConfig, destinationConfig_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(DestinationPath, destinationPath_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ProcessingMode, processingMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataProcessJobAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DestinationConfig, destinationConfig_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(DestinationPath, destinationPath_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ProcessingMode, processingMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    DescribeDataProcessJobAttributeResponseBody() = default ;
    DescribeDataProcessJobAttributeResponseBody(const DescribeDataProcessJobAttributeResponseBody &) = default ;
    DescribeDataProcessJobAttributeResponseBody(DescribeDataProcessJobAttributeResponseBody &&) = default ;
    DescribeDataProcessJobAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataProcessJobAttributeResponseBody() = default ;
    DescribeDataProcessJobAttributeResponseBody& operator=(const DescribeDataProcessJobAttributeResponseBody &) = default ;
    DescribeDataProcessJobAttributeResponseBody& operator=(DescribeDataProcessJobAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->destinationConfig_ == nullptr && this->destinationId_ == nullptr && this->destinationPath_ == nullptr && this->destinationType_ == nullptr && this->jobId_ == nullptr
        && this->modelName_ == nullptr && this->processingMode_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->sourceId_ == nullptr
        && this->sourcePath_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // destinationConfig Field Functions 
    bool hasDestinationConfig() const { return this->destinationConfig_ != nullptr;};
    void deleteDestinationConfig() { this->destinationConfig_ = nullptr;};
    inline string getDestinationConfig() const { DARABONBA_PTR_GET_DEFAULT(destinationConfig_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setDestinationConfig(string destinationConfig) { DARABONBA_PTR_SET_VALUE(destinationConfig_, destinationConfig) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // destinationPath Field Functions 
    bool hasDestinationPath() const { return this->destinationPath_ != nullptr;};
    void deleteDestinationPath() { this->destinationPath_ = nullptr;};
    inline string getDestinationPath() const { DARABONBA_PTR_GET_DEFAULT(destinationPath_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setDestinationPath(string destinationPath) { DARABONBA_PTR_SET_VALUE(destinationPath_, destinationPath) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // processingMode Field Functions 
    bool hasProcessingMode() const { return this->processingMode_ != nullptr;};
    void deleteProcessingMode() { this->processingMode_ = nullptr;};
    inline string getProcessingMode() const { DARABONBA_PTR_GET_DEFAULT(processingMode_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setProcessingMode(string processingMode) { DARABONBA_PTR_SET_VALUE(processingMode_, processingMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeDataProcessJobAttributeResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The time when the job was created, in RFC 3339 format.
    shared_ptr<string> creationTime_ {};
    // The JSON string of the destination database connection configuration.
    shared_ptr<string> destinationConfig_ {};
    // The ID of the destination PolarDB cluster.
    shared_ptr<string> destinationId_ {};
    // The name of the destination database.
    shared_ptr<string> destinationPath_ {};
    // The destination type. Currently, only PolarDB is supported.
    shared_ptr<string> destinationType_ {};
    // The ID of the data processing job.
    shared_ptr<string> jobId_ {};
    // The name of the model used for feature extraction.
    shared_ptr<string> modelName_ {};
    // The data processing mode. Valid values: Full, Incremental, and Both.
    shared_ptr<string> processingMode_ {};
    // The ID of the region where the data processing job is located.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the source PolarFS instance.
    shared_ptr<string> sourceId_ {};
    // The source data path in PolarFS.
    shared_ptr<string> sourcePath_ {};
    // The data source type. Currently, only PolarFS is supported.
    shared_ptr<string> sourceType_ {};
    // The status of the data processing job.
    shared_ptr<string> status_ {};
    // The ID of the template used by the job.
    shared_ptr<string> templateId_ {};
    // The node templatetype. Currently, only image is supported.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
