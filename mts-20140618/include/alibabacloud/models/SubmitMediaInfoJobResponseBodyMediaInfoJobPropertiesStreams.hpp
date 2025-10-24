// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setAudioStreamList(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setAudioStreamList(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setSubtitleStreamList(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setSubtitleStreamList(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setVideoStreamList(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreams& setVideoStreamList(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The audio streams. A media file can contain up to four audio streams.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The subtitle streams. A media file can contain up to four subtitle streams.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The video streams. A media file can contain up to four video streams.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
