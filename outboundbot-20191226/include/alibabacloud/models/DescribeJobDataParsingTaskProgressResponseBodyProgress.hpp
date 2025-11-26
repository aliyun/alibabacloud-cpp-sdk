// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSRESPONSEBODYPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSRESPONSEBODYPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobDataParsingTaskProgressResponseBodyProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobDataParsingTaskProgressResponseBodyProgress& obj) { 
      DARABONBA_PTR_TO_JSON(FailErrorCode, failErrorCode_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(FeedbackUrl, feedbackUrl_);
      DARABONBA_PTR_TO_JSON(HandledJobCount, handledJobCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalJobCount, totalJobCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobDataParsingTaskProgressResponseBodyProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(FailErrorCode, failErrorCode_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(FeedbackUrl, feedbackUrl_);
      DARABONBA_PTR_FROM_JSON(HandledJobCount, handledJobCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalJobCount, totalJobCount_);
    };
    DescribeJobDataParsingTaskProgressResponseBodyProgress() = default ;
    DescribeJobDataParsingTaskProgressResponseBodyProgress(const DescribeJobDataParsingTaskProgressResponseBodyProgress &) = default ;
    DescribeJobDataParsingTaskProgressResponseBodyProgress(DescribeJobDataParsingTaskProgressResponseBodyProgress &&) = default ;
    DescribeJobDataParsingTaskProgressResponseBodyProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobDataParsingTaskProgressResponseBodyProgress() = default ;
    DescribeJobDataParsingTaskProgressResponseBodyProgress& operator=(const DescribeJobDataParsingTaskProgressResponseBodyProgress &) = default ;
    DescribeJobDataParsingTaskProgressResponseBodyProgress& operator=(DescribeJobDataParsingTaskProgressResponseBodyProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failErrorCode_ == nullptr
        && return this->failReason_ == nullptr && return this->feedbackUrl_ == nullptr && return this->handledJobCount_ == nullptr && return this->status_ == nullptr && return this->totalJobCount_ == nullptr; };
    // failErrorCode Field Functions 
    bool hasFailErrorCode() const { return this->failErrorCode_ != nullptr;};
    void deleteFailErrorCode() { this->failErrorCode_ = nullptr;};
    inline string failErrorCode() const { DARABONBA_PTR_GET_DEFAULT(failErrorCode_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setFailErrorCode(string failErrorCode) { DARABONBA_PTR_SET_VALUE(failErrorCode_, failErrorCode) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // feedbackUrl Field Functions 
    bool hasFeedbackUrl() const { return this->feedbackUrl_ != nullptr;};
    void deleteFeedbackUrl() { this->feedbackUrl_ = nullptr;};
    inline string feedbackUrl() const { DARABONBA_PTR_GET_DEFAULT(feedbackUrl_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setFeedbackUrl(string feedbackUrl) { DARABONBA_PTR_SET_VALUE(feedbackUrl_, feedbackUrl) };


    // handledJobCount Field Functions 
    bool hasHandledJobCount() const { return this->handledJobCount_ != nullptr;};
    void deleteHandledJobCount() { this->handledJobCount_ = nullptr;};
    inline int32_t handledJobCount() const { DARABONBA_PTR_GET_DEFAULT(handledJobCount_, 0) };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setHandledJobCount(int32_t handledJobCount) { DARABONBA_PTR_SET_VALUE(handledJobCount_, handledJobCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalJobCount Field Functions 
    bool hasTotalJobCount() const { return this->totalJobCount_ != nullptr;};
    void deleteTotalJobCount() { this->totalJobCount_ = nullptr;};
    inline int32_t totalJobCount() const { DARABONBA_PTR_GET_DEFAULT(totalJobCount_, 0) };
    inline DescribeJobDataParsingTaskProgressResponseBodyProgress& setTotalJobCount(int32_t totalJobCount) { DARABONBA_PTR_SET_VALUE(totalJobCount_, totalJobCount) };


  protected:
    std::shared_ptr<string> failErrorCode_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> feedbackUrl_ = nullptr;
    std::shared_ptr<int32_t> handledJobCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalJobCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
