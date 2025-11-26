// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTSCRIPTRESPONSEBODYDOWNLOADPARAMS_HPP_
#define ALIBABACLOUD_MODELS_EXPORTSCRIPTRESPONSEBODYDOWNLOADPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ExportScriptResponseBodyDownloadParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportScriptResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ExportScriptResponseBodyDownloadParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
    };
    ExportScriptResponseBodyDownloadParams() = default ;
    ExportScriptResponseBodyDownloadParams(const ExportScriptResponseBodyDownloadParams &) = default ;
    ExportScriptResponseBodyDownloadParams(ExportScriptResponseBodyDownloadParams &&) = default ;
    ExportScriptResponseBodyDownloadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportScriptResponseBodyDownloadParams() = default ;
    ExportScriptResponseBodyDownloadParams& operator=(const ExportScriptResponseBodyDownloadParams &) = default ;
    ExportScriptResponseBodyDownloadParams& operator=(ExportScriptResponseBodyDownloadParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->signatureUrl_ == nullptr; };
    // signatureUrl Field Functions 
    bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
    void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
    inline string signatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
    inline ExportScriptResponseBodyDownloadParams& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


  protected:
    std::shared_ptr<string> signatureUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
