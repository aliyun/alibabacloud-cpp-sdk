// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTFILEMETA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTFILEMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamInfoList_ != nullptr
        && this->fileBasicInfo_ != nullptr && this->videoStreamInfoList_ != nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setAudioStreamInfoList(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setAudioStreamInfoList(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setFileBasicInfo(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setFileBasicInfo(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setVideoStreamInfoList(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setVideoStreamInfoList(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
