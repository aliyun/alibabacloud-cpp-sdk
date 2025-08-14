// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    GetMediaInfoResponseBodyMediaInfoFileInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoList(const GetMediaInfoResponseBodyMediaInfoFileInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoList(GetMediaInfoResponseBodyMediaInfoFileInfoList &&) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoList& operator=(const GetMediaInfoResponseBodyMediaInfoFileInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoList& operator=(GetMediaInfoResponseBodyMediaInfoFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamInfoList_ != nullptr
        && this->fileBasicInfo_ != nullptr && this->subtitleStreamInfoList_ != nullptr && this->videoStreamInfoList_ != nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>) };
    inline vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setAudioStreamInfoList(const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setAudioStreamInfoList(vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo) };
    inline Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setFileBasicInfo(const Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setFileBasicInfo(Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // subtitleStreamInfoList Field Functions 
    bool hasSubtitleStreamInfoList() const { return this->subtitleStreamInfoList_ != nullptr;};
    void deleteSubtitleStreamInfoList() { this->subtitleStreamInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> & subtitleStreamInfoList() const { DARABONBA_PTR_GET_CONST(subtitleStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>) };
    inline vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> subtitleStreamInfoList() { DARABONBA_PTR_GET(subtitleStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setSubtitleStreamInfoList(const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> & subtitleStreamInfoList) { DARABONBA_PTR_SET_VALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setSubtitleStreamInfoList(vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> && subtitleStreamInfoList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>) };
    inline vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setVideoStreamInfoList(const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoList& setVideoStreamInfoList(vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio tracks. A media asset may have multiple audio tracks.
    std::shared_ptr<vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic information about the file, including the duration and size.
    std::shared_ptr<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the subtitle tracks. A media asset may have multiple subtitle tracks.
    std::shared_ptr<vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>> subtitleStreamInfoList_ = nullptr;
    // The information about the video tracks. A media asset may have multiple video tracks.
    std::shared_ptr<vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
