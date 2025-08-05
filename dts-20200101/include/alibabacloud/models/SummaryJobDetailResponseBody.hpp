// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SummaryJobDetailResponseBodyProgressSummaryDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SummaryJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SummaryJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ProgressSummaryDetails, progressSummaryDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SummaryJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ProgressSummaryDetails, progressSummaryDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SummaryJobDetailResponseBody() = default ;
    SummaryJobDetailResponseBody(const SummaryJobDetailResponseBody &) = default ;
    SummaryJobDetailResponseBody(SummaryJobDetailResponseBody &&) = default ;
    SummaryJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SummaryJobDetailResponseBody() = default ;
    SummaryJobDetailResponseBody& operator=(const SummaryJobDetailResponseBody &) = default ;
    SummaryJobDetailResponseBody& operator=(SummaryJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->jobId_ != nullptr && this->progressSummaryDetails_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SummaryJobDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SummaryJobDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SummaryJobDetailResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // progressSummaryDetails Field Functions 
    bool hasProgressSummaryDetails() const { return this->progressSummaryDetails_ != nullptr;};
    void deleteProgressSummaryDetails() { this->progressSummaryDetails_ = nullptr;};
    inline const vector<SummaryJobDetailResponseBodyProgressSummaryDetails> & progressSummaryDetails() const { DARABONBA_PTR_GET_CONST(progressSummaryDetails_, vector<SummaryJobDetailResponseBodyProgressSummaryDetails>) };
    inline vector<SummaryJobDetailResponseBodyProgressSummaryDetails> progressSummaryDetails() { DARABONBA_PTR_GET(progressSummaryDetails_, vector<SummaryJobDetailResponseBodyProgressSummaryDetails>) };
    inline SummaryJobDetailResponseBody& setProgressSummaryDetails(const vector<SummaryJobDetailResponseBodyProgressSummaryDetails> & progressSummaryDetails) { DARABONBA_PTR_SET_VALUE(progressSummaryDetails_, progressSummaryDetails) };
    inline SummaryJobDetailResponseBody& setProgressSummaryDetails(vector<SummaryJobDetailResponseBodyProgressSummaryDetails> && progressSummaryDetails) { DARABONBA_PTR_SET_RVALUE(progressSummaryDetails_, progressSummaryDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SummaryJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SummaryJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the data migration or data synchronization task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The returned information about the migrated or synchronized objects in arrays.
    // 
    // >  The arrays are in the following format: [{"key":"Function","state":5,"totalCount":22},{"key":"Procedure","state":5,"totalCount":26},{"key":"Table","state":0,"totalCount":68},{"key":"View","state":5,"totalCount":100}].
    std::shared_ptr<vector<SummaryJobDetailResponseBodyProgressSummaryDetails>> progressSummaryDetails_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
