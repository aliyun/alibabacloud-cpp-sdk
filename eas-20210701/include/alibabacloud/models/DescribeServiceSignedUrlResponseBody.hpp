// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICESIGNEDURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICESIGNEDURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceSignedUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceSignedUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignedUrl, signedUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceSignedUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignedUrl, signedUrl_);
    };
    DescribeServiceSignedUrlResponseBody() = default ;
    DescribeServiceSignedUrlResponseBody(const DescribeServiceSignedUrlResponseBody &) = default ;
    DescribeServiceSignedUrlResponseBody(DescribeServiceSignedUrlResponseBody &&) = default ;
    DescribeServiceSignedUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceSignedUrlResponseBody() = default ;
    DescribeServiceSignedUrlResponseBody& operator=(const DescribeServiceSignedUrlResponseBody &) = default ;
    DescribeServiceSignedUrlResponseBody& operator=(DescribeServiceSignedUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->signedUrl_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceSignedUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signedUrl Field Functions 
    bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
    void deleteSignedUrl() { this->signedUrl_ = nullptr;};
    inline string signedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
    inline DescribeServiceSignedUrlResponseBody& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The service URL.
    std::shared_ptr<string> signedUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
