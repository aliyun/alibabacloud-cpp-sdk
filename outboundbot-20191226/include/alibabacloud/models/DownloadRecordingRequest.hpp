// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DownloadRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedVoiceSliceRecording, needVoiceSliceRecording_);
      DARABONBA_PTR_TO_JSON(SwapChannels, swapChannels_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedVoiceSliceRecording, needVoiceSliceRecording_);
      DARABONBA_PTR_FROM_JSON(SwapChannels, swapChannels_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DownloadRecordingRequest() = default ;
    DownloadRecordingRequest(const DownloadRecordingRequest &) = default ;
    DownloadRecordingRequest(DownloadRecordingRequest &&) = default ;
    DownloadRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadRecordingRequest() = default ;
    DownloadRecordingRequest& operator=(const DownloadRecordingRequest &) = default ;
    DownloadRecordingRequest& operator=(DownloadRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->needVoiceSliceRecording_ == nullptr && this->swapChannels_ == nullptr && this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DownloadRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needVoiceSliceRecording Field Functions 
    bool hasNeedVoiceSliceRecording() const { return this->needVoiceSliceRecording_ != nullptr;};
    void deleteNeedVoiceSliceRecording() { this->needVoiceSliceRecording_ = nullptr;};
    inline bool getNeedVoiceSliceRecording() const { DARABONBA_PTR_GET_DEFAULT(needVoiceSliceRecording_, false) };
    inline DownloadRecordingRequest& setNeedVoiceSliceRecording(bool needVoiceSliceRecording) { DARABONBA_PTR_SET_VALUE(needVoiceSliceRecording_, needVoiceSliceRecording) };


    // swapChannels Field Functions 
    bool hasSwapChannels() const { return this->swapChannels_ != nullptr;};
    void deleteSwapChannels() { this->swapChannels_ = nullptr;};
    inline bool getSwapChannels() const { DARABONBA_PTR_GET_DEFAULT(swapChannels_, false) };
    inline DownloadRecordingRequest& setSwapChannels(bool swapChannels) { DARABONBA_PTR_SET_VALUE(swapChannels_, swapChannels) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DownloadRecordingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to retrieve voice slice recordings.
    shared_ptr<bool> needVoiceSliceRecording_ {};
    // Specifies whether to swap the left and right audio channels. The default value is `false`.
    shared_ptr<bool> swapChannels_ {};
    // The call ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
