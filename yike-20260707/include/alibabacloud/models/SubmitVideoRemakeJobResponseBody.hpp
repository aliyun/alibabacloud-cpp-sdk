// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOREMAKEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOREMAKEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoRemakeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoRemakeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoRemakeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitVideoRemakeJobResponseBody() = default ;
    SubmitVideoRemakeJobResponseBody(const SubmitVideoRemakeJobResponseBody &) = default ;
    SubmitVideoRemakeJobResponseBody(SubmitVideoRemakeJobResponseBody &&) = default ;
    SubmitVideoRemakeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoRemakeJobResponseBody() = default ;
    SubmitVideoRemakeJobResponseBody& operator=(const SubmitVideoRemakeJobResponseBody &) = default ;
    SubmitVideoRemakeJobResponseBody& operator=(SubmitVideoRemakeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->jobId_ == nullptr && this->requestId_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SubmitVideoRemakeJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitVideoRemakeJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitVideoRemakeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code in the business response. This parameter is empty when the call is successful.
    shared_ptr<string> errorCode_ {};
    // The unified remake job ID. Use GetVideoRemakeJob to query the progress and outputs.
    shared_ptr<string> jobId_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
