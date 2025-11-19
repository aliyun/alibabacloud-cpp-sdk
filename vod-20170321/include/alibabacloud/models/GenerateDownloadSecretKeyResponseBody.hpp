// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDOWNLOADSECRETKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDOWNLOADSECRETKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GenerateDownloadSecretKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDownloadSecretKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppEncryptKey, appEncryptKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDownloadSecretKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEncryptKey, appEncryptKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateDownloadSecretKeyResponseBody() = default ;
    GenerateDownloadSecretKeyResponseBody(const GenerateDownloadSecretKeyResponseBody &) = default ;
    GenerateDownloadSecretKeyResponseBody(GenerateDownloadSecretKeyResponseBody &&) = default ;
    GenerateDownloadSecretKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDownloadSecretKeyResponseBody() = default ;
    GenerateDownloadSecretKeyResponseBody& operator=(const GenerateDownloadSecretKeyResponseBody &) = default ;
    GenerateDownloadSecretKeyResponseBody& operator=(GenerateDownloadSecretKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEncryptKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // appEncryptKey Field Functions 
    bool hasAppEncryptKey() const { return this->appEncryptKey_ != nullptr;};
    void deleteAppEncryptKey() { this->appEncryptKey_ = nullptr;};
    inline string appEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(appEncryptKey_, "") };
    inline GenerateDownloadSecretKeyResponseBody& setAppEncryptKey(string appEncryptKey) { DARABONBA_PTR_SET_VALUE(appEncryptKey_, appEncryptKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDownloadSecretKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The key file for secure download.
    std::shared_ptr<string> appEncryptKey_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
