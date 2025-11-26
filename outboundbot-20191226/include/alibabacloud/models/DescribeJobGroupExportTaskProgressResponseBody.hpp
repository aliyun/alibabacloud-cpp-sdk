// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPEXPORTTASKPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPEXPORTTASKPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupExportTaskProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupExportTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FileHttpUrl, fileHttpUrl_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupExportTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FileHttpUrl, fileHttpUrl_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeJobGroupExportTaskProgressResponseBody() = default ;
    DescribeJobGroupExportTaskProgressResponseBody(const DescribeJobGroupExportTaskProgressResponseBody &) = default ;
    DescribeJobGroupExportTaskProgressResponseBody(DescribeJobGroupExportTaskProgressResponseBody &&) = default ;
    DescribeJobGroupExportTaskProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupExportTaskProgressResponseBody() = default ;
    DescribeJobGroupExportTaskProgressResponseBody& operator=(const DescribeJobGroupExportTaskProgressResponseBody &) = default ;
    DescribeJobGroupExportTaskProgressResponseBody& operator=(DescribeJobGroupExportTaskProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->fileHttpUrl_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->progress_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobGroupExportTaskProgressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // fileHttpUrl Field Functions 
    bool hasFileHttpUrl() const { return this->fileHttpUrl_ != nullptr;};
    void deleteFileHttpUrl() { this->fileHttpUrl_ = nullptr;};
    inline string fileHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(fileHttpUrl_, "") };
    inline DescribeJobGroupExportTaskProgressResponseBody& setFileHttpUrl(string fileHttpUrl) { DARABONBA_PTR_SET_VALUE(fileHttpUrl_, fileHttpUrl) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobGroupExportTaskProgressResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobGroupExportTaskProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline DescribeJobGroupExportTaskProgressResponseBody& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobGroupExportTaskProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobGroupExportTaskProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> fileHttpUrl_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<float> progress_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
