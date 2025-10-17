// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDocParserJobResultResponseBodyContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDocParserJobResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocParserJobResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContentList, contentList_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocParserJobResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDocParserJobResultResponseBody() = default ;
    DescribeDocParserJobResultResponseBody(const DescribeDocParserJobResultResponseBody &) = default ;
    DescribeDocParserJobResultResponseBody(DescribeDocParserJobResultResponseBody &&) = default ;
    DescribeDocParserJobResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocParserJobResultResponseBody() = default ;
    DescribeDocParserJobResultResponseBody& operator=(const DescribeDocParserJobResultResponseBody &) = default ;
    DescribeDocParserJobResultResponseBody& operator=(DescribeDocParserJobResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentList_ == nullptr
        && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->fileUrl_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // contentList Field Functions 
    bool hasContentList() const { return this->contentList_ != nullptr;};
    void deleteContentList() { this->contentList_ = nullptr;};
    inline const vector<DescribeDocParserJobResultResponseBodyContentList> & contentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<DescribeDocParserJobResultResponseBodyContentList>) };
    inline vector<DescribeDocParserJobResultResponseBodyContentList> contentList() { DARABONBA_PTR_GET(contentList_, vector<DescribeDocParserJobResultResponseBodyContentList>) };
    inline DescribeDocParserJobResultResponseBody& setContentList(const vector<DescribeDocParserJobResultResponseBodyContentList> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
    inline DescribeDocParserJobResultResponseBody& setContentList(vector<DescribeDocParserJobResultResponseBodyContentList> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDocParserJobResultResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDocParserJobResultResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDocParserJobResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDocParserJobResultResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline DescribeDocParserJobResultResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDocParserJobResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocParserJobResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDocParserJobResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<DescribeDocParserJobResultResponseBodyContentList>> contentList_ = nullptr;
    std::shared_ptr<string> dynamicCode_ = nullptr;
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
