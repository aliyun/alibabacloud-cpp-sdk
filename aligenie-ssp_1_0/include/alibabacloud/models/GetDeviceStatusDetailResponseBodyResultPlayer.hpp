// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULTPLAYER_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULTPLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusDetailResponseBodyResultPlayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusDetailResponseBodyResultPlayer& obj) { 
      DARABONBA_PTR_TO_JSON(AudioAlbum, audioAlbum_);
      DARABONBA_PTR_TO_JSON(AudioAnchor, audioAnchor_);
      DARABONBA_PTR_TO_JSON(AudioExt, audioExt_);
      DARABONBA_PTR_TO_JSON(AudioId, audioId_);
      DARABONBA_PTR_TO_JSON(AudioLength, audioLength_);
      DARABONBA_PTR_TO_JSON(AudioName, audioName_);
      DARABONBA_PTR_TO_JSON(AudioSource, audioSource_);
      DARABONBA_PTR_TO_JSON(AudioUrl, audioUrl_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusDetailResponseBodyResultPlayer& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioAlbum, audioAlbum_);
      DARABONBA_PTR_FROM_JSON(AudioAnchor, audioAnchor_);
      DARABONBA_PTR_FROM_JSON(AudioExt, audioExt_);
      DARABONBA_PTR_FROM_JSON(AudioId, audioId_);
      DARABONBA_PTR_FROM_JSON(AudioLength, audioLength_);
      DARABONBA_PTR_FROM_JSON(AudioName, audioName_);
      DARABONBA_PTR_FROM_JSON(AudioSource, audioSource_);
      DARABONBA_PTR_FROM_JSON(AudioUrl, audioUrl_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetDeviceStatusDetailResponseBodyResultPlayer() = default ;
    GetDeviceStatusDetailResponseBodyResultPlayer(const GetDeviceStatusDetailResponseBodyResultPlayer &) = default ;
    GetDeviceStatusDetailResponseBodyResultPlayer(GetDeviceStatusDetailResponseBodyResultPlayer &&) = default ;
    GetDeviceStatusDetailResponseBodyResultPlayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusDetailResponseBodyResultPlayer() = default ;
    GetDeviceStatusDetailResponseBodyResultPlayer& operator=(const GetDeviceStatusDetailResponseBodyResultPlayer &) = default ;
    GetDeviceStatusDetailResponseBodyResultPlayer& operator=(GetDeviceStatusDetailResponseBodyResultPlayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioAlbum_ != nullptr
        && this->audioAnchor_ != nullptr && this->audioExt_ != nullptr && this->audioId_ != nullptr && this->audioLength_ != nullptr && this->audioName_ != nullptr
        && this->audioSource_ != nullptr && this->audioUrl_ != nullptr && this->format_ != nullptr && this->progress_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->timestamp_ != nullptr; };
    // audioAlbum Field Functions 
    bool hasAudioAlbum() const { return this->audioAlbum_ != nullptr;};
    void deleteAudioAlbum() { this->audioAlbum_ = nullptr;};
    inline string audioAlbum() const { DARABONBA_PTR_GET_DEFAULT(audioAlbum_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioAlbum(string audioAlbum) { DARABONBA_PTR_SET_VALUE(audioAlbum_, audioAlbum) };


    // audioAnchor Field Functions 
    bool hasAudioAnchor() const { return this->audioAnchor_ != nullptr;};
    void deleteAudioAnchor() { this->audioAnchor_ = nullptr;};
    inline string audioAnchor() const { DARABONBA_PTR_GET_DEFAULT(audioAnchor_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioAnchor(string audioAnchor) { DARABONBA_PTR_SET_VALUE(audioAnchor_, audioAnchor) };


    // audioExt Field Functions 
    bool hasAudioExt() const { return this->audioExt_ != nullptr;};
    void deleteAudioExt() { this->audioExt_ = nullptr;};
    inline string audioExt() const { DARABONBA_PTR_GET_DEFAULT(audioExt_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioExt(string audioExt) { DARABONBA_PTR_SET_VALUE(audioExt_, audioExt) };


    // audioId Field Functions 
    bool hasAudioId() const { return this->audioId_ != nullptr;};
    void deleteAudioId() { this->audioId_ = nullptr;};
    inline string audioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioId(string audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


    // audioLength Field Functions 
    bool hasAudioLength() const { return this->audioLength_ != nullptr;};
    void deleteAudioLength() { this->audioLength_ = nullptr;};
    inline string audioLength() const { DARABONBA_PTR_GET_DEFAULT(audioLength_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioLength(string audioLength) { DARABONBA_PTR_SET_VALUE(audioLength_, audioLength) };


    // audioName Field Functions 
    bool hasAudioName() const { return this->audioName_ != nullptr;};
    void deleteAudioName() { this->audioName_ = nullptr;};
    inline string audioName() const { DARABONBA_PTR_GET_DEFAULT(audioName_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioName(string audioName) { DARABONBA_PTR_SET_VALUE(audioName_, audioName) };


    // audioSource Field Functions 
    bool hasAudioSource() const { return this->audioSource_ != nullptr;};
    void deleteAudioSource() { this->audioSource_ = nullptr;};
    inline string audioSource() const { DARABONBA_PTR_GET_DEFAULT(audioSource_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioSource(string audioSource) { DARABONBA_PTR_SET_VALUE(audioSource_, audioSource) };


    // audioUrl Field Functions 
    bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
    void deleteAudioUrl() { this->audioUrl_ = nullptr;};
    inline string audioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPlayer& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> audioAlbum_ = nullptr;
    std::shared_ptr<string> audioAnchor_ = nullptr;
    std::shared_ptr<string> audioExt_ = nullptr;
    std::shared_ptr<string> audioId_ = nullptr;
    std::shared_ptr<string> audioLength_ = nullptr;
    std::shared_ptr<string> audioName_ = nullptr;
    std::shared_ptr<string> audioSource_ = nullptr;
    std::shared_ptr<string> audioUrl_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
