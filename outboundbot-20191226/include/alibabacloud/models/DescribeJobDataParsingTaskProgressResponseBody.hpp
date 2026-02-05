// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobDataParsingTaskProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobDataParsingTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobDataParsingTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeJobDataParsingTaskProgressResponseBody() = default ;
    DescribeJobDataParsingTaskProgressResponseBody(const DescribeJobDataParsingTaskProgressResponseBody &) = default ;
    DescribeJobDataParsingTaskProgressResponseBody(DescribeJobDataParsingTaskProgressResponseBody &&) = default ;
    DescribeJobDataParsingTaskProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobDataParsingTaskProgressResponseBody() = default ;
    DescribeJobDataParsingTaskProgressResponseBody& operator=(const DescribeJobDataParsingTaskProgressResponseBody &) = default ;
    DescribeJobDataParsingTaskProgressResponseBody& operator=(DescribeJobDataParsingTaskProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Progress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Progress& obj) { 
        DARABONBA_PTR_TO_JSON(FailErrorCode, failErrorCode_);
        DARABONBA_PTR_TO_JSON(FailReason, failReason_);
        DARABONBA_PTR_TO_JSON(FeedbackUrl, feedbackUrl_);
        DARABONBA_PTR_TO_JSON(HandledJobCount, handledJobCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalJobCount, totalJobCount_);
      };
      friend void from_json(const Darabonba::Json& j, Progress& obj) { 
        DARABONBA_PTR_FROM_JSON(FailErrorCode, failErrorCode_);
        DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
        DARABONBA_PTR_FROM_JSON(FeedbackUrl, feedbackUrl_);
        DARABONBA_PTR_FROM_JSON(HandledJobCount, handledJobCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalJobCount, totalJobCount_);
      };
      Progress() = default ;
      Progress(const Progress &) = default ;
      Progress(Progress &&) = default ;
      Progress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Progress() = default ;
      Progress& operator=(const Progress &) = default ;
      Progress& operator=(Progress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failErrorCode_ == nullptr
        && this->failReason_ == nullptr && this->feedbackUrl_ == nullptr && this->handledJobCount_ == nullptr && this->status_ == nullptr && this->totalJobCount_ == nullptr; };
      // failErrorCode Field Functions 
      bool hasFailErrorCode() const { return this->failErrorCode_ != nullptr;};
      void deleteFailErrorCode() { this->failErrorCode_ = nullptr;};
      inline string getFailErrorCode() const { DARABONBA_PTR_GET_DEFAULT(failErrorCode_, "") };
      inline Progress& setFailErrorCode(string failErrorCode) { DARABONBA_PTR_SET_VALUE(failErrorCode_, failErrorCode) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline Progress& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


      // feedbackUrl Field Functions 
      bool hasFeedbackUrl() const { return this->feedbackUrl_ != nullptr;};
      void deleteFeedbackUrl() { this->feedbackUrl_ = nullptr;};
      inline string getFeedbackUrl() const { DARABONBA_PTR_GET_DEFAULT(feedbackUrl_, "") };
      inline Progress& setFeedbackUrl(string feedbackUrl) { DARABONBA_PTR_SET_VALUE(feedbackUrl_, feedbackUrl) };


      // handledJobCount Field Functions 
      bool hasHandledJobCount() const { return this->handledJobCount_ != nullptr;};
      void deleteHandledJobCount() { this->handledJobCount_ = nullptr;};
      inline int32_t getHandledJobCount() const { DARABONBA_PTR_GET_DEFAULT(handledJobCount_, 0) };
      inline Progress& setHandledJobCount(int32_t handledJobCount) { DARABONBA_PTR_SET_VALUE(handledJobCount_, handledJobCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Progress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalJobCount Field Functions 
      bool hasTotalJobCount() const { return this->totalJobCount_ != nullptr;};
      void deleteTotalJobCount() { this->totalJobCount_ = nullptr;};
      inline int32_t getTotalJobCount() const { DARABONBA_PTR_GET_DEFAULT(totalJobCount_, 0) };
      inline Progress& setTotalJobCount(int32_t totalJobCount) { DARABONBA_PTR_SET_VALUE(totalJobCount_, totalJobCount) };


    protected:
      shared_ptr<string> failErrorCode_ {};
      shared_ptr<string> failReason_ {};
      shared_ptr<string> feedbackUrl_ {};
      shared_ptr<int32_t> handledJobCount_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> totalJobCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->progress_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobDataParsingTaskProgressResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const DescribeJobDataParsingTaskProgressResponseBody::Progress & getProgress() const { DARABONBA_PTR_GET_CONST(progress_, DescribeJobDataParsingTaskProgressResponseBody::Progress) };
    inline DescribeJobDataParsingTaskProgressResponseBody::Progress getProgress() { DARABONBA_PTR_GET(progress_, DescribeJobDataParsingTaskProgressResponseBody::Progress) };
    inline DescribeJobDataParsingTaskProgressResponseBody& setProgress(const DescribeJobDataParsingTaskProgressResponseBody::Progress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline DescribeJobDataParsingTaskProgressResponseBody& setProgress(DescribeJobDataParsingTaskProgressResponseBody::Progress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobDataParsingTaskProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<DescribeJobDataParsingTaskProgressResponseBody::Progress> progress_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
