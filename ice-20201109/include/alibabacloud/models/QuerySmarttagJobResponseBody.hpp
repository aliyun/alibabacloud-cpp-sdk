// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySmarttagJobResponseBodyResults.hpp>
#include <alibabacloud/models/QuerySmarttagJobResponseBodyUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Usages, usages_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Usages, usages_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QuerySmarttagJobResponseBody() = default ;
    QuerySmarttagJobResponseBody(const QuerySmarttagJobResponseBody &) = default ;
    QuerySmarttagJobResponseBody(QuerySmarttagJobResponseBody &&) = default ;
    QuerySmarttagJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBody() = default ;
    QuerySmarttagJobResponseBody& operator=(const QuerySmarttagJobResponseBody &) = default ;
    QuerySmarttagJobResponseBody& operator=(QuerySmarttagJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobStatus_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->usages_ == nullptr && return this->userData_ == nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline QuerySmarttagJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmarttagJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const QuerySmarttagJobResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, QuerySmarttagJobResponseBodyResults) };
    inline QuerySmarttagJobResponseBodyResults results() { DARABONBA_PTR_GET(results_, QuerySmarttagJobResponseBodyResults) };
    inline QuerySmarttagJobResponseBody& setResults(const QuerySmarttagJobResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline QuerySmarttagJobResponseBody& setResults(QuerySmarttagJobResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const QuerySmarttagJobResponseBodyUsages & usages() const { DARABONBA_PTR_GET_CONST(usages_, QuerySmarttagJobResponseBodyUsages) };
    inline QuerySmarttagJobResponseBodyUsages usages() { DARABONBA_PTR_GET(usages_, QuerySmarttagJobResponseBodyUsages) };
    inline QuerySmarttagJobResponseBody& setUsages(const QuerySmarttagJobResponseBodyUsages & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline QuerySmarttagJobResponseBody& setUsages(QuerySmarttagJobResponseBodyUsages && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QuerySmarttagJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The status of the job. Valid values:
    // 
    // *   **Success**: The job was successful.
    // *   **Fail**: The job failed.
    // *   **Processing**: The job is in progress.
    // *   **Submitted**: The job is submitted and waiting to be processed.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The analysis results of the smart tagging job. The value is an array.
    std::shared_ptr<QuerySmarttagJobResponseBodyResults> results_ = nullptr;
    std::shared_ptr<QuerySmarttagJobResponseBodyUsages> usages_ = nullptr;
    // The content of callback messages that are sent to Simple Message Queue (SMQ) when the information of the smart tagging job changes. For more information about the parameters contained in the callback message, see the "Callback parameters" section of this topic.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
