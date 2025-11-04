// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPublicMediaInfoResponseBodyMediaInfoFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList() = default ;
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList(const GetPublicMediaInfoResponseBodyMediaInfoFileInfoList &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList(GetPublicMediaInfoResponseBodyMediaInfoFileInfoList &&) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoList() = default ;
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& operator=(const GetPublicMediaInfoResponseBodyMediaInfoFileInfoList &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& operator=(GetPublicMediaInfoResponseBodyMediaInfoFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && return this->fileBasicInfo_ == nullptr && return this->subtitleStreamInfoList_ == nullptr && return this->videoStreamInfoList_ == nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>) };
    inline vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setAudioStreamInfoList(const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setAudioStreamInfoList(vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo) };
    inline Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setFileBasicInfo(const Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setFileBasicInfo(Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // subtitleStreamInfoList Field Functions 
    bool hasSubtitleStreamInfoList() const { return this->subtitleStreamInfoList_ != nullptr;};
    void deleteSubtitleStreamInfoList() { this->subtitleStreamInfoList_ = nullptr;};
    inline const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> & subtitleStreamInfoList() const { DARABONBA_PTR_GET_CONST(subtitleStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>) };
    inline vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> subtitleStreamInfoList() { DARABONBA_PTR_GET(subtitleStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setSubtitleStreamInfoList(const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> & subtitleStreamInfoList) { DARABONBA_PTR_SET_VALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setSubtitleStreamInfoList(vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> && subtitleStreamInfoList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>) };
    inline vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setVideoStreamInfoList(const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline GetPublicMediaInfoResponseBodyMediaInfoFileInfoList& setVideoStreamInfoList(vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    std::shared_ptr<vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    std::shared_ptr<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
    std::shared_ptr<vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>> subtitleStreamInfoList_ = nullptr;
    std::shared_ptr<vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
