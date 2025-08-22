// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSTATUSDETAILVALUE_HPP_
#define ALIBABACLOUD_MODELS_JOBSTATUSDETAILVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class JobStatusDetailValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobStatusDetailValue& obj) { 
      DARABONBA_PTR_TO_JSON(jobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(timeStamps, timeStamps_);
    };
    friend void from_json(const Darabonba::Json& j, JobStatusDetailValue& obj) { 
      DARABONBA_PTR_FROM_JSON(jobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(timeStamps, timeStamps_);
    };
    JobStatusDetailValue() = default ;
    JobStatusDetailValue(const JobStatusDetailValue &) = default ;
    JobStatusDetailValue(JobStatusDetailValue &&) = default ;
    JobStatusDetailValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobStatusDetailValue() = default ;
    JobStatusDetailValue& operator=(const JobStatusDetailValue &) = default ;
    JobStatusDetailValue& operator=(JobStatusDetailValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobResult_ != nullptr
        && this->comment_ != nullptr && this->timeStamps_ != nullptr; };
    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline string jobResult() const { DARABONBA_PTR_GET_DEFAULT(jobResult_, "") };
    inline JobStatusDetailValue& setJobResult(string jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline JobStatusDetailValue& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // timeStamps Field Functions 
    bool hasTimeStamps() const { return this->timeStamps_ != nullptr;};
    void deleteTimeStamps() { this->timeStamps_ = nullptr;};
    inline string timeStamps() const { DARABONBA_PTR_GET_DEFAULT(timeStamps_, "") };
    inline JobStatusDetailValue& setTimeStamps(string timeStamps) { DARABONBA_PTR_SET_VALUE(timeStamps_, timeStamps) };


  protected:
    std::shared_ptr<string> jobResult_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> timeStamps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
