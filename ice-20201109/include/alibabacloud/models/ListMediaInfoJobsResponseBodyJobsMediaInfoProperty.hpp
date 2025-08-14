// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSRESPONSEBODYJOBSMEDIAINFOPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSRESPONSEBODYJOBSMEDIAINFOPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList.hpp>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo.hpp>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaInfoJobsResponseBodyJobsMediaInfoProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty() = default ;
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty(const ListMediaInfoJobsResponseBodyJobsMediaInfoProperty &) = default ;
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty(ListMediaInfoJobsResponseBodyJobsMediaInfoProperty &&) = default ;
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaInfoJobsResponseBodyJobsMediaInfoProperty() = default ;
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& operator=(const ListMediaInfoJobsResponseBodyJobsMediaInfoProperty &) = default ;
    ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& operator=(ListMediaInfoJobsResponseBodyJobsMediaInfoProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamInfoList_ != nullptr
        && this->fileBasicInfo_ != nullptr && this->videoStreamInfoList_ != nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList>) };
    inline vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList>) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setAudioStreamInfoList(const vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setAudioStreamInfoList(vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo) };
    inline Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setFileBasicInfo(const Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setFileBasicInfo(Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList>) };
    inline vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList>) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setVideoStreamInfoList(const vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline ListMediaInfoJobsResponseBodyJobsMediaInfoProperty& setVideoStreamInfoList(vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoPropertyVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
