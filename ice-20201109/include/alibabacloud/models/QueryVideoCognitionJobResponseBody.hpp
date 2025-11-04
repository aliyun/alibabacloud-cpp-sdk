// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryVideoCognitionJobResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryVideoCognitionJobResponseBody() = default ;
    QueryVideoCognitionJobResponseBody(const QueryVideoCognitionJobResponseBody &) = default ;
    QueryVideoCognitionJobResponseBody(QueryVideoCognitionJobResponseBody &&) = default ;
    QueryVideoCognitionJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobResponseBody() = default ;
    QueryVideoCognitionJobResponseBody& operator=(const QueryVideoCognitionJobResponseBody &) = default ;
    QueryVideoCognitionJobResponseBody& operator=(QueryVideoCognitionJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobStatus_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->userData_ == nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline QueryVideoCognitionJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVideoCognitionJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const QueryVideoCognitionJobResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, QueryVideoCognitionJobResponseBodyResults) };
    inline QueryVideoCognitionJobResponseBodyResults results() { DARABONBA_PTR_GET(results_, QueryVideoCognitionJobResponseBodyResults) };
    inline QueryVideoCognitionJobResponseBody& setResults(const QueryVideoCognitionJobResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline QueryVideoCognitionJobResponseBody& setResults(QueryVideoCognitionJobResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryVideoCognitionJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The status of the task. Valid values:
    // 
    // *   **Success**
    // *   **Fail**
    // *   **Processing**
    // *   **Submitted**
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array of analysis result objects.
    std::shared_ptr<QueryVideoCognitionJobResponseBodyResults> results_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
