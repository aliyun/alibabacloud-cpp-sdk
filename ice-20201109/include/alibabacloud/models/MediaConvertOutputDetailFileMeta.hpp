// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETA_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertOutputDetailFileMetaAudioStreamInfoList.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailFileMetaFileBasicInfo.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailFileMetaVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetailFileMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetailFileMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetailFileMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    MediaConvertOutputDetailFileMeta() = default ;
    MediaConvertOutputDetailFileMeta(const MediaConvertOutputDetailFileMeta &) = default ;
    MediaConvertOutputDetailFileMeta(MediaConvertOutputDetailFileMeta &&) = default ;
    MediaConvertOutputDetailFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetailFileMeta() = default ;
    MediaConvertOutputDetailFileMeta& operator=(const MediaConvertOutputDetailFileMeta &) = default ;
    MediaConvertOutputDetailFileMeta& operator=(MediaConvertOutputDetailFileMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && return this->fileBasicInfo_ == nullptr && return this->videoStreamInfoList_ == nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList>) };
    inline vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList>) };
    inline MediaConvertOutputDetailFileMeta& setAudioStreamInfoList(const vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline MediaConvertOutputDetailFileMeta& setAudioStreamInfoList(vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const MediaConvertOutputDetailFileMetaFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, MediaConvertOutputDetailFileMetaFileBasicInfo) };
    inline MediaConvertOutputDetailFileMetaFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, MediaConvertOutputDetailFileMetaFileBasicInfo) };
    inline MediaConvertOutputDetailFileMeta& setFileBasicInfo(const MediaConvertOutputDetailFileMetaFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline MediaConvertOutputDetailFileMeta& setFileBasicInfo(MediaConvertOutputDetailFileMetaFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList>) };
    inline vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList>) };
    inline MediaConvertOutputDetailFileMeta& setVideoStreamInfoList(const vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline MediaConvertOutputDetailFileMeta& setVideoStreamInfoList(vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    std::shared_ptr<vector<MediaConvertOutputDetailFileMetaAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    std::shared_ptr<MediaConvertOutputDetailFileMetaFileBasicInfo> fileBasicInfo_ = nullptr;
    std::shared_ptr<vector<MediaConvertOutputDetailFileMetaVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
