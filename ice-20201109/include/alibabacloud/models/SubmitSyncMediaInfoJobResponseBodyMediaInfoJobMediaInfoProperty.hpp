// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && return this->fileBasicInfo_ == nullptr && return this->videoStreamInfoList_ == nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(const vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(const vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
