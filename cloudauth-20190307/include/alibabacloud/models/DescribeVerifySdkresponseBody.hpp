// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSDKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSDKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifySDKResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySDKResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdkUrl, sdkUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySDKResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdkUrl, sdkUrl_);
    };
    DescribeVerifySDKResponseBody() = default ;
    DescribeVerifySDKResponseBody(const DescribeVerifySDKResponseBody &) = default ;
    DescribeVerifySDKResponseBody(DescribeVerifySDKResponseBody &&) = default ;
    DescribeVerifySDKResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySDKResponseBody() = default ;
    DescribeVerifySDKResponseBody& operator=(const DescribeVerifySDKResponseBody &) = default ;
    DescribeVerifySDKResponseBody& operator=(DescribeVerifySDKResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sdkUrl_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifySDKResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdkUrl Field Functions 
    bool hasSdkUrl() const { return this->sdkUrl_ != nullptr;};
    void deleteSdkUrl() { this->sdkUrl_ = nullptr;};
    inline string sdkUrl() const { DARABONBA_PTR_GET_DEFAULT(sdkUrl_, "") };
    inline DescribeVerifySDKResponseBody& setSdkUrl(string sdkUrl) { DARABONBA_PTR_SET_VALUE(sdkUrl_, sdkUrl) };


  protected:
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The SDK download URL. When not empty, it indicates that the generation is complete.
    std::shared_ptr<string> sdkUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
