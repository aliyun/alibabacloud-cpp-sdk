// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyTokenResponseBodyOssUploadToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyPageUrl, verifyPageUrl_);
      DARABONBA_PTR_TO_JSON(VerifyToken, verifyToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyPageUrl, verifyPageUrl_);
      DARABONBA_PTR_FROM_JSON(VerifyToken, verifyToken_);
    };
    DescribeVerifyTokenResponseBody() = default ;
    DescribeVerifyTokenResponseBody(const DescribeVerifyTokenResponseBody &) = default ;
    DescribeVerifyTokenResponseBody(DescribeVerifyTokenResponseBody &&) = default ;
    DescribeVerifyTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyTokenResponseBody() = default ;
    DescribeVerifyTokenResponseBody& operator=(const DescribeVerifyTokenResponseBody &) = default ;
    DescribeVerifyTokenResponseBody& operator=(DescribeVerifyTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossUploadToken_ != nullptr
        && this->requestId_ != nullptr && this->verifyPageUrl_ != nullptr && this->verifyToken_ != nullptr; };
    // ossUploadToken Field Functions 
    bool hasOssUploadToken() const { return this->ossUploadToken_ != nullptr;};
    void deleteOssUploadToken() { this->ossUploadToken_ = nullptr;};
    inline const DescribeVerifyTokenResponseBodyOssUploadToken & ossUploadToken() const { DARABONBA_PTR_GET_CONST(ossUploadToken_, DescribeVerifyTokenResponseBodyOssUploadToken) };
    inline DescribeVerifyTokenResponseBodyOssUploadToken ossUploadToken() { DARABONBA_PTR_GET(ossUploadToken_, DescribeVerifyTokenResponseBodyOssUploadToken) };
    inline DescribeVerifyTokenResponseBody& setOssUploadToken(const DescribeVerifyTokenResponseBodyOssUploadToken & ossUploadToken) { DARABONBA_PTR_SET_VALUE(ossUploadToken_, ossUploadToken) };
    inline DescribeVerifyTokenResponseBody& setOssUploadToken(DescribeVerifyTokenResponseBodyOssUploadToken && ossUploadToken) { DARABONBA_PTR_SET_RVALUE(ossUploadToken_, ossUploadToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyPageUrl Field Functions 
    bool hasVerifyPageUrl() const { return this->verifyPageUrl_ != nullptr;};
    void deleteVerifyPageUrl() { this->verifyPageUrl_ = nullptr;};
    inline string verifyPageUrl() const { DARABONBA_PTR_GET_DEFAULT(verifyPageUrl_, "") };
    inline DescribeVerifyTokenResponseBody& setVerifyPageUrl(string verifyPageUrl) { DARABONBA_PTR_SET_VALUE(verifyPageUrl_, verifyPageUrl) };


    // verifyToken Field Functions 
    bool hasVerifyToken() const { return this->verifyToken_ != nullptr;};
    void deleteVerifyToken() { this->verifyToken_ = nullptr;};
    inline string verifyToken() const { DARABONBA_PTR_GET_DEFAULT(verifyToken_, "") };
    inline DescribeVerifyTokenResponseBody& setVerifyToken(string verifyToken) { DARABONBA_PTR_SET_VALUE(verifyToken_, verifyToken) };


  protected:
    // OSS upload token information.
    std::shared_ptr<DescribeVerifyTokenResponseBodyOssUploadToken> ossUploadToken_ = nullptr;
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The entry link for the original H5 verification scheme, which has been discontinued and no longer supports new integrations. If you need to integrate an H5 verification scheme, it is recommended to use the [PC or mobile H5 web integration solution](https://help.aliyun.com/document_detail/173779.html) of financial-grade real-person authentication.
    std::shared_ptr<string> verifyPageUrl_ = nullptr;
    // The token for this verification, used to link various interfaces in the verification request, valid for 30 minutes.
    std::shared_ptr<string> verifyToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
