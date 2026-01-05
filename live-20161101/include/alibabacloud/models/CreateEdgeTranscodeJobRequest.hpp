// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGETRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGETRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateEdgeTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(StreamOutput, streamOutput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(StreamOutput, streamOutput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateEdgeTranscodeJobRequest() = default ;
    CreateEdgeTranscodeJobRequest(const CreateEdgeTranscodeJobRequest &) = default ;
    CreateEdgeTranscodeJobRequest(CreateEdgeTranscodeJobRequest &&) = default ;
    CreateEdgeTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeTranscodeJobRequest() = default ;
    CreateEdgeTranscodeJobRequest& operator=(const CreateEdgeTranscodeJobRequest &) = default ;
    CreateEdgeTranscodeJobRequest& operator=(CreateEdgeTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->streamInput_ == nullptr && this->streamOutput_ == nullptr
        && this->templateId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateEdgeTranscodeJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEdgeTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateEdgeTranscodeJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEdgeTranscodeJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline string getStreamInput() const { DARABONBA_PTR_GET_DEFAULT(streamInput_, "") };
    inline CreateEdgeTranscodeJobRequest& setStreamInput(string streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };


    // streamOutput Field Functions 
    bool hasStreamOutput() const { return this->streamOutput_ != nullptr;};
    void deleteStreamOutput() { this->streamOutput_ = nullptr;};
    inline string getStreamOutput() const { DARABONBA_PTR_GET_DEFAULT(streamOutput_, "") };
    inline CreateEdgeTranscodeJobRequest& setStreamOutput(string streamOutput) { DARABONBA_PTR_SET_VALUE(streamOutput_, streamOutput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateEdgeTranscodeJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the data center.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The task name. The name can contain letters, digits, hyphens (-), and underscores (_). The name must be 255 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The URL of the input stream.
    // 
    // This parameter is required.
    shared_ptr<string> streamInput_ {};
    // The URL of the output stream.
    // 
    // This parameter is required.
    shared_ptr<string> streamOutput_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
