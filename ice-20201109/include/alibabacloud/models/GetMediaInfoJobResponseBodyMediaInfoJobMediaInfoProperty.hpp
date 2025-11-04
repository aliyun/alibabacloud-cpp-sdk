// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(const GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && return this->fileBasicInfo_ == nullptr && return this->videoStreamInfoList_ == nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(const vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(const Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(const vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
