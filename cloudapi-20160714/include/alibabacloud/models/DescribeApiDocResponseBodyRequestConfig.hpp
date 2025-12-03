// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYREQUESTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYREQUESTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiDocResponseBodyRequestConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiDocResponseBodyRequestConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BodyFormat, bodyFormat_);
      DARABONBA_PTR_TO_JSON(EscapePathParam, escapePathParam_);
      DARABONBA_PTR_TO_JSON(PostBodyDescription, postBodyDescription_);
      DARABONBA_PTR_TO_JSON(RequestHttpMethod, requestHttpMethod_);
      DARABONBA_PTR_TO_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_TO_JSON(RequestProtocol, requestProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiDocResponseBodyRequestConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyFormat, bodyFormat_);
      DARABONBA_PTR_FROM_JSON(EscapePathParam, escapePathParam_);
      DARABONBA_PTR_FROM_JSON(PostBodyDescription, postBodyDescription_);
      DARABONBA_PTR_FROM_JSON(RequestHttpMethod, requestHttpMethod_);
      DARABONBA_PTR_FROM_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_FROM_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_FROM_JSON(RequestProtocol, requestProtocol_);
    };
    DescribeApiDocResponseBodyRequestConfig() = default ;
    DescribeApiDocResponseBodyRequestConfig(const DescribeApiDocResponseBodyRequestConfig &) = default ;
    DescribeApiDocResponseBodyRequestConfig(DescribeApiDocResponseBodyRequestConfig &&) = default ;
    DescribeApiDocResponseBodyRequestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiDocResponseBodyRequestConfig() = default ;
    DescribeApiDocResponseBodyRequestConfig& operator=(const DescribeApiDocResponseBodyRequestConfig &) = default ;
    DescribeApiDocResponseBodyRequestConfig& operator=(DescribeApiDocResponseBodyRequestConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyFormat_ == nullptr
        && return this->escapePathParam_ == nullptr && return this->postBodyDescription_ == nullptr && return this->requestHttpMethod_ == nullptr && return this->requestMode_ == nullptr && return this->requestPath_ == nullptr
        && return this->requestProtocol_ == nullptr; };
    // bodyFormat Field Functions 
    bool hasBodyFormat() const { return this->bodyFormat_ != nullptr;};
    void deleteBodyFormat() { this->bodyFormat_ = nullptr;};
    inline string bodyFormat() const { DARABONBA_PTR_GET_DEFAULT(bodyFormat_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setBodyFormat(string bodyFormat) { DARABONBA_PTR_SET_VALUE(bodyFormat_, bodyFormat) };


    // escapePathParam Field Functions 
    bool hasEscapePathParam() const { return this->escapePathParam_ != nullptr;};
    void deleteEscapePathParam() { this->escapePathParam_ = nullptr;};
    inline bool escapePathParam() const { DARABONBA_PTR_GET_DEFAULT(escapePathParam_, false) };
    inline DescribeApiDocResponseBodyRequestConfig& setEscapePathParam(bool escapePathParam) { DARABONBA_PTR_SET_VALUE(escapePathParam_, escapePathParam) };


    // postBodyDescription Field Functions 
    bool hasPostBodyDescription() const { return this->postBodyDescription_ != nullptr;};
    void deletePostBodyDescription() { this->postBodyDescription_ = nullptr;};
    inline string postBodyDescription() const { DARABONBA_PTR_GET_DEFAULT(postBodyDescription_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setPostBodyDescription(string postBodyDescription) { DARABONBA_PTR_SET_VALUE(postBodyDescription_, postBodyDescription) };


    // requestHttpMethod Field Functions 
    bool hasRequestHttpMethod() const { return this->requestHttpMethod_ != nullptr;};
    void deleteRequestHttpMethod() { this->requestHttpMethod_ = nullptr;};
    inline string requestHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(requestHttpMethod_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setRequestHttpMethod(string requestHttpMethod) { DARABONBA_PTR_SET_VALUE(requestHttpMethod_, requestHttpMethod) };


    // requestMode Field Functions 
    bool hasRequestMode() const { return this->requestMode_ != nullptr;};
    void deleteRequestMode() { this->requestMode_ = nullptr;};
    inline string requestMode() const { DARABONBA_PTR_GET_DEFAULT(requestMode_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setRequestMode(string requestMode) { DARABONBA_PTR_SET_VALUE(requestMode_, requestMode) };


    // requestPath Field Functions 
    bool hasRequestPath() const { return this->requestPath_ != nullptr;};
    void deleteRequestPath() { this->requestPath_ = nullptr;};
    inline string requestPath() const { DARABONBA_PTR_GET_DEFAULT(requestPath_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setRequestPath(string requestPath) { DARABONBA_PTR_SET_VALUE(requestPath_, requestPath) };


    // requestProtocol Field Functions 
    bool hasRequestProtocol() const { return this->requestProtocol_ != nullptr;};
    void deleteRequestProtocol() { this->requestProtocol_ = nullptr;};
    inline string requestProtocol() const { DARABONBA_PTR_GET_DEFAULT(requestProtocol_, "") };
    inline DescribeApiDocResponseBodyRequestConfig& setRequestProtocol(string requestProtocol) { DARABONBA_PTR_SET_VALUE(requestProtocol_, requestProtocol) };


  protected:
    // This parameter takes effect only when the RequestMode parameter is set to MAPPING.********
    // 
    // The server data transmission method used for POST and PUT requests. Valid values: FORM and STREAM. FORM indicates that data in key-value pairs is transmitted as forms. STREAM indicates that data is transmitted as byte streams.
    std::shared_ptr<string> bodyFormat_ = nullptr;
    // Whether to escape the Path parameter, if true, the [param] on the Path will be treated as a regular character.
    std::shared_ptr<bool> escapePathParam_ = nullptr;
    // The description of the request body.
    std::shared_ptr<string> postBodyDescription_ = nullptr;
    // The HTTP method used to make the request. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
    std::shared_ptr<string> requestHttpMethod_ = nullptr;
    // The request mode. Valid values:
    // 
    // *   MAPPING: Parameters are mapped. Unknown parameters are filtered out.
    // *   PASSTHROUGH: Parameters are passed through.
    // *   MAPPING_PASSTHROUGH: Parameters are mapped. Unknown parameters are passed through.
    std::shared_ptr<string> requestMode_ = nullptr;
    // The API request path. If the complete API URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the API request path is ` /object/add  `.
    std::shared_ptr<string> requestPath_ = nullptr;
    // The protocol type supported by the API. Valid values: HTTP and HTTPS. Separate multiple values with commas (,), such as "HTTP,HTTPS".
    std::shared_ptr<string> requestProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
