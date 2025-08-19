// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOssUploadTokenResponseBodyOssUploadToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssUploadTokenResponseBody() = default ;
    DescribeOssUploadTokenResponseBody(const DescribeOssUploadTokenResponseBody &) = default ;
    DescribeOssUploadTokenResponseBody(DescribeOssUploadTokenResponseBody &&) = default ;
    DescribeOssUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssUploadTokenResponseBody() = default ;
    DescribeOssUploadTokenResponseBody& operator=(const DescribeOssUploadTokenResponseBody &) = default ;
    DescribeOssUploadTokenResponseBody& operator=(DescribeOssUploadTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossUploadToken_ != nullptr
        && this->requestId_ != nullptr; };
    // ossUploadToken Field Functions 
    bool hasOssUploadToken() const { return this->ossUploadToken_ != nullptr;};
    void deleteOssUploadToken() { this->ossUploadToken_ = nullptr;};
    inline const DescribeOssUploadTokenResponseBodyOssUploadToken & ossUploadToken() const { DARABONBA_PTR_GET_CONST(ossUploadToken_, DescribeOssUploadTokenResponseBodyOssUploadToken) };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken ossUploadToken() { DARABONBA_PTR_GET(ossUploadToken_, DescribeOssUploadTokenResponseBodyOssUploadToken) };
    inline DescribeOssUploadTokenResponseBody& setOssUploadToken(const DescribeOssUploadTokenResponseBodyOssUploadToken & ossUploadToken) { DARABONBA_PTR_SET_VALUE(ossUploadToken_, ossUploadToken) };
    inline DescribeOssUploadTokenResponseBody& setOssUploadToken(DescribeOssUploadTokenResponseBodyOssUploadToken && ossUploadToken) { DARABONBA_PTR_SET_RVALUE(ossUploadToken_, ossUploadToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeOssUploadTokenResponseBodyOssUploadToken> ossUploadToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
