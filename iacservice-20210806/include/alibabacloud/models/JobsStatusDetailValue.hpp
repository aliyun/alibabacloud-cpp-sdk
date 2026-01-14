// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSSTATUSDETAILVALUE_HPP_
#define ALIBABACLOUD_MODELS_JOBSSTATUSDETAILVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class JobsStatusDetailValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobsStatusDetailValue& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(jobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(timeStamps, timeStamps_);
    };
    friend void from_json(const Darabonba::Json& j, JobsStatusDetailValue& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(jobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(timeStamps, timeStamps_);
    };
    JobsStatusDetailValue() = default ;
    JobsStatusDetailValue(const JobsStatusDetailValue &) = default ;
    JobsStatusDetailValue(JobsStatusDetailValue &&) = default ;
    JobsStatusDetailValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobsStatusDetailValue() = default ;
    JobsStatusDetailValue& operator=(const JobsStatusDetailValue &) = default ;
    JobsStatusDetailValue& operator=(JobsStatusDetailValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->jobResult_ == nullptr && this->timeStamps_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline JobsStatusDetailValue& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline string getJobResult() const { DARABONBA_PTR_GET_DEFAULT(jobResult_, "") };
    inline JobsStatusDetailValue& setJobResult(string jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };


    // timeStamps Field Functions 
    bool hasTimeStamps() const { return this->timeStamps_ != nullptr;};
    void deleteTimeStamps() { this->timeStamps_ = nullptr;};
    inline string getTimeStamps() const { DARABONBA_PTR_GET_DEFAULT(timeStamps_, "") };
    inline JobsStatusDetailValue& setTimeStamps(string timeStamps) { DARABONBA_PTR_SET_VALUE(timeStamps_, timeStamps) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<string> jobResult_ {};
    shared_ptr<string> timeStamps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
