// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTFILEMETA_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTFILEMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& operator=(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamInfoList_ != nullptr
        && this->fileBasicInfo_ != nullptr && this->videoStreamInfoList_ != nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setAudioStreamInfoList(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setAudioStreamInfoList(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setFileBasicInfo(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setFileBasicInfo(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setVideoStreamInfoList(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta& setVideoStreamInfoList(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMetaVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
