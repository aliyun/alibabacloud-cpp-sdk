// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHINGTARGETHTTPREQUESTTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUSHINGTARGETHTTPREQUESTTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushingTargetHttpRequestTargetHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PushingTargetHttpRequestTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushingTargetHttpRequestTarget& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(EncryptSignatureKey, encryptSignatureKey_);
      DARABONBA_PTR_TO_JSON(EncryptString, encryptString_);
      DARABONBA_PTR_TO_JSON(EncryptTimestampKey, encryptTimestampKey_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PushingTargetHttpRequestTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(EncryptSignatureKey, encryptSignatureKey_);
      DARABONBA_PTR_FROM_JSON(EncryptString, encryptString_);
      DARABONBA_PTR_FROM_JSON(EncryptTimestampKey, encryptTimestampKey_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    PushingTargetHttpRequestTarget() = default ;
    PushingTargetHttpRequestTarget(const PushingTargetHttpRequestTarget &) = default ;
    PushingTargetHttpRequestTarget(PushingTargetHttpRequestTarget &&) = default ;
    PushingTargetHttpRequestTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushingTargetHttpRequestTarget() = default ;
    PushingTargetHttpRequestTarget& operator=(const PushingTargetHttpRequestTarget &) = default ;
    PushingTargetHttpRequestTarget& operator=(PushingTargetHttpRequestTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->encryptSignatureKey_ == nullptr && return this->encryptString_ == nullptr && return this->encryptTimestampKey_ == nullptr && return this->headers_ == nullptr && return this->method_ == nullptr
        && return this->url_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline PushingTargetHttpRequestTarget& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // encryptSignatureKey Field Functions 
    bool hasEncryptSignatureKey() const { return this->encryptSignatureKey_ != nullptr;};
    void deleteEncryptSignatureKey() { this->encryptSignatureKey_ = nullptr;};
    inline string encryptSignatureKey() const { DARABONBA_PTR_GET_DEFAULT(encryptSignatureKey_, "") };
    inline PushingTargetHttpRequestTarget& setEncryptSignatureKey(string encryptSignatureKey) { DARABONBA_PTR_SET_VALUE(encryptSignatureKey_, encryptSignatureKey) };


    // encryptString Field Functions 
    bool hasEncryptString() const { return this->encryptString_ != nullptr;};
    void deleteEncryptString() { this->encryptString_ = nullptr;};
    inline string encryptString() const { DARABONBA_PTR_GET_DEFAULT(encryptString_, "") };
    inline PushingTargetHttpRequestTarget& setEncryptString(string encryptString) { DARABONBA_PTR_SET_VALUE(encryptString_, encryptString) };


    // encryptTimestampKey Field Functions 
    bool hasEncryptTimestampKey() const { return this->encryptTimestampKey_ != nullptr;};
    void deleteEncryptTimestampKey() { this->encryptTimestampKey_ = nullptr;};
    inline string encryptTimestampKey() const { DARABONBA_PTR_GET_DEFAULT(encryptTimestampKey_, "") };
    inline PushingTargetHttpRequestTarget& setEncryptTimestampKey(string encryptTimestampKey) { DARABONBA_PTR_SET_VALUE(encryptTimestampKey_, encryptTimestampKey) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::PushingTargetHttpRequestTargetHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::PushingTargetHttpRequestTargetHeaders>) };
    inline vector<Models::PushingTargetHttpRequestTargetHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::PushingTargetHttpRequestTargetHeaders>) };
    inline PushingTargetHttpRequestTarget& setHeaders(const vector<Models::PushingTargetHttpRequestTargetHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PushingTargetHttpRequestTarget& setHeaders(vector<Models::PushingTargetHttpRequestTargetHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline PushingTargetHttpRequestTarget& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PushingTargetHttpRequestTarget& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> encryptSignatureKey_ = nullptr;
    std::shared_ptr<string> encryptString_ = nullptr;
    std::shared_ptr<string> encryptTimestampKey_ = nullptr;
    std::shared_ptr<vector<Models::PushingTargetHttpRequestTargetHeaders>> headers_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
