// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADRECORDINGRESPONSEBODYDOWNLOADPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADRECORDINGRESPONSEBODYDOWNLOADPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DownloadRecordingResponseBodyDownloadParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadRecordingResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
      DARABONBA_PTR_TO_JSON(VoiceSliceRecordingListJson, voiceSliceRecordingListJson_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadRecordingResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
      DARABONBA_PTR_FROM_JSON(VoiceSliceRecordingListJson, voiceSliceRecordingListJson_);
    };
    DownloadRecordingResponseBodyDownloadParams() = default ;
    DownloadRecordingResponseBodyDownloadParams(const DownloadRecordingResponseBodyDownloadParams &) = default ;
    DownloadRecordingResponseBodyDownloadParams(DownloadRecordingResponseBodyDownloadParams &&) = default ;
    DownloadRecordingResponseBodyDownloadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadRecordingResponseBodyDownloadParams() = default ;
    DownloadRecordingResponseBodyDownloadParams& operator=(const DownloadRecordingResponseBodyDownloadParams &) = default ;
    DownloadRecordingResponseBodyDownloadParams& operator=(DownloadRecordingResponseBodyDownloadParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->signatureUrl_ == nullptr && return this->voiceSliceRecordingListJson_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DownloadRecordingResponseBodyDownloadParams& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // signatureUrl Field Functions 
    bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
    void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
    inline string signatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
    inline DownloadRecordingResponseBodyDownloadParams& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


    // voiceSliceRecordingListJson Field Functions 
    bool hasVoiceSliceRecordingListJson() const { return this->voiceSliceRecordingListJson_ != nullptr;};
    void deleteVoiceSliceRecordingListJson() { this->voiceSliceRecordingListJson_ = nullptr;};
    inline string voiceSliceRecordingListJson() const { DARABONBA_PTR_GET_DEFAULT(voiceSliceRecordingListJson_, "") };
    inline DownloadRecordingResponseBodyDownloadParams& setVoiceSliceRecordingListJson(string voiceSliceRecordingListJson) { DARABONBA_PTR_SET_VALUE(voiceSliceRecordingListJson_, voiceSliceRecordingListJson) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> signatureUrl_ = nullptr;
    std::shared_ptr<string> voiceSliceRecordingListJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
