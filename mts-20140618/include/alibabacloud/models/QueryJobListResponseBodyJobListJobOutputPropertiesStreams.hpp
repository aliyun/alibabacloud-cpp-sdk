// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams(const QueryJobListResponseBodyJobListJobOutputPropertiesStreams &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams(QueryJobListResponseBodyJobListJobOutputPropertiesStreams &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesStreams() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesStreams &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreams& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setAudioStreamList(const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setAudioStreamList(Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setSubtitleStreamList(const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setSubtitleStreamList(Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setVideoStreamList(const Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreams& setVideoStreamList(Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The audio streams.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The caption streams.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The video streams.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
