// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobRunResponseBodyJobRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetJobRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobRun, jobRun_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobRun, jobRun_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetJobRunResponseBody() = default ;
    GetJobRunResponseBody(const GetJobRunResponseBody &) = default ;
    GetJobRunResponseBody(GetJobRunResponseBody &&) = default ;
    GetJobRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRunResponseBody() = default ;
    GetJobRunResponseBody& operator=(const GetJobRunResponseBody &) = default ;
    GetJobRunResponseBody& operator=(GetJobRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobRun_ != nullptr
        && this->requestId_ != nullptr; };
    // jobRun Field Functions 
    bool hasJobRun() const { return this->jobRun_ != nullptr;};
    void deleteJobRun() { this->jobRun_ = nullptr;};
    inline const GetJobRunResponseBodyJobRun & jobRun() const { DARABONBA_PTR_GET_CONST(jobRun_, GetJobRunResponseBodyJobRun) };
    inline GetJobRunResponseBodyJobRun jobRun() { DARABONBA_PTR_GET(jobRun_, GetJobRunResponseBodyJobRun) };
    inline GetJobRunResponseBody& setJobRun(const GetJobRunResponseBodyJobRun & jobRun) { DARABONBA_PTR_SET_VALUE(jobRun_, jobRun) };
    inline GetJobRunResponseBody& setJobRun(GetJobRunResponseBodyJobRun && jobRun) { DARABONBA_PTR_SET_RVALUE(jobRun_, jobRun) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the job.
    std::shared_ptr<GetJobRunResponseBodyJobRun> jobRun_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
