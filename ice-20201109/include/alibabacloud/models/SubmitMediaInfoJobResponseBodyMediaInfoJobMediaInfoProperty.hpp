// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBMEDIAINFOPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioStreamInfoList_ != nullptr
        && this->fileBasicInfo_ != nullptr && this->videoStreamInfoList_ != nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> audioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setAudioStreamInfoList(vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setFileBasicInfo(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> videoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty& setVideoStreamInfoList(vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    // The information about the audio stream.
    std::shared_ptr<vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyAudioStreamInfoList>> audioStreamInfoList_ = nullptr;
    // The basic file information.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyFileBasicInfo> fileBasicInfo_ = nullptr;
    // The information about the video stream.
    std::shared_ptr<vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoPropertyVideoStreamInfoList>> videoStreamInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
