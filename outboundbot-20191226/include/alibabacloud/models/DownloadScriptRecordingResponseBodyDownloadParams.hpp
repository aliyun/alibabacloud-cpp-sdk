// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSCRIPTRECORDINGRESPONSEBODYDOWNLOADPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSCRIPTRECORDINGRESPONSEBODYDOWNLOADPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DownloadScriptRecordingResponseBodyDownloadParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadScriptRecordingResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadScriptRecordingResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
    };
    DownloadScriptRecordingResponseBodyDownloadParams() = default ;
    DownloadScriptRecordingResponseBodyDownloadParams(const DownloadScriptRecordingResponseBodyDownloadParams &) = default ;
    DownloadScriptRecordingResponseBodyDownloadParams(DownloadScriptRecordingResponseBodyDownloadParams &&) = default ;
    DownloadScriptRecordingResponseBodyDownloadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadScriptRecordingResponseBodyDownloadParams() = default ;
    DownloadScriptRecordingResponseBodyDownloadParams& operator=(const DownloadScriptRecordingResponseBodyDownloadParams &) = default ;
    DownloadScriptRecordingResponseBodyDownloadParams& operator=(DownloadScriptRecordingResponseBodyDownloadParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->signatureUrl_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DownloadScriptRecordingResponseBodyDownloadParams& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // signatureUrl Field Functions 
    bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
    void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
    inline string signatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
    inline DownloadScriptRecordingResponseBodyDownloadParams& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> signatureUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
