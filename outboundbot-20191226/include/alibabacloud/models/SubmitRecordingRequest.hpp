// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SubmitRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MergedRecording, mergedRecording_);
      DARABONBA_PTR_TO_JSON(ResourceRecording, resourceRecording_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MergedRecording, mergedRecording_);
      DARABONBA_PTR_FROM_JSON(ResourceRecording, resourceRecording_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitRecordingRequest() = default ;
    SubmitRecordingRequest(const SubmitRecordingRequest &) = default ;
    SubmitRecordingRequest(SubmitRecordingRequest &&) = default ;
    SubmitRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRecordingRequest() = default ;
    SubmitRecordingRequest& operator=(const SubmitRecordingRequest &) = default ;
    SubmitRecordingRequest& operator=(SubmitRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mergedRecording_ == nullptr && return this->resourceRecording_ == nullptr && return this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SubmitRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mergedRecording Field Functions 
    bool hasMergedRecording() const { return this->mergedRecording_ != nullptr;};
    void deleteMergedRecording() { this->mergedRecording_ = nullptr;};
    inline string mergedRecording() const { DARABONBA_PTR_GET_DEFAULT(mergedRecording_, "") };
    inline SubmitRecordingRequest& setMergedRecording(string mergedRecording) { DARABONBA_PTR_SET_VALUE(mergedRecording_, mergedRecording) };


    // resourceRecording Field Functions 
    bool hasResourceRecording() const { return this->resourceRecording_ != nullptr;};
    void deleteResourceRecording() { this->resourceRecording_ = nullptr;};
    inline string resourceRecording() const { DARABONBA_PTR_GET_DEFAULT(resourceRecording_, "") };
    inline SubmitRecordingRequest& setResourceRecording(string resourceRecording) { DARABONBA_PTR_SET_VALUE(resourceRecording_, resourceRecording) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitRecordingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mergedRecording_ = nullptr;
    std::shared_ptr<string> resourceRecording_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
