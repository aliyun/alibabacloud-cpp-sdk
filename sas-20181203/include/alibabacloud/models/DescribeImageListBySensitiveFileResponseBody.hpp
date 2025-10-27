// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageListBySensitiveFileResponseBodyImageInfos.hpp>
#include <alibabacloud/models/DescribeImageListBySensitiveFileResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListBySensitiveFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListBySensitiveFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListBySensitiveFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageListBySensitiveFileResponseBody() = default ;
    DescribeImageListBySensitiveFileResponseBody(const DescribeImageListBySensitiveFileResponseBody &) = default ;
    DescribeImageListBySensitiveFileResponseBody(DescribeImageListBySensitiveFileResponseBody &&) = default ;
    DescribeImageListBySensitiveFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListBySensitiveFileResponseBody() = default ;
    DescribeImageListBySensitiveFileResponseBody& operator=(const DescribeImageListBySensitiveFileResponseBody &) = default ;
    DescribeImageListBySensitiveFileResponseBody& operator=(DescribeImageListBySensitiveFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->imageInfos_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeImageListBySensitiveFileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageListBySensitiveFileResponseBodyImageInfos> & imageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageListBySensitiveFileResponseBodyImageInfos>) };
    inline vector<DescribeImageListBySensitiveFileResponseBodyImageInfos> imageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageListBySensitiveFileResponseBodyImageInfos>) };
    inline DescribeImageListBySensitiveFileResponseBody& setImageInfos(const vector<DescribeImageListBySensitiveFileResponseBodyImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageListBySensitiveFileResponseBody& setImageInfos(vector<DescribeImageListBySensitiveFileResponseBodyImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageListBySensitiveFileResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageListBySensitiveFileResponseBodyPageInfo) };
    inline DescribeImageListBySensitiveFileResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageListBySensitiveFileResponseBodyPageInfo) };
    inline DescribeImageListBySensitiveFileResponseBody& setPageInfo(const DescribeImageListBySensitiveFileResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageListBySensitiveFileResponseBody& setPageInfo(DescribeImageListBySensitiveFileResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageListBySensitiveFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The information about the images.
    std::shared_ptr<vector<DescribeImageListBySensitiveFileResponseBodyImageInfos>> imageInfos_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageListBySensitiveFileResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // - **true**: The request was successful.
    // - **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
