// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageSensitiveFileListResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageSensitiveFileListResponseBodySensitiveFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSensitiveFileListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageSensitiveFileListResponseBody() = default ;
    DescribeImageSensitiveFileListResponseBody(const DescribeImageSensitiveFileListResponseBody &) = default ;
    DescribeImageSensitiveFileListResponseBody(DescribeImageSensitiveFileListResponseBody &&) = default ;
    DescribeImageSensitiveFileListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileListResponseBody() = default ;
    DescribeImageSensitiveFileListResponseBody& operator=(const DescribeImageSensitiveFileListResponseBody &) = default ;
    DescribeImageSensitiveFileListResponseBody& operator=(DescribeImageSensitiveFileListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr && return this->sensitiveFileList_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageSensitiveFileListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeImageSensitiveFileListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageSensitiveFileListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageSensitiveFileListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageSensitiveFileListResponseBodyPageInfo) };
    inline DescribeImageSensitiveFileListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageSensitiveFileListResponseBodyPageInfo) };
    inline DescribeImageSensitiveFileListResponseBody& setPageInfo(const DescribeImageSensitiveFileListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageSensitiveFileListResponseBody& setPageInfo(DescribeImageSensitiveFileListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSensitiveFileListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveFileList Field Functions 
    bool hasSensitiveFileList() const { return this->sensitiveFileList_ != nullptr;};
    void deleteSensitiveFileList() { this->sensitiveFileList_ = nullptr;};
    inline const vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList> & sensitiveFileList() const { DARABONBA_PTR_GET_CONST(sensitiveFileList_, vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList>) };
    inline vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList> sensitiveFileList() { DARABONBA_PTR_GET(sensitiveFileList_, vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList>) };
    inline DescribeImageSensitiveFileListResponseBody& setSensitiveFileList(const vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList> & sensitiveFileList) { DARABONBA_PTR_SET_VALUE(sensitiveFileList_, sensitiveFileList) };
    inline DescribeImageSensitiveFileListResponseBody& setSensitiveFileList(vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList> && sensitiveFileList) { DARABONBA_PTR_SET_RVALUE(sensitiveFileList_, sensitiveFileList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageSensitiveFileListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageSensitiveFileListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information about the sensitive files.
    std::shared_ptr<vector<DescribeImageSensitiveFileListResponseBodySensitiveFileList>> sensitiveFileList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
