// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASERESPONSEBODYDATAPARAM_HPP_
#define ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASERESPONSEBODYDATAPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyFileUploadLeaseResponseBodyDataParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyFileUploadLeaseResponseBodyDataParam& obj) { 
      DARABONBA_ANY_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyFileUploadLeaseResponseBodyDataParam& obj) { 
      DARABONBA_ANY_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ApplyFileUploadLeaseResponseBodyDataParam() = default ;
    ApplyFileUploadLeaseResponseBodyDataParam(const ApplyFileUploadLeaseResponseBodyDataParam &) = default ;
    ApplyFileUploadLeaseResponseBodyDataParam(ApplyFileUploadLeaseResponseBodyDataParam &&) = default ;
    ApplyFileUploadLeaseResponseBodyDataParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyFileUploadLeaseResponseBodyDataParam() = default ;
    ApplyFileUploadLeaseResponseBodyDataParam& operator=(const ApplyFileUploadLeaseResponseBodyDataParam &) = default ;
    ApplyFileUploadLeaseResponseBodyDataParam& operator=(ApplyFileUploadLeaseResponseBodyDataParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->method_ == nullptr && return this->url_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline     const Darabonba::Json & headers() const { DARABONBA_GET(headers_) };
    Darabonba::Json & headers() { DARABONBA_GET(headers_) };
    inline ApplyFileUploadLeaseResponseBodyDataParam& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
    inline ApplyFileUploadLeaseResponseBodyDataParam& setHeaders(Darabonba::Json & headers) { DARABONBA_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ApplyFileUploadLeaseResponseBodyDataParam& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ApplyFileUploadLeaseResponseBodyDataParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The key-value pair to be placed in the Header. Both the key and the value are strings.
    Darabonba::Json headers_ = nullptr;
    // The HTTP call method. Valid values:
    // 
    // *   PUT
    // *   POST
    std::shared_ptr<string> method_ = nullptr;
    // The upload URL of the document.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
