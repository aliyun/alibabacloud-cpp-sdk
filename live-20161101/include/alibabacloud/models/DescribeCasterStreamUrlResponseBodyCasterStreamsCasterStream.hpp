// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMSCASTERSTREAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMSCASTERSTREAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& obj) { 
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream(const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream(DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream &&) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& operator=(const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& operator=(DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputType_ == nullptr
        && return this->rtmpUrl_ == nullptr && return this->sceneId_ == nullptr && return this->streamInfos_ == nullptr && return this->streamUrl_ == nullptr; };
    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline int32_t outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, 0) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setOutputType(int32_t outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // rtmpUrl Field Functions 
    bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
    void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
    inline string rtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos) };
    inline Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos streamInfos() { DARABONBA_PTR_GET(streamInfos_, Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setStreamInfos(const Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setStreamInfos(Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // Indicates whether the output stream is in preview mode or program mode.
    // 
    // *   **0**: indicates that the output videos of the scene are in preview mode.
    // *   **1**: indicates that the output videos of the scene are in program mode.
    std::shared_ptr<int32_t> outputType_ = nullptr;
    // The Real Time Messaging Protocol (RTMP) URL.
    std::shared_ptr<string> rtmpUrl_ = nullptr;
    // The ID of the scene.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The information about the stream.
    std::shared_ptr<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos> streamInfos_ = nullptr;
    // The streaming URL.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
