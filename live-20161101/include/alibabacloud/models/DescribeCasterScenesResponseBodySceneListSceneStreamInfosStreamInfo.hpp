// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENESTREAMINFOSSTREAMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENESTREAMINFOSSTREAMINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& obj) { 
      DARABONBA_PTR_TO_JSON(OutputStreamUrl, outputStreamUrl_);
      DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_TO_JSON(VideoFormat, videoFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputStreamUrl, outputStreamUrl_);
      DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_FROM_JSON(VideoFormat, videoFormat_);
    };
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo() = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo(const DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo(DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo &&) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo() = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& operator=(const DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& operator=(DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputStreamUrl_ != nullptr
        && this->transcodeConfig_ != nullptr && this->videoFormat_ != nullptr; };
    // outputStreamUrl Field Functions 
    bool hasOutputStreamUrl() const { return this->outputStreamUrl_ != nullptr;};
    void deleteOutputStreamUrl() { this->outputStreamUrl_ = nullptr;};
    inline string outputStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(outputStreamUrl_, "") };
    inline DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& setOutputStreamUrl(string outputStreamUrl) { DARABONBA_PTR_SET_VALUE(outputStreamUrl_, outputStreamUrl) };


    // transcodeConfig Field Functions 
    bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
    void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
    inline string transcodeConfig() const { DARABONBA_PTR_GET_DEFAULT(transcodeConfig_, "") };
    inline DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& setTranscodeConfig(string transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };


    // videoFormat Field Functions 
    bool hasVideoFormat() const { return this->videoFormat_ != nullptr;};
    void deleteVideoFormat() { this->videoFormat_ = nullptr;};
    inline string videoFormat() const { DARABONBA_PTR_GET_DEFAULT(videoFormat_, "") };
    inline DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo& setVideoFormat(string videoFormat) { DARABONBA_PTR_SET_VALUE(videoFormat_, videoFormat) };


  protected:
    // The streaming URL.
    std::shared_ptr<string> outputStreamUrl_ = nullptr;
    // The transcoding configuration. Valid values:
    // 
    // *   **sd**: standard definition
    // *   **lld**: low definition
    // *   **lud**: ultra-high definition
    // *   **lhd**: high definition
    std::shared_ptr<string> transcodeConfig_ = nullptr;
    // The format. Valid values:
    // 
    // *   **flv**
    // *   **mp4**
    // *   **m3u8**
    std::shared_ptr<string> videoFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
