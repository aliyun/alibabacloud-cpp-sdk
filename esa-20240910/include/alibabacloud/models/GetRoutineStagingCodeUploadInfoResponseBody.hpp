// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINESTAGINGCODEUPLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINESTAGINGCODEUPLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineStagingCodeUploadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineStagingCodeUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_ANY_TO_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineStagingCodeUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_ANY_FROM_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRoutineStagingCodeUploadInfoResponseBody() = default ;
    GetRoutineStagingCodeUploadInfoResponseBody(const GetRoutineStagingCodeUploadInfoResponseBody &) = default ;
    GetRoutineStagingCodeUploadInfoResponseBody(GetRoutineStagingCodeUploadInfoResponseBody &&) = default ;
    GetRoutineStagingCodeUploadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineStagingCodeUploadInfoResponseBody() = default ;
    GetRoutineStagingCodeUploadInfoResponseBody& operator=(const GetRoutineStagingCodeUploadInfoResponseBody &) = default ;
    GetRoutineStagingCodeUploadInfoResponseBody& operator=(GetRoutineStagingCodeUploadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersion_ == nullptr
        && this->ossPostConfig_ == nullptr && this->requestId_ == nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline GetRoutineStagingCodeUploadInfoResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // ossPostConfig Field Functions 
    bool hasOssPostConfig() const { return this->ossPostConfig_ != nullptr;};
    void deleteOssPostConfig() { this->ossPostConfig_ = nullptr;};
    inline     const Darabonba::Json & getOssPostConfig() const { DARABONBA_GET(ossPostConfig_) };
    Darabonba::Json & getOssPostConfig() { DARABONBA_GET(ossPostConfig_) };
    inline GetRoutineStagingCodeUploadInfoResponseBody& setOssPostConfig(const Darabonba::Json & ossPostConfig) { DARABONBA_SET_VALUE(ossPostConfig_, ossPostConfig) };
    inline GetRoutineStagingCodeUploadInfoResponseBody& setOssPostConfig(Darabonba::Json && ossPostConfig) { DARABONBA_SET_RVALUE(ossPostConfig_, ossPostConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineStagingCodeUploadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code version.
    shared_ptr<string> codeVersion_ {};
    // The configuration information that can be used to upload to OSS.
    Darabonba::Json ossPostConfig_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
