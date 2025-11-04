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
        && return this->liveStreamConfig_ == nullptr && return this->mediaProduceConfig_ == nullptr && return this->outputMediaConfig_ == nullptr && return this->outputMediaTarget_ == nullptr && return this->projectId_ == nullptr
        && return this->userData_ == nullptr; };
    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline string clips() const { DARABONBA_PTR_GET_DEFAULT(clips_, "") };
    inline SubmitLiveEditingJobRequest& setClips(string clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };


    // liveStreamConfig Field Functions 
    bool hasLiveStreamConfig() const { return this->liveStreamConfig_ != nullptr;};
    void deleteLiveStreamConfig() { this->liveStreamConfig_ = nullptr;};
    inline string liveStreamConfig() const { DARABONBA_PTR_GET_DEFAULT(liveStreamConfig_, "") };
    inline SubmitLiveEditingJobRequest& setLiveStreamConfig(string liveStreamConfig) { DARABONBA_PTR_SET_VALUE(liveStreamConfig_, liveStreamConfig) };


    // mediaProduceConfig Field Functions 
    bool hasMediaProduceConfig() const { return this->mediaProduceConfig_ != nullptr;};
    void deleteMediaProduceConfig() { this->mediaProduceConfig_ = nullptr;};
    inline string mediaProduceConfig() const { DARABONBA_PTR_GET_DEFAULT(mediaProduceConfig_, "") };
    inline SubmitLiveEditingJobRequest& setMediaProduceConfig(string mediaProduceConfig) { DARABONBA_PTR_SET_VALUE(mediaProduceConfig_, mediaProduceConfig) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline string outputMediaConfig() const { DARABONBA_PTR_GET_DEFAULT(outputMediaConfig_, "") };
    inline SubmitLiveEditingJobRequest& setOutputMediaConfig(string outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };


    // outputMediaTarget Field Functions 
    bool hasOutputMediaTarget() const { return this->outputMediaTarget_ != nullptr;};
    void deleteOutputMediaTarget() { this->outputMediaTarget_ = nullptr;};
    inline string outputMediaTarget() const { DARABONBA_PTR_GET_DEFAULT(outputMediaTarget_, "") };
    inline SubmitLiveEditingJobRequest& setOutputMediaTarget(string outputMediaTarget) { DARABONBA_PTR_SET_VALUE(outputMediaTarget_, outputMediaTarget) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitLiveEditingJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitLiveEditingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The clips in the JSON array format. The output video is created by merging these clips sequentially.
    // 
    // Each clip has a start time and an end time. If no live stream parameters are specified, the outer live stream configurations apply. The start and end timestamps are in UTC. For more information about the parameters, see the "Clip" section of this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> clips_ = nullptr;
    // The live stream configurations, in the JSON format. The configurations must include the following parameters:
    // 
    // *   AppName: the name of the application to which the live stream belongs.
    // *   DomainName: the domain name of the application.
    // *   StreamName: the name of the live stream.
    std::shared_ptr<string> liveStreamConfig_ = nullptr;
    // The production configurations, in the JSON format. Mode specifies the editing mode. Valid values:
    // 
    // *   **AccurateFast** (default): fast editing. It is faster than the Accurate mode. The resolution of the output file is the same as that of the source stream. You cannot specify the width and height of the output file.
    // *   **Accurate**: accurate editing. In this mode, you can specify the width and height of the output file.
    // *   **Rough**: rough editing. The minimum precision is one TS segment. The output file comprises all segments within the specified time range. You can specify the width and height of the output file.
    // *   **RoughFast**: fast rough editing. It is faster than the Accurate mode. The minimum precision is one TS segment. The output file comprises all segments within the specified time range. The resolution of the output file is the same as that of the source stream. You cannot specify the width and height of the output file.
    std::shared_ptr<string> mediaProduceConfig_ = nullptr;
    // The configurations of the output file, in the JSON format. You can specify an OSS URL or a storage location in a storage bucket of ApsaraVideo VOD.
    // 
    // *   To store the output file in OSS, you must specify MediaURL.
    // *   To store the output file in ApsaraVideo VOD, you must specify StorageLocation and FileName.
    std::shared_ptr<string> outputMediaConfig_ = nullptr;
    // The type of the output file. Valid values:
    // 
    // *   oss-object: OSS object in an OSS bucket.
    // *   vod-media: media asset in Alibaba Cloud VOD.
    std::shared_ptr<string> outputMediaTarget_ = nullptr;
    // The ID of the live editing project. If this parameter is specified, the system reads the storage configurations of the project. If this parameter is not specified, the specified storage configurations take precedence.
    std::shared_ptr<string> projectId_ = nullptr;
    // The user-defined data in the JSON format, which can be up to 512 bytes in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
