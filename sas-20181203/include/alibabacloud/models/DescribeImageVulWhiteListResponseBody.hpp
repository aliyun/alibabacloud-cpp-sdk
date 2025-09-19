// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageVulWhiteListResponseBodyImageVulWhitelist.hpp>
#include <alibabacloud/models/DescribeImageVulWhiteListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ImageVulWhitelist, imageVulWhitelist_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ImageVulWhitelist, imageVulWhitelist_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    DescribeImageVulWhiteListResponseBody() = default ;
    DescribeImageVulWhiteListResponseBody(const DescribeImageVulWhiteListResponseBody &) = default ;
    DescribeImageVulWhiteListResponseBody(DescribeImageVulWhiteListResponseBody &&) = default ;
    DescribeImageVulWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulWhiteListResponseBody() = default ;
    DescribeImageVulWhiteListResponseBody& operator=(const DescribeImageVulWhiteListResponseBody &) = default ;
    DescribeImageVulWhiteListResponseBody& operator=(DescribeImageVulWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->imageVulWhitelist_ != nullptr && this->message_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr && this->timeCost_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageVulWhiteListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeImageVulWhiteListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // imageVulWhitelist Field Functions 
    bool hasImageVulWhitelist() const { return this->imageVulWhitelist_ != nullptr;};
    void deleteImageVulWhitelist() { this->imageVulWhitelist_ = nullptr;};
    inline const vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist> & imageVulWhitelist() const { DARABONBA_PTR_GET_CONST(imageVulWhitelist_, vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist>) };
    inline vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist> imageVulWhitelist() { DARABONBA_PTR_GET(imageVulWhitelist_, vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist>) };
    inline DescribeImageVulWhiteListResponseBody& setImageVulWhitelist(const vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist> & imageVulWhitelist) { DARABONBA_PTR_SET_VALUE(imageVulWhitelist_, imageVulWhitelist) };
    inline DescribeImageVulWhiteListResponseBody& setImageVulWhitelist(vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist> && imageVulWhitelist) { DARABONBA_PTR_SET_RVALUE(imageVulWhitelist_, imageVulWhitelist) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageVulWhiteListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageVulWhiteListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageVulWhiteListResponseBodyPageInfo) };
    inline DescribeImageVulWhiteListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageVulWhiteListResponseBodyPageInfo) };
    inline DescribeImageVulWhiteListResponseBody& setPageInfo(const DescribeImageVulWhiteListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageVulWhiteListResponseBody& setPageInfo(DescribeImageVulWhiteListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageVulWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageVulWhiteListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline DescribeImageVulWhiteListResponseBody& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The status code returned. A value of **200** indicates that the request was successful. Other values indicate that the request failed. You can identify the cause of the failure based on the value of this parameter.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The information about the whitelist of image vulnerabilities.
    std::shared_ptr<vector<DescribeImageVulWhiteListResponseBodyImageVulWhitelist>> imageVulWhitelist_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageVulWhiteListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The amount of time that was consumed to process the request. Unit: milliseconds.
    std::shared_ptr<int64_t> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
