// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // jobInfo Field Functions 
    bool hasJobInfo() const { return this->jobInfo_ != nullptr;};
    void deleteJobInfo() { this->jobInfo_ = nullptr;};
    inline const GetJobResponseBodyJobInfo & jobInfo() const { DARABONBA_PTR_GET_CONST(jobInfo_, GetJobResponseBodyJobInfo) };
    inline GetJobResponseBodyJobInfo jobInfo() { DARABONBA_PTR_GET(jobInfo_, GetJobResponseBodyJobInfo) };
    inline GetJobResponseBody& setJobInfo(const GetJobResponseBodyJobInfo & jobInfo) { DARABONBA_PTR_SET_VALUE(jobInfo_, jobInfo) };
    inline GetJobResponseBody& setJobInfo(GetJobResponseBodyJobInfo && jobInfo) { DARABONBA_PTR_SET_RVALUE(jobInfo_, jobInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job details.
    std::shared_ptr<GetJobResponseBodyJobInfo> jobInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
