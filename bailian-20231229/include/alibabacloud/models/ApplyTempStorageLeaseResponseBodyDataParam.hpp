// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODYDATAPARAM_HPP_
#define ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODYDATAPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyTempStorageLeaseResponseBodyDataParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTempStorageLeaseResponseBodyDataParam& obj) { 
      DARABONBA_ANY_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTempStorageLeaseResponseBodyDataParam& obj) { 
      DARABONBA_ANY_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ApplyTempStorageLeaseResponseBodyDataParam() = default ;
    ApplyTempStorageLeaseResponseBodyDataParam(const ApplyTempStorageLeaseResponseBodyDataParam &) = default ;
    ApplyTempStorageLeaseResponseBodyDataParam(ApplyTempStorageLeaseResponseBodyDataParam &&) = default ;
    ApplyTempStorageLeaseResponseBodyDataParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTempStorageLeaseResponseBodyDataParam() = default ;
    ApplyTempStorageLeaseResponseBodyDataParam& operator=(const ApplyTempStorageLeaseResponseBodyDataParam &) = default ;
    ApplyTempStorageLeaseResponseBodyDataParam& operator=(ApplyTempStorageLeaseResponseBodyDataParam &&) = default ;
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
    inline ApplyTempStorageLeaseResponseBodyDataParam& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
    inline ApplyTempStorageLeaseResponseBodyDataParam& setHeaders(Darabonba::Json & headers) { DARABONBA_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ApplyTempStorageLeaseResponseBodyDataParam& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ApplyTempStorageLeaseResponseBodyDataParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    Darabonba::Json headers_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
