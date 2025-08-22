// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBSANITYCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBSANITYCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SanityCheckResultItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobSanityCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobSanityCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestID, requestID_);
      DARABONBA_PTR_TO_JSON(SanityCheckResult, sanityCheckResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobSanityCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestID, requestID_);
      DARABONBA_PTR_FROM_JSON(SanityCheckResult, sanityCheckResult_);
    };
    GetJobSanityCheckResultResponseBody() = default ;
    GetJobSanityCheckResultResponseBody(const GetJobSanityCheckResultResponseBody &) = default ;
    GetJobSanityCheckResultResponseBody(GetJobSanityCheckResultResponseBody &&) = default ;
    GetJobSanityCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobSanityCheckResultResponseBody() = default ;
    GetJobSanityCheckResultResponseBody& operator=(const GetJobSanityCheckResultResponseBody &) = default ;
    GetJobSanityCheckResultResponseBody& operator=(GetJobSanityCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->requestID_ != nullptr && this->sanityCheckResult_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobSanityCheckResultResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestID Field Functions 
    bool hasRequestID() const { return this->requestID_ != nullptr;};
    void deleteRequestID() { this->requestID_ = nullptr;};
    inline string requestID() const { DARABONBA_PTR_GET_DEFAULT(requestID_, "") };
    inline GetJobSanityCheckResultResponseBody& setRequestID(string requestID) { DARABONBA_PTR_SET_VALUE(requestID_, requestID) };


    // sanityCheckResult Field Functions 
    bool hasSanityCheckResult() const { return this->sanityCheckResult_ != nullptr;};
    void deleteSanityCheckResult() { this->sanityCheckResult_ = nullptr;};
    inline const vector<SanityCheckResultItem> & sanityCheckResult() const { DARABONBA_PTR_GET_CONST(sanityCheckResult_, vector<SanityCheckResultItem>) };
    inline vector<SanityCheckResultItem> sanityCheckResult() { DARABONBA_PTR_GET(sanityCheckResult_, vector<SanityCheckResultItem>) };
    inline GetJobSanityCheckResultResponseBody& setSanityCheckResult(const vector<SanityCheckResultItem> & sanityCheckResult) { DARABONBA_PTR_SET_VALUE(sanityCheckResult_, sanityCheckResult) };
    inline GetJobSanityCheckResultResponseBody& setSanityCheckResult(vector<SanityCheckResultItem> && sanityCheckResult) { DARABONBA_PTR_SET_RVALUE(sanityCheckResult_, sanityCheckResult) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestID_ = nullptr;
    // The job sanity check result.
    std::shared_ptr<vector<SanityCheckResultItem>> sanityCheckResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
