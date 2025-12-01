// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBERRORCODERESPONSEBODYITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBERRORCODERESPONSEBODYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeJobErrorCodeResponseBodyItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobErrorCodeResponseBodyItem& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobState, jobState_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobErrorCodeResponseBodyItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobState, jobState_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    DescribeJobErrorCodeResponseBodyItem() = default ;
    DescribeJobErrorCodeResponseBodyItem(const DescribeJobErrorCodeResponseBodyItem &) = default ;
    DescribeJobErrorCodeResponseBodyItem(DescribeJobErrorCodeResponseBodyItem &&) = default ;
    DescribeJobErrorCodeResponseBodyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobErrorCodeResponseBodyItem() = default ;
    DescribeJobErrorCodeResponseBodyItem& operator=(const DescribeJobErrorCodeResponseBodyItem &) = default ;
    DescribeJobErrorCodeResponseBodyItem& operator=(DescribeJobErrorCodeResponseBodyItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->jobId_ == nullptr && return this->jobState_ == nullptr && return this->jobType_ == nullptr && return this->language_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobState Field Functions 
    bool hasJobState() const { return this->jobState_ != nullptr;};
    void deleteJobState() { this->jobState_ = nullptr;};
    inline string jobState() const { DARABONBA_PTR_GET_DEFAULT(jobState_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setJobState(string jobState) { DARABONBA_PTR_SET_VALUE(jobState_, jobState) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeJobErrorCodeResponseBodyItem& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The standard error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the full backup or restore task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> jobState_ = nullptr;
    // The internal ID of the DBS task type.
    std::shared_ptr<string> jobType_ = nullptr;
    // The language of the error message.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
