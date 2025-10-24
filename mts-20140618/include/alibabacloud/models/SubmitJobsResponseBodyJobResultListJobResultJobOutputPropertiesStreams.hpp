// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setAudioStreamList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setAudioStreamList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setSubtitleStreamList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setSubtitleStreamList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setVideoStreamList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams& setVideoStreamList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The audio streams.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The subtitle streams.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The video streams.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
