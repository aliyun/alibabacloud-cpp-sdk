// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVEEDITINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVEEDITINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveEditingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveEditingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clips, clips_);
      DARABONBA_PTR_TO_JSON(LiveStreamConfig, liveStreamConfig_);
      DARABONBA_PTR_TO_JSON(MediaProduceConfig, mediaProduceConfig_);
      DARABONBA_PTR_TO_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_TO_JSON(OutputMediaTarget, outputMediaTarget_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveEditingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clips, clips_);
      DARABONBA_PTR_FROM_JSON(LiveStreamConfig, liveStreamConfig_);
      DARABONBA_PTR_FROM_JSON(MediaProduceConfig, mediaProduceConfig_);
      DARABONBA_PTR_FROM_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_FROM_JSON(OutputMediaTarget, outputMediaTarget_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitLiveEditingJobRequest() = default ;
    SubmitLiveEditingJobRequest(const SubmitLiveEditingJobRequest &) = default ;
    SubmitLiveEditingJobRequest(SubmitLiveEditingJobRequest &&) = default ;
    SubmitLiveEditingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveEditingJobRequest() = default ;
    SubmitLiveEditingJobRequest& operator=(const SubmitLiveEditingJobRequest &) = default ;
    SubmitLiveEditingJobRequest& operator=(SubmitLiveEditingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clips_ == nullptr
        && this->liveStreamConfig_ == nullptr && this->mediaProduceConfig_ == nullptr && this->outputMediaConfig_ == nullptr && this->outputMediaTarget_ == nullptr && this->projectId_ == nullptr
        && this->userData_ == nullptr; };
    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline string getClips() const { DARABONBA_PTR_GET_DEFAULT(clips_, "") };
    inline SubmitLiveEditingJobRequest& setClips(string clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };


    // liveStreamConfig Field Functions 
    bool hasLiveStreamConfig() const { return this->liveStreamConfig_ != nullptr;};
    void deleteLiveStreamConfig() { this->liveStreamConfig_ = nullptr;};
    inline string getLiveStreamConfig() const { DARABONBA_PTR_GET_DEFAULT(liveStreamConfig_, "") };
    inline SubmitLiveEditingJobRequest& setLiveStreamConfig(string liveStreamConfig) { DARABONBA_PTR_SET_VALUE(liveStreamConfig_, liveStreamConfig) };


    // mediaProduceConfig Field Functions 
    bool hasMediaProduceConfig() const { return this->mediaProduceConfig_ != nullptr;};
    void deleteMediaProduceConfig() { this->mediaProduceConfig_ = nullptr;};
    inline string getMediaProduceConfig() const { DARABONBA_PTR_GET_DEFAULT(mediaProduceConfig_, "") };
    inline SubmitLiveEditingJobRequest& setMediaProduceConfig(string mediaProduceConfig) { DARABONBA_PTR_SET_VALUE(mediaProduceConfig_, mediaProduceConfig) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline string getOutputMediaConfig() const { DARABONBA_PTR_GET_DEFAULT(outputMediaConfig_, "") };
    inline SubmitLiveEditingJobRequest& setOutputMediaConfig(string outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };


    // outputMediaTarget Field Functions 
    bool hasOutputMediaTarget() const { return this->outputMediaTarget_ != nullptr;};
    void deleteOutputMediaTarget() { this->outputMediaTarget_ = nullptr;};
    inline string getOutputMediaTarget() const { DARABONBA_PTR_GET_DEFAULT(outputMediaTarget_, "") };
    inline SubmitLiveEditingJobRequest& setOutputMediaTarget(string outputMediaTarget) { DARABONBA_PTR_SET_VALUE(outputMediaTarget_, outputMediaTarget) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitLiveEditingJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitLiveEditingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // A JSON array that specifies the clips to edit. The job creates the output file by concatenating these clips in the specified order.
    // 
    // Each clip includes a start and end time. If live stream parameters are not specified for a clip, the system uses the global `LiveStreamConfig` settings. The start and end timestamps must be in UTC. For more details, see the Clip data structure below.
    // 
    // This parameter is required.
    shared_ptr<string> clips_ {};
    // The configuration of the source live stream, specified as a JSON object. It includes the following parameters:
    // 
    // - `AppName`: The name of the application to which the stream belongs.
    // 
    // - `DomainName`: The domain name of the stream.
    // 
    // - `StreamName`: The name of the live stream.
    shared_ptr<string> liveStreamConfig_ {};
    // The production configuration for the output file, specified as a JSON object. The `Mode` parameter specifies the editing mode. Valid values are:
    // 
    // - **AccurateFast** (Default): Fast and precise editing. It offers faster processing compared to the `Accurate` mode. The output file has the same resolution as the source stream. You cannot specify a custom width and height for the output file.
    // 
    // - **Accurate**: Precise editing. This mode lets you specify a custom width and height for the output file.
    // 
    // - **Rough**: Rough editing with a precision of a single TS segment. The output file includes all segments between the specified start and end times. You can specify a custom width and height for the output file.
    // 
    // - **RoughFast**: Fast rough-cut editing, which is faster than the `Accurate` mode. It has a precision of a single TS segment, and the output file includes all segments between the specified start and end times. The output file has the same resolution as the source stream. You cannot specify a custom width and height for the output file.
    shared_ptr<string> mediaProduceConfig_ {};
    // The destination configuration for the output file, specified as a JSON object. You can specify either a URL on OSS or a storage location in a VOD bucket.
    // 
    // - To output to OSS, the `MediaURL` parameter is required.
    // 
    // - To output to VOD, the `StorageLocation` and `FileName` parameters are required.
    shared_ptr<string> outputMediaConfig_ {};
    // The destination type for the output file. Valid values:
    // 
    // - `oss-object`: An object in an Alibaba Cloud OSS bucket.
    // 
    // - `vod-media`: A media asset in Alibaba Cloud VOD.
    shared_ptr<string> outputMediaTarget_ {};
    // The ID of the live editing project. If you specify this parameter, the system uses the storage settings from the project. If left empty, the system uses the storage settings provided in the request instead.
    shared_ptr<string> projectId_ {};
    // Custom user data, provided as a JSON object. The maximum length is 512 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
