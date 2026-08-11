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
    // The list of clip segments. The output is produced by concatenating the segments in the list in order. JSON Array.
    // 
    // Each segment contains a start time and an end time. If no live stream parameters are specified, the outer-level live stream configuration is used. Both start and end timestamps are in UTC. For parameter details, see the Clip data structure below.
    // 
    // This parameter is required.
    shared_ptr<string> clips_ {};
    // The live stream configuration. JSON Object. The following configuration items are required:
    // 
    // - AppName: the name of the application to which the stream belongs. 
    // 
    // - DomainName: the domain name.
    // 
    // - StreamName: the name of the live stream.
    shared_ptr<string> liveStreamConfig_ {};
    // The composition configuration for generating segments, in JSON format. Mode specifies the editing mode. Valid values:
    // - **AccurateFast** (default): fast accurate editing. This mode is faster than the Accurate mode. The output file resolution is the same as the source stream resolution. Custom output width and height are not supported.
    // - **Accurate**: accurate editing. You can specify the output width and height.
    // - **Rough**: rough editing. The minimum precision is one TS segment. The output contains all segments within the specified start and end time. You can specify the output width and height.
    // - **RoughFast**: fast rough editing. This mode is faster than the Accurate mode. The minimum precision is one TS segment. The output contains all segments within the specified start and end time. The output file resolution is the same as the source stream resolution. Custom output width and height are not supported.
    shared_ptr<string> mediaProduceConfig_ {};
    // The destination configuration for the output. JSON Object. You can specify the URL of the output on OSS or the storage location in a VOD bucket.
    // - When outputting to OSS, the MediaURL of the output destination is required.
    // - When outputting to VOD, the StorageLocation and FileName parameters are required.
    shared_ptr<string> outputMediaConfig_ {};
    // The target type of the output. Valid values:
    // - oss-object: an OSS object in an Alibaba Cloud OSS bucket.
    // - vod-media: a media asset in Alibaba Cloud VOD.
    shared_ptr<string> outputMediaTarget_ {};
    // The ID of the live editing project. If this parameter is not empty, the storage configuration associated with the project is used. If this parameter is empty, the storage configuration specified in the request parameters is used.
    shared_ptr<string> projectId_ {};
    // The custom settings. JSON Object. Maximum length: 512 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
